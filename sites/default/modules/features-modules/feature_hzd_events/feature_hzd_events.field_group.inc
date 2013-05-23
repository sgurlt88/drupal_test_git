<?php
/**
 * @file
 * feature_hzd_events.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function feature_hzd_events_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_01|node|termin|form';
  $field_group->group_name = 'group_01';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'termin';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'TabGruppe-01',
    'weight' => '0',
    'children' => array(
      0 => 'group_item10',
      1 => 'group_item01',
      2 => 'group_item02',
      3 => 'group_item03',
      4 => 'group_item04',
      5 => 'group_item08',
      6 => 'group_item09',
      7 => 'group_marginalspalte',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_01|node|termin|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_01|node|veranstalter|form';
  $field_group->group_name = 'group_01';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'veranstalter';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'TabGruppe-01',
    'weight' => '0',
    'children' => array(
      0 => 'group_item01',
      1 => 'group_item03',
      2 => 'group_item02',
      3 => 'group_item10',
      4 => 'group_item08',
      5 => 'group_item09',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_01|node|veranstalter|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_01|node|veranstaltungsort|form';
  $field_group->group_name = 'group_01';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'veranstaltungsort';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'TabGruppe-01',
    'weight' => '6',
    'children' => array(
      0 => 'group_item01',
      1 => 'group_item02',
      2 => 'group_item10',
      3 => 'group_item03',
      4 => 'group_item04',
      5 => 'group_item09',
      6 => 'group_item08',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_01|node|veranstaltungsort|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_item01|node|termin|form';
  $field_group->group_name = 'group_item01';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'termin';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_01';
  $field_group->data = array(
    'label' => 'Hauptinfos',
    'weight' => '26',
    'children' => array(
      0 => 'field_termin_datum',
      1 => 'field_titel',
      2 => 'field_spitzmarke',
      3 => 'field_inhalt',
      4 => 'field_teaser_titel',
      5 => 'field_teaser',
      6 => 'field_nref_veranstaltungsort',
      7 => 'field_termin_region',
      8 => 'field_termin_kategorie',
      9 => 'title',
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
  $export['group_item01|node|termin|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_item01|node|veranstalter|form';
  $field_group->group_name = 'group_item01';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'veranstalter';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_01';
  $field_group->data = array(
    'label' => 'Hauptinhalte',
    'weight' => '32',
    'children' => array(
      0 => 'field_titel',
      1 => 'field_adresse',
      2 => 'field_untertitel',
      3 => 'field_inhalt',
      4 => 'field_email_main',
      5 => 'field_telefon_main',
      6 => 'field_oeffnungszeiten',
      7 => 'title',
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
  $export['group_item01|node|veranstalter|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_item01|node|veranstaltungsort|form';
  $field_group->group_name = 'group_item01';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'veranstaltungsort';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_01';
  $field_group->data = array(
    'label' => 'Hauptinhalte',
    'weight' => '38',
    'children' => array(
      0 => 'field_titel',
      1 => 'field_inhalt',
      2 => 'field_untertitel',
      3 => 'title',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_item01|node|veranstaltungsort|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_item03|node|termin|form';
  $field_group->group_name = 'group_item03';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'termin';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_01';
  $field_group->data = array(
    'label' => 'Veranstalter',
    'weight' => '27',
    'children' => array(
      0 => 'field_ansprechpartner',
      1 => 'field_nref_veranstalter',
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
  $export['group_item03|node|termin|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_item03|node|veranstalter|form';
  $field_group->group_name = 'group_item03';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'veranstalter';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_01';
  $field_group->data = array(
    'label' => 'Medien',
    'weight' => '34',
    'children' => array(
      0 => 'field_hauptbild',
      1 => 'field_file_attachments',
      2 => 'field_hauptvideo',
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
  $export['group_item03|node|veranstalter|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_item03|node|veranstaltungsort|form';
  $field_group->group_name = 'group_item03';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'veranstaltungsort';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_01';
  $field_group->data = array(
    'label' => 'Weitere Inhalte',
    'weight' => '40',
    'children' => array(
      0 => 'field_linklist',
      1 => 'field_tags',
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
  $export['group_item03|node|veranstaltungsort|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_item04|node|termin|form';
  $field_group->group_name = 'group_item04';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'termin';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_01';
  $field_group->data = array(
    'label' => 'Weitere Inhalte',
    'weight' => '29',
    'children' => array(
      0 => 'field_tags',
      1 => 'field_linklist',
      2 => 'field_file_attachments',
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
  $export['group_item04|node|termin|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_item04|node|veranstaltungsort|form';
  $field_group->group_name = 'group_item04';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'veranstaltungsort';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_01';
  $field_group->data = array(
    'label' => 'Kontakdaten',
    'weight' => '39',
    'children' => array(
      0 => 'field_oeffnungszeiten',
      1 => 'field_adresse',
      2 => 'field_telefon_main',
      3 => 'field_telefon_fax',
      4 => 'field_email_main',
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
  $export['group_item04|node|veranstaltungsort|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_item09|node|termin|form';
  $field_group->group_name = 'group_item09';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'termin';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_01';
  $field_group->data = array(
    'label' => 'Metadaten',
    'weight' => '32',
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
  $export['group_item09|node|termin|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_item09|node|veranstalter|form';
  $field_group->group_name = 'group_item09';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'veranstalter';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_01';
  $field_group->data = array(
    'label' => 'Metadaten',
    'weight' => '36',
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
  $export['group_item09|node|veranstalter|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_item09|node|veranstaltungsort|form';
  $field_group->group_name = 'group_item09';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'veranstaltungsort';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_01';
  $field_group->data = array(
    'label' => 'Metadaten',
    'weight' => '43',
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
  $export['group_item09|node|veranstaltungsort|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_marginalspalte|node|termin|form';
  $field_group->group_name = 'group_marginalspalte';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'termin';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_01';
  $field_group->data = array(
    'label' => 'Marginalspalte',
    'weight' => '30',
    'children' => array(
      0 => 'field_marginalspalte_zitat_block',
      1 => 'field_marginalspalte_z_inhalt',
      2 => 'field_marginalspalte_so_me_block',
      3 => 'field_marginalspalte_so_m_inhalt',
      4 => 'field_marginalspalte_vid_block',
      5 => 'field_marginalspalte_vid_inhalt',
      6 => 'field_marginalspalte_me_ge_block',
      7 => 'field_marginalspalte_kon_block',
      8 => 'field_marginalspalte_kon_inhalt',
      9 => 'field_marginalspalte_karr_block',
      10 => 'field_marginalspalte_uni_block',
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
  $export['group_marginalspalte|node|termin|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sonstiges|node|termin|default';
  $field_group->group_name = 'group_sonstiges';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'termin';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_termindetails';
  $field_group->data = array(
    'label' => 'Sonstiges Infos',
    'weight' => '6',
    'children' => array(
      0 => 'field_termin_region',
      1 => 'field_termin_kategorie',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_sonstiges|node|termin|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_termindetails|node|termin|default';
  $field_group->group_name = 'group_termindetails';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'termin';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '5',
    'children' => array(
      0 => 'group_veranstaltungsort',
      1 => 'group_veranstalter',
      2 => 'group_tickets',
      3 => 'group_media',
      4 => 'group_sonstiges',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_termindetails|node|termin|default'] = $field_group;

  return $export;
}
