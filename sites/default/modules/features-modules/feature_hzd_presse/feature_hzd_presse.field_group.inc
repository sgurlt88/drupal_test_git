<?php
/**
 * @file
 * feature_hzd_presse.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function feature_hzd_presse_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_01|node|pressemitteilung|form';
  $field_group->group_name = 'group_01';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pressemitteilung';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'TabGruppe-01',
    'weight' => '0',
    'children' => array(
      0 => 'group_item01',
      1 => 'group_item02',
      2 => 'group_item03',
      3 => 'group_item10',
      4 => 'group_item08',
      5 => 'group_item09',
      6 => 'group_marginalspalte',
      7 => 'group_newsletter',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_01|node|pressemitteilung|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_01|node|pressesprecher|form';
  $field_group->group_name = 'group_01';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pressesprecher';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'TabGruppe',
    'weight' => '0',
    'children' => array(
      0 => 'group_item01',
      1 => 'group_item08',
      2 => 'group_item09',
      3 => 'group_item10',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_01|node|pressesprecher|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_01|node|pressestelle|form';
  $field_group->group_name = 'group_01';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pressestelle';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'TabGruppe-01',
    'weight' => '19',
    'children' => array(
      0 => 'group_item01',
      1 => 'group_item02',
      2 => 'group_item09',
      3 => 'group_item08',
      4 => 'group_item10',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_01|node|pressestelle|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fragen|node|pressemitteilung|default';
  $field_group->group_name = 'group_fragen';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pressemitteilung';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Kontakt für Pressevertreter',
    'weight' => '9',
    'children' => array(
      0 => 'field_nref_pressesprecher',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Kontakt für Pressevertreter',
      'instance_settings' => array(
        'classes' => 'fragenblock',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_fragen|node|pressemitteilung|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_infoblock|node|pressemitteilung|default';
  $field_group->group_name = 'group_infoblock';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pressemitteilung';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Infoblock',
    'weight' => '2',
    'children' => array(
      0 => 'field_datum_default',
      1 => 'field_nref_pressestelle',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Infoblock',
      'instance_settings' => array(
        'classes' => 'infoblock',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_infoblock|node|pressemitteilung|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_item01|node|pressemitteilung|form';
  $field_group->group_name = 'group_item01';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pressemitteilung';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_01';
  $field_group->data = array(
    'label' => 'Hauptinhalte',
    'weight' => '27',
    'children' => array(
      0 => 'field_titel',
      1 => 'field_abstract',
      2 => 'field_datum_default',
      3 => 'field_inhalt',
      4 => 'field_nref_pressestelle',
      5 => 'field_spitzmarke',
      6 => 'field_link_zum_externen_inhalt',
      7 => 'field_nref_pressesprecher',
      8 => 'field_herausgeber',
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
  $export['group_item01|node|pressemitteilung|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_item01|node|pressesprecher|form';
  $field_group->group_name = 'group_item01';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pressesprecher';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_01';
  $field_group->data = array(
    'label' => 'Hauptinhalte',
    'weight' => '12',
    'children' => array(
      0 => 'field_person',
      1 => 'field_bild_des_sprechers',
      2 => 'field_nref_pressestelle',
      3 => 'field_email_main',
      4 => 'field_person_w',
      5 => 'field_pressesprecher_oder_in',
      6 => 'metatags',
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
  $export['group_item01|node|pressesprecher|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_item01|node|pressestelle|form';
  $field_group->group_name = 'group_item01';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pressestelle';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_01';
  $field_group->data = array(
    'label' => 'Hauptinhalte',
    'weight' => '31',
    'children' => array(
      0 => 'field_titel',
      1 => 'field_telefon_main',
      2 => 'field_telefon_fax',
      3 => 'field_email_main',
      4 => 'field_adresse',
      5 => 'field_oeffnungszeiten',
      6 => 'field_nref_pressesprecher',
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
  $export['group_item01|node|pressestelle|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_item02|node|pressemitteilung|form';
  $field_group->group_name = 'group_item02';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pressemitteilung';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_01';
  $field_group->data = array(
    'label' => 'Medien und weitere Inhalte',
    'weight' => '28',
    'children' => array(
      0 => 'field_linklist',
      1 => 'field_tags',
      2 => 'field_file_attachments',
      3 => 'field_hauptbild',
      4 => 'field_ref_bildergalerie',
      5 => 'field_nref_video',
      6 => 'field_video_o_bild',
      7 => 'field_newsletter_anhang',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Medien und weitere Inhalte',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_item02|node|pressemitteilung|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_item02|node|pressestelle|form';
  $field_group->group_name = 'group_item02';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pressestelle';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_01';
  $field_group->data = array(
    'label' => 'Medien',
    'weight' => '32',
    'children' => array(),
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
  $export['group_item02|node|pressestelle|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_item03|node|pressemitteilung|form';
  $field_group->group_name = 'group_item03';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pressemitteilung';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_01';
  $field_group->data = array(
    'label' => 'Teaser-Ansichten',
    'weight' => '29',
    'children' => array(
      0 => 'field_link_datei_1',
      1 => 'field_link_datei_2',
      2 => 'field_spitzmarke_link_datei_1',
      3 => 'field_spitzmarke_link_datei_2',
      4 => 'field_url_themenseite',
      5 => 'field_tab_titel',
      6 => 'field_themenslider',
      7 => 'field_sliderbuehne',
      8 => 'field_themendossier',
      9 => 'field_empfehlung_der_redaktion',
      10 => 'field_ts_teaserspitzmarke',
      11 => 'field_ts_teasertitel',
      12 => 'field_ts_teasertext',
      13 => 'field_td_teaserspitzmarke',
      14 => 'field_td_teasertitel',
      15 => 'field_td_teasertext',
      16 => 'field_sb_teasertitel',
      17 => 'field_sb_teasertext',
      18 => 'field_edr_teaserspitzmarke',
      19 => 'field_edr_teasertitel',
      20 => 'group_universal_teaser',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Teaser-Ansichten',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_item03|node|pressemitteilung|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_item08|node|pressemitteilung|form';
  $field_group->group_name = 'group_item08';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pressemitteilung';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_01';
  $field_group->data = array(
    'label' => 'Anzeige',
    'weight' => '32',
    'children' => array(
      0 => 'field_sticky',
      1 => 'domain',
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
  $export['group_item08|node|pressemitteilung|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_item08|node|pressesprecher|form';
  $field_group->group_name = 'group_item08';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pressesprecher';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_01';
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
  $export['group_item08|node|pressesprecher|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_item08|node|pressestelle|form';
  $field_group->group_name = 'group_item08';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pressestelle';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_01';
  $field_group->data = array(
    'label' => 'Anzeige',
    'weight' => '33',
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
  $export['group_item08|node|pressestelle|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_marginalspalte|node|pressemitteilung|form';
  $field_group->group_name = 'group_marginalspalte';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pressemitteilung';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_01';
  $field_group->data = array(
    'label' => 'Marginalspalte und Blöcke',
    'weight' => '30',
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
      9 => 'field_marginalspalte_karr_block',
      10 => 'field_marginalspalte_uni_block',
      11 => 'field_marginalspalte_uni_inhalt',
      12 => 'field_fc_verwandte_inhalte',
      13 => 'field_verwandte_inhalte_block_',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Marginalspalte und Blöcke',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_marginalspalte|node|pressemitteilung|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_newsletter|node|pressemitteilung|form';
  $field_group->group_name = 'group_newsletter';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pressemitteilung';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_01';
  $field_group->data = array(
    'label' => 'Newsletter',
    'weight' => '31',
    'children' => array(
      0 => 'field_simplenews_term',
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
  $export['group_newsletter|node|pressemitteilung|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_universal_teaser|node|pressemitteilung|form';
  $field_group->group_name = 'group_universal_teaser';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pressemitteilung';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_item03';
  $field_group->data = array(
    'label' => 'Universal-Teaser',
    'weight' => '137',
    'children' => array(
      0 => 'field_teaser',
      1 => 'field_teaser_titel',
      2 => 'field_teaser_bild',
      3 => 'field_teaser_spitzmarke',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_universal_teaser|node|pressemitteilung|form'] = $field_group;

  return $export;
}
