<?php
/**
 * @file
 * feature_hzd_media.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_hzd_media_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "file_entity" && $api == "file_default_displays") {
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
function feature_hzd_media_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function feature_hzd_media_node_info() {
  $items = array(
    'bildergalerie' => array(
      'name' => t('Bildergalerie'),
      'base' => 'node_content',
      'description' => t('Bildergalerie'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'video' => array(
      'name' => t('Video'),
      'base' => 'node_content',
      'description' => t('Video'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
