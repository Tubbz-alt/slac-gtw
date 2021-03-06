<?php
/**
 * @file
 * ct_access_information.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ct_access_information_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_8ae96847-f0c2-47e5-8809-9cffcc9a003a';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -24;
  $handler->conf = array(
    'title' => 'Access Information',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'access_information' => 'access_information',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'two_col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'staffresourcesone' => NULL,
      'rowone' => NULL,
      'rowtwo' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ae3476f0-b269-4ce6-bc60-9605390ba390';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_8ae96847-f0c2-47e5-8809-9cffcc9a003a';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-7854f869-b990-40d5-bbde-e350599a3ec2';
  $pane->panel = 'left';
  $pane->type = 'slac_ip_panes_access_notice_link';
  $pane->subtype = 'slac_ip_panes_access_notice_link';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7854f869-b990-40d5-bbde-e350599a3ec2';
  $display->content['new-7854f869-b990-40d5-bbde-e350599a3ec2'] = $pane;
  $display->panels['left'][0] = 'new-7854f869-b990-40d5-bbde-e350599a3ec2';
  $pane = new stdClass();
  $pane->pid = 'new-b55e0efb-f0ec-434f-b6b7-0a5318d6bb96';
  $pane->panel = 'left';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'markup' => 'h1',
    'id' => '',
    'class' => '',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'b55e0efb-f0ec-434f-b6b7-0a5318d6bb96';
  $display->content['new-b55e0efb-f0ec-434f-b6b7-0a5318d6bb96'] = $pane;
  $display->panels['left'][1] = 'new-b55e0efb-f0ec-434f-b6b7-0a5318d6bb96';
  $pane = new stdClass();
  $pane->pid = 'new-aee90b4c-7be3-40e0-9a4b-aaf2b5e2089c';
  $pane->panel = 'left';
  $pane->type = 'slac_ip_panes_add_calendar';
  $pane->subtype = 'slac_ip_panes_add_calendar';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'aee90b4c-7be3-40e0-9a4b-aaf2b5e2089c';
  $display->content['new-aee90b4c-7be3-40e0-9a4b-aaf2b5e2089c'] = $pane;
  $display->panels['left'][2] = 'new-aee90b4c-7be3-40e0-9a4b-aaf2b5e2089c';
  $pane = new stdClass();
  $pane->pid = 'new-4f8acf74-36af-4808-ad21-22a45b1db07a';
  $pane->panel = 'left';
  $pane->type = 'slac_ip_panes_email';
  $pane->subtype = 'slac_ip_panes_email';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '4f8acf74-36af-4808-ad21-22a45b1db07a';
  $display->content['new-4f8acf74-36af-4808-ad21-22a45b1db07a'] = $pane;
  $display->panels['left'][3] = 'new-4f8acf74-36af-4808-ad21-22a45b1db07a';
  $pane = new stdClass();
  $pane->pid = 'new-974093cb-e49a-4a03-a827-1287f114ec82';
  $pane->panel = 'left';
  $pane->type = 'slac_ip_panes_print';
  $pane->subtype = 'slac_ip_panes_print';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '974093cb-e49a-4a03-a827-1287f114ec82';
  $display->content['new-974093cb-e49a-4a03-a827-1287f114ec82'] = $pane;
  $display->panels['left'][4] = 'new-974093cb-e49a-4a03-a827-1287f114ec82';
  $pane = new stdClass();
  $pane->pid = 'new-9ae49661-7aed-4606-aafd-c0ed5e019398';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_e_date';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'slac_event_date_detail_formatter',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'key' => 'value',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Start',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '9ae49661-7aed-4606-aafd-c0ed5e019398';
  $display->content['new-9ae49661-7aed-4606-aafd-c0ed5e019398'] = $pane;
  $display->panels['left'][5] = 'new-9ae49661-7aed-4606-aafd-c0ed5e019398';
  $pane = new stdClass();
  $pane->pid = 'new-8951c0b4-7b0e-4124-80f5-735ed3a910d3';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_e_date';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'slac_event_date_detail_formatter',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'key' => 'value2',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'End',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '8951c0b4-7b0e-4124-80f5-735ed3a910d3';
  $display->content['new-8951c0b4-7b0e-4124-80f5-735ed3a910d3'] = $pane;
  $display->panels['left'][6] = 'new-8951c0b4-7b0e-4124-80f5-735ed3a910d3';
  $pane = new stdClass();
  $pane->pid = 'new-0895acc9-cfca-41cc-9cde-31d9e164b38f';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_shared_location';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_plain',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Location',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '0895acc9-cfca-41cc-9cde-31d9e164b38f';
  $display->content['new-0895acc9-cfca-41cc-9cde-31d9e164b38f'] = $pane;
  $display->panels['left'][7] = 'new-0895acc9-cfca-41cc-9cde-31d9e164b38f';
  $pane = new stdClass();
  $pane->pid = 'new-6fb84e3d-ad84-44ca-ac93-1e1139f8cc46';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '6fb84e3d-ad84-44ca-ac93-1e1139f8cc46';
  $display->content['new-6fb84e3d-ad84-44ca-ac93-1e1139f8cc46'] = $pane;
  $display->panels['left'][8] = 'new-6fb84e3d-ad84-44ca-ac93-1e1139f8cc46';
  $pane = new stdClass();
  $pane->pid = 'new-bdf5f8ab-6812-475a-8965-2f7e76904af4';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_shared_contact_name';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_plain',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Contact',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = 'bdf5f8ab-6812-475a-8965-2f7e76904af4';
  $display->content['new-bdf5f8ab-6812-475a-8965-2f7e76904af4'] = $pane;
  $display->panels['left'][9] = 'new-bdf5f8ab-6812-475a-8965-2f7e76904af4';
  $pane = new stdClass();
  $pane->pid = 'new-c6e26bec-57c4-46d9-a12b-0509f2e17b47';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_shared_contact_email';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'email_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = 'c6e26bec-57c4-46d9-a12b-0509f2e17b47';
  $display->content['new-c6e26bec-57c4-46d9-a12b-0509f2e17b47'] = $pane;
  $display->panels['left'][10] = 'new-c6e26bec-57c4-46d9-a12b-0509f2e17b47';
  $pane = new stdClass();
  $pane->pid = 'new-671bf82c-db85-4bc1-8c45-c08b17a3a1e8';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_shared_contact_phone';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'telephone_link',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'title' => '',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 11;
  $pane->locks = array();
  $pane->uuid = '671bf82c-db85-4bc1-8c45-c08b17a3a1e8';
  $display->content['new-671bf82c-db85-4bc1-8c45-c08b17a3a1e8'] = $pane;
  $display->panels['left'][11] = 'new-671bf82c-db85-4bc1-8c45-c08b17a3a1e8';
  $pane = new stdClass();
  $pane->pid = 'new-a2bd58aa-a059-465b-9a61-896fb94df5a7';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_shared_tags';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Tags',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 12;
  $pane->locks = array();
  $pane->uuid = 'a2bd58aa-a059-465b-9a61-896fb94df5a7';
  $display->content['new-a2bd58aa-a059-465b-9a61-896fb94df5a7'] = $pane;
  $display->panels['left'][12] = 'new-a2bd58aa-a059-465b-9a61-896fb94df5a7';
  $pane = new stdClass();
  $pane->pid = 'new-6912f1b9-4827-4e9f-81b1-ecc1e67ee030';
  $pane->panel = 'left';
  $pane->type = 'node_links';
  $pane->subtype = 'node_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'build_mode' => 'full',
    'identifier' => '',
    'link' => 1,
    'context' => 'argument_entity_id:node_1',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 13;
  $pane->locks = array();
  $pane->uuid = '6912f1b9-4827-4e9f-81b1-ecc1e67ee030';
  $display->content['new-6912f1b9-4827-4e9f-81b1-ecc1e67ee030'] = $pane;
  $display->panels['left'][13] = 'new-6912f1b9-4827-4e9f-81b1-ecc1e67ee030';
  $pane = new stdClass();
  $pane->pid = 'new-5b4630cf-1685-44ca-8678-e123336de9cc';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_shared_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'file_rendered',
    'delta_limit' => '1',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'image_style' => '',
      'image_link' => '',
      'file_view_mode' => 'default',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '5b4630cf-1685-44ca-8678-e123336de9cc';
  $display->content['new-5b4630cf-1685-44ca-8678-e123336de9cc'] = $pane;
  $display->panels['right'][0] = 'new-5b4630cf-1685-44ca-8678-e123336de9cc';
  $pane = new stdClass();
  $pane->pid = 'new-659bc934-8f02-4742-b274-bb935349153f';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_shared_contact_name';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_plain',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'trim_length' => '300',
      'trim_type' => 'chars',
      'trim_suffix' => '...',
      'trim_link' => '0',
      'more_link' => '0',
      'more_text' => 'Read more',
      'trim_options' => array(
        'text' => 0,
      ),
      'trim_preserve_tags' => '',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Contact',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '659bc934-8f02-4742-b274-bb935349153f';
  $display->content['new-659bc934-8f02-4742-b274-bb935349153f'] = $pane;
  $display->panels['right'][1] = 'new-659bc934-8f02-4742-b274-bb935349153f';
  $pane = new stdClass();
  $pane->pid = 'new-52ef3577-5018-45ae-99ef-a451defdea38';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_shared_contact_email';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'email_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '<none>',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '52ef3577-5018-45ae-99ef-a451defdea38';
  $display->content['new-52ef3577-5018-45ae-99ef-a451defdea38'] = $pane;
  $display->panels['right'][2] = 'new-52ef3577-5018-45ae-99ef-a451defdea38';
  $pane = new stdClass();
  $pane->pid = 'new-8f61e9da-94d3-4bd3-8e60-1bfa24387128';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_shared_contact_phone';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'telephone_link',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'title' => '',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '<none>',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '8f61e9da-94d3-4bd3-8e60-1bfa24387128';
  $display->content['new-8f61e9da-94d3-4bd3-8e60-1bfa24387128'] = $pane;
  $display->panels['right'][3] = 'new-8f61e9da-94d3-4bd3-8e60-1bfa24387128';
  $pane = new stdClass();
  $pane->pid = 'new-5e722803-3e71-4cfb-ba11-ee73557dbe95';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_shared_tags';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Tags',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '5e722803-3e71-4cfb-ba11-ee73557dbe95';
  $display->content['new-5e722803-3e71-4cfb-ba11-ee73557dbe95'] = $pane;
  $display->panels['right'][4] = 'new-5e722803-3e71-4cfb-ba11-ee73557dbe95';
  $pane = new stdClass();
  $pane->pid = 'new-8485c9a5-717e-440f-b76a-69344ee5fe6b';
  $pane->panel = 'right';
  $pane->type = 'combined_related_items';
  $pane->subtype = 'combined_related_items';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Related Links',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '8485c9a5-717e-440f-b76a-69344ee5fe6b';
  $display->content['new-8485c9a5-717e-440f-b76a-69344ee5fe6b'] = $pane;
  $display->panels['right'][5] = 'new-8485c9a5-717e-440f-b76a-69344ee5fe6b';
  $pane = new stdClass();
  $pane->pid = 'new-16285bef-4df6-44f2-915a-af048e5e7af7';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-maps-and-directions';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '16285bef-4df6-44f2-915a-af048e5e7af7';
  $display->content['new-16285bef-4df6-44f2-915a-af048e5e7af7'] = $pane;
  $display->panels['right'][6] = 'new-16285bef-4df6-44f2-915a-af048e5e7af7';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_8ae96847-f0c2-47e5-8809-9cffcc9a003a'] = $handler;

  return $export;
}
