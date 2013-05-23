<?php
/**
 * @file
 * feature_hzd_events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_hzd_events_ctools_plugin_api() {
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
 * Implements hook_node_info().
 */
function feature_hzd_events_node_info() {
  $items = array(
    'termin' => array(
      'name' => t('Termin'),
      'base' => 'node_content',
      'description' => t('Dieser Informationstyp wird verwendet, um Veranstaltungen aller Art zu beschreiben. Dazu gehören beispielsweise Vor-träge, Feste, Seminare oder öffentliche Auftritte der gewähl-ten Volksvertreter.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'veranstalter' => array(
      'name' => t('Veranstalter'),
      'base' => 'node_content',
      'description' => t('Veranstalter'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'veranstaltungsort' => array(
      'name' => t('Veranstaltungsort'),
      'base' => 'node_content',
      'description' => t('Veranstaltungsort'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
