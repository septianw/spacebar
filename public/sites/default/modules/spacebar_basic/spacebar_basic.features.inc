<?php
/**
 * @file
 * spacebar_basic.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function spacebar_basic_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_homebox().
 */
function spacebar_basic_homebox() {
  $homeboxes = array();

  $homeboxes['my_dashboard'] = array (
    'regions' => 3,
    'cache' => 0,
    'color' => 0,
    'colors' => 
    array (
    ),
    'blocks' => 
    array (
      'forum_new' => 
      array (
        'module' => 'forum',
        'delta' => 'new',
        'region' => 3,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => '',
        'weight' => -10,
      ),
      'comment_recent' => 
      array (
        'module' => 'comment',
        'delta' => 'recent',
        'region' => 2,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => '',
        'weight' => -10,
      ),
      'node_recent' => 
      array (
        'module' => 'node',
        'delta' => 'recent',
        'region' => 1,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => '',
        'weight' => -10,
      ),
    ),
    'widths' => 
    array (
    ),
    'title' => 'My Dashboard',
    'path' => 'user/dashboard',
    'menu' => 1,
    'enabled' => 1,
    'auto_save' => 1,
    'full' => 0,
    'roles' => 
    array (
      0 => 'authenticated user',
    ),
  );

  $homeboxes['spaces'] = array (
    'regions' => 3,
    'cache' => 0,
    'color' => 0,
    'colors' => 
    array (
    ),
    'blocks' => 
    array (
      'forum_active' => 
      array (
        'module' => 'forum',
        'delta' => 'active',
        'region' => 1,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => '',
        'weight' => -10,
      ),
      'forum_new' => 
      array (
        'module' => 'forum',
        'delta' => 'new',
        'region' => 2,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => '',
        'weight' => -10,
      ),
      'node_recent' => 
      array (
        'module' => 'node',
        'delta' => 'recent',
        'region' => 3,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => '',
        'weight' => -10,
      ),
      'menu_menu-group-menu' => 
      array (
        'module' => 'menu',
        'delta' => 'menu-group-menu',
        'region' => 1,
        'movable' => 1,
        'status' => 1,
        'open' => 1,
        'closable' => 1,
        'title' => '',
        'weight' => -17,
      ),
    ),
    'widths' => 
    array (
    ),
    'title' => 'Spaces',
    'path' => 'space/dashboard',
    'menu' => 0,
    'enabled' => 0,
    'auto_save' => 1,
    'full' => 0,
    'roles' => 
    array (
      0 => 'authenticated user',
    ),
  );


  return $homeboxes;
}

/**
 * Implements hook_node_info().
 */
function spacebar_basic_node_info() {
  $items = array(
    'book' => array(
      'name' => t('Knowledge base'),
      'base' => 'node_content',
      'description' => t('<em>Knowledge base</em> Database pengetahuan yang terstruktur.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'space' => array(
      'name' => t('Space'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
