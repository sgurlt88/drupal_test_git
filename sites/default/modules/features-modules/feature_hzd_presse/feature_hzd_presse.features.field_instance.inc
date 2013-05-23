<?php
/**
 * @file
 * feature_hzd_presse.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function feature_hzd_presse_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'comment-comment_node_pressemitteilung-comment_body'
  $field_instances['comment-comment_node_pressemitteilung-comment_body'] = array(
    'bundle' => 'comment_node_pressemitteilung',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => 0,
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'comment-comment_node_pressesprecher-comment_body'
  $field_instances['comment-comment_node_pressesprecher-comment_body'] = array(
    'bundle' => 'comment_node_pressesprecher',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => 0,
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'comment-comment_node_pressestelle-comment_body'
  $field_instances['comment-comment_node_pressestelle-comment_body'] = array(
    'bundle' => 'comment_node_pressestelle',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => 0,
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-pressemitteilung-field_abstract'
  $field_instances['node-pressemitteilung-field_abstract'] = array(
    'bundle' => 'pressemitteilung',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Erscheint hervorgehoben zwischen Titel und dem Bild oder Video zur Pressemitteilung.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => 'h2_zusammenfassung',
        ),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'email_html' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'print' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => 'h2_zusammenfassung',
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
      'viewmode_pressemeldung' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => 'h2_zusammenfassung',
        ),
        'type' => 'text_default',
        'weight' => 5,
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
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 6,
      ),
      'type' => 'text_textarea',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-pressemitteilung-field_datum_default'
  $field_instances['node-pressemitteilung-field_datum_default'] = array(
    'bundle' => 'pressemitteilung',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'date_dmy',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'semantic_field_format' => 'fieldsonly',
        ),
        'type' => 'date_default',
        'weight' => 3,
      ),
      'email_html' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'date_dmy',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'semantic_field_format' => 'fieldsonly',
        ),
        'type' => 'date_default',
        'weight' => 0,
      ),
      'print' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'date_dmy',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'semantic_field_format' => 'fieldsonly',
        ),
        'type' => 'date_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'viewmode_pressemeldung' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'date_dmy',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'semantic_field_format' => 'fieldsonly',
        ),
        'type' => 'date_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_datum_default',
    'label' => 'Publikationsdatum',
    'required' => 1,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd.m.Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-pressemitteilung-field_edr_teaserspitzmarke'
  $field_instances['node-pressemitteilung-field_edr_teaserspitzmarke'] = array(
    'bundle' => 'pressemitteilung',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Alternative Spitzmarke für die Teaser-Ansicht "Empfehlung der Redaktion", wenn diese von der Universal-Teaserspitzmarke abweichen soll.<br>Optimal wären ca. 23 Zeichen, abgeschnitten wird des Designs wegen nach 30 Zeichen.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 67,
      ),
      'email_html' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
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
    'field_name' => 'field_edr_teaserspitzmarke',
    'label' => 'Empfehlung Teaserspitzmarke',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 30,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 139,
    ),
  );

  // Exported field_instance: 'node-pressemitteilung-field_edr_teasertitel'
  $field_instances['node-pressemitteilung-field_edr_teasertitel'] = array(
    'bundle' => 'pressemitteilung',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Alternativer Titel für die Teaser-Ansicht " Empfehlung der Redaktion", wenn dieser von dem Universal-Teasertitel abweichen soll.<br>Optimal wären ca. 25 Zeichen, abgeschnitten wird im Template nach 30 Zeichen.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 68,
      ),
      'email_html' => array(
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
    'field_name' => 'field_edr_teasertitel',
    'label' => 'Empfehlung Teasertitel',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 30,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 140,
    ),
  );

  // Exported field_instance: 'node-pressemitteilung-field_empfehlung_der_redaktion'
  $field_instances['node-pressemitteilung-field_empfehlung_der_redaktion'] = array(
    'bundle' => 'pressemitteilung',
    'default_value' => array(
      0 => array(
        'value' => 'Nein',
      ),
    ),
    'deleted' => 0,
    'description' => 'Soll diese Pressemitteilung als Teaser im Modul "<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/empfehlungredaktion.png?height=400" class="colorbox-load">Empfehlung der Redaktion</a>" erscheinen? Bitte an die maximalen Zeichenlängen denken: Teaser-Spitzmarke max. 23 und Teaser-Titel max. 30 Zeichen.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 41,
      ),
      'email_html' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 55,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'viewmode_pressemeldung' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 55,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_empfehlung_der_redaktion',
    'label' => 'Empfehlung der Redaktion',
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
      'weight' => 138,
    ),
  );

  // Exported field_instance: 'node-pressemitteilung-field_fc_metadaten'
  $field_instances['node-pressemitteilung-field_fc_metadaten'] = array(
    'bundle' => 'pressemitteilung',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'email_html' => array(
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-pressemitteilung-field_fc_verwandte_inhalte'
  $field_instances['node-pressemitteilung-field_fc_verwandte_inhalte'] = array(
    'bundle' => 'pressemitteilung',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 49,
      ),
      'email_html' => array(
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
    'field_name' => 'field_fc_verwandte_inhalte',
    'label' => 'Verwandte Inhalte',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'field_collection_embed',
      'weight' => 118,
    ),
  );

  // Exported field_instance: 'node-pressemitteilung-field_file_attachments'
  $field_instances['node-pressemitteilung-field_file_attachments'] = array(
    'bundle' => 'pressemitteilung',
    'deleted' => 0,
    'description' => 'Angehängte Dateien zum Download (max. 20 MB).
Erlaubte Datei-Formate: jpg, jpeg, gif, png, bmp, tiff, tif, txt, pdf, mp3, ico, zip, rar.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'mediafield',
        'settings' => array(
          'file_view_mode' => 'viewmode_download',
          'semantic_field_format' => 'ul_downloads',
        ),
        'type' => 'media',
        'weight' => 7,
      ),
      'email_html' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 42,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'mediafield',
        'settings' => array(
          'file_view_mode' => 'viewmode_download',
          'semantic_field_format' => '',
        ),
        'type' => 'media',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'viewmode_pressemeldung' => array(
        'label' => 'above',
        'module' => 'mediafield',
        'settings' => array(
          'file_view_mode' => 'viewmode_download',
          'semantic_field_format' => '',
        ),
        'type' => 'media',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_file_attachments',
    'label' => 'Downloads:',
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
      'weight' => 47,
    ),
  );

  // Exported field_instance: 'node-pressemitteilung-field_hauptbild'
  $field_instances['node-pressemitteilung-field_hauptbild'] = array(
    'bundle' => 'pressemitteilung',
    'deleted' => 0,
    'description' => 'Erlaubte Dateiformate: jpg, jpeg, gif, png',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'mediafield',
        'settings' => array(
          'file_view_mode' => 'viewmode_artikelhauptbild',
          'semantic_field_format' => '',
        ),
        'type' => 'media',
        'weight' => 4,
      ),
      'email_html' => array(
        'label' => 'hidden',
        'module' => 'mediafield',
        'settings' => array(
          'file_view_mode' => 'viewmode_artikelhauptbild',
          'semantic_field_format' => '',
        ),
        'type' => 'media',
        'weight' => 3,
      ),
      'print' => array(
        'label' => 'hidden',
        'module' => 'mediafield',
        'settings' => array(
          'file_view_mode' => 'viewmode_artikelhauptbild',
          'semantic_field_format' => '',
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
      'viewmode_pressemeldung' => array(
        'label' => 'hidden',
        'module' => 'mediafield',
        'settings' => array(
          'file_view_mode' => 'viewmode_artikelhauptbild',
          'semantic_field_format' => '',
        ),
        'type' => 'media',
        'weight' => 6,
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
          'audio' => 0,
          'document' => 0,
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
      'weight' => 44,
    ),
  );

  // Exported field_instance: 'node-pressemitteilung-field_herausgeber'
  $field_instances['node-pressemitteilung-field_herausgeber'] = array(
    'bundle' => 'pressemitteilung',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Wählen Sie über das Dropdown-Menü das publizierende Ressort aus.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'email_html' => array(
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
    'field_name' => 'field_herausgeber',
    'label' => 'Herausgeber',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-pressemitteilung-field_inhalt'
  $field_instances['node-pressemitteilung-field_inhalt'] = array(
    'bundle' => 'pressemitteilung',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => 'wysiwyg_cleaned',
        ),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'email_html' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => 'wysiwyg_cleaned',
        ),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'print' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => 'wysiwyg_cleaned',
        ),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'viewmode_pressemeldung' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => 'wysiwyg_cleaned',
        ),
        'type' => 'text_default',
        'weight' => 8,
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
        'rows' => 10,
      ),
      'type' => 'text_textarea',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-pressemitteilung-field_internal_anmerkung'
  $field_instances['node-pressemitteilung-field_internal_anmerkung'] = array(
    'bundle' => 'pressemitteilung',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 30,
      ),
      'email_html' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 59,
      ),
      'print' => array(
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
      'viewmode_pressemeldung' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 37,
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
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-pressemitteilung-field_link_datei_1'
  $field_instances['node-pressemitteilung-field_link_datei_1'] = array(
    'bundle' => 'pressemitteilung',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Dies ist das Feld für die erste Verlinkung auf eine interne oder externe Seite oder eine Datei (im Themendossier unten links angezeigt). Siehe  <a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/tdlink1.png?height=400" class="colorbox-load">Screenshot</a>. Maximal 30 Zeichen. Optimal wären ca. 20 Zeichen.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'email_html' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 48,
      ),
      'print' => array(
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
      'viewmode_pressemeldung' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
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
      'weight' => 154,
    ),
  );

  // Exported field_instance: 'node-pressemitteilung-field_link_datei_2'
  $field_instances['node-pressemitteilung-field_link_datei_2'] = array(
    'bundle' => 'pressemitteilung',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Dies ist das Feld für die zweite Verlinkung auf eine interne oder externe Seite oder eine Datei (im Themendossier unten in der Mitte angezeigt). Siehe <a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/tdlink2.png?height=400" class="colorbox-load">Screenshot</a>. Maximal 30 Zeichen. Optimal wären ca. 20 Zeichen.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'email_html' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 46,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'viewmode_pressemeldung' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
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
      'weight' => 156,
    ),
  );

  // Exported field_instance: 'node-pressemitteilung-field_link_zum_externen_inhalt'
  $field_instances['node-pressemitteilung-field_link_zum_externen_inhalt'] = array(
    'bundle' => 'pressemitteilung',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Soll vom Teaser aus auf eine externe Pressemitteilung verlinkt werden, ist die URL der Pressemitteilung hier einzutragen. Handelt es sich um eine interne Pressemitteilung bleibt dieses Feld leer.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 32,
      ),
      'email_html' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 61,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 46,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'viewmode_pressemeldung' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'link_default',
        'weight' => 46,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_link_zum_externen_inhalt',
    'label' => 'Link zum externen Inhalt',
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
      'title' => 'none',
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
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-pressemitteilung-field_linklist'
  $field_instances['node-pressemitteilung-field_linklist'] = array(
    'bundle' => 'pressemitteilung',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Unterhalb der Pressemitteilung können ein oder mehrere Links (intern oder extern) zur Anzeige gebracht werden. Diese Links sind hier einzupflegen. SCREENSHOT????????????',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'semantic_field_format' => 'ul_links',
        ),
        'type' => 'link_default',
        'weight' => 8,
      ),
      'email_html' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 43,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'semantic_field_format' => 'ul_links',
        ),
        'type' => 'link_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'viewmode_pressemeldung' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'semantic_field_format' => 'ul_links',
        ),
        'type' => 'link_default',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_linklist',
    'label' => 'Links:',
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
      'settings' => array(
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'link_field',
      'weight' => 49,
    ),
  );

  // Exported field_instance: 'node-pressemitteilung-field_marginalspalte_karr_block'
  $field_instances['node-pressemitteilung-field_marginalspalte_karr_block'] = array(
    'bundle' => 'pressemitteilung',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Soll zu dieser Pressemitteilung in der rechten Marginalspalte der Block "<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/karriereportalblock.png?height=400" class="colorbox-load">Karriereportal</a>" angezeigt werden? Wenn ja, aktivieren Sie die Checkbox.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 44,
      ),
      'email_html' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 58,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'viewmode_pressemeldung' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'list_default',
        'weight' => 58,
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
      'weight' => 114,
    ),
  );

  // Exported field_instance: 'node-pressemitteilung-field_marginalspalte_kon_block'
  $field_instances['node-pressemitteilung-field_marginalspalte_kon_block'] = array(
    'bundle' => 'pressemitteilung',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Soll zu dieser Pressemitteilung in der rechten Marginalspalte der Block "<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/kontaktblock.png?height=400" class="colorbox-load">Kontakt</a>" angezeigt werden? Wenn ja, aktivieren Sie die Checkbox.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 42,
      ),
      'email_html' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 56,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'viewmode_pressemeldung' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'list_default',
        'weight' => 56,
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
      'weight' => 112,
    ),
  );

  // Exported field_instance: 'node-pressemitteilung-field_marginalspalte_kon_inhalt'
  $field_instances['node-pressemitteilung-field_marginalspalte_kon_inhalt'] = array(
    'bundle' => 'pressemitteilung',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'In dieses Feld geben Sie nun den anzuzeigenden Kontakt ein. Bitte beachten Sie, dass der hier anzuzeigende Kontakt bereits im Redaktionssystem eingepflegt sein muss. Der anzuzeigende Kontakt ist per Autocomplete auffindbar.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 43,
      ),
      'email_html' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 57,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'viewmode_pressemeldung' => array(
        'label' => 'above',
        'module' => 'node_reference',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'node_reference_default',
        'weight' => 57,
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
      'weight' => 113,
    ),
  );

  // Exported field_instance: 'node-pressemitteilung-field_marginalspalte_me_ge_block'
  $field_instances['node-pressemitteilung-field_marginalspalte_me_ge_block'] = array(
    'bundle' => 'pressemitteilung',
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
        'weight' => 34,
      ),
      'email_html' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 39,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 48,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'viewmode_pressemeldung' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 48,
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
      'weight' => 111,
    ),
  );

  // Exported field_instance: 'node-pressemitteilung-field_marginalspalte_so_m_inhalt'
  $field_instances['node-pressemitteilung-field_marginalspalte_so_m_inhalt'] = array(
    'bundle' => 'pressemitteilung',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'In dieses Feld geben Sie nun den Titel des anzuzeigenden Social Media Teasers ein. Bitte beachten Sie, dass der hier anzuzeigende Social Media Teaser bereits im Redaktionssystem eingepflegt sein muss. Der anzuzeigende Social Media Teaser ist per Autocomplete auffindbar.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 38,
      ),
      'email_html' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 52,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'viewmode_pressemeldung' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 52,
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
      'weight' => 108,
    ),
  );

  // Exported field_instance: 'node-pressemitteilung-field_marginalspalte_so_me_block'
  $field_instances['node-pressemitteilung-field_marginalspalte_so_me_block'] = array(
    'bundle' => 'pressemitteilung',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Soll zudieser Pressemitteilung in der rechten Marginalspalte der Block "<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/socialmediateaser.png?height=400" class="colorbox-load">Social Media</a>" angezeigt werden? Wenn ja, aktivieren Sie die Checkbox.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 35,
      ),
      'email_html' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 38,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 49,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'viewmode_pressemeldung' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 49,
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
      'weight' => 107,
    ),
  );

  // Exported field_instance: 'node-pressemitteilung-field_marginalspalte_uni_block'
  $field_instances['node-pressemitteilung-field_marginalspalte_uni_block'] = array(
    'bundle' => 'pressemitteilung',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Soll zu dieser Pressemitteilung in der rechten Marginalspalte der Universal-Block angezeigt werden? Wenn ja, aktivieren Sie die Checkbox.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 45,
      ),
      'email_html' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 59,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'viewmode_pressemeldung' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'list_default',
        'weight' => 59,
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
      'weight' => 115,
    ),
  );

  // Exported field_instance: 'node-pressemitteilung-field_marginalspalte_uni_inhalt'
  $field_instances['node-pressemitteilung-field_marginalspalte_uni_inhalt'] = array(
    'bundle' => 'pressemitteilung',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'In dieses Feld geben Sie nun den Titel des anzuzeigenden Universal-Inhaltes ein. Bitte beachten Sie, dass der hier anzuzeigende Universal-Inhalt bereits im Redaktionssystem eingepflegt sein muss. Der anzuzeigende Universal-Inhalt ist per Autocomplete auffindbar.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 46,
      ),
      'email_html' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 28,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 60,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'viewmode_pressemeldung' => array(
        'label' => 'above',
        'module' => 'node_reference',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'node_reference_default',
        'weight' => 60,
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
      'weight' => 116,
    ),
  );

  // Exported field_instance: 'node-pressemitteilung-field_marginalspalte_vid_block'
  $field_instances['node-pressemitteilung-field_marginalspalte_vid_block'] = array(
    'bundle' => 'pressemitteilung',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Soll zu dieser Pressemitteilung in der rechten Marginalspalte der Block "<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/videobeitrag.png?height=400" class="colorbox-load">Videobeitrag</a>" angezeigt werden? Wenn ja, aktivieren Sie die Checkbox.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 36,
      ),
      'email_html' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 50,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'viewmode_pressemeldung' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 50,
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
      'weight' => 109,
    ),
  );

  // Exported field_instance: 'node-pressemitteilung-field_marginalspalte_vid_inhalt'
  $field_instances['node-pressemitteilung-field_marginalspalte_vid_inhalt'] = array(
    'bundle' => 'pressemitteilung',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'In dieses Feld geben Sie nun den Titel des anzuzeigenden Videos ein. Bitte beachten Sie, dass das hier anzuzeigende Video bereits im Redaktionssystem eingepflegt sein muss. Das anzuzeigende Video ist per Autocomplete auffindbar.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 40,
      ),
      'email_html' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 54,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'viewmode_pressemeldung' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 54,
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
      'weight' => 110,
    ),
  );

  // Exported field_instance: 'node-pressemitteilung-field_marginalspalte_z_inhalt'
  $field_instances['node-pressemitteilung-field_marginalspalte_z_inhalt'] = array(
    'bundle' => 'pressemitteilung',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'In dieses Feld geben Sie nun den Titel des anzuzeigenden Zitates ein. Bitte beachten Sie, dass das hier anzuzeigende Zitat bereits im Redaktionssystem eingepflegt sein muss. Das anzuzeigende Zitat ist per Autocomplete auffindbar.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 39,
      ),
      'email_html' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 53,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'viewmode_pressemeldung' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 53,
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
      'weight' => 106,
    ),
  );

  // Exported field_instance: 'node-pressemitteilung-field_marginalspalte_zitat_block'
  $field_instances['node-pressemitteilung-field_marginalspalte_zitat_block'] = array(
    'bundle' => 'pressemitteilung',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Soll zu dieser Pressemitteilung in der rechten Marginalspalte der Block "<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/zitatblock.png?height=400" class="colorbox-load">Zitat das Tages</a>" angezeigt werden? Wenn ja, aktivieren Sie die Checkbox.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 37,
      ),
      'email_html' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 51,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'viewmode_pressemeldung' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 51,
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
      'weight' => 105,
    ),
  );

  // Exported field_instance: 'node-pressemitteilung-field_newsletter_anhang'
  $field_instances['node-pressemitteilung-field_newsletter_anhang'] = array(
    'bundle' => 'pressemitteilung',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'email_html' => array(
        'label' => 'hidden',
        'module' => 'mediafield',
        'settings' => array(
          'file_view_mode' => 'newsletter',
          'semantic_field_format' => '',
        ),
        'type' => 'media',
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
    'field_name' => 'field_newsletter_anhang',
    'label' => 'Newsletter Anhang',
    'required' => 0,
    'settings' => array(
      'file_extensions' => 'jpg jpeg gif png pdf txt doc docx xls xlsx ppt pptx pps ppsx odt ods odp mp3 mov mp4 m4a m4v mpeg avi ogg oga ogv wmv zip rar',
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
          'audio' => 0,
          'document' => 'document',
          'image' => 0,
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
      'weight' => 48,
    ),
  );

  // Exported field_instance: 'node-pressemitteilung-field_nref_pressesprecher'
  $field_instances['node-pressemitteilung-field_nref_pressesprecher'] = array(
    'bundle' => 'pressemitteilung',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Über dieses Autocomplete-Feld suchen Sie nach der internen Bezeichnung für Angaben zum Pressesprecher. Diese Angaben müssen Sie vorher als separaten Inhalt des Typs "Pressesprecher" im Redaktionssystem angelegt haben.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'node_reference',
        'settings' => array(
          'node_reference_view_mode' => 'viewmode_pressemitteilung',
          'semantic_field_format' => '',
        ),
        'type' => 'node_reference_node',
        'weight' => 58,
      ),
      'email_html' => array(
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
    'field_name' => 'field_nref_pressesprecher',
    'label' => 'Pressesprecher/in',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'autocomplete_match' => 'contains',
        'autocomplete_path' => 'node_reference/autocomplete',
        'size' => 60,
      ),
      'type' => 'options_select',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-pressemitteilung-field_nref_pressestelle'
  $field_instances['node-pressemitteilung-field_nref_pressestelle'] = array(
    'bundle' => 'pressemitteilung',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Wählen Sie über das Dropdown-Menü die Pressestelle des publizierenden Ressorts aus.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'node_reference',
        'settings' => array(
          'semantic_field_format' => 'fieldsonly',
        ),
        'type' => 'node_reference_default',
        'weight' => 4,
      ),
      'email_html' => array(
        'label' => 'inline',
        'module' => 'node_reference',
        'settings' => array(
          'node_reference_view_mode' => 'email_html',
          'semantic_field_format' => 0,
        ),
        'type' => 'node_reference_node',
        'weight' => 6,
      ),
      'print' => array(
        'label' => 'inline',
        'module' => 'node_reference',
        'settings' => array(
          'node_reference_view_mode' => 'viewmode_print_pressemitteilung_pressestelle',
          'semantic_field_format' => 0,
        ),
        'type' => 'node_reference_node',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'viewmode_pressemeldung' => array(
        'label' => 'inline',
        'module' => 'node_reference',
        'settings' => array(
          'node_reference_view_mode' => 'email_html',
          'semantic_field_format' => '',
        ),
        'type' => 'node_reference_node',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_nref_pressestelle',
    'label' => 'Pressestelle',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-pressemitteilung-field_nref_video'
  $field_instances['node-pressemitteilung-field_nref_video'] = array(
    'bundle' => 'pressemitteilung',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Anstelle eines Bildes, kann auch ein Teaser zu einem Video in die Pressemitteilung eingebunden werden. Bitte beachten Sie, dass der hier anzuzeigende Teaser zum Video bereits im Redaktionssystem eingepflegt sein muss. Der anzuzeigende Teaser zum Video ist per Autocomplete auffindbar.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'node_reference_view_formatter',
        'settings' => array(
          'semantic_field_format' => '',
          'view' => 'views_videodetailseite block_1',
        ),
        'type' => 'node_reference_view',
        'weight' => 5,
      ),
      'email_html' => array(
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
    'field_name' => 'field_nref_video',
    'label' => 'Video',
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
      'weight' => 45,
    ),
  );

  // Exported field_instance: 'node-pressemitteilung-field_ref_bildergalerie'
  $field_instances['node-pressemitteilung-field_ref_bildergalerie'] = array(
    'bundle' => 'pressemitteilung',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Geben Sie hier den Titel der einzubindenden Bildergalerie ein, um einen Teaser dieser Bildergalerie am Ende der Pressemitteilung anzeigen zu lassen. SCREENSHOT????????????',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'email_html' => array(
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
    'field_name' => 'field_ref_bildergalerie',
    'label' => 'Bildergalerie-Teaser',
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
      'weight' => 46,
    ),
  );

  // Exported field_instance: 'node-pressemitteilung-field_sb_teasertext'
  $field_instances['node-pressemitteilung-field_sb_teasertext'] = array(
    'bundle' => 'pressemitteilung',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Kurztext für Teaser-Ansicht " Sliderbühne ", der neugierig macht. Dieses Feld ist auszufüllen, wenn der Teasertext in der Sliderbühne von dem Universal-Teasertext abweichen soll.<br>Optimal wären bis zu 90 Zeichen, abgeschnitten wird im Template nach 100 Zeichen.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 66,
      ),
      'email_html' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
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
    'field_name' => 'field_sb_teasertext',
    'label' => 'Sliderbühne Teasertext',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 100,
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 143,
    ),
  );

  // Exported field_instance: 'node-pressemitteilung-field_sb_teasertitel'
  $field_instances['node-pressemitteilung-field_sb_teasertitel'] = array(
    'bundle' => 'pressemitteilung',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Alternativer Titel für die Teaser-Ansicht " Sliderbühne ", wenn dieser von dem Universal-Teasertitel abweichen soll.<br>Optimal wären ca. 23 Zeichen, abgeschnitten wird im Template nach 40 Zeichen.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 65,
      ),
      'email_html' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
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
    'field_name' => 'field_sb_teasertitel',
    'label' => 'Sliderbühne Teasertitel',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 40,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 142,
    ),
  );

  // Exported field_instance: 'node-pressemitteilung-field_simplenews_term'
  $field_instances['node-pressemitteilung-field_simplenews_term'] = array(
    'bundle' => 'pressemitteilung',
    'default_value' => array(
      0 => array(
        'tid' => 257,
      ),
    ),
    'deleted' => 0,
    'description' => 'Möchten Sie die Pressemitteilung (anschließend) als Newsletter versenden, wählen Sie hier die entsprechende Kategorie des Newsletters aus. ',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 33,
      ),
      'email_html' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 40,
      ),
      'email_plain' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'email_textalt' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'print' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 47,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'viewmode_pressemeldung' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 47,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_simplenews_term',
    'label' => 'Newsletter category',
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
      'weight' => 49,
    ),
  );

  // Exported field_instance: 'node-pressemitteilung-field_sliderbuehne'
  $field_instances['node-pressemitteilung-field_sliderbuehne'] = array(
    'bundle' => 'pressemitteilung',
    'default_value' => array(
      0 => array(
        'value' => 'Nein',
      ),
    ),
    'deleted' => 0,
    'description' => 'Soll diese Pressemitteilung als Teaser im Modul "<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/sliderbuehne.png?height=400" class="colorbox-load">Sliderbühne</a>" erscheinen? Bitte an die maximalen Zeichenlängen denken: Teaser-Titel max. 40 und Teaser max. 100 Zeichen. <br>
Die Sliderbühne erscheint nur auf http://www.hessen.de, nicht auf den Seiten der Ressorts.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
      'email_html' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 54,
      ),
      'print' => array(
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
      'viewmode_pressemeldung' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sliderbuehne',
    'label' => 'Sliderbühne',
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
      'weight' => 141,
    ),
  );

  // Exported field_instance: 'node-pressemitteilung-field_spitzmarke'
  $field_instances['node-pressemitteilung-field_spitzmarke'] = array(
    'bundle' => 'pressemitteilung',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Erscheint über dem Titel.',
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
      'email_html' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'print' => array(
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
      'viewmode_pressemeldung' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => 'span_spitzmarke',
        ),
        'type' => 'text_default',
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
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-pressemitteilung-field_spitzmarke_link_datei_1'
  $field_instances['node-pressemitteilung-field_spitzmarke_link_datei_1'] = array(
    'bundle' => 'pressemitteilung',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Dies ist das Feld für die Spitzmarke der ersten Verlinkung auf eine interne oder externe Seite oder eine Datei (im Themendossier unten links angezeigt). Siehe  <a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/tdspitzmarke1.png?height=400" class="colorbox-load">Screenshot</a>. Maximal 22 Zeichen. Optimal wären ca. 15 Zeichen.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'email_html' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 49,
      ),
      'print' => array(
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
      'viewmode_pressemeldung' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
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
      'weight' => 153,
    ),
  );

  // Exported field_instance: 'node-pressemitteilung-field_spitzmarke_link_datei_2'
  $field_instances['node-pressemitteilung-field_spitzmarke_link_datei_2'] = array(
    'bundle' => 'pressemitteilung',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Dies ist das Feld für die Spitzmarke der zweiten Verlinkung auf eine interne oder externe Seite oder eine Datei (im Themendossier unten in den Mitte angezeigt). Siehe  <a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/tdspitzmarke2.png?height=400" class="colorbox-load">Screenshot</a>. Maximal 22 Zeichen. Optimal wären ca. 15 Zeichen.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
      'email_html' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 53,
      ),
      'print' => array(
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
      'viewmode_pressemeldung' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
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
      'weight' => 155,
    ),
  );

  // Exported field_instance: 'node-pressemitteilung-field_sticky'
  $field_instances['node-pressemitteilung-field_sticky'] = array(
    'bundle' => 'pressemitteilung',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Soll der Teaser dieser Pressemitteilung in den Modulen Themendossier und Themenslider ganz oben in der Liste erscheinen, aktivieren Sie diese Checkbox.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 47,
      ),
      'email_html' => array(
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
    'field_name' => 'field_sticky',
    'label' => 'Sticky',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 132,
    ),
  );

  // Exported field_instance: 'node-pressemitteilung-field_tab_titel'
  $field_instances['node-pressemitteilung-field_tab_titel'] = array(
    'bundle' => 'pressemitteilung',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Durch das Befüllen dieses Feldes können Sie bestimmen, wie der Reiter (Tab) zu diesem Artikel beschriftet sein soll. Siehe <a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/tdtab.png?height=400" class="colorbox-load">Screenshot</a>. Maximal 25 Zeichen. Optimal wären ca. 16 Zeichen.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'email_html' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 51,
      ),
      'print' => array(
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
      'viewmode_pressemeldung' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tab_titel',
    'label' => 'Tab Titel',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 152,
    ),
  );

  // Exported field_instance: 'node-pressemitteilung-field_tags'
  $field_instances['node-pressemitteilung-field_tags'] = array(
    'bundle' => 'pressemitteilung',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Tags sind Wörter, die den Inhalt/die Pressemitteilung beschreiben. In Release 1+ sollen Inhalte mittels Tags (Schlagworte) in Beziehung gesetzt werden (z.B. für den Block "Verwandte Themen"). Für Release 1 ist das Befüllen dieses Feldes nicht notwendig.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 29,
      ),
      'email_html' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 58,
      ),
      'print' => array(
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
      'viewmode_pressemeldung' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 35,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tags',
    'label' => 'Tags',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 50,
    ),
  );

  // Exported field_instance: 'node-pressemitteilung-field_td_teaserspitzmarke'
  $field_instances['node-pressemitteilung-field_td_teaserspitzmarke'] = array(
    'bundle' => 'pressemitteilung',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Alternative Spitzmarke für die Teaser-Ansicht "Themendossier", wenn diese von der Universal-Teaserspitzmarke abweichen soll.<br>Optimal wären ca. 20 Zeichen, abgeschnitten wird des Designs wegen nach 30 Zeichen.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 62,
      ),
      'email_html' => array(
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
    'field_name' => 'field_td_teaserspitzmarke',
    'label' => 'Themendossier Teaserspitzmarke',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 30,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 149,
    ),
  );

  // Exported field_instance: 'node-pressemitteilung-field_td_teasertext'
  $field_instances['node-pressemitteilung-field_td_teasertext'] = array(
    'bundle' => 'pressemitteilung',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Kurztext für Teaser-Ansicht "Themendossier", der neugierig macht. Dieses Feld ist auszufüllen, wenn der Teasertext im Themendossier von dem Universal-Teasertext abweichen soll.<br>Optimal wären ca. 230 Zeichen, abgeschnitten wird im Template nach 250 Zeichen.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 64,
      ),
      'email_html' => array(
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
    'field_name' => 'field_td_teasertext',
    'label' => 'Themendossier Teasertext',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 250,
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 151,
    ),
  );

  // Exported field_instance: 'node-pressemitteilung-field_td_teasertitel'
  $field_instances['node-pressemitteilung-field_td_teasertitel'] = array(
    'bundle' => 'pressemitteilung',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Alternativer Titel für die Teaser-Ansicht "Themendossier", wenn dieser von dem Universal-Teasertitel abweichen soll.<br>Abgeschnitten wird im Template nach 50 Zeichen.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 63,
      ),
      'email_html' => array(
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
    'field_name' => 'field_td_teasertitel',
    'label' => 'Themendossier Teasertitel',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 50,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 150,
    ),
  );

  // Exported field_instance: 'node-pressemitteilung-field_teaser'
  $field_instances['node-pressemitteilung-field_teaser'] = array(
    'bundle' => 'pressemitteilung',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Kurztext für Teaser-Ansichten, der neugierig macht. Wenn diese Pressemitteilung für eine Centerpage vorgesehen ist, wird dieser Teasertext angezeigt. Außerdem wird dieser Teasertext in der Pressemitteilungsübersicht angezeigt.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
      ),
      'email_html' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 56,
      ),
      'print' => array(
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
      'viewmode_pressemeldung' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 33,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_teaser',
    'label' => 'Teasertext',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Von @limit Zeichen stehen Ihnen noch <strong>@remaining</strong> zur Verfügung.',
        'maxlength_js_truncate_html' => 0,
        'rows' => 6,
      ),
      'type' => 'text_textarea',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-pressemitteilung-field_teaser_bild'
  $field_instances['node-pressemitteilung-field_teaser_bild'] = array(
    'bundle' => 'pressemitteilung',
    'deleted' => 0,
    'description' => 'Hier können Sie ein Bild für die Teaseransicht der Pressemitteilung hochladen. Bitte achten Sie darauf, dass das Bild möglichst den Seitenverhältnissen des im jeweiligen Modul (Themendossier, Themenslider, ...) ausgegebenen Bilds entspricht.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'email_html' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 44,
      ),
      'print' => array(
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
      'viewmode_pressemeldung' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_teaser_bild',
    'label' => 'Teaserbild',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
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
          'audio' => 0,
          'document' => 0,
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
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-pressemitteilung-field_teaser_spitzmarke'
  $field_instances['node-pressemitteilung-field_teaser_spitzmarke'] = array(
    'bundle' => 'pressemitteilung',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Spitzmarke für Teaser-Ansichten. Wenn diese Pressemitteilung für eine Centerpage vorgesehen ist, wird diese Spitzmarke angezeigt. Außerdem wird diese Spitzmarke in der Pressemitteilungsübersicht angezeigt.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'email_html' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 45,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'viewmode_pressemeldung' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_teaser_spitzmarke',
    'label' => 'Teaserspitzmarke',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_label' => 'Von @limit Zeichen stehen Ihnen noch <strong>@remaining</strong> zur Verfügung.',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-pressemitteilung-field_teaser_titel'
  $field_instances['node-pressemitteilung-field_teaser_titel'] = array(
    'bundle' => 'pressemitteilung',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Titel für die Teaser-Ansichten. Wenn diese Pressemitteilung für eine Centerpage vorgesehen ist, wird dieser Titel angezeigt. Außerdem wird dieser Titel in der Pressemitteilungsübersicht angezeigt.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 28,
      ),
      'email_html' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 57,
      ),
      'print' => array(
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
      'viewmode_pressemeldung' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 34,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_teaser_titel',
    'label' => 'Teasertitel',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filter_chefredaktion' => 0,
          'filter_php' => 0,
          'filter_redaktion' => 0,
          'filtered_html' => 0,
          'full_html' => 0,
          'plain_text' => 0,
          'teaser_title_break' => 'teaser_title_break',
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filter_chefredaktion' => array(
              'weight' => -9,
            ),
            'filter_php' => array(
              'weight' => -5,
            ),
            'filter_redaktion' => array(
              'weight' => -10,
            ),
            'filtered_html' => array(
              'weight' => -8,
            ),
            'full_html' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
            'teaser_title_break' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_label' => 'Von @limit Zeichen stehen Ihnen noch <strong>@remaining</strong> zur Verfügung.',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-pressemitteilung-field_themendossier'
  $field_instances['node-pressemitteilung-field_themendossier'] = array(
    'bundle' => 'pressemitteilung',
    'default_value' => array(
      0 => array(
        'value' => 'Nein',
      ),
    ),
    'deleted' => 0,
    'description' => 'Soll diese Pressemitteilung als Teaser im Modul "<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/themendossier.png?height=400" class="colorbox-load">Themendossier</a>" erscheinen? ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'email_html' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 47,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'viewmode_pressemeldung' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_themendossier',
    'label' => 'Themendossier',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 148,
    ),
  );

  // Exported field_instance: 'node-pressemitteilung-field_themenslider'
  $field_instances['node-pressemitteilung-field_themenslider'] = array(
    'bundle' => 'pressemitteilung',
    'default_value' => array(
      0 => array(
        'value' => 'Nein',
      ),
    ),
    'deleted' => 0,
    'description' => 'Soll diese Pressemitteilung als Teaser im Modul "<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/themenslider.png?height=400" class="colorbox-load">Top Newsbox (Themenslider)</a>" erscheinen? Bitte an die maximalen Zeichenlängen denken: Teaser-Spitzmarke max. 30, Teaser-Titel max. 30 und Teaser max. 100 Zeichen.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
      'email_html' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 52,
      ),
      'print' => array(
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
      'viewmode_pressemeldung' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_themenslider',
    'label' => 'Themenslider',
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
      'weight' => 144,
    ),
  );

  // Exported field_instance: 'node-pressemitteilung-field_titel'
  $field_instances['node-pressemitteilung-field_titel'] = array(
    'bundle' => 'pressemitteilung',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Titel der Pressemitteilung.',
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
      'email_html' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 41,
      ),
      'print' => array(
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
      'viewmode_pressemeldung' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => 'h1_headline',
        ),
        'type' => 'text_default',
        'weight' => 1,
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
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-pressemitteilung-field_ts_teaserspitzmarke'
  $field_instances['node-pressemitteilung-field_ts_teaserspitzmarke'] = array(
    'bundle' => 'pressemitteilung',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => ' Alternative Spitzmarke für Teaser-Ansichten, wenn die ursprüngliche Spitzmarke zu lang ist.<br>Optimal wären ca. 20 Zeichen, abgeschnitten wird des Designs wegen nach 30 Zeichen.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 59,
      ),
      'email_html' => array(
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
    'field_name' => 'field_ts_teaserspitzmarke',
    'label' => 'Themenslider Teaserspitzmarke',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 145,
    ),
  );

  // Exported field_instance: 'node-pressemitteilung-field_ts_teasertext'
  $field_instances['node-pressemitteilung-field_ts_teasertext'] = array(
    'bundle' => 'pressemitteilung',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Kurztext für Teaser-Ansicht "Themenslider", der neugierig macht. Dieses Feld ist auszufüllen, wenn der Teasertext im Themenslider von dem Universal-Teasertext abweichen soll.<br>Optimal wären bis zu 180 Zeichen, abgeschnitten wird im Template nach 190 Zeichen. Kurztext für Blöcke/Listen, der neugierig macht.<br>Optimal wären bis zu 180 Zeichen, abgeschnitten wird im Template nach 200 Zeichen. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 61,
      ),
      'email_html' => array(
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
    'field_name' => 'field_ts_teasertext',
    'label' => 'Themenslider Teasertext',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 190,
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 147,
    ),
  );

  // Exported field_instance: 'node-pressemitteilung-field_ts_teasertitel'
  $field_instances['node-pressemitteilung-field_ts_teasertitel'] = array(
    'bundle' => 'pressemitteilung',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Alternativer Titel für die Teaser-Ansichten, wenn der ursprüngliche Titel zu lang ist.<br>Optimal wären ca. 20 Zeichen, abgeschnitten wird im Template nach 30 Zeichen. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 60,
      ),
      'email_html' => array(
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
    'field_name' => 'field_ts_teasertitel',
    'label' => 'Themenslider Teasertitel',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 146,
    ),
  );

  // Exported field_instance: 'node-pressemitteilung-field_url_themenseite'
  $field_instances['node-pressemitteilung-field_url_themenseite'] = array(
    'bundle' => 'pressemitteilung',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Hier ist die URL zur Themenseite einzutragen. Diese kann intern oder extern sein. In der Ausgabe wird der Link automatisch mit dem Titel "Zur Themenseite" versehen. Siehe  <a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/tdthemenseite.png?height=400" class="colorbox-load">Screenshot</a>.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'email_html' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 50,
      ),
      'print' => array(
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
      'viewmode_pressemeldung' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
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
      'title' => 'value',
      'title_maxlength' => 128,
      'title_value' => 'Zur Themenseite',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 157,
    ),
  );

  // Exported field_instance: 'node-pressemitteilung-field_verwandte_inhalte_block_'
  $field_instances['node-pressemitteilung-field_verwandte_inhalte_block_'] = array(
    'bundle' => 'pressemitteilung',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Soll unterhalb dieser Pressemitteilung der Block "<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/verwandteinhalte.png?height=400" class="colorbox-load">Verwandte Inhalte</a>" angezeigt werden? Wenn ja, aktivieren Sie die Checkbox.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 50,
      ),
      'email_html' => array(
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
    'field_name' => 'field_verwandte_inhalte_block_',
    'label' => 'Verwandte Inhalte Block ',
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
      'weight' => 117,
    ),
  );

  // Exported field_instance: 'node-pressemitteilung-field_video_o_bild'
  $field_instances['node-pressemitteilung-field_video_o_bild'] = array(
    'bundle' => 'pressemitteilung',
    'default_value' => array(
      0 => array(
        'value' => 'Kein Medium',
      ),
    ),
    'deleted' => 0,
    'description' => 'Bitte geben Sie hier an, wobei es sich bei dem Hauptmedium der Pressemittelung handelt.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 48,
      ),
      'email_html' => array(
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
    'field_name' => 'field_video_o_bild',
    'label' => 'Bild oder Video für die Pressemitteilung',
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
      'weight' => 43,
    ),
  );

  // Exported field_instance: 'node-pressemitteilung-field_workflow_status'
  $field_instances['node-pressemitteilung-field_workflow_status'] = array(
    'bundle' => 'pressemitteilung',
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
        'weight' => 31,
      ),
      'email_html' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 60,
      ),
      'print' => array(
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
      'viewmode_pressemeldung' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 38,
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-pressesprecher-field_bild_des_sprechers'
  $field_instances['node-pressesprecher-field_bild_des_sprechers'] = array(
    'bundle' => 'pressesprecher',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'biografie_portraitbild',
          'semantic_field_format' => '',
        ),
        'type' => 'image',
        'weight' => 2,
      ),
      'evm_termindetailtab' => array(
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
      'viewmode_pressemitteilung' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'viewmode_print_pressemitteilung_pressestelle' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_bild_des_sprechers',
    'label' => 'Bild des Sprechers',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
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
          'audio' => 0,
          'document' => 0,
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
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-pressesprecher-field_email_main'
  $field_instances['node-pressesprecher-field_email_main'] = array(
    'bundle' => 'pressesprecher',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Ggf. persönliche eMail oder die der Pressestelle',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'email_default',
        'weight' => 5,
      ),
      'evm_termindetailtab' => array(
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
      'viewmode_pressemitteilung' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'viewmode_print_pressemitteilung_pressestelle' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_email_main',
    'label' => 'E-Mail',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-pressesprecher-field_fc_metadaten'
  $field_instances['node-pressesprecher-field_fc_metadaten'] = array(
    'bundle' => 'pressesprecher',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'evm_termindetailtab' => array(
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
      'viewmode_pressemitteilung' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'viewmode_print_pressemitteilung_pressestelle' => array(
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-pressesprecher-field_internal_anmerkung'
  $field_instances['node-pressesprecher-field_internal_anmerkung'] = array(
    'bundle' => 'pressesprecher',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'evm_termindetailtab' => array(
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
      'viewmode_pressemitteilung' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'viewmode_print_pressemitteilung_pressestelle' => array(
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
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-pressesprecher-field_nref_pressestelle'
  $field_instances['node-pressesprecher-field_nref_pressestelle'] = array(
    'bundle' => 'pressesprecher',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'node_reference',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'node_reference_default',
        'weight' => 4,
      ),
      'evm_termindetailtab' => array(
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
      'viewmode_pressemitteilung' => array(
        'label' => 'hidden',
        'module' => 'node_reference',
        'settings' => array(
          'node_reference_view_mode' => 'viewmode_pressemitteilung',
          'semantic_field_format' => '',
        ),
        'type' => 'node_reference_node',
        'weight' => 2,
      ),
      'viewmode_print_pressemitteilung_pressestelle' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_nref_pressestelle',
    'label' => 'Pressestelle',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-pressesprecher-field_person'
  $field_instances['node-pressesprecher-field_person'] = array(
    'bundle' => 'pressesprecher',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'name',
        'settings' => array(
          'format' => 'default',
          'markup' => 0,
          'multiple' => 'default',
          'multiple_and' => 'text',
          'multiple_delimiter' => ', ',
          'multiple_delimiter_precedes_last' => 'never',
          'multiple_el_al_first' => 1,
          'multiple_el_al_min' => 3,
          'output' => 'default',
          'semantic_field_format' => '',
        ),
        'type' => 'name_formatter',
        'weight' => 0,
      ),
      'evm_termindetailtab' => array(
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
      'viewmode_pressemitteilung' => array(
        'label' => 'inline',
        'module' => 'name',
        'settings' => array(
          'format' => 'default',
          'markup' => 0,
          'multiple' => 'default',
          'multiple_and' => 'text',
          'multiple_delimiter' => ', ',
          'multiple_delimiter_precedes_last' => 'never',
          'multiple_el_al_first' => 1,
          'multiple_el_al_min' => 3,
          'output' => 'default',
          'semantic_field_format' => '',
        ),
        'type' => 'name_formatter',
        'weight' => 0,
      ),
      'viewmode_print_pressemitteilung_pressestelle' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_person',
    'label' => 'Pressesprecher',
    'required' => 1,
    'settings' => array(
      'component_css' => '',
      'component_layout' => 'default',
      'credentials_inline' => 0,
      'field_type' => array(
        'credentials' => 'text',
        'family' => 'text',
        'generational' => 'select',
        'given' => 'text',
        'middle' => 'text',
        'title' => 'select',
      ),
      'generational_field' => 'select',
      'inline_css' => array(
        'credentials' => '',
        'family' => '',
        'generational' => '',
        'given' => '',
        'middle' => '',
        'title' => '',
      ),
      'override_format' => 'default',
      'size' => array(
        'credentials' => 35,
        'family' => 20,
        'generational' => 5,
        'given' => 20,
        'middle' => 20,
        'title' => 6,
      ),
      'title_display' => array(
        'credentials' => 'description',
        'family' => 'description',
        'generational' => 'description',
        'given' => 'description',
        'middle' => 'description',
        'title' => 'description',
      ),
      'title_field' => 'select',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'name',
      'settings' => array(
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'name_widget',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-pressesprecher-field_person_w'
  $field_instances['node-pressesprecher-field_person_w'] = array(
    'bundle' => 'pressesprecher',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'name',
        'settings' => array(
          'format' => 'default',
          'markup' => 0,
          'multiple' => 'default',
          'multiple_and' => 'text',
          'multiple_delimiter' => ', ',
          'multiple_delimiter_precedes_last' => 'never',
          'multiple_el_al_first' => 1,
          'multiple_el_al_min' => 3,
          'output' => 'default',
          'semantic_field_format' => '',
        ),
        'type' => 'name_formatter',
        'weight' => 1,
      ),
      'evm_termindetailtab' => array(
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
      'viewmode_pressemitteilung' => array(
        'label' => 'inline',
        'module' => 'name',
        'settings' => array(
          'format' => 'default',
          'markup' => 0,
          'multiple' => 'default',
          'multiple_and' => 'text',
          'multiple_delimiter' => ', ',
          'multiple_delimiter_precedes_last' => 'never',
          'multiple_el_al_first' => 1,
          'multiple_el_al_min' => 3,
          'output' => 'default',
          'semantic_field_format' => '',
        ),
        'type' => 'name_formatter',
        'weight' => 1,
      ),
      'viewmode_print_pressemitteilung_pressestelle' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_person_w',
    'label' => 'Pressesprecherin',
    'required' => 1,
    'settings' => array(
      'component_css' => '',
      'component_layout' => 'default',
      'credentials_inline' => 0,
      'field_type' => array(
        'credentials' => 'text',
        'family' => 'text',
        'generational' => 'select',
        'given' => 'text',
        'middle' => 'text',
        'title' => 'select',
      ),
      'generational_field' => 'select',
      'inline_css' => array(
        'credentials' => '',
        'family' => '',
        'generational' => '',
        'given' => '',
        'middle' => '',
        'title' => '',
      ),
      'override_format' => 'default',
      'size' => array(
        'credentials' => 35,
        'family' => 20,
        'generational' => 5,
        'given' => 20,
        'middle' => 20,
        'title' => 6,
      ),
      'title_display' => array(
        'credentials' => 'description',
        'family' => 'description',
        'generational' => 'description',
        'given' => 'description',
        'middle' => 'description',
        'title' => 'description',
      ),
      'title_field' => 'select',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'name',
      'settings' => array(
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'name_widget',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-pressesprecher-field_pressesprecher_oder_in'
  $field_instances['node-pressesprecher-field_pressesprecher_oder_in'] = array(
    'bundle' => 'pressesprecher',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'evm_termindetailtab' => array(
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
      'viewmode_pressemitteilung' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'viewmode_print_pressemitteilung_pressestelle' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_pressesprecher_oder_in',
    'label' => 'Pressesprecher oder Pressesprecherin',
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
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-pressesprecher-field_workflow_status'
  $field_instances['node-pressesprecher-field_workflow_status'] = array(
    'bundle' => 'pressesprecher',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Bitte stellen Sie hier den aktuellen Workflow-Status ein. (Für Release 1+)',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'evm_termindetailtab' => array(
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
      'viewmode_pressemitteilung' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'viewmode_print_pressemitteilung_pressestelle' => array(
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
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-pressestelle-field_adresse'
  $field_instances['node-pressestelle-field_adresse'] = array(
    'bundle' => 'pressestelle',
    'default_value' => array(
      0 => array(
        'element_key' => 'node|pressestelle|field_adresse|und|0',
        'thoroughfare' => '',
        'premise' => '',
        'postal_code' => '',
        'locality' => '',
        'country' => 'DE',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'addressfield_staticmap',
        'settings' => array(
          'advanced_settings_index' => 0,
          'map_size' => '400x400',
          'map_style' => 'roadmap',
          'semantic_field_format' => '',
          'zoom_level' => 14,
        ),
        'type' => 'addressfield_staticmap',
        'weight' => 5,
      ),
      'email_html' => array(
        'label' => 'hidden',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            0 => 'address',
          ),
          'semantic_field_format' => 'fieldsonly',
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'viewmode_pressemeldung' => array(
        'label' => 'above',
        'module' => 'addressfield_staticmap',
        'settings' => array(
          'advanced_settings_index' => 0,
          'map_size' => '400x400',
          'map_style' => 'roadmap',
          'semantic_field_format' => '',
          'zoom_level' => 14,
        ),
        'type' => 'addressfield_staticmap',
        'weight' => 4,
      ),
      'viewmode_pressemitteilung' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'viewmode_print_pressemitteilung_pressestelle' => array(
        'label' => 'hidden',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            0 => 'address',
          ),
          'semantic_field_format' => '',
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_adresse',
    'label' => 'Adresse',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'addressfield',
      'settings' => array(
        'available_countries' => array(
          'DE' => 'DE',
        ),
        'format_handlers' => array(
          'address' => 'address',
          'address-hide-country' => 'address-hide-country',
          'organisation' => 0,
          'name-full' => 0,
          'name-oneline' => 0,
        ),
      ),
      'type' => 'addressfield_standard',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-pressestelle-field_email_main'
  $field_instances['node-pressestelle-field_email_main'] = array(
    'bundle' => 'pressestelle',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'email',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'email_default',
        'weight' => 4,
      ),
      'email_html' => array(
        'label' => 'hidden',
        'module' => 'email',
        'settings' => array(
          'semantic_field_format' => 'fieldsonly',
        ),
        'type' => 'email_plain',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'viewmode_pressemeldung' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'email_default',
        'weight' => 3,
      ),
      'viewmode_pressemitteilung' => array(
        'label' => 'inline',
        'module' => 'email',
        'settings' => array(
          'semantic_field_format' => 'fieldsonlybr',
        ),
        'type' => 'email_default',
        'weight' => 3,
      ),
      'viewmode_print_pressemitteilung_pressestelle' => array(
        'label' => 'inline',
        'module' => 'email',
        'settings' => array(
          'semantic_field_format' => 'fieldsonly',
        ),
        'type' => 'email_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_email_main',
    'label' => 'E-Mail',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-pressestelle-field_fc_metadaten'
  $field_instances['node-pressestelle-field_fc_metadaten'] = array(
    'bundle' => 'pressestelle',
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
      'email_html' => array(
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
      'viewmode_pressemitteilung' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'viewmode_print_pressemitteilung_pressestelle' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fc_metadaten',
    'label' => 'Metadaten',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 43,
    ),
  );

  // Exported field_instance: 'node-pressestelle-field_internal_anmerkung'
  $field_instances['node-pressestelle-field_internal_anmerkung'] = array(
    'bundle' => 'pressestelle',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'email_html' => array(
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
      'viewmode_pressemitteilung' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'viewmode_print_pressemitteilung_pressestelle' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
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
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-pressestelle-field_nref_pressesprecher'
  $field_instances['node-pressestelle-field_nref_pressesprecher'] = array(
    'bundle' => 'pressestelle',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Über dieses Autocomplete-Feld suchen Sie nach der internen Bezeichnung für Angaben zum Pressesprecher. Diese Angaben müssen Sie vorher als separaten Inhalt des Typs "Pressesprecher" im Redaktionssystem angelegt haben.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'node_reference',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'node_reference_default',
        'weight' => 1,
      ),
      'email_html' => array(
        'label' => 'hidden',
        'module' => 'node_reference',
        'settings' => array(
          'semantic_field_format' => 'fieldsonly',
        ),
        'type' => 'node_reference_plain',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'viewmode_pressemitteilung' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'viewmode_print_pressemitteilung_pressestelle' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_nref_pressesprecher',
    'label' => 'Pressesprecher/in',
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-pressestelle-field_nref_pressesprecherin'
  $field_instances['node-pressestelle-field_nref_pressesprecherin'] = array(
    'bundle' => 'pressestelle',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'node_reference',
        'settings' => array(
          'semantic_field_format' => 0,
        ),
        'type' => 'node_reference_default',
        'weight' => 12,
      ),
      'email_html' => array(
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
      'viewmode_pressemitteilung' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'viewmode_print_pressemitteilung_pressestelle' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_nref_pressesprecherin',
    'label' => 'Pressesprecherin',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'node_reference',
      'settings' => array(
        'autocomplete_match' => 'contains',
        'autocomplete_path' => 'node_reference/autocomplete',
        'size' => 60,
      ),
      'type' => 'node_reference_autocomplete',
      'weight' => 46,
    ),
  );

  // Exported field_instance: 'node-pressestelle-field_oeffnungszeiten'
  $field_instances['node-pressestelle-field_oeffnungszeiten'] = array(
    'bundle' => 'pressestelle',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'office_hours',
        'settings' => array(
          'closedformat' => 'Closed',
          'compress' => FALSE,
          'current_status' => array(
            'closed_text' => 'Currently closed',
            'open_text' => 'Currently open!',
            'position' => 'hide',
          ),
          'daysformat' => 'long',
          'grouped' => FALSE,
          'hoursformat' => 0,
          'semantic_field_format' => '',
          'separator_day_hours' => ': ',
          'separator_days' => '<br>',
          'separator_grouped_days' => ' - ',
          'separator_hours_hours' => '-',
          'separator_more_hours' => ', ',
          'showclosed' => FALSE,
          'timezone_field' => '',
        ),
        'type' => 'office_hours',
        'weight' => 6,
      ),
      'email_html' => array(
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
      'viewmode_pressemeldung' => array(
        'label' => 'above',
        'module' => 'office_hours',
        'settings' => array(
          'closedformat' => 'Closed',
          'compress' => FALSE,
          'current_status' => array(
            'closed_text' => 'Currently closed',
            'open_text' => 'Currently open!',
            'position' => 'hide',
          ),
          'daysformat' => 'long',
          'grouped' => FALSE,
          'hoursformat' => 0,
          'semantic_field_format' => '',
          'separator_day_hours' => ': ',
          'separator_days' => '<br>',
          'separator_grouped_days' => ' - ',
          'separator_hours_hours' => '-',
          'separator_more_hours' => ', ',
          'showclosed' => FALSE,
          'timezone_field' => '',
        ),
        'type' => 'office_hours',
        'weight' => 5,
      ),
      'viewmode_pressemitteilung' => array(
        'label' => 'hidden',
        'module' => 'office_hours',
        'settings' => array(
          'closedformat' => 'Closed',
          'compress' => FALSE,
          'current_status' => array(
            'closed_text' => 'Currently closed',
            'open_text' => 'Currently open!',
            'position' => 'hide',
          ),
          'daysformat' => 'long',
          'grouped' => FALSE,
          'hoursformat' => 0,
          'semantic_field_format' => '',
          'separator_day_hours' => ': ',
          'separator_days' => '<br>',
          'separator_grouped_days' => ' - ',
          'separator_hours_hours' => '-',
          'separator_more_hours' => ', ',
          'showclosed' => FALSE,
          'timezone_field' => '',
        ),
        'type' => 'office_hours',
        'weight' => 4,
      ),
      'viewmode_print_pressemitteilung_pressestelle' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_oeffnungszeiten',
    'label' => 'Öffnungszeiten',
    'required' => 0,
    'settings' => array(
      0 => 'hoursformat',
      1 => 'granularity',
      2 => 'limitstart',
      3 => 'limitend',
      4 => 'valhrs',
      5 => 'addhrs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'office_hours',
      'settings' => array(),
      'type' => 'office_hours',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-pressestelle-field_pressesprecher_oder_in'
  $field_instances['node-pressestelle-field_pressesprecher_oder_in'] = array(
    'bundle' => 'pressestelle',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'semantic_field_format' => 0,
        ),
        'type' => 'list_default',
        'weight' => 11,
      ),
      'email_html' => array(
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
      'viewmode_pressemitteilung' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'viewmode_print_pressemitteilung_pressestelle' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_pressesprecher_oder_in',
    'label' => 'Pressesprecher oder Pressesprecherin',
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
      'weight' => 45,
    ),
  );

  // Exported field_instance: 'node-pressestelle-field_telefon_fax'
  $field_instances['node-pressestelle-field_telefon_fax'] = array(
    'bundle' => 'pressestelle',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'phone',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'phone',
        'weight' => 3,
      ),
      'email_html' => array(
        'label' => 'hidden',
        'module' => 'phone',
        'settings' => array(
          'semantic_field_format' => 'fieldsonly',
        ),
        'type' => 'phone',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'phone',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'phone',
        'weight' => 0,
      ),
      'viewmode_pressemeldung' => array(
        'label' => 'above',
        'module' => 'phone',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'phone',
        'weight' => 2,
      ),
      'viewmode_pressemitteilung' => array(
        'label' => 'inline',
        'module' => 'phone',
        'settings' => array(
          'semantic_field_format' => 'fieldsonlybr',
        ),
        'type' => 'phone',
        'weight' => 2,
      ),
      'viewmode_print_pressemitteilung_pressestelle' => array(
        'label' => 'inline',
        'module' => 'phone',
        'settings' => array(
          'semantic_field_format' => 'fieldsonly',
        ),
        'type' => 'phone',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_telefon_fax',
    'label' => 'Telefax',
    'required' => 0,
    'settings' => array(
      'ca_phone_parentheses' => 1,
      'ca_phone_separator' => '-',
      'phone_country_code' => 1,
      'phone_default_country_code' => 49,
      'phone_int_max_length' => 25,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'phone',
      'settings' => array(),
      'type' => 'phone_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-pressestelle-field_telefon_main'
  $field_instances['node-pressestelle-field_telefon_main'] = array(
    'bundle' => 'pressestelle',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'phone',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'phone',
        'weight' => 2,
      ),
      'email_html' => array(
        'label' => 'hidden',
        'module' => 'phone',
        'settings' => array(
          'semantic_field_format' => 'fieldsonly',
        ),
        'type' => 'phone',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'phone',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'phone',
        'weight' => 0,
      ),
      'viewmode_pressemeldung' => array(
        'label' => 'above',
        'module' => 'phone',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'phone',
        'weight' => 1,
      ),
      'viewmode_pressemitteilung' => array(
        'label' => 'inline',
        'module' => 'phone',
        'settings' => array(
          'semantic_field_format' => 'fieldsonlybr',
        ),
        'type' => 'phone',
        'weight' => 1,
      ),
      'viewmode_print_pressemitteilung_pressestelle' => array(
        'label' => 'inline',
        'module' => 'phone',
        'settings' => array(
          'semantic_field_format' => 'fieldsonly',
        ),
        'type' => 'phone',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_telefon_main',
    'label' => 'Telefon',
    'required' => 0,
    'settings' => array(
      'ca_phone_parentheses' => 1,
      'ca_phone_separator' => '-',
      'phone_country_code' => 1,
      'phone_default_country_code' => 49,
      'phone_int_max_length' => 25,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'phone',
      'settings' => array(),
      'type' => 'phone_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-pressestelle-field_titel'
  $field_instances['node-pressestelle-field_titel'] = array(
    'bundle' => 'pressestelle',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Bezeichnung der Pressestelle',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => 'h1_headline',
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'email_html' => array(
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
      'viewmode_pressemeldung' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'viewmode_pressemitteilung' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => 'fieldsonlybr',
        ),
        'type' => 'text_plain',
        'weight' => 0,
      ),
      'viewmode_print_pressemitteilung_pressestelle' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => 'fieldsonly',
        ),
        'type' => 'text_plain',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_titel',
    'label' => 'Pressestelle',
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
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-pressestelle-field_workflow_status'
  $field_instances['node-pressestelle-field_workflow_status'] = array(
    'bundle' => 'pressestelle',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Bitte stellen Sie hier den aktuellen Workflow-Status ein. (Für Release 1+)',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'email_html' => array(
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
      'viewmode_pressemeldung' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 9,
      ),
      'viewmode_pressemitteilung' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'viewmode_print_pressemitteilung_pressestelle' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
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
      'weight' => 11,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t(' Alternative Spitzmarke für Teaser-Ansichten, wenn die ursprüngliche Spitzmarke zu lang ist.<br>Optimal wären ca. 20 Zeichen, abgeschnitten wird des Designs wegen nach 30 Zeichen.');
  t('Adresse');
  t('Alternative Spitzmarke für die Teaser-Ansicht "Empfehlung der Redaktion", wenn diese von der Universal-Teaserspitzmarke abweichen soll.<br>Optimal wären ca. 23 Zeichen, abgeschnitten wird des Designs wegen nach 30 Zeichen.');
  t('Alternative Spitzmarke für die Teaser-Ansicht "Themendossier", wenn diese von der Universal-Teaserspitzmarke abweichen soll.<br>Optimal wären ca. 20 Zeichen, abgeschnitten wird des Designs wegen nach 30 Zeichen.');
  t('Alternativer Titel für die Teaser-Ansicht " Empfehlung der Redaktion", wenn dieser von dem Universal-Teasertitel abweichen soll.<br>Optimal wären ca. 25 Zeichen, abgeschnitten wird im Template nach 30 Zeichen.');
  t('Alternativer Titel für die Teaser-Ansicht " Sliderbühne ", wenn dieser von dem Universal-Teasertitel abweichen soll.<br>Optimal wären ca. 23 Zeichen, abgeschnitten wird im Template nach 40 Zeichen.');
  t('Alternativer Titel für die Teaser-Ansicht "Themendossier", wenn dieser von dem Universal-Teasertitel abweichen soll.<br>Abgeschnitten wird im Template nach 50 Zeichen.');
  t('Alternativer Titel für die Teaser-Ansichten, wenn der ursprüngliche Titel zu lang ist.<br>Optimal wären ca. 20 Zeichen, abgeschnitten wird im Template nach 30 Zeichen. ');
  t('Angehängte Dateien zum Download (max. 20 MB).
Erlaubte Datei-Formate: jpg, jpeg, gif, png, bmp, tiff, tif, txt, pdf, mp3, ico, zip, rar.');
  t('Anmerkung (intern)');
  t('Anstelle eines Bildes, kann auch ein Teaser zu einem Video in die Pressemitteilung eingebunden werden. Bitte beachten Sie, dass der hier anzuzeigende Teaser zum Video bereits im Redaktionssystem eingepflegt sein muss. Der anzuzeigende Teaser zum Video ist per Autocomplete auffindbar.');
  t('Artikelinhalt');
  t('Bezeichnung der Pressestelle');
  t('Bild');
  t('Bild des Sprechers');
  t('Bild oder Video für die Pressemitteilung');
  t('Bildergalerie-Teaser');
  t('Bitte geben Sie hier an, wobei es sich bei dem Hauptmedium der Pressemittelung handelt.');
  t('Bitte stellen Sie hier den aktuellen Workflow-Status ein. (Für Release 1+)');
  t('Comment');
  t('Dies ist das Feld für die Spitzmarke der ersten Verlinkung auf eine interne oder externe Seite oder eine Datei (im Themendossier unten links angezeigt). Siehe  <a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/tdspitzmarke1.png?height=400" class="colorbox-load">Screenshot</a>. Maximal 22 Zeichen. Optimal wären ca. 15 Zeichen.');
  t('Dies ist das Feld für die Spitzmarke der zweiten Verlinkung auf eine interne oder externe Seite oder eine Datei (im Themendossier unten in den Mitte angezeigt). Siehe  <a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/tdspitzmarke2.png?height=400" class="colorbox-load">Screenshot</a>. Maximal 22 Zeichen. Optimal wären ca. 15 Zeichen.');
  t('Dies ist das Feld für die erste Verlinkung auf eine interne oder externe Seite oder eine Datei (im Themendossier unten links angezeigt). Siehe  <a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/tdlink1.png?height=400" class="colorbox-load">Screenshot</a>. Maximal 30 Zeichen. Optimal wären ca. 20 Zeichen.');
  t('Dies ist das Feld für die zweite Verlinkung auf eine interne oder externe Seite oder eine Datei (im Themendossier unten in der Mitte angezeigt). Siehe <a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/tdlink2.png?height=400" class="colorbox-load">Screenshot</a>. Maximal 30 Zeichen. Optimal wären ca. 20 Zeichen.');
  t('Downloads:');
  t('Durch das Befüllen dieses Feldes können Sie bestimmen, wie der Reiter (Tab) zu diesem Artikel beschriftet sein soll. Siehe <a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/tdtab.png?height=400" class="colorbox-load">Screenshot</a>. Maximal 25 Zeichen. Optimal wären ca. 16 Zeichen.');
  t('E-Mail');
  t('Empfehlung Teaserspitzmarke');
  t('Empfehlung Teasertitel');
  t('Empfehlung der Redaktion');
  t('Erlaubte Dateiformate: jpg, jpeg, gif, png');
  t('Erscheint hervorgehoben zwischen Titel und dem Bild oder Video zur Pressemitteilung.');
  t('Erscheint über dem Titel.');
  t('Geben Sie hier den Titel der einzubindenden Bildergalerie ein, um einen Teaser dieser Bildergalerie am Ende der Pressemitteilung anzeigen zu lassen. SCREENSHOT????????????');
  t('Ggf. persönliche eMail oder die der Pressestelle');
  t('Herausgeber');
  t('Hier ist die URL zur Themenseite einzutragen. Diese kann intern oder extern sein. In der Ausgabe wird der Link automatisch mit dem Titel "Zur Themenseite" versehen. Siehe  <a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/tdthemenseite.png?height=400" class="colorbox-load">Screenshot</a>.');
  t('Hier können Sie ein Bild für die Teaseransicht der Pressemitteilung hochladen. Bitte achten Sie darauf, dass das Bild möglichst den Seitenverhältnissen des im jeweiligen Modul (Themendossier, Themenslider, ...) ausgegebenen Bilds entspricht.');
  t('In dieses Feld geben Sie nun den Titel des anzuzeigenden Social Media Teasers ein. Bitte beachten Sie, dass der hier anzuzeigende Social Media Teaser bereits im Redaktionssystem eingepflegt sein muss. Der anzuzeigende Social Media Teaser ist per Autocomplete auffindbar.');
  t('In dieses Feld geben Sie nun den Titel des anzuzeigenden Universal-Inhaltes ein. Bitte beachten Sie, dass der hier anzuzeigende Universal-Inhalt bereits im Redaktionssystem eingepflegt sein muss. Der anzuzeigende Universal-Inhalt ist per Autocomplete auffindbar.');
  t('In dieses Feld geben Sie nun den Titel des anzuzeigenden Videos ein. Bitte beachten Sie, dass das hier anzuzeigende Video bereits im Redaktionssystem eingepflegt sein muss. Das anzuzeigende Video ist per Autocomplete auffindbar.');
  t('In dieses Feld geben Sie nun den Titel des anzuzeigenden Zitates ein. Bitte beachten Sie, dass das hier anzuzeigende Zitat bereits im Redaktionssystem eingepflegt sein muss. Das anzuzeigende Zitat ist per Autocomplete auffindbar.');
  t('In dieses Feld geben Sie nun den anzuzeigenden Kontakt ein. Bitte beachten Sie, dass der hier anzuzeigende Kontakt bereits im Redaktionssystem eingepflegt sein muss. Der anzuzeigende Kontakt ist per Autocomplete auffindbar.');
  t('Karriere Block');
  t('Kontakt Block');
  t('Kontakt Inhalt');
  t('Kurztext für Teaser-Ansicht " Sliderbühne ", der neugierig macht. Dieses Feld ist auszufüllen, wenn der Teasertext in der Sliderbühne von dem Universal-Teasertext abweichen soll.<br>Optimal wären bis zu 90 Zeichen, abgeschnitten wird im Template nach 100 Zeichen.');
  t('Kurztext für Teaser-Ansicht "Themendossier", der neugierig macht. Dieses Feld ist auszufüllen, wenn der Teasertext im Themendossier von dem Universal-Teasertext abweichen soll.<br>Optimal wären ca. 230 Zeichen, abgeschnitten wird im Template nach 250 Zeichen.');
  t('Kurztext für Teaser-Ansicht "Themenslider", der neugierig macht. Dieses Feld ist auszufüllen, wenn der Teasertext im Themenslider von dem Universal-Teasertext abweichen soll.<br>Optimal wären bis zu 180 Zeichen, abgeschnitten wird im Template nach 190 Zeichen. Kurztext für Blöcke/Listen, der neugierig macht.<br>Optimal wären bis zu 180 Zeichen, abgeschnitten wird im Template nach 200 Zeichen. ');
  t('Kurztext für Teaser-Ansichten, der neugierig macht. Wenn diese Pressemitteilung für eine Centerpage vorgesehen ist, wird dieser Teasertext angezeigt. Außerdem wird dieser Teasertext in der Pressemitteilungsübersicht angezeigt.');
  t('Link zum externen Inhalt');
  t('Link/Datei 1');
  t('Link/Datei 2');
  t('Links:');
  t('Meistgelesen Block');
  t('Metadaten');
  t('Möchten Sie die Pressemitteilung (anschließend) als Newsletter versenden, wählen Sie hier die entsprechende Kategorie des Newsletters aus. ');
  t('Newsletter Anhang');
  t('Newsletter category');
  t('Pressesprecher');
  t('Pressesprecher oder Pressesprecherin');
  t('Pressesprecher/in');
  t('Pressesprecherin');
  t('Pressestelle');
  t('Publikationsdatum');
  t('Sliderbühne');
  t('Sliderbühne Teasertext');
  t('Sliderbühne Teasertitel');
  t('Social Media Block');
  t('Social Media Inhalt');
  t('Soll der Teaser dieser Pressemitteilung in den Modulen Themendossier und Themenslider ganz oben in der Liste erscheinen, aktivieren Sie diese Checkbox.');
  t('Soll diese Pressemitteilung als Teaser im Modul "<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/empfehlungredaktion.png?height=400" class="colorbox-load">Empfehlung der Redaktion</a>" erscheinen? Bitte an die maximalen Zeichenlängen denken: Teaser-Spitzmarke max. 23 und Teaser-Titel max. 30 Zeichen.');
  t('Soll diese Pressemitteilung als Teaser im Modul "<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/sliderbuehne.png?height=400" class="colorbox-load">Sliderbühne</a>" erscheinen? Bitte an die maximalen Zeichenlängen denken: Teaser-Titel max. 40 und Teaser max. 100 Zeichen. <br>
Die Sliderbühne erscheint nur auf http://www.hessen.de, nicht auf den Seiten der Ressorts.');
  t('Soll diese Pressemitteilung als Teaser im Modul "<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/themendossier.png?height=400" class="colorbox-load">Themendossier</a>" erscheinen? ');
  t('Soll diese Pressemitteilung als Teaser im Modul "<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/themenslider.png?height=400" class="colorbox-load">Top Newsbox (Themenslider)</a>" erscheinen? Bitte an die maximalen Zeichenlängen denken: Teaser-Spitzmarke max. 30, Teaser-Titel max. 30 und Teaser max. 100 Zeichen.');
  t('Soll unterhalb dieser Pressemitteilung der Block "<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/verwandteinhalte.png?height=400" class="colorbox-load">Verwandte Inhalte</a>" angezeigt werden? Wenn ja, aktivieren Sie die Checkbox.');
  t('Soll vom Teaser aus auf eine externe Pressemitteilung verlinkt werden, ist die URL der Pressemitteilung hier einzutragen. Handelt es sich um eine interne Pressemitteilung bleibt dieses Feld leer.');
  t('Soll zu dieser Pressemitteilung in der rechten Marginalspalte der Block "<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/karriereportalblock.png?height=400" class="colorbox-load">Karriereportal</a>" angezeigt werden? Wenn ja, aktivieren Sie die Checkbox.');
  t('Soll zu dieser Pressemitteilung in der rechten Marginalspalte der Block "<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/kontaktblock.png?height=400" class="colorbox-load">Kontakt</a>" angezeigt werden? Wenn ja, aktivieren Sie die Checkbox.');
  t('Soll zu dieser Pressemitteilung in der rechten Marginalspalte der Block "<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/videobeitrag.png?height=400" class="colorbox-load">Videobeitrag</a>" angezeigt werden? Wenn ja, aktivieren Sie die Checkbox.');
  t('Soll zu dieser Pressemitteilung in der rechten Marginalspalte der Block "<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/zitatblock.png?height=400" class="colorbox-load">Zitat das Tages</a>" angezeigt werden? Wenn ja, aktivieren Sie die Checkbox.');
  t('Soll zu dieser Pressemitteilung in der rechten Marginalspalte der Universal-Block angezeigt werden? Wenn ja, aktivieren Sie die Checkbox.');
  t('Soll zu dieser Seite in der rechten Marginalspalte der Block "<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/meistgelesen.png?height=400" class="colorbox-load">Meistgelesen</a>" angezeigt werden? Wenn ja, aktivieren Sie die Checkbox. (Hinweis: Diese Funktion ist für Release 1 nicht vorgesehen. Wenn Sie diese Checkbox aktivieren, wird der Block "Meistgelesen" trotzdem nicht angezeigt.)');
  t('Soll zudieser Pressemitteilung in der rechten Marginalspalte der Block "<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/socialmediateaser.png?height=400" class="colorbox-load">Social Media</a>" angezeigt werden? Wenn ja, aktivieren Sie die Checkbox.');
  t('Spitzmarke');
  t('Spitzmarke Link/Datei 1');
  t('Spitzmarke Link/Datei 2');
  t('Spitzmarke für Teaser-Ansichten. Wenn diese Pressemitteilung für eine Centerpage vorgesehen ist, wird diese Spitzmarke angezeigt. Außerdem wird diese Spitzmarke in der Pressemitteilungsübersicht angezeigt.');
  t('Sticky');
  t('Tab Titel');
  t('Tags');
  t('Tags sind Wörter, die den Inhalt/die Pressemitteilung beschreiben. In Release 1+ sollen Inhalte mittels Tags (Schlagworte) in Beziehung gesetzt werden (z.B. für den Block "Verwandte Themen"). Für Release 1 ist das Befüllen dieses Feldes nicht notwendig.');
  t('Teaserbild');
  t('Teaserspitzmarke');
  t('Teasertext');
  t('Teasertitel');
  t('Telefax');
  t('Telefon');
  t('Themendossier');
  t('Themendossier Teaserspitzmarke');
  t('Themendossier Teasertext');
  t('Themendossier Teasertitel');
  t('Themenslider');
  t('Themenslider Teaserspitzmarke');
  t('Themenslider Teasertext');
  t('Themenslider Teasertitel');
  t('Titel');
  t('Titel der Pressemitteilung.');
  t('Titel für die Teaser-Ansichten. Wenn diese Pressemitteilung für eine Centerpage vorgesehen ist, wird dieser Titel angezeigt. Außerdem wird dieser Titel in der Pressemitteilungsübersicht angezeigt.');
  t('URL Themenseite');
  t('Universal Block');
  t('Universal Inhalt');
  t('Unterhalb der Pressemitteilung können ein oder mehrere Links (intern oder extern) zur Anzeige gebracht werden. Diese Links sind hier einzupflegen. SCREENSHOT????????????');
  t('Verwandte Inhalte');
  t('Verwandte Inhalte Block ');
  t('Video');
  t('Video Block');
  t('Video Inhalt');
  t('Workflow-Status');
  t('Wählen Sie über das Dropdown-Menü das publizierende Ressort aus.');
  t('Wählen Sie über das Dropdown-Menü die Pressestelle des publizierenden Ressorts aus.');
  t('Zitat Block');
  t('Zitat Inhalt');
  t('Zusammenfassung');
  t('Öffnungszeiten');
  t('Über dieses Autocomplete-Feld suchen Sie nach der internen Bezeichnung für Angaben zum Pressesprecher. Diese Angaben müssen Sie vorher als separaten Inhalt des Typs "Pressesprecher" im Redaktionssystem angelegt haben.');

  return $field_instances;
}
