<?php
/**
 * @file
 * personen.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function personen_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:personen
  $menu_links['main-menu:personen'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'personen',
    'router_path' => 'personen',
    'link_title' => 'Personen',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Personen');


  return $menu_links;
}
