<?php
/**
 * @file
 * feature_hzd_structure.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function feature_hzd_structure_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-centerpage-field_empfehlung_centerpage'
  $field_instances['node-centerpage-field_empfehlung_centerpage'] = array(
    'bundle' => 'centerpage',
    'default_value' => array(
      0 => array(
        'value' => 'Nein',
      ),
    ),
    'deleted' => 0,
    'description' => 'Soll der Block "<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/centerpage_empfehlung.png?height=400" class="colorbox-load">Empfehlungen der Redaktion</a>" unterhalb der Übersichtsseite angezeigt werden?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_empfehlung_centerpage',
    'label' => 'Empfehlung der Redaktion',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-centerpage-field_fc_metadaten'
  $field_instances['node-centerpage-field_fc_metadaten'] = array(
    'bundle' => 'centerpage',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fc_metadaten',
    'label' => 'Metadaten',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'node-centerpage-field_internal_anmerkung'
  $field_instances['node-centerpage-field_internal_anmerkung'] = array(
    'bundle' => 'centerpage',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_internal_anmerkung',
    'label' => 'Anmerkung (intern)',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-centerpage-field_layout_centerpage'
  $field_instances['node-centerpage-field_layout_centerpage'] = array(
    'bundle' => 'centerpage',
    'default_value' => array(
      0 => array(
        'value' => 'Layout groß',
      ),
    ),
    'deleted' => 0,
    'description' => 'Beispiele:<br> 
"<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/centerpage_groß.png?height=700" class="colorbox-load">Centerpage</a>"<br> 
"<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/centerpage_klein.png?height=700" class="colorbox-load">Ressortübersicht (Bildgröße optimiert für Layout ohne linke Seitennavigation)</a>"<br> 
"<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/centerpage_klein_weiter.png?height=700" class="colorbox-load">Ressortübersicht ohne "Weiterlesen" (Bildgröße optimiert für Layout ohne linke Seitennavigation)</a>"<br> 
"<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/centerpage_artikel.png?height=700" class="colorbox-load">Teaserliste (3. Navigationsebene)</a>"
',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_layout_centerpage',
    'label' => 'Layout',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'options_buttons',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-centerpage-field_link_datei_1'
  $field_instances['node-centerpage-field_link_datei_1'] = array(
    'bundle' => 'centerpage',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Die erste Verlinkung auf eine interne oder externe Seite oder eine Datei. <b>Im "Title"-Feld bitte maximal 30 Zeichen eingeben.</b> Optimal wären ca. 20 Zeichen.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'link_default',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_link_datei_1',
    'label' => 'Link/Datei 1',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 30,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(
        'maxlength_js_label' => 'Von @limit Zeichen stehen Ihnen noch <strong>@remaining</strong> zur Verfügung.',
      ),
      'type' => 'link_field',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-centerpage-field_link_datei_2'
  $field_instances['node-centerpage-field_link_datei_2'] = array(
    'bundle' => 'centerpage',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Die zweite Verlinkung auf eine interne oder externe Seite oder eine Datei. <b>Im "Title"-Feld bitte maximal 30 Zeichen eingeben.</b> Optimal wären ca. 20 Zeichen.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'link_default',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_link_datei_2',
    'label' => 'Link/Datei 2',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 30,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(
        'maxlength_js_label' => 'Von @limit Zeichen stehen Ihnen noch <strong>@remaining</strong> zur Verfügung.',
      ),
      'type' => 'link_field',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-centerpage-field_marginalspalte_karr_block'
  $field_instances['node-centerpage-field_marginalspalte_karr_block'] = array(
    'bundle' => 'centerpage',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Soll zu diesem Artikel in der rechten Marginalspalte der Block "<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/karriereportalblock.png?height=400" class="colorbox-load">Karriereportal</a>" angezeigt werden? Wenn ja, aktivieren Sie die Checkbox.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_marginalspalte_karr_block',
    'label' => 'Karriere Block',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'node-centerpage-field_marginalspalte_kon_block'
  $field_instances['node-centerpage-field_marginalspalte_kon_block'] = array(
    'bundle' => 'centerpage',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Soll zu diesem Artikel in der rechten Marginalspalte der Block "<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/kontaktblock.png?height=400" class="colorbox-load">Kontakt</a>" angezeigt werden? Wenn ja, aktivieren Sie die Checkbox.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_marginalspalte_kon_block',
    'label' => 'Kontakt Block',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'node-centerpage-field_marginalspalte_kon_inhalt'
  $field_instances['node-centerpage-field_marginalspalte_kon_inhalt'] = array(
    'bundle' => 'centerpage',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'In dieses Feld geben Sie nun den Titel des anzuzeigenden Kontakts ein.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_marginalspalte_kon_inhalt',
    'label' => 'Kontakt Inhalt',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'node_reference',
      'settings' => array(
        'autocomplete_match' => 'contains',
        'autocomplete_path' => 'node_reference/autocomplete',
        'size' => 60,
      ),
      'type' => 'node_reference_autocomplete',
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'node-centerpage-field_marginalspalte_me_ge_block'
  $field_instances['node-centerpage-field_marginalspalte_me_ge_block'] = array(
    'bundle' => 'centerpage',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Soll zu dieser Seite in der rechten Marginalspalte der Block "<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/meistgelesen.png?height=400" class="colorbox-load">Meistgelesen</a>" angezeigt werden? Wenn ja, aktivieren Sie die Checkbox. (Hinweis: Diese Funktion ist für Release 1 nicht vorgesehen. Wenn Sie diese Checkbox aktivieren, wird der Block "Meistgelesen" trotzdem nicht angezeigt.)',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_marginalspalte_me_ge_block',
    'label' => 'Meistgelesen Block',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'options_onoff',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'node-centerpage-field_marginalspalte_so_m_inhalt'
  $field_instances['node-centerpage-field_marginalspalte_so_m_inhalt'] = array(
    'bundle' => 'centerpage',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'In dieses Feld geben Sie nun den Titel des anzuzeigenden Social Media Teasers ein.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_marginalspalte_so_m_inhalt',
    'label' => 'Social Media Inhalt',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'node_reference',
      'settings' => array(
        'autocomplete_match' => 'contains',
        'autocomplete_path' => 'node_reference/autocomplete',
        'size' => 60,
      ),
      'type' => 'node_reference_autocomplete',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-centerpage-field_marginalspalte_so_me_block'
  $field_instances['node-centerpage-field_marginalspalte_so_me_block'] = array(
    'bundle' => 'centerpage',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Soll zu diesem Artikel in der rechten Marginalspalte der Block "<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/socialmediateaser.png?height=400" class="colorbox-load">Social Media</a>" angezeigt werden? Wenn ja, aktivieren Sie die Checkbox.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_marginalspalte_so_me_block',
    'label' => 'Social Media Block',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-centerpage-field_marginalspalte_uni_block'
  $field_instances['node-centerpage-field_marginalspalte_uni_block'] = array(
    'bundle' => 'centerpage',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Soll zu diesem Artikel in der rechten Marginalspalte der Universal-Block angezeigt werden? Wenn ja, aktivieren Sie die Checkbox.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_marginalspalte_uni_block',
    'label' => 'Universal Block',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 25,
    ),
  );

  // Exported field_instance: 'node-centerpage-field_marginalspalte_uni_inhalt'
  $field_instances['node-centerpage-field_marginalspalte_uni_inhalt'] = array(
    'bundle' => 'centerpage',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'In dieses Feld geben Sie nun den Titel des anzuzeigenden Universal-Inhalts ein.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_marginalspalte_uni_inhalt',
    'label' => 'Universal Inhalt',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'node_reference',
      'settings' => array(
        'autocomplete_match' => 'contains',
        'autocomplete_path' => 'node_reference/autocomplete',
        'size' => 60,
      ),
      'type' => 'node_reference_autocomplete',
      'weight' => 26,
    ),
  );

  // Exported field_instance: 'node-centerpage-field_marginalspalte_vid_block'
  $field_instances['node-centerpage-field_marginalspalte_vid_block'] = array(
    'bundle' => 'centerpage',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Soll zu diesem Artikel in der rechten Marginalspalte der Block "<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/videobeitrag.png?height=400" class="colorbox-load">Videobeitrag</a>" angezeigt werden? Wenn ja, aktivieren Sie die Checkbox.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_marginalspalte_vid_block',
    'label' => 'Video Block',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'node-centerpage-field_marginalspalte_vid_inhalt'
  $field_instances['node-centerpage-field_marginalspalte_vid_inhalt'] = array(
    'bundle' => 'centerpage',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'In dieses Feld geben Sie nun den Titel des anzuzeigenden Videos ein.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_marginalspalte_vid_inhalt',
    'label' => 'Video Inhalt',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'node_reference',
      'settings' => array(
        'autocomplete_match' => 'contains',
        'autocomplete_path' => 'node_reference/autocomplete',
        'size' => 60,
      ),
      'type' => 'node_reference_autocomplete',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'node-centerpage-field_marginalspalte_z_inhalt'
  $field_instances['node-centerpage-field_marginalspalte_z_inhalt'] = array(
    'bundle' => 'centerpage',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'In dieses Feld geben Sie nun den Titel des anzuzeigenden Zitats ein.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_marginalspalte_z_inhalt',
    'label' => 'Zitat Inhalt',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'node_reference',
      'settings' => array(
        'autocomplete_match' => 'contains',
        'autocomplete_path' => 'node_reference/autocomplete',
        'size' => 60,
      ),
      'type' => 'node_reference_autocomplete',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-centerpage-field_marginalspalte_zitat_block'
  $field_instances['node-centerpage-field_marginalspalte_zitat_block'] = array(
    'bundle' => 'centerpage',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Soll zu diesem Artikel in der rechten Marginalspalte der Block "<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/zitatblock.png?height=400" class="colorbox-load">Zitat das Tages</a>" angezeigt werden? Wenn ja, aktivieren Sie die Checkbox.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_marginalspalte_zitat_block',
    'label' => 'Zitat Block',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-centerpage-field_spitzmarke_link_datei_1'
  $field_instances['node-centerpage-field_spitzmarke_link_datei_1'] = array(
    'bundle' => 'centerpage',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Wenn Sie ein Topthema mit weiteren Links oben auf Ihrer Centerpage anzeigen möchten, wird hier die erste Spitzmarke eingegeben. <b>Maximal 22 Zeichen.</b> Optimal wären ca. 15 Zeichen.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'text_default',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_spitzmarke_link_datei_1',
    'label' => 'Spitzmarke Link/Datei 1',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 22,
        'maxlength_js_label' => 'Von @limit Zeichen stehen Ihnen noch <strong>@remaining</strong> zur Verfügung.',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-centerpage-field_spitzmarke_link_datei_2'
  $field_instances['node-centerpage-field_spitzmarke_link_datei_2'] = array(
    'bundle' => 'centerpage',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Wenn Sie ein Topthema mit weiteren Links oben auf Ihrer Centerpage anzeigen möchten, wird hier die zweite Spitzmarke eingegeben. <b>Maximal 22 Zeichen.</b> Optimal wären ca. 15 Zeichen.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'text_default',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_spitzmarke_link_datei_2',
    'label' => 'Spitzmarke Link/Datei 2',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 22,
        'maxlength_js_label' => 'Von @limit Zeichen stehen Ihnen noch <strong>@remaining</strong> zur Verfügung.',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-centerpage-field_titel'
  $field_instances['node-centerpage-field_titel'] = array(
    'bundle' => 'centerpage',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Hierbei handelt es sich um einen rein redaktionellen Titel, welcher nicht auf der Centerpage zu sehen sein wird.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_titel',
    'label' => 'Titel',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-centerpage-field_topthema_centerpage'
  $field_instances['node-centerpage-field_topthema_centerpage'] = array(
    'bundle' => 'centerpage',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Bitte wählen Sie hier das "Topthema", welches auf der Centerpage im oberen Bereich erscheinen soll.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_topthema_centerpage',
    'label' => 'TopThema Centerpage',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-centerpage-field_unterthemen_centerpage'
  $field_instances['node-centerpage-field_unterthemen_centerpage'] = array(
    'bundle' => 'centerpage',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Wählen Sie hier aus, welche Unterthemen auf der Centerpage erscheinen sollen. Es handelt sich hierbei um Felder die sich automatisch vervollständigen, Sie müssen lediglich die ersten paar Buchstaben des Inhaltstitels eingeben, den Sie hinzufügen möchten.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_unterthemen_centerpage',
    'label' => 'Unterthemen',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'node_reference',
      'settings' => array(
        'autocomplete_match' => 'contains',
        'autocomplete_path' => 'node_reference/autocomplete',
        'size' => 60,
      ),
      'type' => 'node_reference_autocomplete',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-centerpage-field_unterthemen_ueberschrift'
  $field_instances['node-centerpage-field_unterthemen_ueberschrift'] = array(
    'bundle' => 'centerpage',
    'default_value' => array(
      0 => array(
        'value' => 'Aktuelles',
      ),
    ),
    'deleted' => 0,
    'description' => 'Bitte geben Sie hier die "<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/centerpage_ueberschrift.png?height=700" class="colorbox-load">Überschrift</a>" zu den Unterthemen ein.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_unterthemen_ueberschrift',
    'label' => 'Unterthemen Überschrift',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-centerpage-field_url_themenseite'
  $field_instances['node-centerpage-field_url_themenseite'] = array(
    'bundle' => 'centerpage',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Geben Sie bitte hier die "<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/centerpage_themenseite.png?height=700" class="colorbox-load">URL zur Themenseite</a>" ein.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'link_default',
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_url_themenseite',
    'label' => 'URL Themenseite',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-centerpage-field_workflow_status'
  $field_instances['node-centerpage-field_workflow_status'] = array(
    'bundle' => 'centerpage',
    'default_value' => array(
      0 => array(
        'tid' => 9,
      ),
    ),
    'deleted' => 0,
    'description' => 'Bitte stellen Sie hier den aktuellen Workflow-Status ein. (Für Release 1+)',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_workflow_status',
    'label' => 'Workflow-Status',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'options_select',
      'weight' => 30,
    ),
  );

  // Exported field_instance: 'node-page-field_abstract'
  $field_instances['node-page-field_abstract'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Zusammenfassungstext.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => 'h2_zusammenfassung',
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_abstract',
    'label' => 'Zusammenfassung',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 6,
      ),
      'type' => 'text_textarea',
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'node-page-field_fc_metadaten'
  $field_instances['node-page-field_fc_metadaten'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 38,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fc_metadaten',
    'label' => 'Metadaten',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 69,
    ),
  );

  // Exported field_instance: 'node-page-field_fc_minigalerie'
  $field_instances['node-page-field_fc_minigalerie'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<strong>ACHTUNG: Minigalerien sind aktuell nicht gefordert und zum Testing !!!</strong><br/>Folgende Beispiele dienen zum Testing zur Verbesserung der Redakteurshilfe:<br/>
<a href="/sites/default/themes/hessen_web_omega/documentation/verschiedenes/Beispiel_ArtikelTeaser-OhneNav.jpg?height=500" class="colorbox">Screenshot via Class Colorbox</a>.<br/>
<a href="/sites/default/themes/hessen_web_omega/documentation/verschiedenes/Beispiel_ArtikelTeaser-OhneNav.jpg?height=600" class="colorbox-load">Screenshot via Class Colorbox-Load</a>.<br/>
<a href="/sites/default/themes/hessen_web_omega/documentation/verschiedenes/Beispiel_ArtikelTeaser-OhneNav.jpg?height=500" class="colorbox-inline">Screenshot via Class Colorbox-Inline</a>.<br/>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fc_minigalerie',
    'label' => 'Minigalerien',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 26,
    ),
  );

  // Exported field_instance: 'node-page-field_file_attachments'
  $field_instances['node-page-field_file_attachments'] = array(
    'bundle' => 'page',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'mediafield',
        'settings' => array(
          'file_view_mode' => 'viewmode_download',
          'semantic_field_format' => 0,
        ),
        'type' => 'media',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_file_attachments',
    'label' => 'Downloads',
    'required' => 0,
    'settings' => array(
      'file_extensions' => 'jpg jpeg gif png txt pdf mp3 ico zip rar bmp tiff tif',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'private' => 'private',
          'public' => 'public',
          'vimeo' => 0,
          'youtube' => 0,
        ),
        'allowed_types' => array(
          'audio' => 'audio',
          'document' => 'document',
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'library_plus' => 'library_plus',
          'media_default--media_browser_1' => 'media_default--media_browser_1',
          'media_default--media_browser_my_files' => 'media_default--media_browser_my_files',
          'media_internet' => 0,
          'upload' => 'upload',
          'views_media_browser' => 0,
          'youtube' => 0,
        ),
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => 28,
    ),
  );

  // Exported field_instance: 'node-page-field_hauptbild'
  $field_instances['node-page-field_hauptbild'] = array(
    'bundle' => 'page',
    'deleted' => 0,
    'description' => 'Hauptbild des Inhalts, wird in Blöcken/Listen übernommen.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'mediafield',
        'settings' => array(
          'file_view_mode' => 'colorbox',
          'semantic_field_format' => 'image_default',
        ),
        'type' => 'media',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_hauptbild',
    'label' => 'Bild',
    'required' => 0,
    'settings' => array(
      'file_extensions' => 'jpg jpeg gif png',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'private' => 'private',
          'public' => 'public',
          'vimeo' => 0,
          'youtube' => 0,
        ),
        'allowed_types' => array(
          'application' => 0,
          'audio' => 0,
          'image' => 'image',
          'text' => 0,
          'video' => 0,
        ),
        'browser_plugins' => array(
          'library_plus' => 'library_plus',
          'media_default--media_browser_1' => 'media_default--media_browser_1',
          'media_default--media_browser_my_files' => 'media_default--media_browser_my_files',
          'media_internet' => 0,
          'upload' => 'upload',
        ),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => 25,
    ),
  );

  // Exported field_instance: 'node-page-field_inhalt'
  $field_instances['node-page-field_inhalt'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Fließtext inhalt. Hier können auch Bilder und Medien im Text platziert werden.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => 'wysiwyg_cleaned',
        ),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_inhalt',
    'label' => 'Artikelinhalt',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 36,
    ),
  );

  // Exported field_instance: 'node-page-field_internal_anmerkung'
  $field_instances['node-page-field_internal_anmerkung'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Anmerkungen zu den Workflow-Status, Gewünschte änderungen, noch fehlende Inhalte/Bilder etc. Wird nur in den Workflow listen gezeigt.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 29,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_internal_anmerkung',
    'label' => 'Anmerkung (intern)',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'node-page-field_linklist'
  $field_instances['node-page-field_linklist'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Links zu anderen Inhalten, Quellennachweisen etc.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'semantic_field_format' => 'ul_links',
        ),
        'type' => 'link_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_linklist',
    'label' => 'Links',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'node-page-field_marginalspalte_karr_block'
  $field_instances['node-page-field_marginalspalte_karr_block'] = array(
    'bundle' => 'page',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 37,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_marginalspalte_karr_block',
    'label' => 'Karriere Block',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 65,
    ),
  );

  // Exported field_instance: 'node-page-field_marginalspalte_kon_block'
  $field_instances['node-page-field_marginalspalte_kon_block'] = array(
    'bundle' => 'page',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 33,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_marginalspalte_kon_block',
    'label' => 'Kontakt Block',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 63,
    ),
  );

  // Exported field_instance: 'node-page-field_marginalspalte_kon_inhalt'
  $field_instances['node-page-field_marginalspalte_kon_inhalt'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 34,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_marginalspalte_kon_inhalt',
    'label' => 'Kontakt Inhalt',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'node_reference',
      'settings' => array(
        'autocomplete_match' => 'contains',
        'autocomplete_path' => 'node_reference/autocomplete',
        'size' => 60,
      ),
      'type' => 'node_reference_autocomplete',
      'weight' => 64,
    ),
  );

  // Exported field_instance: 'node-page-field_marginalspalte_me_ge_block'
  $field_instances['node-page-field_marginalspalte_me_ge_block'] = array(
    'bundle' => 'page',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Soll zu dieser Seite in der rechten Marginalspalte der Block "<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/meistgelesen.png?height=400" class="colorbox-load">Meistgelesen</a>" angezeigt werden? Wenn ja, aktivieren Sie die Checkbox. (Hinweis: Diese Funktion ist für Release 1 nicht vorgesehen. Wenn Sie diese Checkbox aktivieren, wird der Block "Meistgelesen" trotzdem nicht angezeigt.)',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_marginalspalte_me_ge_block',
    'label' => 'Meistgelesen Block',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'options_onoff',
      'weight' => 62,
    ),
  );

  // Exported field_instance: 'node-page-field_marginalspalte_so_m_inhalt'
  $field_instances['node-page-field_marginalspalte_so_m_inhalt'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_marginalspalte_so_m_inhalt',
    'label' => 'Social Media Inhalt',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'node_reference',
      'settings' => array(
        'autocomplete_match' => 'contains',
        'autocomplete_path' => 'node_reference/autocomplete',
        'size' => 60,
      ),
      'type' => 'node_reference_autocomplete',
      'weight' => 59,
    ),
  );

  // Exported field_instance: 'node-page-field_marginalspalte_so_me_block'
  $field_instances['node-page-field_marginalspalte_so_me_block'] = array(
    'bundle' => 'page',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_marginalspalte_so_me_block',
    'label' => 'Social Media Block',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 58,
    ),
  );

  // Exported field_instance: 'node-page-field_marginalspalte_uni_block'
  $field_instances['node-page-field_marginalspalte_uni_block'] = array(
    'bundle' => 'page',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 35,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_marginalspalte_uni_block',
    'label' => 'Universal Block',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 66,
    ),
  );

  // Exported field_instance: 'node-page-field_marginalspalte_uni_inhalt'
  $field_instances['node-page-field_marginalspalte_uni_inhalt'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 36,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_marginalspalte_uni_inhalt',
    'label' => 'Universal Inhalt',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'node_reference',
      'settings' => array(
        'autocomplete_match' => 'contains',
        'autocomplete_path' => 'node_reference/autocomplete',
        'size' => 60,
      ),
      'type' => 'node_reference_autocomplete',
      'weight' => 67,
    ),
  );

  // Exported field_instance: 'node-page-field_marginalspalte_vid_block'
  $field_instances['node-page-field_marginalspalte_vid_block'] = array(
    'bundle' => 'page',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_marginalspalte_vid_block',
    'label' => 'Video Block',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 60,
    ),
  );

  // Exported field_instance: 'node-page-field_marginalspalte_vid_inhalt'
  $field_instances['node-page-field_marginalspalte_vid_inhalt'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_marginalspalte_vid_inhalt',
    'label' => 'Video Inhalt',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'node_reference',
      'settings' => array(
        'autocomplete_match' => 'contains',
        'autocomplete_path' => 'node_reference/autocomplete',
        'size' => 60,
      ),
      'type' => 'node_reference_autocomplete',
      'weight' => 61,
    ),
  );

  // Exported field_instance: 'node-page-field_marginalspalte_z_inhalt'
  $field_instances['node-page-field_marginalspalte_z_inhalt'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 32,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_marginalspalte_z_inhalt',
    'label' => 'Zitat Inhalt',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'node_reference',
      'settings' => array(
        'autocomplete_match' => 'contains',
        'autocomplete_path' => 'node_reference/autocomplete',
        'size' => 60,
      ),
      'type' => 'node_reference_autocomplete',
      'weight' => 57,
    ),
  );

  // Exported field_instance: 'node-page-field_marginalspalte_zitat_block'
  $field_instances['node-page-field_marginalspalte_zitat_block'] = array(
    'bundle' => 'page',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 31,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_marginalspalte_zitat_block',
    'label' => 'Zitat Block',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 56,
    ),
  );

  // Exported field_instance: 'node-page-field_spitzmarke'
  $field_instances['node-page-field_spitzmarke'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Erscheint über dem Titel',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => 'span_spitzmarke',
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_spitzmarke',
    'label' => 'Spitzmarke',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 28,
    ),
  );

  // Exported field_instance: 'node-page-field_teaser'
  $field_instances['node-page-field_teaser'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Kurztext für Blöcke/Listen. Zusammenfassung des Beitrags um neugierig zu machen.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 30,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_teaser',
    'label' => 'Teaser',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 300,
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 6,
      ),
      'type' => 'text_textarea',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'node-page-field_teaser_titel'
  $field_instances['node-page-field_teaser_titel'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Alternativ Titel für Bereiche für deren Länge der Haupttitel zu lange ist. Vorwiegend Blöcke/Listen.
Max. 60 Zeichen.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_teaser_titel',
    'label' => 'Teaser-Titel',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-page-field_titel'
  $field_instances['node-page-field_titel'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => 'h1_headline',
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_titel',
    'label' => 'Titel',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 30,
    ),
  );

  // Exported field_instance: 'node-page-field_workflow_status'
  $field_instances['node-page-field_workflow_status'] = array(
    'bundle' => 'page',
    'default_value' => array(
      0 => array(
        'tid' => 9,
      ),
    ),
    'deleted' => 0,
    'description' => 'Bitte stellen Sie hier den aktuellen Workflow-Status ein. (Für Release 1+)',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_workflow_status',
    'label' => 'Workflow-Status',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'options_select',
      'weight' => 22,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('<strong>ACHTUNG: Minigalerien sind aktuell nicht gefordert und zum Testing !!!</strong><br/>Folgende Beispiele dienen zum Testing zur Verbesserung der Redakteurshilfe:<br/>
<a href="/sites/default/themes/hessen_web_omega/documentation/verschiedenes/Beispiel_ArtikelTeaser-OhneNav.jpg?height=500" class="colorbox">Screenshot via Class Colorbox</a>.<br/>
<a href="/sites/default/themes/hessen_web_omega/documentation/verschiedenes/Beispiel_ArtikelTeaser-OhneNav.jpg?height=600" class="colorbox-load">Screenshot via Class Colorbox-Load</a>.<br/>
<a href="/sites/default/themes/hessen_web_omega/documentation/verschiedenes/Beispiel_ArtikelTeaser-OhneNav.jpg?height=500" class="colorbox-inline">Screenshot via Class Colorbox-Inline</a>.<br/>');
  t('Alternativ Titel für Bereiche für deren Länge der Haupttitel zu lange ist. Vorwiegend Blöcke/Listen.
Max. 60 Zeichen.');
  t('Anmerkung (intern)');
  t('Anmerkungen zu den Workflow-Status, Gewünschte änderungen, noch fehlende Inhalte/Bilder etc. Wird nur in den Workflow listen gezeigt.');
  t('Artikelinhalt');
  t('Beispiele:<br> 
"<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/centerpage_groß.png?height=700" class="colorbox-load">Centerpage</a>"<br> 
"<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/centerpage_klein.png?height=700" class="colorbox-load">Ressortübersicht (Bildgröße optimiert für Layout ohne linke Seitennavigation)</a>"<br> 
"<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/centerpage_klein_weiter.png?height=700" class="colorbox-load">Ressortübersicht ohne "Weiterlesen" (Bildgröße optimiert für Layout ohne linke Seitennavigation)</a>"<br> 
"<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/centerpage_artikel.png?height=700" class="colorbox-load">Teaserliste (3. Navigationsebene)</a>"
');
  t('Bild');
  t('Bitte geben Sie hier die "<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/centerpage_ueberschrift.png?height=700" class="colorbox-load">Überschrift</a>" zu den Unterthemen ein.');
  t('Bitte stellen Sie hier den aktuellen Workflow-Status ein. (Für Release 1+)');
  t('Bitte wählen Sie hier das "Topthema", welches auf der Centerpage im oberen Bereich erscheinen soll.');
  t('Die erste Verlinkung auf eine interne oder externe Seite oder eine Datei. <b>Im "Title"-Feld bitte maximal 30 Zeichen eingeben.</b> Optimal wären ca. 20 Zeichen.');
  t('Die zweite Verlinkung auf eine interne oder externe Seite oder eine Datei. <b>Im "Title"-Feld bitte maximal 30 Zeichen eingeben.</b> Optimal wären ca. 20 Zeichen.');
  t('Downloads');
  t('Empfehlung der Redaktion');
  t('Erscheint über dem Titel');
  t('Fließtext inhalt. Hier können auch Bilder und Medien im Text platziert werden.');
  t('Geben Sie bitte hier die "<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/centerpage_themenseite.png?height=700" class="colorbox-load">URL zur Themenseite</a>" ein.');
  t('Hauptbild des Inhalts, wird in Blöcken/Listen übernommen.');
  t('Hierbei handelt es sich um einen rein redaktionellen Titel, welcher nicht auf der Centerpage zu sehen sein wird.');
  t('In dieses Feld geben Sie nun den Titel des anzuzeigenden Kontakts ein.');
  t('In dieses Feld geben Sie nun den Titel des anzuzeigenden Social Media Teasers ein.');
  t('In dieses Feld geben Sie nun den Titel des anzuzeigenden Universal-Inhalts ein.');
  t('In dieses Feld geben Sie nun den Titel des anzuzeigenden Videos ein.');
  t('In dieses Feld geben Sie nun den Titel des anzuzeigenden Zitats ein.');
  t('Karriere Block');
  t('Kontakt Block');
  t('Kontakt Inhalt');
  t('Kurztext für Blöcke/Listen. Zusammenfassung des Beitrags um neugierig zu machen.');
  t('Layout');
  t('Link/Datei 1');
  t('Link/Datei 2');
  t('Links');
  t('Links zu anderen Inhalten, Quellennachweisen etc.');
  t('Meistgelesen Block');
  t('Metadaten');
  t('Minigalerien');
  t('Social Media Block');
  t('Social Media Inhalt');
  t('Soll der Block "<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/centerpage_empfehlung.png?height=400" class="colorbox-load">Empfehlungen der Redaktion</a>" unterhalb der Übersichtsseite angezeigt werden?');
  t('Soll zu diesem Artikel in der rechten Marginalspalte der Block "<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/karriereportalblock.png?height=400" class="colorbox-load">Karriereportal</a>" angezeigt werden? Wenn ja, aktivieren Sie die Checkbox.');
  t('Soll zu diesem Artikel in der rechten Marginalspalte der Block "<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/kontaktblock.png?height=400" class="colorbox-load">Kontakt</a>" angezeigt werden? Wenn ja, aktivieren Sie die Checkbox.');
  t('Soll zu diesem Artikel in der rechten Marginalspalte der Block "<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/socialmediateaser.png?height=400" class="colorbox-load">Social Media</a>" angezeigt werden? Wenn ja, aktivieren Sie die Checkbox.');
  t('Soll zu diesem Artikel in der rechten Marginalspalte der Block "<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/videobeitrag.png?height=400" class="colorbox-load">Videobeitrag</a>" angezeigt werden? Wenn ja, aktivieren Sie die Checkbox.');
  t('Soll zu diesem Artikel in der rechten Marginalspalte der Block "<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/zitatblock.png?height=400" class="colorbox-load">Zitat das Tages</a>" angezeigt werden? Wenn ja, aktivieren Sie die Checkbox.');
  t('Soll zu diesem Artikel in der rechten Marginalspalte der Universal-Block angezeigt werden? Wenn ja, aktivieren Sie die Checkbox.');
  t('Soll zu dieser Seite in der rechten Marginalspalte der Block "<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/meistgelesen.png?height=400" class="colorbox-load">Meistgelesen</a>" angezeigt werden? Wenn ja, aktivieren Sie die Checkbox. (Hinweis: Diese Funktion ist für Release 1 nicht vorgesehen. Wenn Sie diese Checkbox aktivieren, wird der Block "Meistgelesen" trotzdem nicht angezeigt.)');
  t('Spitzmarke');
  t('Spitzmarke Link/Datei 1');
  t('Spitzmarke Link/Datei 2');
  t('Teaser');
  t('Teaser-Titel');
  t('Titel');
  t('TopThema Centerpage');
  t('URL Themenseite');
  t('Universal Block');
  t('Universal Inhalt');
  t('Unterthemen');
  t('Unterthemen Überschrift');
  t('Video Block');
  t('Video Inhalt');
  t('Wenn Sie ein Topthema mit weiteren Links oben auf Ihrer Centerpage anzeigen möchten, wird hier die erste Spitzmarke eingegeben. <b>Maximal 22 Zeichen.</b> Optimal wären ca. 15 Zeichen.');
  t('Wenn Sie ein Topthema mit weiteren Links oben auf Ihrer Centerpage anzeigen möchten, wird hier die zweite Spitzmarke eingegeben. <b>Maximal 22 Zeichen.</b> Optimal wären ca. 15 Zeichen.');
  t('Workflow-Status');
  t('Wählen Sie hier aus, welche Unterthemen auf der Centerpage erscheinen sollen. Es handelt sich hierbei um Felder die sich automatisch vervollständigen, Sie müssen lediglich die ersten paar Buchstaben des Inhaltstitels eingeben, den Sie hinzufügen möchten.');
  t('Zitat Block');
  t('Zitat Inhalt');
  t('Zusammenfassung');
  t('Zusammenfassungstext.');

  return $field_instances;
}
