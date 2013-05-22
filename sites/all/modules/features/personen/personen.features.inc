<?php
/**
 * @file
 * personen.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function personen_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function personen_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function personen_node_info() {
  $items = array(
    'person' => array(
      'name' => t('Person'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Vorname'),
      'help' => '',
    ),
  );
  return $items;
}
