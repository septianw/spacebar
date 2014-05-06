<?php
/**
 * @file
 * test_basic_features.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function test_basic_features_filter_default_formats() {
  $formats = array();

  // Exported format: wiki.
  $formats['wiki'] = array(
    'format' => 'wiki',
    'name' => 'wiki',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'freelinking' => array(
        'weight' => -48,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_markdown' => array(
        'weight' => -43,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => -42,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
    ),
  );

  return $formats;
}
