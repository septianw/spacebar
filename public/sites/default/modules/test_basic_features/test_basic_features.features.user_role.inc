<?php
/**
 * @file
 * test_basic_features.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function test_basic_features_user_default_roles() {
  $roles = array();

  // Exported role: admin.
  $roles['admin'] = array(
    'name' => 'admin',
    'weight' => 4,
  );

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => 3,
  );

  // Exported role: kontributor.
  $roles['kontributor'] = array(
    'name' => 'kontributor',
    'weight' => 2,
  );

  return $roles;
}
