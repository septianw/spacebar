<?php
/**
 * @file
 * test_basic_features.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function test_basic_features_taxonomy_default_vocabularies() {
  return array(
    'business_area' => array(
      'name' => 'Business Area',
      'machine_name' => 'business_area',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'client' => array(
      'name' => 'Client',
      'machine_name' => 'client',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'enterprise_system' => array(
      'name' => 'Enterprise System',
      'machine_name' => 'enterprise_system',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'parent_space' => array(
      'name' => 'Parent Space',
      'machine_name' => 'parent_space',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'space_group' => array(
      'name' => 'Space Group',
      'machine_name' => 'space_group',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
