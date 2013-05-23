<?php
/**
 * @file
 * feature_hzd_content.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function feature_hzd_content_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_01|field_collection_item|field_fc_listeninhalte_pt|evm_fc_teaserliste';
  $field_group->group_name = 'group_01';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_fc_listeninhalte_pt';
  $field_group->mode = 'evm_fc_teaserliste';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'wrapperCopy',
    'weight' => '1',
    'children' => array(
      0 => 'field_spitzmarke',
      1 => 'field_titel',
      2 => 'field_abstract',
      3 => 'field_inhalt',
      4 => 'field_link_extern',
      5 => 'field_link_intern',
      6 => 'field_file_attachments',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'wrapperCopy',
      'instance_settings' => array(
        'classes' => 'wrapperCopy',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_01|field_collection_item|field_fc_listeninhalte_pt|evm_fc_teaserliste'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_01|node|allgemeine_seite|form';
  $field_group->group_name = 'group_01';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'allgemeine_seite';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'TabGruppe-01',
    'weight' => '0',
    'children' => array(
      0 => 'group_item01',
      1 => 'group_item02',
      2 => 'group_item03',
      3 => 'group_item04',
      4 => 'group_item05',
      5 => 'group_item06',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_01|node|allgemeine_seite|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_01|node|artikel|form';
  $field_group->group_name = 'group_01';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'artikel';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'TabGruppe-01',
    'weight' => '0',
    'children' => array(
      0 => 'group_item01',
      1 => 'group_item02',
      2 => 'group_item10',
      3 => 'group_item03',
      4 => 'group_item09',
      5 => 'group_item08',
      6 => 'group_marginalspalte',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_01|node|artikel|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_01|node|listenseite|form';
  $field_group->group_name = 'group_01';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'listenseite';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'TabGruppe-01',
    'weight' => '0',
    'children' => array(
      0 => 'group_item01',
      1 => 'group_item08',
      2 => 'group_item09',
      3 => 'group_item10',
      4 => 'group_marginalspalte',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_01|node|listenseite|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_01|node|socialmediaitem|form';
  $field_group->group_name = 'group_01';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'socialmediaitem';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'TabGruppe-01',
    'weight' => '0',
    'children' => array(
      0 => 'group_tabitem02',
      1 => 'group_item01',
      2 => 'group_item03',
      3 => 'group_item10',
      4 => 'group_item09',
      5 => 'group_item11',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_01|node|socialmediaitem|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_01|node|socialmediateaser|form';
  $field_group->group_name = 'group_01';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'socialmediateaser';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'TabGruppe-01',
    'weight' => '0',
    'children' => array(
      0 => 'group_tabitem01',
      1 => 'group_item02',
      2 => 'group_item03',
      3 => 'group_item10',
      4 => 'group_item09',
      5 => 'group_item11',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_01|node|socialmediateaser|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ansicht|node|universal|form';
  $field_group->group_name = 'group_ansicht';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'universal';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_group01';
  $field_group->data = array(
    'label' => 'Ansicht',
    'weight' => '2',
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
  $export['group_ansicht|node|universal|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ansicht|node|zitat_des_tages|form';
  $field_group->group_name = 'group_ansicht';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'zitat_des_tages';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_group01';
  $field_group->data = array(
    'label' => 'Ansicht',
    'weight' => '12',
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
  $export['group_ansicht|node|zitat_des_tages|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_group01|node|universal|form';
  $field_group->group_name = 'group_group01';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'universal';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group',
    'weight' => '0',
    'children' => array(
      0 => 'group_workflow',
      1 => 'group_ansicht',
      2 => 'group_hauptinhalt',
      3 => 'group_metadaten',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_group01|node|universal|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_group01|node|zitat_des_tages|form';
  $field_group->group_name = 'group_group01';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'zitat_des_tages';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group',
    'weight' => '0',
    'children' => array(
      0 => 'group_hauptinhalt',
      1 => 'group_workflow',
      2 => 'group_ansicht',
      3 => 'group_metadaten',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_group01|node|zitat_des_tages|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hauptinhalt|node|universal|form';
  $field_group->group_name = 'group_hauptinhalt';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'universal';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_group01';
  $field_group->data = array(
    'label' => 'Hauptinhalt',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_titel',
      2 => 'field_linklist',
      3 => 'field_icon',
      4 => 'field_universal_bild',
      5 => 'field_spitzmarke',
      6 => 'field_blocktitel',
      7 => 'field_block_titel',
      8 => 'title',
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
  $export['group_hauptinhalt|node|universal|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hauptinhalt|node|zitat_des_tages|form';
  $field_group->group_name = 'group_hauptinhalt';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'zitat_des_tages';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_group01';
  $field_group->data = array(
    'label' => 'Hauptinhalt',
    'weight' => '11',
    'children' => array(
      0 => 'body',
      1 => 'field_bild_des_sprechers',
      2 => 'field_sprecher',
      3 => 'field_sprecher_amt',
      4 => 'field_zitat_ort',
      5 => 'field_block_titel',
      6 => 'field_link_zum_artikel',
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
  $export['group_hauptinhalt|node|zitat_des_tages|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_item01|node|biographie|form';
  $field_group->group_name = 'group_item01';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'biografie';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_01';
  $field_group->data = array(
    'label' => 'Hauptinhalte',
    'weight' => '5',
    'children' => array(
      0 => 'field_titel',
      1 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Hauptinhalte',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_item01|node|biographie|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_item01|node|listenseite|form';
  $field_group->group_name = 'group_item01';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'listenseite';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_01';
  $field_group->data = array(
    'label' => 'Artikel-Inhalt',
    'weight' => '21',
    'children' => array(
      0 => 'field_abstract',
      1 => 'field_titel',
      2 => 'field_spitzmarke',
      3 => 'field_fc_listeninhalte_pt',
      4 => 'field_inhalt',
      5 => 'title',
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
  $export['group_item01|node|listenseite|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_item01|node|socialmediaitem|form';
  $field_group->group_name = 'group_item01';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'socialmediaitem';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_01';
  $field_group->data = array(
    'label' => 'Hauptinhalte',
    'weight' => '1',
    'children' => array(
      0 => 'field_datum_detailed',
      1 => 'field_smi_textblock',
      2 => 'field_termref_socialnetwork',
      3 => 'field_smi_url',
      4 => 'field_bild_des_sprechers',
      5 => 'field_sprecher',
      6 => 'field_sprecher_amt',
      7 => 'field_titel',
      8 => 'title',
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
  $export['group_item01|node|socialmediaitem|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_item02|node|socialmediateaser|form';
  $field_group->group_name = 'group_item02';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'socialmediateaser';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_01';
  $field_group->data = array(
    'label' => 'Medien',
    'weight' => '38',
    'children' => array(),
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
  $export['group_item02|node|socialmediateaser|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_item03|node|allgemeine_seite|form';
  $field_group->group_name = 'group_item03';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'allgemeine_seite';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_01';
  $field_group->data = array(
    'label' => 'Marginalspalte',
    'weight' => '9',
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
  $export['group_item03|node|allgemeine_seite|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_item03|node|artikel|form';
  $field_group->group_name = 'group_item03';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'artikel';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_01';
  $field_group->data = array(
    'label' => 'Teaser-Ansichten',
    'weight' => '22',
    'children' => array(
      0 => 'field_link_datei_1',
      1 => 'field_spitzmarke_link_datei_1',
      2 => 'field_link_datei_2',
      3 => 'field_spitzmarke_link_datei_2',
      4 => 'field_url_themenseite',
      5 => 'field_tab_titel',
      6 => 'field_themenslider',
      7 => 'field_sliderbuehne',
      8 => 'field_themendossier',
      9 => 'field_empfehlung_der_redaktion',
      10 => 'field_ts_teasertext',
      11 => 'field_ts_teaserspitzmarke',
      12 => 'field_ts_teasertitel',
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
  $export['group_item03|node|artikel|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_item03|node|biographie|form';
  $field_group->group_name = 'group_item03';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'biografie';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_01';
  $field_group->data = array(
    'label' => 'Weitere Inhalte',
    'weight' => '8',
    'children' => array(
      0 => 'field_linklist',
      1 => 'field_tags',
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
  $export['group_item03|node|biographie|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_item03|node|socialmediaitem|form';
  $field_group->group_name = 'group_item03';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'socialmediaitem';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_01';
  $field_group->data = array(
    'label' => 'Weitere Inhalte',
    'weight' => '3',
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
  $export['group_item03|node|socialmediaitem|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_item03|node|socialmediateaser|form';
  $field_group->group_name = 'group_item03';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'socialmediateaser';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_01';
  $field_group->data = array(
    'label' => 'Weitere Inhalte',
    'weight' => '39',
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
  $export['group_item03|node|socialmediateaser|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_item04|node|biographie|form';
  $field_group->group_name = 'group_item04';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'biografie';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_01';
  $field_group->data = array(
    'label' => 'Personendaten',
    'weight' => '6',
    'children' => array(
      0 => 'field_person_name',
      1 => 'field_geburtsdatum',
      2 => 'field_familienstand',
      3 => 'field_inhalt',
      4 => 'field_konfession',
      5 => 'field_geburtsort',
      6 => 'field_kinder',
      7 => 'field_amt',
      8 => 'field_lebenslauf',
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
  $export['group_item04|node|biographie|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_item05|node|allgemeine_seite|form';
  $field_group->group_name = 'group_item05';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'allgemeine_seite';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_01';
  $field_group->data = array(
    'label' => 'Metadaten',
    'weight' => '11',
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
  $export['group_item05|node|allgemeine_seite|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_item06|node|allgemeine_seite|form';
  $field_group->group_name = 'group_item06';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'allgemeine_seite';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_01';
  $field_group->data = array(
    'label' => 'Workflow (Release 1+)',
    'weight' => '12',
    'children' => array(
      0 => 'field_workflow_status',
      1 => 'field_internal_anmerkung',
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
  $export['group_item06|node|allgemeine_seite|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_item08|node|artikel|form';
  $field_group->group_name = 'group_item08';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'artikel';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_01';
  $field_group->data = array(
    'label' => 'Anzeige',
    'weight' => '25',
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
  $export['group_item08|node|artikel|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_item08|node|biografie|form';
  $field_group->group_name = 'group_item08';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'biografie';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_01';
  $field_group->data = array(
    'label' => 'Anzeige',
    'weight' => '10',
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
  $export['group_item08|node|biografie|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_item08|node|listenseite|form';
  $field_group->group_name = 'group_item08';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'listenseite';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_01';
  $field_group->data = array(
    'label' => 'Anzeige',
    'weight' => '23',
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
  $export['group_item08|node|listenseite|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_item09|node|socialmediaitem|form';
  $field_group->group_name = 'group_item09';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'socialmediaitem';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_01';
  $field_group->data = array(
    'label' => 'Metadaten',
    'weight' => '5',
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
  $export['group_item09|node|socialmediaitem|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_item09|node|socialmediateaser|form';
  $field_group->group_name = 'group_item09';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'socialmediateaser';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_01';
  $field_group->data = array(
    'label' => 'Metadaten',
    'weight' => '42',
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
  $export['group_item09|node|socialmediateaser|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_item10|node|artikel|form';
  $field_group->group_name = 'group_item10';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'artikel';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_01';
  $field_group->data = array(
    'label' => 'Workflow (Release 1+)',
    'weight' => '27',
    'children' => array(
      0 => 'field_workflow_status',
      1 => 'field_internal_anmerkung',
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
  $export['group_item10|node|artikel|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_item10|node|biographie|form';
  $field_group->group_name = 'group_item10';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'biografie';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_01';
  $field_group->data = array(
    'label' => 'Workflow (Release 1+)',
    'weight' => '12',
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
  $export['group_item10|node|biographie|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_item10|node|listenseite|form';
  $field_group->group_name = 'group_item10';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'listenseite';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_01';
  $field_group->data = array(
    'label' => 'Workflow (Release 1+)',
    'weight' => '25',
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
  $export['group_item10|node|listenseite|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_item10|node|socialmediaitem|form';
  $field_group->group_name = 'group_item10';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'socialmediaitem';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_01';
  $field_group->data = array(
    'label' => 'Workflow (Release 1+)',
    'weight' => '6',
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
  $export['group_item10|node|socialmediaitem|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_item10|node|socialmediateaser|form';
  $field_group->group_name = 'group_item10';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'socialmediateaser';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_01';
  $field_group->data = array(
    'label' => 'Workflow (Release 1+)',
    'weight' => '43',
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
  $export['group_item10|node|socialmediateaser|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_item11|node|socialmediaitem|form';
  $field_group->group_name = 'group_item11';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'socialmediaitem';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_01';
  $field_group->data = array(
    'label' => 'Anzeige',
    'weight' => '4',
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
  $export['group_item11|node|socialmediaitem|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_item11|node|socialmediateaser|form';
  $field_group->group_name = 'group_item11';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'socialmediateaser';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_01';
  $field_group->data = array(
    'label' => 'Anzeige',
    'weight' => '40',
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
  $export['group_item11|node|socialmediateaser|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_marginalspalte|node|artikel|form';
  $field_group->group_name = 'group_marginalspalte';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'artikel';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_01';
  $field_group->data = array(
    'label' => 'Marginalspalte und Blöcke',
    'weight' => '23',
    'children' => array(
      0 => 'field_marginalspalte_z_inhalt',
      1 => 'field_marginalspalte_zitat_block',
      2 => 'field_marginalspalte_so_me_block',
      3 => 'field_marginalspalte_so_m_inhalt',
      4 => 'field_marginalspalte_me_ge_block',
      5 => 'field_marginalspalte_vid_block',
      6 => 'field_marginalspalte_vid_inhalt',
      7 => 'field_marginalspalte_kon_block',
      8 => 'field_marginalspalte_kon_inhalt',
      9 => 'field_marginalspalte_uni_inhalt',
      10 => 'field_marginalspalte_uni_block',
      11 => 'field_marginalspalte_karr_block',
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
  $export['group_marginalspalte|node|artikel|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_marginalspalte|node|biografie|form';
  $field_group->group_name = 'group_marginalspalte';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'biografie';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_01';
  $field_group->data = array(
    'label' => 'Marginalspalte',
    'weight' => '9',
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
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Marginalspalte',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_marginalspalte|node|biografie|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_marginalspalte|node|listenseite|form';
  $field_group->group_name = 'group_marginalspalte';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'listenseite';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_01';
  $field_group->data = array(
    'label' => 'Marginalspalte',
    'weight' => '22',
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
  $export['group_marginalspalte|node|listenseite|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_metadaten|node|universal|form';
  $field_group->group_name = 'group_metadaten';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'universal';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_group01';
  $field_group->data = array(
    'label' => 'Metadaten',
    'weight' => '3',
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
  $export['group_metadaten|node|universal|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_metadaten|node|zitat_des_tages|form';
  $field_group->group_name = 'group_metadaten';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'zitat_des_tages';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_group01';
  $field_group->data = array(
    'label' => 'Metadaten',
    'weight' => '13',
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
  $export['group_metadaten|node|zitat_des_tages|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tabitem01|node|socialmediateaser|form';
  $field_group->group_name = 'group_tabitem01';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'socialmediateaser';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_01';
  $field_group->data = array(
    'label' => 'Hauptinhalte',
    'weight' => '37',
    'children' => array(
      0 => 'field_titel',
      1 => 'field_smi_textblock',
      2 => 'field_smi_url',
      3 => 'field_termref_socialnetwork',
      4 => 'field_sprecher',
      5 => 'field_sprecher_amt',
      6 => 'field_bild_des_sprechers',
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
  $export['group_tabitem01|node|socialmediateaser|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tabitem02|node|socialmediaitem|form';
  $field_group->group_name = 'group_tabitem02';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'socialmediaitem';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_01';
  $field_group->data = array(
    'label' => 'Medien',
    'weight' => '2',
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
  $export['group_tabitem02|node|socialmediaitem|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_universal_teaser|node|artikel|form';
  $field_group->group_name = 'group_universal_teaser';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'artikel';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_item03';
  $field_group->data = array(
    'label' => 'Universal-Teaser',
    'weight' => '103',
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
  $export['group_universal_teaser|node|artikel|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_workflow|node|universal|form';
  $field_group->group_name = 'group_workflow';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'universal';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_group01';
  $field_group->data = array(
    'label' => 'Workflow (Release 1+)',
    'weight' => '5',
    'children' => array(
      0 => 'field_workflow_status',
      1 => 'field_internal_anmerkung',
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
  $export['group_workflow|node|universal|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_workflow|node|zitat_des_tages|form';
  $field_group->group_name = 'group_workflow';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'zitat_des_tages';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_group01';
  $field_group->data = array(
    'label' => 'Workflow (Release 1+)',
    'weight' => '14',
    'children' => array(
      0 => 'field_workflow_status',
      1 => 'field_internal_anmerkung',
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
  $export['group_workflow|node|zitat_des_tages|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_zitate|node|artikel|default';
  $field_group->group_name = 'group_zitate';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'artikel';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Zitate',
    'weight' => '12',
    'children' => array(
      0 => 'field_tab_titel',
      1 => 'field_themenslider',
      2 => 'field_sliderbuehne',
    ),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_zitate|node|artikel|default'] = $field_group;

  return $export;
}
