<?php
/**
 * @file
 * feature_hzd_newsletter.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_hzd_newsletter_ctools_plugin_api() {
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
 * Implements hook_node_info().
 */
function feature_hzd_newsletter_node_info() {
  $items = array(
    'newsletter_anmeldung' => array(
      'name' => t('Newsletter-Anmeldung'),
      'base' => 'node_content',
      'description' => t('Individueller Anmeldungsblock für Newsletter'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'simplenews' => array(
      'name' => t('Newsletter'),
      'base' => 'node_content',
      'description' => t('Freihand Newsletter'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
