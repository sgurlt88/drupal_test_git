<?php
/**
 * @file
 * feature_hzd_core.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_hzd_core_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "elysia_cron" && $api == "default_elysia_cron_rules") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_hzd_core_views_api() {
  return array("api" => "3.0");
}
