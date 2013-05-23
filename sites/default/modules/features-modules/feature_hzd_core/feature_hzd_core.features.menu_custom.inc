<?php
/**
 * @file
 * feature_hzd_core.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function feature_hzd_core_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'Das Hauptmenü (<em>Main</em> menu) stellt zu einem die Sitestruktur als auch die Menüstruktur dar.<br/>
In der Hauptebene (1. Ebene) wird zudem die Beschreibung der jeweiligen Links sichtbar im Menü dargestellt. Deshalb dürfen die Beschreibungen hier nur ca. 40 bis 55 Zeichen lang sein. Ein Sichtprüfung ist hier unbedingt erforderlich!<br/>
Hier ein paar Beispiele der <a href="" class="colorbox-load">Hauptnavigationsebenen</a>.',
  );
  // Exported menu: menu-footer-menu.
  $menus['menu-footer-menu'] = array(
    'menu_name' => 'menu-footer-menu',
    'title' => 'Footer Menü',
    'description' => '',
  );
  // Exported menu: menu-top-menu.
  $menus['menu-top-menu'] = array(
    'menu_name' => 'menu-top-menu',
    'title' => 'Top Menu Hessen.de',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Das Hauptmenü (<em>Main</em> menu) stellt zu einem die Sitestruktur als auch die Menüstruktur dar.<br/>
In der Hauptebene (1. Ebene) wird zudem die Beschreibung der jeweiligen Links sichtbar im Menü dargestellt. Deshalb dürfen die Beschreibungen hier nur ca. 40 bis 55 Zeichen lang sein. Ein Sichtprüfung ist hier unbedingt erforderlich!<br/>
Hier ein paar Beispiele der <a href="" class="colorbox-load">Hauptnavigationsebenen</a>.');
  t('Footer Menü');
  t('Main menu');
  t('Top Menu Hessen.de');


  return $menus;
}
