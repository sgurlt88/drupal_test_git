<?php
/**
 * @file
 * feature_hzd_presse.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_hzd_presse_ctools_plugin_api() {
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
function feature_hzd_presse_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function feature_hzd_presse_node_info() {
  $items = array(
    'pressemitteilung' => array(
      'name' => t('Pressemitteilung'),
      'base' => 'node_content',
      'description' => t('Pressemitteilung'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'pressesprecher' => array(
      'name' => t('Pressesprecher'),
      'base' => 'node_content',
      'description' => t('Inhaltstyp für einen Pressesprecher'),
      'has_title' => '1',
      'title_label' => t('Bezeichnung des Pressesprechers'),
      'help' => '',
    ),
    'pressestelle' => array(
      'name' => t('Pressestelle'),
      'base' => 'node_content',
      'description' => t('Pressestelle mit Adresse und Kontaktdaten.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
