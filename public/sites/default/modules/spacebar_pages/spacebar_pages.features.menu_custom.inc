<?php
/**
 * @file
 * spacebar_pages.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function spacebar_pages_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-group-menu.
  $menus['menu-group-menu'] = array(
    'menu_name' => 'menu-group-menu',
    'title' => 'Group menu',
    'description' => 'Menu inside every group.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Group menu');
  t('Menu inside every group.');


  return $menus;
}
