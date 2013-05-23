<?php
/**
 * @file
 * feature_hzd_structure.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_hzd_structure_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_hzd_structure_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function feature_hzd_structure_node_info() {
  $items = array(
    'centerpage' => array(
      'name' => t('Centerpage'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Containerpage'),
      'base' => 'node_content',
      'description' => t('Inhaltstyp für eine Standardseite. Generell sollten alle Seiten in der Hierarchie, also im Menübaum, platziert werden. Soll die Seite aber trotzdem nicht in der linken Seitennavigation sichtbar sein, so wird ein Zusatztag "MenueNichtAnzeigen" im Feld "Menu tag" benötigt: <a href="/sites/default/themes/hessen_web_omega/documentation/verschiedenes/Beispiel_ArtikelTeaser-OhneNav.jpg?width=600" class="colorbox-inline">Siehe Screenshot</a>.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
