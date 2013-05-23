<?php
/**
 * @file
 * feature_hzd_structure.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function feature_hzd_structure_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_anzeige|node|centerpage|form';
  $field_group->group_name = 'group_anzeige';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'centerpage';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group_1';
  $field_group->data = array(
    'label' => 'Anzeige',
    'weight' => '13',
    'children' => array(
      0 => 'domain',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_anzeige|node|centerpage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_marginalspalte|node|centerpage|form';
  $field_group->group_name = 'group_marginalspalte';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'centerpage';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group_1';
  $field_group->data = array(
    'label' => 'Marginalspalte',
    'weight' => '12',
    'children' => array(
      0 => 'field_marginalspalte_me_ge_block',
      1 => 'field_marginalspalte_so_me_block',
      2 => 'field_marginalspalte_vid_block',
      3 => 'field_marginalspalte_zitat_block',
      4 => 'field_marginalspalte_so_m_inhalt',
      5 => 'field_marginalspalte_z_inhalt',
      6 => 'field_marginalspalte_vid_inhalt',
      7 => 'field_marginalspalte_kon_block',
      8 => 'field_marginalspalte_kon_inhalt',
      9 => 'field_marginalspalte_uni_block',
      10 => 'field_marginalspalte_karr_block',
      11 => 'field_marginalspalte_uni_inhalt',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_marginalspalte|node|centerpage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_metadaten|node|centerpage|form';
  $field_group->group_name = 'group_metadaten';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'centerpage';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group_1';
  $field_group->data = array(
    'label' => 'Metadaten',
    'weight' => '14',
    'children' => array(
      0 => 'field_fc_metadaten',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_metadaten|node|centerpage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab_group_1|node|centerpage|form';
  $field_group->group_name = 'group_tab_group_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'centerpage';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tab Group 1',
    'weight' => '0',
    'children' => array(
      0 => 'group_artikel_inhalt',
      1 => 'group_anzeige',
      2 => 'group_marginalspalte',
      3 => 'group_workflow',
      4 => 'group_metadaten',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_tab_group_1|node|centerpage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_workflow|node|centerpage|form';
  $field_group->group_name = 'group_workflow';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'centerpage';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_group_1';
  $field_group->data = array(
    'label' => 'Workflow (Release 1+)',
    'weight' => '15',
    'children' => array(
      0 => 'field_internal_anmerkung',
      1 => 'field_workflow_status',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Workflow (Release 1+)',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_workflow|node|centerpage|form'] = $field_group;

  return $export;
}
