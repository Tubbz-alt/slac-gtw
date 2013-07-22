<?php
/**
 * @file
 * Code for the mailchimp dc module
 */
 
/** 
 * Configuration form callback
 */
function mailchimp_dc_configuration_form($form, &$form_state, $config = array()) {
    
  module_load_include('inc', 'mailchimp_campaign', 'mailchimp_campaign.admin');
  
  $form['label'] = array(
    '#type' => 'textfield',
    '#title' => t('Name'),
    '#description' => t('Give this recurring campaign a name: i.e. Weekly Digest email'),
    '#required' => TRUE,
    '#default_value' => (!empty($config)) ? $config['label'] : '',
  );
  
 $form['name'] = array(
    '#type' => 'machine_name',
    '#maxlength' => 64,
    '#machine_name' => array(
      'exists' => '_mailchimp_dc_machine_name_check',
      'source' => array('label'),
    ),
   '#default_value' => (!empty($config)) ? $config['name'] : '',
   '#disabled' => (!empty($config)) ? TRUE : FALSE,
  );
  
  $form['schedule'] = array(
    '#type' => 'fieldset', 
    '#title' => t('Scheduling settings'), 
    '#collapsible' => TRUE, 
    '#collapsed' => FALSE,
  );
  
  $form['schedule']['schedule_type'] = array(
    '#type' => 'select',
    '#title' => t('Select the scheduling options for this recurring campaign'),
    '#description' => t('The scheduled email will be sent out at the first Drupal cron run of the day'),
    '#required' => TRUE,
    '#options' => array(
      'daily' => t('Daily'),
      'weekly' => t('Weekly'),
      'monthly' => t('Monthly'),
    ),
    '#ajax' => array(
      'callback' => 'mailchimp_dc_configuration_ajax_callback',
      'wrapper' => 'schedule_type_settings',
     ),
     '#default_value' => (!empty($config)) ? $config['schedule_type'] : '',
  );  
  
  $form['schedule']['schedule_type_setting'] = array(
    '#type' => 'select',
    '#options' => array('' => t('--Select--')),
    '#prefix' => '<div id="schedule_type_settings">',
    '#suffix' => '</div>',
  );
    
  // depends on the type of schedule, we can also have some additional options
  if (!empty($form_state['values']['schedule_type']) || !empty($config)) {  
    if (!empty($form_state['values']['schedule_type'])) {
      $schedule_type = $form_state['values']['schedule_type'];
    }
    else {
      $schedule_type = $config['schedule_type'];
    }
  
    switch ($schedule_type) {
      case 'weekly':
        $title = t('Select day of the week');
        $options = array(
          'Mon' => t('Monday'),
          'Tue' => t('Tuesday'),
          'Wed' => t('Wednesday'),
          'Thu' => t('Thursday'),
          'Fri' => t('Friday'),
          'Sat' => t('Saturday'),
          'Sun' => t('Sunday'),
        );
        $description = t('Please select the day of the week the weekly mail should be generated (This cannot be changed once saved)');
      break;
      case 'monthly':
        $title = t('Select day of the month');
        $options = array(
          1 => t('First day of the month'),
          15 => t('15th of the month'),
        );
        $description = t('Please select the day of the month the monthly mail should be generated (This cannot be changed once saved)');
      break;
      default:
        $options = array(
          '' => t('--Please select--'),
        );
        $title = '';
        $description = '';
      break;  
    }    
    $form['schedule']['schedule_type_setting']['#title'] = $title;
    $form['schedule']['schedule_type_setting']['#options'] = $options;
    $form['schedule']['schedule_type_setting']['#description'] = $description;
    $form['schedule']['schedule_type_setting']['#disabled'] = (!empty($config)) ? TRUE : FALSE;
    $form['schedule']['schedule_type_setting']['#default_value'] = (!empty($config)) ? $config['schedule_type_setting'] : '';
  }
    
  $form['email'] = array(
    '#type' => 'fieldset', 
    '#title' => t('Email settings'), 
    '#collapsible' => TRUE, 
    '#collapsed' => FALSE,
  );
    
  $form['email']['list'] = array(
    '#type' => 'select',
    '#title' => t('List to use for this recurring campaign'),
    '#options' => _mailchimp_campaign_build_option_list(mailchimp_get_lists()),
    '#default_value' => (!empty($config)) ? $config['list'] : '',
    '#required' => TRUE,
  );
  
  $form['email']['template'] = array(
    '#type' => 'select',
    '#title' => t('Template to use for this recurring campaign'),
    '#options' => _mailchimp_campaign_build_option_list(mailchimp_campaign_get_templates()),
    '#default_value' => (!empty($config)) ? $config['template'] : '',
  );
  
  $form['email']['content'] = array(
    '#type' => 'select',
    '#title' => t('Content template'),
    '#description' => t('Content templates are dynamic contents declared through @hook', array('@hook' => 'hook_mailchimp_dc_content')),
    '#options' => _mailchimp_dc_content_options(),
    '#default_value' => (!empty($config)) ? $config['content'] : '',
    '#required' => FALSE,
  );

  $form['email']['from_mail'] = array(
    '#type' => 'textfield',
    '#title' => t('From email'),
    '#default_value' => (!empty($config)) ? $config['from_mail'] : '',
  );
  
  $form['email']['from_name'] = array(
    '#type' => 'textfield',
    '#title' => t('From name'),
    '#default_value' => (!empty($config)) ? $config['from_name'] : '',
  );
  
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
  );
  
  return $form;
}

/**
 * Form validation callback
 */ 
function mailchimp_dc_configuration_form_validate($form, &$form_state) {
  // verify that the content template called through the hook doesn't declare any region this template doesn't have
  // 1. get current template regions    
  // compare the MC template regions with the regions declated in the hook implementation,
  // if hook implementation has regions not in MC template, we throw an error
  $values = $form_state['values'];
  $mc_template = mailchimp_campaign_get_templates($values['template']);
  if (!empty($mc_template)) {
    $template_sections = $mc_template['info']['sections'];
    // get all hook implementations
    $content_templates = _mailchimp_dc_content_options(TRUE);
    if (array_key_exists($values['content'], $content_templates)) {
      $content_template_regions = array_keys($content_templates[$values['content']]['content']);
      // strip out the html_{region_name}
      foreach ($content_template_regions as $region) {
        $regions[] = substr($region, strpos($region, '_') + 1);  
      }
      $diff = array_diff($regions, $template_sections);
      if (!empty($diff)) {
        form_set_error('content', t('The following regions: %regions do not exist in %mc_template from the content template selected.', array('%regions' => implode(',', $diff), '%mc_template' => $mc_template['name'])));
      }    
    }
  }
}

/**
 * Form submission callback
 */
function mailchimp_dc_configuration_form_submit($form, &$form_state) {
  module_load_include('inc', 'mailchimp_dc', 'mailchimp_dc.database');
  
  $record = $form_state['values'];
  $record['created'] = REQUEST_TIME;
  unset($record['submit'], $record['form_build_id'], $record['form_token'], $record['form_id'], $record['op']);
  mailchimp_dc_config_save($record);
  
  $form_state['redirect'] = 'admin/config/services/mailchimp/mcdc';
  
  drupal_set_message(t('Configuration has been saved'));
}

function mailchimp_dc_configuration_ajax_callback($form, $form_state) {
  return $form['schedule']['schedule_type_setting'];
}

/**
 * Delete form
 */
function mailchimp_dc_configuration_delete($form, &$form_state, $config) {

  $form['name'] = array(
    '#type' => 'value',
    '#value' => $config['name'],
  );

  $question = t('Are you sure you want to delete %label?', array('%label' => $config['label']));
  $path = 'admin/config/services/mailchimp/mcdc';
  $yes = t('Delete');
    
  return confirm_form($form, $question, $path, NULL, $yes, NULL, 'mailchimp_dc_delete');
}

/**
 * Delete submission handler
 */
function mailchimp_dc_configuration_delete_submit($form, &$form_state) {
  
  mailchimp_dc_config_delete($form_state['values']['name']);

  $form_state['redirect'] = 'admin/config/services/mailchimp/mcdc';
  drupal_set_message(t('Recurring campaign has been deleted.'));  
}

function _mailchimp_dc_machine_name_check(){}