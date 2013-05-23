<?php 
/**
* Implements hook_preprocess_region().
*/
function hessen_web_omega_alpha_preprocess_region(&$vars) {
  $theme = alpha_get_theme();
  if ($vars['elements']['#region'] == 'content') {
    $vars['breadcrumb'] = $theme->page['breadcrumb'];
    $vars['columns'] = $theme->regions['content']['columns'];
  }
}
?>