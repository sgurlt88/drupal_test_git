<?php
/**
 * @file
 * Provides the domain rule plugin for the Menu Position module.
 */

/**
 * Checks if the current domain should trigger this menu position rule..
 *
 * @param $variables
 *   An array containing each of the variables saved in the database necessary
 *   to evaluate this condition of the rule.
 * @return
 *   TRUE if condition applies successfully. Otherwise FALSE.
 */
function menu_position_domain_menu_position_condition_domain($variables) {
  // Grab the variables stored statically in the rule.
  $domain_site = isset($variables['domain_site']) ? $variables['domain_site'] : FALSE;

  // It this is set to all affiliates then just return TRUE.
  if ($domain_site) {
    return TRUE;
  }

  // Otherwise we'll see if we're viewing the appropriate domain.
  $domain = domain_get_domain();
  if ($domains = $variables['domains']) {
    return in_array($domain['machine_name'], $domains);
  }
  
  // If nothing is set, return TRUE.
  return TRUE;
}

/**
 * Adds form elements for the PLUGIN plugin to the rule configuration form.
 *
 * If this condition was active in the current rule, the plug-in variables will
 * be available in $form_state['#menu-position-rule']['conditions']['PLUGIN'].
 *
 * It is the resposibility of this hook to add any necessary form validation and
 * submission handlers.
 *
 * @param $form
 *   A reference to the "add/edit rule" form array. New form elements should be
 *   added directly to this array.
 * @param $form_state
 *   A reference to the current form state.
 */
function menu_position_domain_menu_position_rule_domain_form(&$form, &$form_state) {
  
  $domains = domain_domains();
  $options = array();
  
  // If this is an existing rule, load the variables stored in the rule for this plugin.
  $variables = !empty($form_state['#menu-position-rule']['conditions']['domain']) ? $form_state['#menu-position-rule']['conditions']['domain'] : array();

  $form['conditions']['domain'] = array(
    '#type' => 'fieldset',
    '#title' => t('Domain access'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
    '#attached' => array(
      'js' => array(drupal_get_path('module', 'menu_position_domain') . '/menu_position_domain.js'),
    ),
  );

  // Set the form.
  $format = domain_select_format();
  foreach ($domains as $domain) {
    // Checkboxes cannot handles zeros.
    if ($domain['domain_id'] === 0) {
      $domain['domain_id'] = -1;
    }
    // The domain must be valid.
    if ($domain['valid'] || user_access('access inactive domains')) {
      // Filter checkboxes but not select lists.
      $options[$domain['machine_name']] = empty($format) ? check_plain($domain['sitename']) : $domain['sitename'];
    }
  }
  $form['conditions']['domain']['domain_site'] = array(
    '#type' => 'checkbox',
    '#title' => t('Show on all affiliates'),
    '#default_value' => !empty($variables['domain_site']) ? $variables['domain_site'] : 0,
    '#description' => t('Show content on all domains. This setting will override the domain-specific options below.'),
  );
  $form['conditions']['domain']['domains'] = array(
    '#type' => empty($format) ? 'checkboxes' : 'select',
    '#title' => t('Domains'),
    '#default_value' => !empty($variables['domains']) ? $variables['domains'] : array(),
    '#options' => $options,
    '#description' => t('This content will only be visible on the selected domains.'),
  );
  if ($format) {
    $form['conditions']['domain']['domains']['#multiple'] = TRUE;
    $form['conditions']['domain']['domains']['#size'] = count($options) > 10 ? 10 : count($options);
  }  
  
  // Add a submit handler.
  $form['#submit'][] = 'menu_position_domain_menu_position_rule_domain_form_submit';
}

/**
 * Prepares the plugin's variables to be stored in the rule.
 *
 * @param $form
 *   A reference to the "add/edit rule" form array.
 * @param $form_state
 *   A reference to the current form state, including submitted values.
 */
function menu_position_domain_menu_position_rule_domain_form_submit(&$form, &$form_state) {
  if (!empty($form_state['values']['domains'])) {
    if ($form_state['values']['domains']) {
      $variables = array(
        'domain_site' => $form_state['values']['domain_site'],
        'domains' => array_filter($form_state['values']['domains']),
      );
      $form_state['values']['conditions']['domain'] = $variables;
    }
  }
}