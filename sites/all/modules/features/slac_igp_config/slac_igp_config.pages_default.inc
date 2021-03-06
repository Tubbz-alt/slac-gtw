<?php
/**
 * @file
 * slac_igp_config.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function slac_igp_config_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'front_page';
  $page->task = 'page';
  $page->admin_title = 'Front Page';
  $page->admin_description = '';
  $page->path = 'front';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_front_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'front_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Home Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'frontpage';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'colonerowone' => NULL,
      'colonerowtwo' => NULL,
      'colonerowthree' => NULL,
      'coltworowone' => NULL,
      'coltworowtwo' => NULL,
      'coltworowthree' => NULL,
      'coltworowfour' => NULL,
      'colthreerowone' => NULL,
      'colthreerowtwo' => NULL,
      'colthreerowthree' => NULL,
      'colthreerowfour' => NULL,
      'colthreerowfive' => NULL,
      'colthreerowsix' => NULL,
      'coltworowfive' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a6785b3e-ac44-4265-821d-0306402b8c0d';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_front_page_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-9acf67a9-8cad-47c8-bc39-d35375150c5b';
  $pane->panel = 'colonerowone';
  $pane->type = 'views';
  $pane->subtype = 'slac_news';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_3',
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
  $pane->uuid = '9acf67a9-8cad-47c8-bc39-d35375150c5b';
  $display->content['new-9acf67a9-8cad-47c8-bc39-d35375150c5b'] = $pane;
  $display->panels['colonerowone'][0] = 'new-9acf67a9-8cad-47c8-bc39-d35375150c5b';
  $pane = new stdClass();
  $pane->pid = 'new-6b54ccf8-deed-4260-87f5-7259397c4fc0';
  $pane->panel = 'colonerowthree';
  $pane->type = 'views';
  $pane->subtype = 'slac_news';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_2',
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
  $pane->uuid = '6b54ccf8-deed-4260-87f5-7259397c4fc0';
  $display->content['new-6b54ccf8-deed-4260-87f5-7259397c4fc0'] = $pane;
  $display->panels['colonerowthree'][0] = 'new-6b54ccf8-deed-4260-87f5-7259397c4fc0';
  $pane = new stdClass();
  $pane->pid = 'new-37ad32d3-085c-43b0-9fe4-e65a379b4370';
  $pane->panel = 'colonerowtwo';
  $pane->type = 'views';
  $pane->subtype = 'slac_news';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '10',
    'pager_id' => '0',
    'offset' => '',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_1',
    'override_title' => 1,
    'override_title_text' => '<a href="/news?field_news_news_type_value=Lab+News">LAB NEWS</a>',
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
  $pane->uuid = '37ad32d3-085c-43b0-9fe4-e65a379b4370';
  $display->content['new-37ad32d3-085c-43b0-9fe4-e65a379b4370'] = $pane;
  $display->panels['colonerowtwo'][0] = 'new-37ad32d3-085c-43b0-9fe4-e65a379b4370';
  $pane = new stdClass();
  $pane->pid = 'new-ec1dc49a-827e-4685-821b-c6e760af2ca9';
  $pane->panel = 'colthreerowfive';
  $pane->type = 'block';
  $pane->subtype = 'boxes-it_help_desk';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'brown-bodered-white',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ec1dc49a-827e-4685-821b-c6e760af2ca9';
  $display->content['new-ec1dc49a-827e-4685-821b-c6e760af2ca9'] = $pane;
  $display->panels['colthreerowfive'][0] = 'new-ec1dc49a-827e-4685-821b-c6e760af2ca9';
  $pane = new stdClass();
  $pane->pid = 'new-c0566837-ec4a-41dd-afae-060a6b4a249d';
  $pane->panel = 'colthreerowfour';
  $pane->type = 'block';
  $pane->subtype = 'boxes-slac_projects';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'brown-bodered-white',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c0566837-ec4a-41dd-afae-060a6b4a249d';
  $display->content['new-c0566837-ec4a-41dd-afae-060a6b4a249d'] = $pane;
  $display->panels['colthreerowfour'][0] = 'new-c0566837-ec4a-41dd-afae-060a6b4a249d';
  $pane = new stdClass();
  $pane->pid = 'new-5087db46-c398-4cae-9da6-3c3905a0c2f0';
  $pane->panel = 'colthreerowfour';
  $pane->type = 'block';
  $pane->subtype = 'block-1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => 'Useful Contacts',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'brown-bodered-white normal',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '5087db46-c398-4cae-9da6-3c3905a0c2f0';
  $display->content['new-5087db46-c398-4cae-9da6-3c3905a0c2f0'] = $pane;
  $display->panels['colthreerowfour'][1] = 'new-5087db46-c398-4cae-9da6-3c3905a0c2f0';
  $pane = new stdClass();
  $pane->pid = 'new-7558faaf-bb28-4a50-a2b5-e1a218275698';
  $pane->panel = 'colthreerowfour';
  $pane->type = 'block';
  $pane->subtype = 'block-2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => 'Social Media',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'brown-bodered-white',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '7558faaf-bb28-4a50-a2b5-e1a218275698';
  $display->content['new-7558faaf-bb28-4a50-a2b5-e1a218275698'] = $pane;
  $display->panels['colthreerowfour'][2] = 'new-7558faaf-bb28-4a50-a2b5-e1a218275698';
  $pane = new stdClass();
  $pane->pid = 'new-1d664cee-330b-4c79-8af8-561819c075a0';
  $pane->panel = 'colthreerowone';
  $pane->type = 'block';
  $pane->subtype = 'block-3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => 'Spotlight',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'spotlight',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1d664cee-330b-4c79-8af8-561819c075a0';
  $display->content['new-1d664cee-330b-4c79-8af8-561819c075a0'] = $pane;
  $display->panels['colthreerowone'][0] = 'new-1d664cee-330b-4c79-8af8-561819c075a0';
  $pane = new stdClass();
  $pane->pid = 'new-b29cd9e5-d4ef-48f0-b03a-d5db90c1a10e';
  $pane->panel = 'colthreerowone';
  $pane->type = 'block';
  $pane->subtype = 'block-4';
  $pane->shown = FALSE;
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'b29cd9e5-d4ef-48f0-b03a-d5db90c1a10e';
  $display->content['new-b29cd9e5-d4ef-48f0-b03a-d5db90c1a10e'] = $pane;
  $display->panels['colthreerowone'][1] = 'new-b29cd9e5-d4ef-48f0-b03a-d5db90c1a10e';
  $pane = new stdClass();
  $pane->pid = 'new-c0a99c52-d91c-4daf-9852-c1e905e113ff';
  $pane->panel = 'colthreerowone';
  $pane->type = 'block';
  $pane->subtype = 'boxes-search_people';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'People Finder',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'brown-bodered-white no-bg',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'c0a99c52-d91c-4daf-9852-c1e905e113ff';
  $display->content['new-c0a99c52-d91c-4daf-9852-c1e905e113ff'] = $pane;
  $display->panels['colthreerowone'][2] = 'new-c0a99c52-d91c-4daf-9852-c1e905e113ff';
  $pane = new stdClass();
  $pane->pid = 'new-4ab9910a-8622-4702-a755-b8026a1a09c6';
  $pane->panel = 'colthreerowsix';
  $pane->type = 'block';
  $pane->subtype = 'boxes-site_security';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'brown-bodered-white',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4ab9910a-8622-4702-a755-b8026a1a09c6';
  $display->content['new-4ab9910a-8622-4702-a755-b8026a1a09c6'] = $pane;
  $display->panels['colthreerowsix'][0] = 'new-4ab9910a-8622-4702-a755-b8026a1a09c6';
  $pane = new stdClass();
  $pane->pid = 'new-0f83568f-2f80-4619-94f4-00493a7ca0f6';
  $pane->panel = 'colthreerowsix';
  $pane->type = 'block';
  $pane->subtype = 'boxes-stanford_compliance';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'brown-bodered-white',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '0f83568f-2f80-4619-94f4-00493a7ca0f6';
  $display->content['new-0f83568f-2f80-4619-94f4-00493a7ca0f6'] = $pane;
  $display->panels['colthreerowsix'][1] = 'new-0f83568f-2f80-4619-94f4-00493a7ca0f6';
  $pane = new stdClass();
  $pane->pid = 'new-9672c131-3e48-4e4f-9e94-af57b159ff3b';
  $pane->panel = 'colthreerowsix';
  $pane->type = 'block';
  $pane->subtype = 'boxes-connect';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'brown-bodered-white',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '9672c131-3e48-4e4f-9e94-af57b159ff3b';
  $display->content['new-9672c131-3e48-4e4f-9e94-af57b159ff3b'] = $pane;
  $display->panels['colthreerowsix'][2] = 'new-9672c131-3e48-4e4f-9e94-af57b159ff3b';
  $pane = new stdClass();
  $pane->pid = 'new-4125565c-b09f-46bd-b838-79903549f878';
  $pane->panel = 'colthreerowthree';
  $pane->type = 'views';
  $pane->subtype = 'organization';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'override_title' => 1,
    'override_title_text' => 'Organization Index',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4125565c-b09f-46bd-b838-79903549f878';
  $display->content['new-4125565c-b09f-46bd-b838-79903549f878'] = $pane;
  $display->panels['colthreerowthree'][0] = 'new-4125565c-b09f-46bd-b838-79903549f878';
  $pane = new stdClass();
  $pane->pid = 'new-2f08cf4b-548c-42b1-a287-6fc77b893c3b';
  $pane->panel = 'colthreerowthree';
  $pane->type = 'views';
  $pane->subtype = 'facilities_major_projects';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '2f08cf4b-548c-42b1-a287-6fc77b893c3b';
  $display->content['new-2f08cf4b-548c-42b1-a287-6fc77b893c3b'] = $pane;
  $display->panels['colthreerowthree'][1] = 'new-2f08cf4b-548c-42b1-a287-6fc77b893c3b';
  $pane = new stdClass();
  $pane->pid = 'new-c4079fd8-8f09-4243-9e7c-5e028052ece1';
  $pane->panel = 'colthreerowtwo';
  $pane->type = 'panels_mini';
  $pane->subtype = 'poll_mini_panel';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 2,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c4079fd8-8f09-4243-9e7c-5e028052ece1';
  $display->content['new-c4079fd8-8f09-4243-9e7c-5e028052ece1'] = $pane;
  $display->panels['colthreerowtwo'][0] = 'new-c4079fd8-8f09-4243-9e7c-5e028052ece1';
  $pane = new stdClass();
  $pane->pid = 'new-3187a961-7620-4ead-8534-2fdb62d7380c';
  $pane->panel = 'colthreerowtwo';
  $pane->type = 'panels_mini';
  $pane->subtype = 'quick_poll_block_for_anonymous_u';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 1,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '3187a961-7620-4ead-8534-2fdb62d7380c';
  $display->content['new-3187a961-7620-4ead-8534-2fdb62d7380c'] = $pane;
  $display->panels['colthreerowtwo'][1] = 'new-3187a961-7620-4ead-8534-2fdb62d7380c';
  $pane = new stdClass();
  $pane->pid = 'new-a2248a55-b799-471f-80fb-500d8c2b96cf';
  $pane->panel = 'coltworowfive';
  $pane->type = 'panels_mini';
  $pane->subtype = 'new_weather_traffic';
  $pane->shown = FALSE;
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a2248a55-b799-471f-80fb-500d8c2b96cf';
  $display->content['new-a2248a55-b799-471f-80fb-500d8c2b96cf'] = $pane;
  $display->panels['coltworowfive'][0] = 'new-a2248a55-b799-471f-80fb-500d8c2b96cf';
  $pane = new stdClass();
  $pane->pid = 'new-b3a7a5ca-2d77-4982-bd20-2b73650db455';
  $pane->panel = 'coltworowfour';
  $pane->type = 'block';
  $pane->subtype = 'views-access_information-block';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'brown-bodered-white',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b3a7a5ca-2d77-4982-bd20-2b73650db455';
  $display->content['new-b3a7a5ca-2d77-4982-bd20-2b73650db455'] = $pane;
  $display->panels['coltworowfour'][0] = 'new-b3a7a5ca-2d77-4982-bd20-2b73650db455';
  $pane = new stdClass();
  $pane->pid = 'new-9c49d626-a6ea-4be3-8b60-a610bf499c72';
  $pane->panel = 'coltworowfour';
  $pane->type = 'block';
  $pane->subtype = 'views-flea_market-block';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'brown-bodered-white',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '9c49d626-a6ea-4be3-8b60-a610bf499c72';
  $display->content['new-9c49d626-a6ea-4be3-8b60-a610bf499c72'] = $pane;
  $display->panels['coltworowfour'][1] = 'new-9c49d626-a6ea-4be3-8b60-a610bf499c72';
  $pane = new stdClass();
  $pane->pid = 'new-7f02be89-f2e3-4237-b4c9-0e64ee05d381';
  $pane->panel = 'coltworowthree';
  $pane->type = 'views';
  $pane->subtype = 'top_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7f02be89-f2e3-4237-b4c9-0e64ee05d381';
  $display->content['new-7f02be89-f2e3-4237-b4c9-0e64ee05d381'] = $pane;
  $display->panels['coltworowthree'][0] = 'new-7f02be89-f2e3-4237-b4c9-0e64ee05d381';
  $pane = new stdClass();
  $pane->pid = 'new-9315ddc3-e834-470c-8a89-dc366f3c01b7';
  $pane->panel = 'coltworowthree';
  $pane->type = 'slac_ip_panes_events';
  $pane->subtype = 'slac_ip_panes_events';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'brown-bodered-white',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '9315ddc3-e834-470c-8a89-dc366f3c01b7';
  $display->content['new-9315ddc3-e834-470c-8a89-dc366f3c01b7'] = $pane;
  $display->panels['coltworowthree'][1] = 'new-9315ddc3-e834-470c-8a89-dc366f3c01b7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['front_page'] = $page;

  return $pages;

}
