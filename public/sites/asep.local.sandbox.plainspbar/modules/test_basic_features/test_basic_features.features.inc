<?php
/**
 * @file
 * test_basic_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function test_basic_features_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function test_basic_features_node_info() {
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
