<?php
/**
 * @file
 * spacebar_pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function spacebar_pages_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'user_dashboard';
  $page->task = 'page';
  $page->admin_title = 'user dashboard';
  $page->admin_description = '';
  $page->path = 'dashboard';
  $page->access = array(
    'plugins' => array(),
    'logic' => 'and',
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
  $handler->name = 'page_user_dashboard_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'user_dashboard';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel user',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
          1 => 1,
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => '69.91278422996484',
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'column',
        'width' => '30.087215770035154',
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 2,
        ),
        'class' => '',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'right_sidebar',
        ),
        'parent' => '1',
        'class' => '',
      ),
      'right_sidebar' => array(
        'type' => 'region',
        'title' => 'right sidebar',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'right_sidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f4c36785-297f-4f21-adca-05b19d805d3a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d39893dc-1007-4cfb-a8b8-ae8f560471bb';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'views-content_per_user-block_1';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 6,
              1 => 5,
              2 => 4,
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
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd39893dc-1007-4cfb-a8b8-ae8f560471bb';
    $display->content['new-d39893dc-1007-4cfb-a8b8-ae8f560471bb'] = $pane;
    $display->panels['center'][0] = 'new-d39893dc-1007-4cfb-a8b8-ae8f560471bb';
    $pane = new stdClass();
    $pane->pid = 'new-a62ed7db-46e8-4907-aa22-fe8c7edbf917';
    $pane->panel = 'right_sidebar';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-group-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Main Spaces :',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a62ed7db-46e8-4907-aa22-fe8c7edbf917';
    $display->content['new-a62ed7db-46e8-4907-aa22-fe8c7edbf917'] = $pane;
    $display->panels['right_sidebar'][0] = 'new-a62ed7db-46e8-4907-aa22-fe8c7edbf917';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-a62ed7db-46e8-4907-aa22-fe8c7edbf917';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['user_dashboard'] = $page;

  return $pages;

}
