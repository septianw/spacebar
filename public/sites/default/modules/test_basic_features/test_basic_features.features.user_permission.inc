<?php
/**
 * @file
 * test_basic_features.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function test_basic_features_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
      'kontributor' => 'kontributor',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access navbar'.
  $permissions['access navbar'] = array(
    'name' => 'access navbar',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
      'kontributor' => 'kontributor',
    ),
    'module' => 'navbar',
  );

  // Exported permission: 'access printer-friendly version'.
  $permissions['access printer-friendly version'] = array(
    'name' => 'access printer-friendly version',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'book',
  );

  // Exported permission: 'add content to books'.
  $permissions['add content to books'] = array(
    'name' => 'add content to books',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'book',
  );

  // Exported permission: 'administer book outlines'.
  $permissions['administer book outlines'] = array(
    'name' => 'administer book outlines',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'book',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'create book content'.
  $permissions['create book content'] = array(
    'name' => 'create book content',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
      'kontributor' => 'kontributor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create document content'.
  $permissions['create document content'] = array(
    'name' => 'create document content',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
      'kontributor' => 'kontributor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create forum content'.
  $permissions['create forum content'] = array(
    'name' => 'create forum content',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
      'kontributor' => 'kontributor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create new books'.
  $permissions['create new books'] = array(
    'name' => 'create new books',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'book',
  );

  // Exported permission: 'create space content'.
  $permissions['create space content'] = array(
    'name' => 'create space content',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any forum content'.
  $permissions['delete any forum content'] = array(
    'name' => 'delete any forum content',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own book content'.
  $permissions['delete own book content'] = array(
    'name' => 'delete own book content',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
      'kontributor' => 'kontributor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own document content'.
  $permissions['delete own document content'] = array(
    'name' => 'delete own document content',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
      'kontributor' => 'kontributor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own forum content'.
  $permissions['delete own forum content'] = array(
    'name' => 'delete own forum content',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own space content'.
  $permissions['delete own space content'] = array(
    'name' => 'delete own space content',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in business_area'.
  $permissions['delete terms in business_area'] = array(
    'name' => 'delete terms in business_area',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in client'.
  $permissions['delete terms in client'] = array(
    'name' => 'delete terms in client',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in document_types'.
  $permissions['delete terms in document_types'] = array(
    'name' => 'delete terms in document_types',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in enterprise_system'.
  $permissions['delete terms in enterprise_system'] = array(
    'name' => 'delete terms in enterprise_system',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in forums'.
  $permissions['delete terms in forums'] = array(
    'name' => 'delete terms in forums',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in parent_space'.
  $permissions['delete terms in parent_space'] = array(
    'name' => 'delete terms in parent_space',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in site_structure'.
  $permissions['delete terms in site_structure'] = array(
    'name' => 'delete terms in site_structure',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in space_group'.
  $permissions['delete terms in space_group'] = array(
    'name' => 'delete terms in space_group',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in userpoints'.
  $permissions['delete terms in userpoints'] = array(
    'name' => 'delete terms in userpoints',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any forum content'.
  $permissions['edit any forum content'] = array(
    'name' => 'edit any forum content',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own book content'.
  $permissions['edit own book content'] = array(
    'name' => 'edit own book content',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
      'kontributor' => 'kontributor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own document content'.
  $permissions['edit own document content'] = array(
    'name' => 'edit own document content',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
      'kontributor' => 'kontributor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own forum content'.
  $permissions['edit own forum content'] = array(
    'name' => 'edit own forum content',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
      'kontributor' => 'kontributor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own space content'.
  $permissions['edit own space content'] = array(
    'name' => 'edit own space content',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in business_area'.
  $permissions['edit terms in business_area'] = array(
    'name' => 'edit terms in business_area',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in client'.
  $permissions['edit terms in client'] = array(
    'name' => 'edit terms in client',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in document_types'.
  $permissions['edit terms in document_types'] = array(
    'name' => 'edit terms in document_types',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in enterprise_system'.
  $permissions['edit terms in enterprise_system'] = array(
    'name' => 'edit terms in enterprise_system',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in forums'.
  $permissions['edit terms in forums'] = array(
    'name' => 'edit terms in forums',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in parent_space'.
  $permissions['edit terms in parent_space'] = array(
    'name' => 'edit terms in parent_space',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in site_structure'.
  $permissions['edit terms in site_structure'] = array(
    'name' => 'edit terms in site_structure',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in space_group'.
  $permissions['edit terms in space_group'] = array(
    'name' => 'edit terms in space_group',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in userpoints'.
  $permissions['edit terms in userpoints'] = array(
    'name' => 'edit terms in userpoints',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
      'kontributor' => 'kontributor',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'show more format tips link'.
  $permissions['show more format tips link'] = array(
    'name' => 'show more format tips link',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'use text format wiki'.
  $permissions['use text format wiki'] = array(
    'name' => 'use text format wiki',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
