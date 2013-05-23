<?php
/**
 * @file
 * feature_hzd_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function feature_hzd_permissions_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 5,
  );

  // Exported role: chefredaktion.
  $roles['chefredaktion'] = array(
    'name' => 'chefredaktion',
    'weight' => 3,
  );

  // Exported role: preview.
  $roles['preview'] = array(
    'name' => 'preview',
    'weight' => 6,
  );

  // Exported role: redaktion.
  $roles['redaktion'] = array(
    'name' => 'redaktion',
    'weight' => 2,
  );

  // Exported role: sitearchitekt.
  $roles['sitearchitekt'] = array(
    'name' => 'sitearchitekt',
    'weight' => 4,
  );

  return $roles;
}
