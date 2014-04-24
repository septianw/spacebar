<?php
/**
 * @file
 * spacebar_basic.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function spacebar_basic_user_default_roles() {
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
