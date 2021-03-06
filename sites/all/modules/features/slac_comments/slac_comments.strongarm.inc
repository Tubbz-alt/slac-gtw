<?php
/**
 * @file
 * slac_comments.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function slac_comments_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rate_widgets';
  $strongarm->value = array(
    1 => (object) array(
      'name' => 'comment_',
      'tag' => 'vote',
      'title' => 'Comment ',
      'node_types' => array(),
      'comment_types' => array(
        0 => 'news',
        1 => 'news_article',
      ),
      'options' => array(
        0 => array(
          0 => 1,
          1 => 'up',
        ),
      ),
      'template' => 'thumbs_up',
      'node_display' => '2',
      'teaser_display' => FALSE,
      'comment_display' => '2',
      'node_display_mode' => '1',
      'teaser_display_mode' => '1',
      'comment_display_mode' => '1',
      'roles' => array(
        3 => 0,
        1 => 0,
        2 => 0,
        4 => 0,
        6 => 0,
        7 => 0,
        5 => 0,
      ),
      'allow_voting_by_author' => 1,
      'noperm_behaviour' => '1',
      'displayed' => '3',
      'displayed_just_voted' => '1',
      'description' => '',
      'description_in_compact' => TRUE,
      'delete_vote_on_second_click' => '1',
      'use_source_translation' => TRUE,
      'value_type' => 'points',
      'theme' => 'rate_template_thumbs_up',
      'css' => 'sites/all/modules/contrib/rate/templates/thumbs-up/thumbs-up.css',
      'translate' => TRUE,
    ),
  );
  $export['rate_widgets'] = $strongarm;

  return $export;
}
