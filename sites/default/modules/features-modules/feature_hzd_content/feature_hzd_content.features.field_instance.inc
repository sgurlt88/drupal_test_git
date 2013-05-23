<?php
/**
 * @file
 * feature_hzd_content.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function feature_hzd_content_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'comment-comment_node_artikel-comment_body'
  $field_instances['comment-comment_node_artikel-comment_body'] = array(
    'bundle' => 'comment_node_artikel',
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

  // Exported field_instance: 'comment-comment_node_biografie-comment_body'
  $field_instances['comment-comment_node_biografie-comment_body'] = array(
    'bundle' => 'comment_node_biografie',
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

  // Exported field_instance: 'comment-comment_node_listenseite-comment_body'
  $field_instances['comment-comment_node_listenseite-comment_body'] = array(
    'bundle' => 'comment_node_listenseite',
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

  // Exported field_instance: 'comment-comment_node_socialmediaitem-comment_body'
  $field_instances['comment-comment_node_socialmediaitem-comment_body'] = array(
    'bundle' => 'comment_node_socialmediaitem',
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

  // Exported field_instance: 'comment-comment_node_socialmediateaser-comment_body'
  $field_instances['comment-comment_node_socialmediateaser-comment_body'] = array(
    'bundle' => 'comment_node_socialmediateaser',
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

  // Exported field_instance: 'comment-comment_node_universal-comment_body'
  $field_instances['comment-comment_node_universal-comment_body'] = array(
    'bundle' => 'comment_node_universal',
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

  // Exported field_instance: 'comment-comment_node_video-comment_body'
  $field_instances['comment-comment_node_video-comment_body'] = array(
    'bundle' => 'comment_node_video',
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

  // Exported field_instance: 'comment-comment_node_webform-comment_body'
  $field_instances['comment-comment_node_webform-comment_body'] = array(
    'bundle' => 'comment_node_webform',
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

  // Exported field_instance: 'comment-comment_node_zitat_des_tages-comment_body'
  $field_instances['comment-comment_node_zitat_des_tages-comment_body'] = array(
    'bundle' => 'comment_node_zitat_des_tages',
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

  // Exported field_instance: 'field_collection_item-field_fc_listeninhalte_pt-field_abstract'
  $field_instances['field_collection_item-field_fc_listeninhalte_pt-field_abstract'] = array(
    'bundle' => 'field_fc_listeninhalte_pt',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Optimal wären ca. 100 Zeichen, abgeschnitten wird im Template nach 150 Zeichen.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'evm_fc_teaserliste' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => 'h2_zusammenfassung',
        ),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'field_collection_item',
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
        'maxlength_js' => 150,
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Von @limit Zeichen stehen Ihnen noch <strong>@remaining</strong> zur Verfügung.',
        'maxlength_js_truncate_html' => 0,
        'rows' => 2,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_fc_listeninhalte_pt-field_file_attachments'
  $field_instances['field_collection_item-field_fc_listeninhalte_pt-field_file_attachments'] = array(
    'bundle' => 'field_fc_listeninhalte_pt',
    'deleted' => 0,
    'description' => 'Angehängte Dateien zum Download (max. 20 MB).
Erlaubte Datei-Formate: jpg, jpeg, gif, png, bmp, tiff, tif, txt, pdf, mp3, ico, zip, rar.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'mediafield',
        'settings' => array(
          'file_view_mode' => 'viewmode_download',
          'semantic_field_format' => '',
        ),
        'type' => 'media',
        'weight' => 7,
      ),
      'evm_fc_teaserliste' => array(
        'label' => 'hidden',
        'module' => 'mediafield',
        'settings' => array(
          'file_view_mode' => 'viewmode_download',
          'semantic_field_format' => '',
        ),
        'type' => 'media',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'field_collection_item',
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
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_fc_listeninhalte_pt-field_hauptbild'
  $field_instances['field_collection_item-field_fc_listeninhalte_pt-field_hauptbild'] = array(
    'bundle' => 'field_fc_listeninhalte_pt',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'mediafield',
        'settings' => array(
          'file_view_mode' => 'teaser',
          'semantic_field_format' => '',
        ),
        'type' => 'media',
        'weight' => 0,
      ),
      'evm_fc_teaserliste' => array(
        'label' => 'hidden',
        'module' => 'mediafield',
        'settings' => array(
          'file_view_mode' => 'teaser',
          'semantic_field_format' => 'sff_divtsrimage',
        ),
        'type' => 'media',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
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
          'views_media_browser' => 'views_media_browser',
        ),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_fc_listeninhalte_pt-field_inhalt'
  $field_instances['field_collection_item-field_fc_listeninhalte_pt-field_inhalt'] = array(
    'bundle' => 'field_fc_listeninhalte_pt',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Optimal wären ca. 140 Zeichen, abgeschnitten wird im Template nach 200 Zeichen.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'evm_fc_teaserliste' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => 'fieldsonly',
        ),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'field_collection_item',
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
        'maxlength_js' => 200,
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Von @limit Zeichen stehen Ihnen noch <strong>@remaining</strong> zur Verfügung.',
        'maxlength_js_truncate_html' => 0,
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_fc_listeninhalte_pt-field_link_extern'
  $field_instances['field_collection_item-field_fc_listeninhalte_pt-field_link_extern'] = array(
    'bundle' => 'field_fc_listeninhalte_pt',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Optimal wären ca. 20 Zeichen im Linktitel, abgeschnitten wird im Template nach 30 Zeichen.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'link_default',
        'weight' => 5,
      ),
      'evm_fc_teaserliste' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(
          'semantic_field_format' => 'fieldsonly',
        ),
        'type' => 'link_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_link_extern',
    'label' => 'Link extern',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => 'nofollow',
        'target' => '_blank',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'required',
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
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_fc_listeninhalte_pt-field_link_intern'
  $field_instances['field_collection_item-field_fc_listeninhalte_pt-field_link_intern'] = array(
    'bundle' => 'field_fc_listeninhalte_pt',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'node_reference',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'node_reference_default',
        'weight' => 6,
      ),
      'evm_fc_teaserliste' => array(
        'label' => 'hidden',
        'module' => 'node_reference',
        'settings' => array(
          'semantic_field_format' => 'fieldsonly',
        ),
        'type' => 'node_reference_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_link_intern',
    'label' => 'Link intern',
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_fc_listeninhalte_pt-field_spitzmarke'
  $field_instances['field_collection_item-field_fc_listeninhalte_pt-field_spitzmarke'] = array(
    'bundle' => 'field_fc_listeninhalte_pt',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Optimal wären ca. 20 Zeichen, abgeschnitten wird im Template nach 60 Zeichen.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'evm_fc_teaserliste' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => 'span_spitzmarke',
        ),
        'type' => 'text_plain',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
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
        'maxlength_js' => 60,
        'maxlength_js_label' => 'Von @limit Zeichen stehen Ihnen noch <strong>@remaining</strong> zur Verfügung.',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_fc_listeninhalte_pt-field_titel'
  $field_instances['field_collection_item-field_fc_listeninhalte_pt-field_titel'] = array(
    'bundle' => 'field_fc_listeninhalte_pt',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Optimal wären ca. 40 Zeichen, abgeschnitten wird im Template nach 60 Zeichen.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'evm_fc_teaserliste' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => 'h3_tsr_headline',
        ),
        'type' => 'text_plain',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_titel',
    'label' => 'Titel',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 60,
        'maxlength_js_label' => 'Von @limit Zeichen stehen Ihnen noch <strong>@remaining</strong> zur Verfügung.',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_fc_verwandte_inhalte-field_vi_spitzmarke'
  $field_instances['field_collection_item-field_fc_verwandte_inhalte-field_vi_spitzmarke'] = array(
    'bundle' => 'field_fc_verwandte_inhalte',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Geben Sie hier die Spitzmarke für den verlinkten Inhalt (interne oder externe Seite) oder die verlinkte Datei an. Eine beispielhafte Darstellung finden Sie in folgendem <a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/vispitzmarke.png?height=400" class="colorbox-load">Screenshot</a>.',
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
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_vi_spitzmarke',
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
      'weight' => 41,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_fragebox-field_fb_text'
  $field_instances['field_collection_item-field_fragebox-field_fb_text'] = array(
    'bundle' => 'field_fragebox',
    'default_value' => array(
      0 => array(
        'value' => '<p>Das Bürgertelefon der Hessischen Landesregierung ist für Sie da:</p><p>Montag bis Freitag 8 Uhr bis 17 Uhr<br /><strong>Telefon:</strong>+49(0)180-10 30 300<br /><strong>Telefax:</strong>+49(0)611-32 36 87</p><p>Landesweit zum Citytarif (4,6 Cent pro Minute aus dem Festnetz)</p>',
        'format' => 'filter_redaktion',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_fb_text',
    'label' => 'Text',
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
      'weight' => 42,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_fragebox-field_fb_titel'
  $field_instances['field_collection_item-field_fragebox-field_fb_titel'] = array(
    'bundle' => 'field_fragebox',
    'default_value' => array(
      0 => array(
        'value' => 'Haben Sie noch Fragen zu diesem Thema?',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => 'h3_tsr_headline',
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_fb_titel',
    'label' => 'Titel',
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
      'weight' => 41,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_lebenslauf-field_ereignis_taetigkeit'
  $field_instances['field_collection_item-field_lebenslauf-field_ereignis_taetigkeit'] = array(
    'bundle' => 'field_lebenslauf',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => 'sff_table_td_second',
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_ereignis_taetigkeit',
    'label' => 'Ereignis/Tätigkeit',
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
      'weight' => 42,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_lebenslauf-field_jahr'
  $field_instances['field_collection_item-field_lebenslauf-field_jahr'] = array(
    'bundle' => 'field_lebenslauf',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => 'sff_table_td_first',
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_jahr',
    'label' => 'Jahr/Zeitraum',
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
      'weight' => 41,
    ),
  );

  // Exported field_instance: 'node-allgemeine_seite-field_abstract'
  $field_instances['node-allgemeine_seite-field_abstract'] = array(
    'bundle' => 'allgemeine_seite',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
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
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-allgemeine_seite-field_fc_metadaten'
  $field_instances['node-allgemeine_seite-field_fc_metadaten'] = array(
    'bundle' => 'allgemeine_seite',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
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
    'field_name' => 'field_fc_metadaten',
    'label' => 'Metadaten',
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
      'weight' => 30,
    ),
  );

  // Exported field_instance: 'node-allgemeine_seite-field_file_attachments'
  $field_instances['node-allgemeine_seite-field_file_attachments'] = array(
    'bundle' => 'allgemeine_seite',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'mediafield',
        'settings' => array(
          'file_view_mode' => 'default',
          'semantic_field_format' => 'ul_downloads',
        ),
        'type' => 'media',
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
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-allgemeine_seite-field_hauptbild'
  $field_instances['node-allgemeine_seite-field_hauptbild'] = array(
    'bundle' => 'allgemeine_seite',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'mediafield',
        'settings' => array(
          'file_view_mode' => 'viewmode_artikelhauptbild',
          'semantic_field_format' => 'image_default',
        ),
        'type' => 'media',
        'weight' => 3,
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
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-allgemeine_seite-field_inhalt'
  $field_instances['node-allgemeine_seite-field_inhalt'] = array(
    'bundle' => 'allgemeine_seite',
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
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-allgemeine_seite-field_internal_anmerkung'
  $field_instances['node-allgemeine_seite-field_internal_anmerkung'] = array(
    'bundle' => 'allgemeine_seite',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
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
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'node-allgemeine_seite-field_linklist'
  $field_instances['node-allgemeine_seite-field_linklist'] = array(
    'bundle' => 'allgemeine_seite',
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
      'rel_remove' => 'default',
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
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'node-allgemeine_seite-field_marginalspalte_karr_block'
  $field_instances['node-allgemeine_seite-field_marginalspalte_karr_block'] = array(
    'bundle' => 'allgemeine_seite',
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
        'weight' => 17,
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
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'options_onoff',
      'weight' => 27,
    ),
  );

  // Exported field_instance: 'node-allgemeine_seite-field_marginalspalte_kon_block'
  $field_instances['node-allgemeine_seite-field_marginalspalte_kon_block'] = array(
    'bundle' => 'allgemeine_seite',
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
        'weight' => 15,
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
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'options_onoff',
      'weight' => 25,
    ),
  );

  // Exported field_instance: 'node-allgemeine_seite-field_marginalspalte_kon_inhalt'
  $field_instances['node-allgemeine_seite-field_marginalspalte_kon_inhalt'] = array(
    'bundle' => 'allgemeine_seite',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
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
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'node_reference_autocomplete',
      'weight' => 26,
    ),
  );

  // Exported field_instance: 'node-allgemeine_seite-field_marginalspalte_me_ge_block'
  $field_instances['node-allgemeine_seite-field_marginalspalte_me_ge_block'] = array(
    'bundle' => 'allgemeine_seite',
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
        'weight' => 14,
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
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'node-allgemeine_seite-field_marginalspalte_so_m_inhalt'
  $field_instances['node-allgemeine_seite-field_marginalspalte_so_m_inhalt'] = array(
    'bundle' => 'allgemeine_seite',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
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
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'node_reference_autocomplete',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'node-allgemeine_seite-field_marginalspalte_so_me_block'
  $field_instances['node-allgemeine_seite-field_marginalspalte_so_me_block'] = array(
    'bundle' => 'allgemeine_seite',
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
        'weight' => 10,
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
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'options_onoff',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'node-allgemeine_seite-field_marginalspalte_uni_block'
  $field_instances['node-allgemeine_seite-field_marginalspalte_uni_block'] = array(
    'bundle' => 'allgemeine_seite',
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
        'weight' => 18,
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
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'options_onoff',
      'weight' => 28,
    ),
  );

  // Exported field_instance: 'node-allgemeine_seite-field_marginalspalte_uni_inhalt'
  $field_instances['node-allgemeine_seite-field_marginalspalte_uni_inhalt'] = array(
    'bundle' => 'allgemeine_seite',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
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
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'node_reference_autocomplete',
      'weight' => 29,
    ),
  );

  // Exported field_instance: 'node-allgemeine_seite-field_marginalspalte_vid_block'
  $field_instances['node-allgemeine_seite-field_marginalspalte_vid_block'] = array(
    'bundle' => 'allgemeine_seite',
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
        'weight' => 12,
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
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'options_onoff',
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'node-allgemeine_seite-field_marginalspalte_vid_inhalt'
  $field_instances['node-allgemeine_seite-field_marginalspalte_vid_inhalt'] = array(
    'bundle' => 'allgemeine_seite',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
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
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'node_reference_autocomplete',
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'node-allgemeine_seite-field_marginalspalte_z_inhalt'
  $field_instances['node-allgemeine_seite-field_marginalspalte_z_inhalt'] = array(
    'bundle' => 'allgemeine_seite',
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
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'node_reference_autocomplete',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'node-allgemeine_seite-field_marginalspalte_zitat_block'
  $field_instances['node-allgemeine_seite-field_marginalspalte_zitat_block'] = array(
    'bundle' => 'allgemeine_seite',
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
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'options_onoff',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-allgemeine_seite-field_spitzmarke'
  $field_instances['node-allgemeine_seite-field_spitzmarke'] = array(
    'bundle' => 'allgemeine_seite',
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
        'maxlength_js' => '',
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-allgemeine_seite-field_titel'
  $field_instances['node-allgemeine_seite-field_titel'] = array(
    'bundle' => 'allgemeine_seite',
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
        'maxlength_js' => '',
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-allgemeine_seite-field_workflow_status'
  $field_instances['node-allgemeine_seite-field_workflow_status'] = array(
    'bundle' => 'allgemeine_seite',
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
        'weight' => 21,
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
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'node-artikel-field_abstract'
  $field_instances['node-artikel-field_abstract'] = array(
    'bundle' => 'artikel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Erscheint hervorgehoben zwischen Titel und dem Bild oder Video zum Artikel. ',
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
        'maxlength_js' => 500,
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Von @limit Zeichen stehen Ihnen noch <strong>@remaining</strong> zur Verfügung.',
        'maxlength_js_truncate_html' => 0,
        'rows' => 6,
      ),
      'type' => 'text_textarea',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-artikel-field_edr_teaserspitzmarke'
  $field_instances['node-artikel-field_edr_teaserspitzmarke'] = array(
    'bundle' => 'artikel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Alternative Spitzmarke für die Teaser-Ansicht "Empfehlung der Redaktion", wenn diese von der Universal-Teaserspitzmarke abweichen soll.<br>Optimal wären ca. 23 Zeichen, abgeschnitten wird des Designs wegen nach 30 Zeichen. ',
    'display' => array(
      'default' => array(
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
      'weight' => 105,
    ),
  );

  // Exported field_instance: 'node-artikel-field_edr_teasertitel'
  $field_instances['node-artikel-field_edr_teasertitel'] = array(
    'bundle' => 'artikel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Alternativer Titel für die Teaser-Ansicht " Empfehlung der Redaktion", wenn dieser von dem Universal-Teasertitel abweichen soll.<br>Optimal wären ca. 25 Zeichen, abgeschnitten wird im Template nach 30 Zeichen.',
    'display' => array(
      'default' => array(
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
      'weight' => 106,
    ),
  );

  // Exported field_instance: 'node-artikel-field_empfehlung_der_redaktion'
  $field_instances['node-artikel-field_empfehlung_der_redaktion'] = array(
    'bundle' => 'artikel',
    'default_value' => array(
      0 => array(
        'value' => 'Nein',
      ),
    ),
    'deleted' => 0,
    'description' => 'Soll dieser Artikel als Teaser im Modul "<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/empfehlungredaktion.png?height=400" class="colorbox-load">Empfehlung der Redaktion</a>" erscheinen? Bitte an die maximalen Zeichenlängen denken: Teaser-Spitzmarke max. 23 und Teaser-Titel max. 30 Zeichen.',
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
      'weight' => 104,
    ),
  );

  // Exported field_instance: 'node-artikel-field_fc_metadaten'
  $field_instances['node-artikel-field_fc_metadaten'] = array(
    'bundle' => 'artikel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 42,
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
      'weight' => 100,
    ),
  );

  // Exported field_instance: 'node-artikel-field_fc_verwandte_inhalte'
  $field_instances['node-artikel-field_fc_verwandte_inhalte'] = array(
    'bundle' => 'artikel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 43,
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
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 86,
    ),
  );

  // Exported field_instance: 'node-artikel-field_file_attachments'
  $field_instances['node-artikel-field_file_attachments'] = array(
    'bundle' => 'artikel',
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
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-artikel-field_fragebox'
  $field_instances['node-artikel-field_fragebox'] = array(
    'bundle' => 'artikel',
    'default_value' => array(),
    'deleted' => 0,
    'description' => 'Individuelle Infos & Texte für den "Haben Sie noch Fragen zu diesem Thema"-Block.
Hierbei handelt es sich um die blaue Box am Fuße des Artikels. Sie können die unten aufgeführten Kontaktdaten editieren. Screenshot folgt (!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!)',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'semantic_field_format' => 'sff_divfragenblock',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
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
    'field_name' => 'field_fragebox',
    'label' => 'Fragebox',
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
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-artikel-field_fragebox_block'
  $field_instances['node-artikel-field_fragebox_block'] = array(
    'bundle' => 'artikel',
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
        'weight' => 44,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fragebox_block',
    'label' => 'Fragebox',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-artikel-field_hauptbild'
  $field_instances['node-artikel-field_hauptbild'] = array(
    'bundle' => 'artikel',
    'deleted' => 0,
    'description' => 'Erlaubte Formate: jpg, jpeg, gif, png',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'mediafield',
        'settings' => array(
          'file_view_mode' => 'viewmode_artikelhauptbild',
          'semantic_field_format' => '',
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-artikel-field_inhalt'
  $field_instances['node-artikel-field_inhalt'] = array(
    'bundle' => 'artikel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Hauptinhalt',
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
        'rows' => 8,
      ),
      'type' => 'text_textarea',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-artikel-field_internal_anmerkung'
  $field_instances['node-artikel-field_internal_anmerkung'] = array(
    'bundle' => 'artikel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Interne Anmerkungen für Redaktions-Workflow.',
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
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-artikel-field_link_datei_1'
  $field_instances['node-artikel-field_link_datei_1'] = array(
    'bundle' => 'artikel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Dies ist das Feld für die erste Verlinkung auf eine interne oder externe Seite oder eine Datei (im Themendossier unten links angezeigt). Siehe  <a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/tdlink1.png?height=400" class="colorbox-load">Screenshot</a>. Maximal 30 Zeichen. Optimal wären ca. 20 Zeichen.',
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
      'validate_url' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(
        'maxlength_js_label' => 'Von @limit Zeichen stehen Ihnen noch <strong>@remaining</strong> zur Verfügung.',
      ),
      'type' => 'link_field',
      'weight' => 120,
    ),
  );

  // Exported field_instance: 'node-artikel-field_link_datei_2'
  $field_instances['node-artikel-field_link_datei_2'] = array(
    'bundle' => 'artikel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Dies ist das Feld für die zweite Verlinkung auf eine interne oder externe Seite oder eine Datei (im Themendossier unten in der Mitte angezeigt). Siehe <a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/tdlink2.png?height=400" class="colorbox-load">Screenshot</a>. Maximal 30 Zeichen. Optimal wären ca. 20 Zeichen.',
    'display' => array(
      'default' => array(
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
      'validate_url' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(
        'maxlength_js_label' => 'Von @limit Zeichen stehen Ihnen noch <strong>@remaining</strong> zur Verfügung.',
      ),
      'type' => 'link_field',
      'weight' => 122,
    ),
  );

  // Exported field_instance: 'node-artikel-field_link_zum_externen_inhalt'
  $field_instances['node-artikel-field_link_zum_externen_inhalt'] = array(
    'bundle' => 'artikel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Soll vom Teaser aus auf einen externen Artikel verlinkt werden, ist die URL des Artikels hier einzutragen. Handelt es sich um einen internen Artikel bleibt dieses Feld leer.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
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
        'url_cutoff' => 100,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
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
      'settings' => array(
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'link_field',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-artikel-field_linklist'
  $field_instances['node-artikel-field_linklist'] = array(
    'bundle' => 'artikel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Unterhalb des Artikels können ein oder mehrere Links (intern oder extern) zur Anzeige gebracht werden. Diese Links sind hier einzupflegen. Falls Dateien angefügt werden sollen, ist dies unter dem Reiter "Medien" vorzunehmen. SCREENSHOT????????????',
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
    'label' => 'Links:',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => 'nofollow',
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
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-artikel-field_marginalspalte_karr_block'
  $field_instances['node-artikel-field_marginalspalte_karr_block'] = array(
    'bundle' => 'artikel',
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
        'weight' => 40,
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
      'weight' => 82,
    ),
  );

  // Exported field_instance: 'node-artikel-field_marginalspalte_kon_block'
  $field_instances['node-artikel-field_marginalspalte_kon_block'] = array(
    'bundle' => 'artikel',
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
      'weight' => 80,
    ),
  );

  // Exported field_instance: 'node-artikel-field_marginalspalte_kon_inhalt'
  $field_instances['node-artikel-field_marginalspalte_kon_inhalt'] = array(
    'bundle' => 'artikel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'In dieses Feld geben Sie nun den anzuzeigenden Kontakt ein. Bitte beachten Sie, dass der hier anzuzeigende Kontakt bereits im Redaktionssystem eingepflegt sein muss. Der anzuzeigende Kontakt ist per Autocomplete auffindbar.',
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
      'weight' => 81,
    ),
  );

  // Exported field_instance: 'node-artikel-field_marginalspalte_me_ge_block'
  $field_instances['node-artikel-field_marginalspalte_me_ge_block'] = array(
    'bundle' => 'artikel',
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
      'weight' => 79,
    ),
  );

  // Exported field_instance: 'node-artikel-field_marginalspalte_so_m_inhalt'
  $field_instances['node-artikel-field_marginalspalte_so_m_inhalt'] = array(
    'bundle' => 'artikel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'In dieses Feld geben Sie nun den Titel des anzuzeigenden Social Media Teasers ein. Bitte beachten Sie, dass der hier anzuzeigende Social Media Teaser bereits im Redaktionssystem eingepflegt sein muss. Der anzuzeigende Social Media Teaser ist per Autocomplete auffindbar.',
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
      'weight' => 76,
    ),
  );

  // Exported field_instance: 'node-artikel-field_marginalspalte_so_me_block'
  $field_instances['node-artikel-field_marginalspalte_so_me_block'] = array(
    'bundle' => 'artikel',
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
      'weight' => 75,
    ),
  );

  // Exported field_instance: 'node-artikel-field_marginalspalte_uni_block'
  $field_instances['node-artikel-field_marginalspalte_uni_block'] = array(
    'bundle' => 'artikel',
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
        'weight' => 39,
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
      'weight' => 83,
    ),
  );

  // Exported field_instance: 'node-artikel-field_marginalspalte_uni_inhalt'
  $field_instances['node-artikel-field_marginalspalte_uni_inhalt'] = array(
    'bundle' => 'artikel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'In dieses Feld geben Sie nun den Titel des anzuzeigenden Universal-Inhaltes ein. Bitte beachten Sie, dass der hier anzuzeigende Universal-Inhalt bereits im Redaktionssystem eingepflegt sein muss. Der anzuzeigende Universal-Inhalt ist per Autocomplete auffindbar.',
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
      'weight' => 84,
    ),
  );

  // Exported field_instance: 'node-artikel-field_marginalspalte_vid_block'
  $field_instances['node-artikel-field_marginalspalte_vid_block'] = array(
    'bundle' => 'artikel',
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
      'weight' => 77,
    ),
  );

  // Exported field_instance: 'node-artikel-field_marginalspalte_vid_inhalt'
  $field_instances['node-artikel-field_marginalspalte_vid_inhalt'] = array(
    'bundle' => 'artikel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'In dieses Feld geben Sie nun den Titel des anzuzeigenden Videos ein. Bitte beachten Sie, dass das hier anzuzeigende Video bereits im Redaktionssystem eingepflegt sein muss. Das anzuzeigende Video ist per Autocomplete auffindbar.',
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
      'weight' => 78,
    ),
  );

  // Exported field_instance: 'node-artikel-field_marginalspalte_z_inhalt'
  $field_instances['node-artikel-field_marginalspalte_z_inhalt'] = array(
    'bundle' => 'artikel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'In dieses Feld geben Sie nun den Titel des anzuzeigenden Zitates ein. Bitte beachten Sie, dass das hier anzuzeigende Zitat bereits im Redaktionssystem eingepflegt sein muss. Das anzuzeigende Zitat ist per Autocomplete auffindbar.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 28,
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
      'weight' => 74,
    ),
  );

  // Exported field_instance: 'node-artikel-field_marginalspalte_zitat_block'
  $field_instances['node-artikel-field_marginalspalte_zitat_block'] = array(
    'bundle' => 'artikel',
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
      'weight' => 73,
    ),
  );

  // Exported field_instance: 'node-artikel-field_nref_video'
  $field_instances['node-artikel-field_nref_video'] = array(
    'bundle' => 'artikel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Anstelle eines Bildes, kann auch ein Teaser zu einem Video in den Artikel eingebunden werden. Bitte beachten Sie, dass der hier anzuzeigende Teaser zum Video bereits im Redaktionssystem eingepflegt sein muss. Der anzuzeigende Teaser zum Video ist per Autocomplete auffindbar.',
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
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_nref_video',
    'label' => 'Video Ref',
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
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-artikel-field_ref_bildergalerie'
  $field_instances['node-artikel-field_ref_bildergalerie'] = array(
    'bundle' => 'artikel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Geben Sie hier den Titel der einzubindenden Bildergalerie ein, um einen Teaser dieser Bildergalerie am Ende des Artikels anzeigen zu lassen. SCREENSHOT????????????',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
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
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-artikel-field_sb_teasertext'
  $field_instances['node-artikel-field_sb_teasertext'] = array(
    'bundle' => 'artikel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Kurztext für Teaser-Ansicht " Sliderbühne ", der neugierig macht. Dieses Feld ist auszufüllen, wenn der Teasertext in der Sliderbühne von dem Universal-Teasertext abweichen soll.<br>Optimal wären bis zu 90 Zeichen, abgeschnitten wird im Template nach 100 Zeichen.
',
    'display' => array(
      'default' => array(
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
      'weight' => 109,
    ),
  );

  // Exported field_instance: 'node-artikel-field_sb_teasertitel'
  $field_instances['node-artikel-field_sb_teasertitel'] = array(
    'bundle' => 'artikel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Alternativer Titel für die Teaser-Ansicht " Sliderbühne ", wenn dieser von dem Universal-Teasertitel abweichen soll.<br>Optimal wären ca. 23 Zeichen, abgeschnitten wird im Template nach 40 Zeichen.',
    'display' => array(
      'default' => array(
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
      'weight' => 108,
    ),
  );

  // Exported field_instance: 'node-artikel-field_sliderbuehne'
  $field_instances['node-artikel-field_sliderbuehne'] = array(
    'bundle' => 'artikel',
    'default_value' => array(
      0 => array(
        'value' => 'Nein',
      ),
    ),
    'deleted' => 0,
    'description' => 'Soll dieser Artikel als Teaser im Modul "<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/sliderbuehne.png?height=400" class="colorbox-load">Sliderbühne</a>" erscheinen? Bitte an die maximalen Zeichenlängen denken: Teaser-Titel max. 40 und Teaser max. 100 Zeichen.
Die Sliderbühne erscheint nur auf http://www.hessen.de, nicht auf den Seiten der Ressorts.',
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
      'weight' => 107,
    ),
  );

  // Exported field_instance: 'node-artikel-field_spitzmarke'
  $field_instances['node-artikel-field_spitzmarke'] = array(
    'bundle' => 'artikel',
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
      'text_processing' => 1,
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
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-artikel-field_spitzmarke_link_datei_1'
  $field_instances['node-artikel-field_spitzmarke_link_datei_1'] = array(
    'bundle' => 'artikel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Dies ist das Feld für die Spitzmarke der ersten Verlinkung auf eine interne oder externe Seite oder eine Datei (im Themendossier unten links angezeigt). Siehe  <a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/tdspitzmarke1.png?height=400" class="colorbox-load">Screenshot</a>. Maximal 22 Zeichen. Optimal wären ca. 15 Zeichen.',
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
    'field_name' => 'field_spitzmarke_link_datei_1',
    'label' => 'Spitzmarke für Link/Datei 1',
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
      'weight' => 119,
    ),
  );

  // Exported field_instance: 'node-artikel-field_spitzmarke_link_datei_2'
  $field_instances['node-artikel-field_spitzmarke_link_datei_2'] = array(
    'bundle' => 'artikel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Dies ist das Feld für die Spitzmarke der zweiten Verlinkung auf eine interne oder externe Seite oder eine Datei (im Themendossier unten in den Mitte angezeigt). Siehe  <a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/tdspitzmarke2.png?height=400" class="colorbox-load">Screenshot</a>. Maximal 22 Zeichen. Optimal wären ca. 15 Zeichen.',
    'display' => array(
      'default' => array(
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
    'field_name' => 'field_spitzmarke_link_datei_2',
    'label' => 'Spitzmarke für Link/Datei 2',
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
      'weight' => 121,
    ),
  );

  // Exported field_instance: 'node-artikel-field_sticky'
  $field_instances['node-artikel-field_sticky'] = array(
    'bundle' => 'artikel',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Soll der Teaser dieses Artikels in den Modulen Themendossier und Themenslider ganz oben in der Liste erscheinen, aktivieren Sie diese Checkbox.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 41,
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
      'weight' => 97,
    ),
  );

  // Exported field_instance: 'node-artikel-field_tab_titel'
  $field_instances['node-artikel-field_tab_titel'] = array(
    'bundle' => 'artikel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Durch das Befüllen dieses Feldes, können Sie bestimmen, wie der Reiter (Tab) zu diesem Artikel beschriftet sein soll. Siehe <a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/tdtab.png?height=400" class="colorbox-load">Screenshot</a>. Maximal 25 Zeichen. Optimal wären ca. 16 Zeichen.',
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
      'weight' => 118,
    ),
  );

  // Exported field_instance: 'node-artikel-field_tags'
  $field_instances['node-artikel-field_tags'] = array(
    'bundle' => 'artikel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Tags sind Wörter, die den Inhalt/Artikel beschreiben. In Release 1+ sollen Inhalte mittels Tags (Schlagworte) in Beziehung gesetzt werden (z.B. für den Block "Verwandte Themen"). Für Release 1 ist das Befüllen dieses Feldes nicht notwendig.',
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
        'weight' => 10,
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
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-artikel-field_td_teaserspitzmarke'
  $field_instances['node-artikel-field_td_teaserspitzmarke'] = array(
    'bundle' => 'artikel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Alternative Spitzmarke für die Teaser-Ansicht "Themendossier", wenn diese von der Universal-Teaserspitzmarke abweichen soll.<br>Optimal wären ca. 20 Zeichen, abgeschnitten wird des Designs wegen nach 30 Zeichen.
',
    'display' => array(
      'default' => array(
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
      'weight' => 115,
    ),
  );

  // Exported field_instance: 'node-artikel-field_td_teasertext'
  $field_instances['node-artikel-field_td_teasertext'] = array(
    'bundle' => 'artikel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Kurztext für Teaser-Ansicht "Themendossier", der neugierig macht. Dieses Feld ist auszufüllen, wenn der Teasertext im Themendossier von dem Universal-Teasertext abweichen soll.<br>Optimal wären ca. 230 Zeichen, abgeschnitten wird im Template nach 250 Zeichen.
',
    'display' => array(
      'default' => array(
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
      'weight' => 117,
    ),
  );

  // Exported field_instance: 'node-artikel-field_td_teasertitel'
  $field_instances['node-artikel-field_td_teasertitel'] = array(
    'bundle' => 'artikel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Alternativer Titel für die Teaser-Ansicht "Themendossier", wenn dieser von dem Universal-Teasertitel abweichen soll.<br>Abgeschnitten wird im Template nach 50 Zeichen.
',
    'display' => array(
      'default' => array(
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
      'weight' => 116,
    ),
  );

  // Exported field_instance: 'node-artikel-field_teaser'
  $field_instances['node-artikel-field_teaser'] = array(
    'bundle' => 'artikel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Kurztext für Teaser-Ansichten, der neugierig macht. Wenn dieser Artikel für eine Centerpage vorgesehen ist, wird dieser Teasertext angezeigt.',
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-artikel-field_teaser_bild'
  $field_instances['node-artikel-field_teaser_bild'] = array(
    'bundle' => 'artikel',
    'deleted' => 0,
    'description' => 'Hier können Sie ein Bild für die Teaseransicht des Artikels hochladen. Bitte achten Sie darauf, dass das Bild möglichst den Seitenverhältnissen des im jeweiligen Modul (Themendossier, Themenslider, ...) ausgegebenen Bilds entspricht.',
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
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-artikel-field_teaser_spitzmarke'
  $field_instances['node-artikel-field_teaser_spitzmarke'] = array(
    'bundle' => 'artikel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Spitzmarke für Teaser-Ansichten. Wenn dieser Artikel für eine Centerpage vorgesehen ist, wird diese Spitzmarke angezeigt.',
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-artikel-field_teaser_titel'
  $field_instances['node-artikel-field_teaser_titel'] = array(
    'bundle' => 'artikel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Titel für die Teaser-Ansichten. Wenn dieser Artikel für eine Centerpage vorgesehen ist, wird dieser Titel angezeigt.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
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
    ),
    'entity_type' => 'node',
    'field_name' => 'field_teaser_titel',
    'label' => 'Teasertitel',
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
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-artikel-field_testteaser'
  $field_instances['node-artikel-field_testteaser'] = array(
    'bundle' => 'artikel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => 0,
        ),
        'type' => 'text_default',
        'weight' => 57,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_testteaser',
    'label' => 'testteaser',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 124,
    ),
  );

  // Exported field_instance: 'node-artikel-field_themendossier'
  $field_instances['node-artikel-field_themendossier'] = array(
    'bundle' => 'artikel',
    'default_value' => array(
      0 => array(
        'value' => 'Nein',
      ),
    ),
    'deleted' => 0,
    'description' => 'Soll dieser Artikel als Teaser im Modul "<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/themendossier.png?height=400" class="colorbox-load">Themendossier</a>" erscheinen? ',
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
      'weight' => 114,
    ),
  );

  // Exported field_instance: 'node-artikel-field_themenslider'
  $field_instances['node-artikel-field_themenslider'] = array(
    'bundle' => 'artikel',
    'default_value' => array(
      0 => array(
        'value' => 'Nein',
      ),
    ),
    'deleted' => 0,
    'description' => 'Soll dieser Artikel als Teaser im Modul "<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/themenslider.png?height=400" class="colorbox-load">Top Newsbox (Themenslider)</a>" erscheinen? <br> Bitte an die maximalen Zeichenlängen denken: Teaser-Spitzmarke max. 30, Teaser-Titel max. 30 und Teaser max. 100 Zeichen.',
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
      'weight' => 110,
    ),
  );

  // Exported field_instance: 'node-artikel-field_titel'
  $field_instances['node-artikel-field_titel'] = array(
    'bundle' => 'artikel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Titel des Artikels.',
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
        'maxlength_js' => 255,
        'maxlength_js_label' => 'Von @limit Zeichen stehen Ihnen noch <strong>@remaining</strong> zur Verfügung.',
        'size' => 250,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-artikel-field_ts_teaserspitzmarke'
  $field_instances['node-artikel-field_ts_teaserspitzmarke'] = array(
    'bundle' => 'artikel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Alternative Spitzmarke für die Teaser-Ansicht "Themenslider", wenn diese von der Universal-Teaserspitzmarke abweichen soll.<br>
Optimal wären ca. 20 Zeichen, abgeschnitten wird des Designs wegen nach 30 Zeichen.',
    'display' => array(
      'default' => array(
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
        'maxlength_js' => 30,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 111,
    ),
  );

  // Exported field_instance: 'node-artikel-field_ts_teasertext'
  $field_instances['node-artikel-field_ts_teasertext'] = array(
    'bundle' => 'artikel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Kurztext für Teaser-Ansicht "Themenslider", der neugierig macht. Dieses Feld ist auszufüllen, wenn der Teasertext im Themenslider von dem Universal-Teasertext abweichen soll.<br>Optimal wären bis zu 180 Zeichen, abgeschnitten wird im Template nach 190 Zeichen.
',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 47,
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
      'weight' => 113,
    ),
  );

  // Exported field_instance: 'node-artikel-field_ts_teasertitel'
  $field_instances['node-artikel-field_ts_teasertitel'] = array(
    'bundle' => 'artikel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Alternativer Titel für die Teaser-Ansicht "Themenslider", wenn dieser von dem Universal-Teasertitel abweichen soll.<br>Optimal wären ca. 20 Zeichen, abgeschnitten wird im Template nach 30 Zeichen.',
    'display' => array(
      'default' => array(
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
        'maxlength_js' => 30,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 112,
    ),
  );

  // Exported field_instance: 'node-artikel-field_url_themenseite'
  $field_instances['node-artikel-field_url_themenseite'] = array(
    'bundle' => 'artikel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Hier ist die URL zur Themenseite einzutragen. Diese kann intern oder extern sein. In der Ausgabe wird der Link automatisch mit dem Titel "Zur Themenseite" versehen. Siehe  <a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/tdthemenseite.png?height=400" class="colorbox-load">Screenshot</a>',
    'display' => array(
      'default' => array(
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
      'weight' => 123,
    ),
  );

  // Exported field_instance: 'node-artikel-field_verwandte_inhalte_block_'
  $field_instances['node-artikel-field_verwandte_inhalte_block_'] = array(
    'bundle' => 'artikel',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Soll unterhalb dieses Artikels der Block "<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/verwandteinhalte.png?height=400" class="colorbox-load">Verwandte Inhalte</a>" angezeigt werden? Wenn ja, aktivieren Sie die Checkbox.',
    'display' => array(
      'default' => array(
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
      'weight' => 85,
    ),
  );

  // Exported field_instance: 'node-artikel-field_video_o_bild'
  $field_instances['node-artikel-field_video_o_bild'] = array(
    'bundle' => 'artikel',
    'default_value' => array(
      0 => array(
        'value' => 'Kein Medium',
      ),
    ),
    'deleted' => 0,
    'description' => 'Bitte geben Sie hier an, wobei es sich bei dem Hauptmedium des Artikels handelt.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 45,
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
    'label' => 'Bild oder Video für den Artikel',
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
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-artikel-field_workflow_status'
  $field_instances['node-artikel-field_workflow_status'] = array(
    'bundle' => 'artikel',
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
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-biografie-field_amt'
  $field_instances['node-biografie-field_amt'] = array(
    'bundle' => 'biografie',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Hierbei handelt es sich um die Spitzmarke der Biographie.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => 'span_spitzmarke',
        ),
        'type' => 'text_default',
        'weight' => 40,
      ),
      'print' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => 'span_spitzmarke',
        ),
        'type' => 'text_default',
        'weight' => 40,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_amt',
    'label' => 'Stelle/Behörde/Ressort',
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
      'weight' => 62,
    ),
  );

  // Exported field_instance: 'node-biografie-field_familienstand'
  $field_instances['node-biografie-field_familienstand'] = array(
    'bundle' => 'biografie',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 6,
      ),
      'print' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'taxonomy_term_reference_plain',
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
    'field_name' => 'field_familienstand',
    'label' => 'Familienstand',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 67,
    ),
  );

  // Exported field_instance: 'node-biografie-field_fc_metadaten'
  $field_instances['node-biografie-field_fc_metadaten'] = array(
    'bundle' => 'biografie',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 42,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 42,
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
      'weight' => 72,
    ),
  );

  // Exported field_instance: 'node-biografie-field_file_attachments'
  $field_instances['node-biografie-field_file_attachments'] = array(
    'bundle' => 'biografie',
    'deleted' => 0,
    'description' => 'Angehängte Dateien zum Download (max. 20 MB). Erlaubte Datei-Formate: jpg, jpeg, gif, png, txt, doc, docx, xls, xlsx, pdf, ppt, pptx, pps, ppsx, odt, ods, odp, mp3, ico, zip, rar, dmg. Bitte beachten Sie, dass MS Office-Dateien schutzbedürftige Informationen enthalten können. Nutzen Sie deshalb vorzugsweise das Dateiformat *.pdf.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'mediafield',
        'settings' => array(
          'file_view_mode' => 'viewmode_download',
          'semantic_field_format' => 'ul_downloads',
        ),
        'type' => 'media',
        'weight' => 22,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'mediafield',
        'settings' => array(
          'file_view_mode' => 'viewmode_download',
          'semantic_field_format' => 'ul_downloads',
        ),
        'type' => 'media',
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
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-biografie-field_geburtsdatum'
  $field_instances['node-biografie-field_geburtsdatum'] = array(
    'bundle' => 'biografie',
    'deleted' => 0,
    'description' => 'Bitte geben Sie das Geburtsdatum ein, z. B. 20.12.2013.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'medium',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'semantic_field_format' => '',
        ),
        'type' => 'date_default',
        'weight' => 4,
      ),
      'print' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'medium',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'semantic_field_format' => '',
        ),
        'type' => 'date_default',
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
    'field_name' => 'field_geburtsdatum',
    'label' => 'Geburtsdatum',
    'required' => 0,
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
        'year_range' => '-100:+0',
      ),
      'type' => 'date_popup',
      'weight' => 64,
    ),
  );

  // Exported field_instance: 'node-biografie-field_geburtsort'
  $field_instances['node-biografie-field_geburtsort'] = array(
    'bundle' => 'biografie',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'text_default',
        'weight' => 21,
      ),
      'print' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'text_default',
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
    'field_name' => 'field_geburtsort',
    'label' => 'Geburtsort',
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
      'weight' => 65,
    ),
  );

  // Exported field_instance: 'node-biografie-field_hauptbild'
  $field_instances['node-biografie-field_hauptbild'] = array(
    'bundle' => 'biografie',
    'deleted' => 0,
    'description' => 'Hier können Sie das Portraitbild hochladen. (Das Portraitbild wird in der Größe 225x170px ausgegeben. Bitte achten Sie darauf, das Bild mit dem richtigen Seitenverhältnis hochzuladen.)

Formate: jpg, jpeg, gif, png
',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'mediafield',
        'settings' => array(
          'file_view_mode' => 'viewmode_biografiebild',
          'semantic_field_format' => '',
        ),
        'type' => 'media',
        'weight' => 23,
      ),
      'print' => array(
        'label' => 'hidden',
        'module' => 'mediafield',
        'settings' => array(
          'file_view_mode' => 'viewmode_biografiebild',
          'semantic_field_format' => '',
        ),
        'type' => 'media',
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
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-biografie-field_inhalt'
  $field_instances['node-biografie-field_inhalt'] = array(
    'bundle' => 'biografie',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Hier kann ein kleiner Fließtext über die Person eingegeben werden.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'text_default',
        'weight' => 24,
      ),
      'print' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'text_default',
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
    'field_name' => 'field_inhalt',
    'label' => 'Allgemeiner Beschreibungstext',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 6,
      ),
      'type' => 'text_textarea',
      'weight' => 69,
    ),
  );

  // Exported field_instance: 'node-biografie-field_internal_anmerkung'
  $field_instances['node-biografie-field_internal_anmerkung'] = array(
    'bundle' => 'biografie',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 28,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 28,
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
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 27,
    ),
  );

  // Exported field_instance: 'node-biografie-field_kinder'
  $field_instances['node-biografie-field_kinder'] = array(
    'bundle' => 'biografie',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Hier geben Sie die Anzahl der Kinder an, z.B. 1 Sohn (erste Zeile), 2 Töchter (zweite Zeile).',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'text_default',
        'weight' => 39,
      ),
      'print' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'text_default',
        'weight' => 39,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_kinder',
    'label' => 'Kinder',
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
      'weight' => 68,
    ),
  );

  // Exported field_instance: 'node-biografie-field_konfession'
  $field_instances['node-biografie-field_konfession'] = array(
    'bundle' => 'biografie',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'print' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'list_default',
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
    'field_name' => 'field_konfession',
    'label' => 'Konfession',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 66,
    ),
  );

  // Exported field_instance: 'node-biografie-field_lebenslauf'
  $field_instances['node-biografie-field_lebenslauf'] = array(
    'bundle' => 'biografie',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Hier geben Sie die tabellarischen Daten zu dem Lebenslauf ein.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'semantic_field_format' => 'sff_table_tr',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_fields',
        'weight' => 41,
      ),
      'print' => array(
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'semantic_field_format' => '',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 41,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_lebenslauf',
    'label' => 'Lebenslauf',
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
      'weight' => 70,
    ),
  );

  // Exported field_instance: 'node-biografie-field_linklist'
  $field_instances['node-biografie-field_linklist'] = array(
    'bundle' => 'biografie',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Hier können interne/externe <a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/biografielinks.png?height=400" class="colorbox-load">Links</a> zu weiterführenden Informationen eingebunden werden.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'semantic_field_format' => 'ul_links',
        ),
        'type' => 'link_default',
        'weight' => 25,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'semantic_field_format' => 'ul_links',
        ),
        'type' => 'link_default',
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
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-biografie-field_marginalspalte_karr_block'
  $field_instances['node-biografie-field_marginalspalte_karr_block'] = array(
    'bundle' => 'biografie',
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
        'weight' => 18,
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
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'options_onoff',
      'weight' => 59,
    ),
  );

  // Exported field_instance: 'node-biografie-field_marginalspalte_kon_block'
  $field_instances['node-biografie-field_marginalspalte_kon_block'] = array(
    'bundle' => 'biografie',
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
        'weight' => 16,
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
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'options_onoff',
      'weight' => 57,
    ),
  );

  // Exported field_instance: 'node-biografie-field_marginalspalte_kon_inhalt'
  $field_instances['node-biografie-field_marginalspalte_kon_inhalt'] = array(
    'bundle' => 'biografie',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'In dieses Feld geben Sie nun den anzuzeigenden Kontakt ein. Bitte beachten Sie, dass der hier anzuzeigende Kontakt bereits im Redaktionssystem eingepflegt sein muss. Der anzuzeigende Kontakt ist per Autocomplete auffindbar.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'print' => array(
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
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'node_reference_autocomplete',
      'weight' => 58,
    ),
  );

  // Exported field_instance: 'node-biografie-field_marginalspalte_me_ge_block'
  $field_instances['node-biografie-field_marginalspalte_me_ge_block'] = array(
    'bundle' => 'biografie',
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
        'weight' => 9,
      ),
      'print' => array(
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
      'weight' => 56,
    ),
  );

  // Exported field_instance: 'node-biografie-field_marginalspalte_so_m_inhalt'
  $field_instances['node-biografie-field_marginalspalte_so_m_inhalt'] = array(
    'bundle' => 'biografie',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'In dieses Feld geben Sie nun den Titel des anzuzeigenden Social Media Teasers ein. Bitte beachten Sie, dass der hier anzuzeigende Social Media Teaser bereits im Redaktionssystem eingepflegt sein muss. Der anzuzeigende Social Media Teaser ist per Autocomplete auffindbar.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'print' => array(
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
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'node_reference_autocomplete',
      'weight' => 53,
    ),
  );

  // Exported field_instance: 'node-biografie-field_marginalspalte_so_me_block'
  $field_instances['node-biografie-field_marginalspalte_so_me_block'] = array(
    'bundle' => 'biografie',
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
        'weight' => 10,
      ),
      'print' => array(
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
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'options_onoff',
      'weight' => 52,
    ),
  );

  // Exported field_instance: 'node-biografie-field_marginalspalte_uni_block'
  $field_instances['node-biografie-field_marginalspalte_uni_block'] = array(
    'bundle' => 'biografie',
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
        'weight' => 19,
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
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'options_onoff',
      'weight' => 60,
    ),
  );

  // Exported field_instance: 'node-biografie-field_marginalspalte_uni_inhalt'
  $field_instances['node-biografie-field_marginalspalte_uni_inhalt'] = array(
    'bundle' => 'biografie',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'In dieses Feld geben Sie nun den Titel des anzuzeigenden Universal-Inhaltes ein. Bitte beachten Sie, dass der hier anzuzeigende Universal-Inhalt bereits im Redaktionssystem eingepflegt sein muss. Der anzuzeigende Universal-Inhalt ist per Autocomplete auffindbar.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
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
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'node_reference_autocomplete',
      'weight' => 61,
    ),
  );

  // Exported field_instance: 'node-biografie-field_marginalspalte_vid_block'
  $field_instances['node-biografie-field_marginalspalte_vid_block'] = array(
    'bundle' => 'biografie',
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
        'weight' => 11,
      ),
      'print' => array(
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
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'options_onoff',
      'weight' => 54,
    ),
  );

  // Exported field_instance: 'node-biografie-field_marginalspalte_vid_inhalt'
  $field_instances['node-biografie-field_marginalspalte_vid_inhalt'] = array(
    'bundle' => 'biografie',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'In dieses Feld geben Sie nun den Titel des anzuzeigenden Videos ein. Bitte beachten Sie, dass das hier anzuzeigende Video bereits im Redaktionssystem eingepflegt sein muss. Das anzuzeigende Video ist per Autocomplete auffindbar.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
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
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'node_reference_autocomplete',
      'weight' => 55,
    ),
  );

  // Exported field_instance: 'node-biografie-field_marginalspalte_z_inhalt'
  $field_instances['node-biografie-field_marginalspalte_z_inhalt'] = array(
    'bundle' => 'biografie',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'In dieses Feld geben Sie nun den Titel des anzuzeigenden Zitates ein. Bitte beachten Sie, dass das hier anzuzeigende Zitat bereits im Redaktionssystem eingepflegt sein muss. Das anzuzeigende Zitat ist per Autocomplete auffindbar.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
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
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'node_reference_autocomplete',
      'weight' => 51,
    ),
  );

  // Exported field_instance: 'node-biografie-field_marginalspalte_zitat_block'
  $field_instances['node-biografie-field_marginalspalte_zitat_block'] = array(
    'bundle' => 'biografie',
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
        'weight' => 12,
      ),
      'print' => array(
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
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'options_onoff',
      'weight' => 50,
    ),
  );

  // Exported field_instance: 'node-biografie-field_person_name'
  $field_instances['node-biografie-field_person_name'] = array(
    'bundle' => 'biografie',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
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
          'semantic_field_format' => 'h1_headline',
        ),
        'type' => 'name_formatter',
        'weight' => 2,
      ),
      'print' => array(
        'label' => 'hidden',
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
          'semantic_field_format' => 'h1_headline',
        ),
        'type' => 'name_formatter',
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
    'field_name' => 'field_person_name',
    'label' => 'Name',
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
      'settings' => array(),
      'type' => 'name_widget',
      'weight' => 63,
    ),
  );

  // Exported field_instance: 'node-biografie-field_tags'
  $field_instances['node-biografie-field_tags'] = array(
    'bundle' => 'biografie',
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
      'print' => array(
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
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-biografie-field_titel'
  $field_instances['node-biografie-field_titel'] = array(
    'bundle' => 'biografie',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Hierbei handelt es sich um den Titel, der in der Inhaltsübersicht erscheint (in der Web-Ansicht nicht sichtbar, nur intern).',
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
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-biografie-field_workflow_status'
  $field_instances['node-biografie-field_workflow_status'] = array(
    'bundle' => 'biografie',
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
        'weight' => 29,
      ),
      'print' => array(
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
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'node-listenseite-field_abstract'
  $field_instances['node-listenseite-field_abstract'] = array(
    'bundle' => 'listenseite',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Mit diesem Textfeld können Sie Ihre Listenseite anmoderieren. Optimal wären dazu ca. 200 Zeichen, die Ausgabe wird von System aber nicht beschränkt.',
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
      'text_processing' => 1,
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
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-listenseite-field_fc_listeninhalte_pt'
  $field_instances['node-listenseite-field_fc_listeninhalte_pt'] = array(
    'bundle' => 'listenseite',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Listeninhalte, die angezeigt werden sollen.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'semantic_field_format' => 'sff_listenseite_teaserliste',
          'view_mode' => 'evm_fc_teaserliste',
        ),
        'type' => 'field_collection_fields',
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
    'field_name' => 'field_fc_listeninhalte_pt',
    'label' => 'Listeninhalte',
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
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-listenseite-field_fc_metadaten'
  $field_instances['node-listenseite-field_fc_metadaten'] = array(
    'bundle' => 'listenseite',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
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
      'weight' => 61,
    ),
  );

  // Exported field_instance: 'node-listenseite-field_inhalt'
  $field_instances['node-listenseite-field_inhalt'] = array(
    'bundle' => 'listenseite',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'text_default',
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
    'field_name' => 'field_inhalt',
    'label' => 'Artikelinhalt',
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
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-listenseite-field_internal_anmerkung'
  $field_instances['node-listenseite-field_internal_anmerkung'] = array(
    'bundle' => 'listenseite',
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
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-listenseite-field_marginalspalte_karr_block'
  $field_instances['node-listenseite-field_marginalspalte_karr_block'] = array(
    'bundle' => 'listenseite',
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
      'weight' => 57,
    ),
  );

  // Exported field_instance: 'node-listenseite-field_marginalspalte_kon_block'
  $field_instances['node-listenseite-field_marginalspalte_kon_block'] = array(
    'bundle' => 'listenseite',
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
      'weight' => 55,
    ),
  );

  // Exported field_instance: 'node-listenseite-field_marginalspalte_kon_inhalt'
  $field_instances['node-listenseite-field_marginalspalte_kon_inhalt'] = array(
    'bundle' => 'listenseite',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
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
      'weight' => 56,
    ),
  );

  // Exported field_instance: 'node-listenseite-field_marginalspalte_me_ge_block'
  $field_instances['node-listenseite-field_marginalspalte_me_ge_block'] = array(
    'bundle' => 'listenseite',
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
      ),
      'type' => 'options_onoff',
      'weight' => 54,
    ),
  );

  // Exported field_instance: 'node-listenseite-field_marginalspalte_so_m_inhalt'
  $field_instances['node-listenseite-field_marginalspalte_so_m_inhalt'] = array(
    'bundle' => 'listenseite',
    'default_value' => NULL,
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
      'weight' => 51,
    ),
  );

  // Exported field_instance: 'node-listenseite-field_marginalspalte_so_me_block'
  $field_instances['node-listenseite-field_marginalspalte_so_me_block'] = array(
    'bundle' => 'listenseite',
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
      'weight' => 50,
    ),
  );

  // Exported field_instance: 'node-listenseite-field_marginalspalte_uni_block'
  $field_instances['node-listenseite-field_marginalspalte_uni_block'] = array(
    'bundle' => 'listenseite',
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
      'weight' => 58,
    ),
  );

  // Exported field_instance: 'node-listenseite-field_marginalspalte_uni_inhalt'
  $field_instances['node-listenseite-field_marginalspalte_uni_inhalt'] = array(
    'bundle' => 'listenseite',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
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
      'weight' => 59,
    ),
  );

  // Exported field_instance: 'node-listenseite-field_marginalspalte_vid_block'
  $field_instances['node-listenseite-field_marginalspalte_vid_block'] = array(
    'bundle' => 'listenseite',
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
      'weight' => 52,
    ),
  );

  // Exported field_instance: 'node-listenseite-field_marginalspalte_vid_inhalt'
  $field_instances['node-listenseite-field_marginalspalte_vid_inhalt'] = array(
    'bundle' => 'listenseite',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
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
      'weight' => 53,
    ),
  );

  // Exported field_instance: 'node-listenseite-field_marginalspalte_z_inhalt'
  $field_instances['node-listenseite-field_marginalspalte_z_inhalt'] = array(
    'bundle' => 'listenseite',
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
      'weight' => 49,
    ),
  );

  // Exported field_instance: 'node-listenseite-field_marginalspalte_zitat_block'
  $field_instances['node-listenseite-field_marginalspalte_zitat_block'] = array(
    'bundle' => 'listenseite',
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
      'weight' => 48,
    ),
  );

  // Exported field_instance: 'node-listenseite-field_spitzmarke'
  $field_instances['node-listenseite-field_spitzmarke'] = array(
    'bundle' => 'listenseite',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Optimal wären hier ca. 20 Zeichen, die Ausgabe wird von System aber nicht beschränkt.',
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
        'maxlength_js' => '',
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-listenseite-field_titel'
  $field_instances['node-listenseite-field_titel'] = array(
    'bundle' => 'listenseite',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Die Überschrift.',
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
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-listenseite-field_workflow_status'
  $field_instances['node-listenseite-field_workflow_status'] = array(
    'bundle' => 'listenseite',
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
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-socialmediaitem-field_bild_des_sprechers'
  $field_instances['node-socialmediaitem-field_bild_des_sprechers'] = array(
    'bundle' => 'socialmediaitem',
    'deleted' => 0,
    'description' => 'Es wird ein Bild im Format 130x130 px angezeigt. Wenn Sie ein größeres Bild verwenden, wird ein Ausschnitt automatisch aus der Bildmitte generiert. Um den bestmöglichen Bildausschnitt einsetzen zu können ist es unter Umständen sinnvoll, selbst ein Bild im Format 130x130px zu erzeugen und hier hochzuladen. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'tn130x110',
          'semantic_field_format' => '',
        ),
        'type' => 'image',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'tn130x110',
          'semantic_field_format' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_bild_des_sprechers',
    'label' => 'Bild des Accountinhabers',
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
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-socialmediaitem-field_datum_detailed'
  $field_instances['node-socialmediaitem-field_datum_detailed'] = array(
    'bundle' => 'socialmediaitem',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'semantic_field_format' => '',
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'date_dmy',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'semantic_field_format' => '',
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_datum_detailed',
    'label' => 'Datum',
    'required' => 0,
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
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-socialmediaitem-field_fc_metadaten'
  $field_instances['node-socialmediaitem-field_fc_metadaten'] = array(
    'bundle' => 'socialmediaitem',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
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
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-socialmediaitem-field_internal_anmerkung'
  $field_instances['node-socialmediaitem-field_internal_anmerkung'] = array(
    'bundle' => 'socialmediaitem',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
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
        'weight' => 17,
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

  // Exported field_instance: 'node-socialmediaitem-field_smi_textblock'
  $field_instances['node-socialmediaitem-field_smi_textblock'] = array(
    'bundle' => 'socialmediaitem',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_smi_textblock',
    'label' => 'Textblock',
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-socialmediaitem-field_smi_url'
  $field_instances['node-socialmediaitem-field_smi_url'] = array(
    'bundle' => 'socialmediaitem',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'link_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_smi_url',
    'label' => 'Link zum Profil',
    'required' => 1,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => 'nofollow',
        'target' => '_blank',
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
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-socialmediaitem-field_sprecher'
  $field_instances['node-socialmediaitem-field_sprecher'] = array(
    'bundle' => 'socialmediaitem',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'text_default',
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sprecher',
    'label' => 'Name des Accountinhabers',
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
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-socialmediaitem-field_sprecher_amt'
  $field_instances['node-socialmediaitem-field_sprecher_amt'] = array(
    'bundle' => 'socialmediaitem',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'text_default',
        'weight' => 19,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sprecher_amt',
    'label' => 'Amt/Rolle des Accountinhabers',
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-socialmediaitem-field_termref_socialnetwork'
  $field_instances['node-socialmediaitem-field_termref_socialnetwork'] = array(
    'bundle' => 'socialmediaitem',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'hs_taxonomy',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'hs_taxonomy_term_reference_hierarchical_text',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_termref_socialnetwork',
    'label' => 'Social Network',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-socialmediaitem-field_titel'
  $field_instances['node-socialmediaitem-field_titel'] = array(
    'bundle' => 'socialmediaitem',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'text_default',
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
    'field_name' => 'field_titel',
    'label' => 'Titel',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-socialmediaitem-field_workflow_status'
  $field_instances['node-socialmediaitem-field_workflow_status'] = array(
    'bundle' => 'socialmediaitem',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Bitte stellen Sie hier den aktuellen Workflow-Status ein. (Für Release 1+)',
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
        'weight' => 13,
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

  // Exported field_instance: 'node-socialmediateaser-field_bild_des_sprechers'
  $field_instances['node-socialmediateaser-field_bild_des_sprechers'] = array(
    'bundle' => 'socialmediateaser',
    'deleted' => 0,
    'description' => 'Es wird ein Bild im Format 60x60 px angezeigt. Wenn Sie ein größeres Bild verwenden, wird ein Ausschnitt automatisch aus der Bildmitte generiert. Um den bestmöglichen Bildausschnitt einsetzen zu können, ist es unter Umständen sinnvoll, selbst ein Bild im Format 60x60px zu erzeugen und hier hochzuladen.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'tn130x110',
          'semantic_field_format' => '',
        ),
        'type' => 'image',
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
    'field_name' => 'field_bild_des_sprechers',
    'label' => 'Bild des Accountinhabers',
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-socialmediateaser-field_fc_metadaten'
  $field_instances['node-socialmediateaser-field_fc_metadaten'] = array(
    'bundle' => 'socialmediateaser',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
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
      'weight' => 43,
    ),
  );

  // Exported field_instance: 'node-socialmediateaser-field_internal_anmerkung'
  $field_instances['node-socialmediateaser-field_internal_anmerkung'] = array(
    'bundle' => 'socialmediateaser',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
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

  // Exported field_instance: 'node-socialmediateaser-field_smi_textblock'
  $field_instances['node-socialmediateaser-field_smi_textblock'] = array(
    'bundle' => 'socialmediateaser',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Optimal im Sinne des Designs wären hier ca. 90 Zeichen. Im Template wird bei <b>200 Zeichen</b> abgeschnitten.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => '',
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
    'field_name' => 'field_smi_textblock',
    'label' => 'Textblock',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
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
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-socialmediateaser-field_smi_url'
  $field_instances['node-socialmediateaser-field_smi_url'] = array(
    'bundle' => 'socialmediateaser',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'link_default',
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
    'field_name' => 'field_smi_url',
    'label' => 'Link zum Profil/Video',
    'required' => 1,
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
      'title_value' => 'Mehr erfahren',
      'url' => 'optional',
      'user_register_form' => FALSE,
      'validate_url' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-socialmediateaser-field_sprecher'
  $field_instances['node-socialmediateaser-field_sprecher'] = array(
    'bundle' => 'socialmediateaser',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'text_default',
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
    'field_name' => 'field_sprecher',
    'label' => 'Name des Accountinhabers',
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-socialmediateaser-field_sprecher_amt'
  $field_instances['node-socialmediateaser-field_sprecher_amt'] = array(
    'bundle' => 'socialmediateaser',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Bitte für Optik und Lesbarkeit eine kurze Bezeichnung wählen, z.B.: „Umweltministerin“ statt „Hessische Ministerin für Umwelt, Ernährung, Landwirtschaft und Verbraucherschutz“.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'text_default',
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
    'field_name' => 'field_sprecher_amt',
    'label' => 'Amt/Rolle des Accountinhabers',
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
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-socialmediateaser-field_termref_socialnetwork'
  $field_instances['node-socialmediateaser-field_termref_socialnetwork'] = array(
    'bundle' => 'socialmediateaser',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'taxonomy_term_reference_link',
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
    'field_name' => 'field_termref_socialnetwork',
    'label' => 'Social Network',
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

  // Exported field_instance: 'node-socialmediateaser-field_titel'
  $field_instances['node-socialmediateaser-field_titel'] = array(
    'bundle' => 'socialmediateaser',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => '',
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

  // Exported field_instance: 'node-socialmediateaser-field_workflow_status'
  $field_instances['node-socialmediateaser-field_workflow_status'] = array(
    'bundle' => 'socialmediateaser',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Bitte stellen Sie hier den aktuellen Workflow-Status ein. (Für Release 1+)',
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

  // Exported field_instance: 'node-universal-body'
  $field_instances['node-universal-body'] = array(
    'bundle' => 'universal',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Optimal wären ca. 100 Zeichen, abgeschnitten wird im Template nach 200 Zeichen.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => 0,
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => 0,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 1,
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
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-universal-field_block_titel'
  $field_instances['node-universal-field_block_titel'] = array(
    'bundle' => 'universal',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Der hier eingegebenen Titel wird als Überschrift in dem Universalblock ausgegeben. Die maximale Zeichenzahl beträgt 30 Zeichen.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => 0,
        ),
        'type' => 'text_default',
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
    'field_name' => 'field_block_titel',
    'label' => 'Block Titel',
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
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-universal-field_fc_metadaten'
  $field_instances['node-universal-field_fc_metadaten'] = array(
    'bundle' => 'universal',
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

  // Exported field_instance: 'node-universal-field_icon'
  $field_instances['node-universal-field_icon'] = array(
    'bundle' => 'universal',
    'deleted' => 0,
    'description' => 'Icon 30x30 Pixel',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'icon30x30',
          'semantic_field_format' => '',
        ),
        'type' => 'image',
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
    'field_name' => 'field_icon',
    'label' => 'Icon',
    'required' => 1,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 578,
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
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-universal-field_internal_anmerkung'
  $field_instances['node-universal-field_internal_anmerkung'] = array(
    'bundle' => 'universal',
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-universal-field_linklist'
  $field_instances['node-universal-field_linklist'] = array(
    'bundle' => 'universal',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Optimal für den Linktitel wären 20 Zeichen, abgeschnitten wird im Template nach 30 Zeichen.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'link_default',
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
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 30,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(
        'maxlength_js_label' => 'Von @limit Zeichen stehen Ihnen noch <strong>@remaining</strong> zur Verfügung.',
      ),
      'type' => 'link_field',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-universal-field_spitzmarke'
  $field_instances['node-universal-field_spitzmarke'] = array(
    'bundle' => 'universal',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Optimal wären 15 Zeichen, abgeschnitten wird im Template nach 30 Zeichen.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => 0,
        ),
        'type' => 'text_default',
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
    'field_name' => 'field_spitzmarke',
    'label' => 'Spitzmarke',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 30,
        'maxlength_js_label' => 'Von @limit Zeichen stehen Ihnen noch <strong>@remaining</strong> zur Verfügung.',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-universal-field_titel'
  $field_instances['node-universal-field_titel'] = array(
    'bundle' => 'universal',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Optimal wären 15 Zeichen, abgeschnitten wird im Template nach 30 Zeichen.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => 'h2_blocktitle',
        ),
        'type' => 'text_plain',
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
        'maxlength_js' => 30,
        'maxlength_js_label' => 'Von @limit Zeichen stehen Ihnen noch <strong>@remaining</strong> zur Verfügung.',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-universal-field_universal_bild'
  $field_instances['node-universal-field_universal_bild'] = array(
    'bundle' => 'universal',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
          'semantic_field_format' => 0,
        ),
        'type' => 'image',
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
    'field_name' => 'field_universal_bild',
    'label' => 'Universal Bild',
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
          'media_default--media_browser_my_files' => 0,
          'media_internet' => 0,
          'upload' => 'upload',
          'views_media_browser' => 0,
          'youtube' => 0,
        ),
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-universal-field_workflow_status'
  $field_instances['node-universal-field_workflow_status'] = array(
    'bundle' => 'universal',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Bitte stellen Sie hier den aktuellen Workflow-Status ein. (Für Release 1+)',
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
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-webform-body'
  $field_instances['node-webform-body'] = array(
    'bundle' => 'webform',
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
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => 0,
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Formulartext/Anmoderation',
    'required' => 0,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 1,
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
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-webform-field_fc_metadaten'
  $field_instances['node-webform-field_fc_metadaten'] = array(
    'bundle' => 'webform',
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
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-webform-field_internal_anmerkung'
  $field_instances['node-webform-field_internal_anmerkung'] = array(
    'bundle' => 'webform',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
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
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-webform-field_kontakt_info'
  $field_instances['node-webform-field_kontakt_info'] = array(
    'bundle' => 'webform',
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
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_kontakt_info',
    'label' => 'Info',
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
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-webform-field_kontakt_telefax'
  $field_instances['node-webform-field_kontakt_telefax'] = array(
    'bundle' => 'webform',
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
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_kontakt_telefax',
    'label' => 'Telefax',
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
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-webform-field_kontakt_telefon'
  $field_instances['node-webform-field_kontakt_telefon'] = array(
    'bundle' => 'webform',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
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
    'field_name' => 'field_kontakt_telefon',
    'label' => 'Telefon',
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

  // Exported field_instance: 'node-webform-field_kontakt_zeiten'
  $field_instances['node-webform-field_kontakt_zeiten'] = array(
    'bundle' => 'webform',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
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
    'field_name' => 'field_kontakt_zeiten',
    'label' => 'Kontaktzeiten',
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
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-webform-field_kontaktblock_text'
  $field_instances['node-webform-field_kontaktblock_text'] = array(
    'bundle' => 'webform',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
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
    'field_name' => 'field_kontaktblock_text',
    'label' => 'Text',
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

  // Exported field_instance: 'node-webform-field_spitzmarke'
  $field_instances['node-webform-field_spitzmarke'] = array(
    'bundle' => 'webform',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
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
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-webform-field_titel'
  $field_instances['node-webform-field_titel'] = array(
    'bundle' => 'webform',
    'default_value' => array(
      0 => array(
        'value' => 'Haben Sie Fragen?',
      ),
    ),
    'deleted' => 0,
    'description' => 'Überschrift der Formularseite.',
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
    'label' => 'Überschrift/Titel',
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
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-webform-field_workflow_status'
  $field_instances['node-webform-field_workflow_status'] = array(
    'bundle' => 'webform',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Bitte stellen Sie hier den aktuellen Workflow-Status ein. (Für Release 1+)',
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
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-zitat_des_tages-body'
  $field_instances['node-zitat_des_tages-body'] = array(
    'bundle' => 'zitat_des_tages',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Optimal im Sinne des Designs wären hier ca. 90 Zeichen, abgeschnitten wird im Template nach <b>300 Zeichen</b>.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => 0,
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Zitat',
    'required' => 0,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 1,
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
        'rows' => 5,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-zitat_des_tages-field_bild_des_sprechers'
  $field_instances['node-zitat_des_tages-field_bild_des_sprechers'] = array(
    'bundle' => 'zitat_des_tages',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'tn60x60',
          'semantic_field_format' => '',
        ),
        'type' => 'image',
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
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-zitat_des_tages-field_block_titel'
  $field_instances['node-zitat_des_tages-field_block_titel'] = array(
    'bundle' => 'zitat_des_tages',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Geben Sie hier den Titel des Blocks an (z.B. Zitat des Tages, Zitat der Woche, Zitat des Monats oder Zitat des Jahres).',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => '',
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
    ),
    'entity_type' => 'node',
    'field_name' => 'field_block_titel',
    'label' => 'Block Titel',
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
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-zitat_des_tages-field_fc_metadaten'
  $field_instances['node-zitat_des_tages-field_fc_metadaten'] = array(
    'bundle' => 'zitat_des_tages',
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
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-zitat_des_tages-field_internal_anmerkung'
  $field_instances['node-zitat_des_tages-field_internal_anmerkung'] = array(
    'bundle' => 'zitat_des_tages',
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
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-zitat_des_tages-field_link_zum_artikel'
  $field_instances['node-zitat_des_tages-field_link_zum_artikel'] = array(
    'bundle' => 'zitat_des_tages',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'semantic_field_format' => 'a_tsr_link_default',
        ),
        'type' => 'link_default',
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
    'field_name' => 'field_link_zum_artikel',
    'label' => 'Link zum Artikel',
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
      'title' => 'value',
      'title_maxlength' => 128,
      'title_value' => 'Mehr',
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
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-zitat_des_tages-field_sprecher'
  $field_instances['node-zitat_des_tages-field_sprecher'] = array(
    'bundle' => 'zitat_des_tages',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => '',
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
    'field_name' => 'field_sprecher',
    'label' => 'Sprecher',
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
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-zitat_des_tages-field_sprecher_amt'
  $field_instances['node-zitat_des_tages-field_sprecher_amt'] = array(
    'bundle' => 'zitat_des_tages',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Bitte für Design und Lesbarkeit eine kurze Bezeichnung wählen, z.B.: „Umweltministerin“ statt „Hessische Ministerin für Umwelt, Ernährung, Landwirtschaft und Verbraucherschutz“. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => '',
        ),
        'type' => 'text_default',
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
    'field_name' => 'field_sprecher_amt',
    'label' => 'Amt des Sprechers',
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
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-zitat_des_tages-field_workflow_status'
  $field_instances['node-zitat_des_tages-field_workflow_status'] = array(
    'bundle' => 'zitat_des_tages',
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
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-zitat_des_tages-field_zitat_ort'
  $field_instances['node-zitat_des_tages-field_zitat_ort'] = array(
    'bundle' => 'zitat_des_tages',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Der Text wird im Template bei <b>25 Zeichen</b> abgeschnitten.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'semantic_field_format' => '',
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
    'field_name' => 'field_zitat_ort',
    'label' => 'Ort des Zitats',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 25,
        'maxlength_js_label' => 'Von @limit Zeichen stehen Ihnen noch <strong>@remaining</strong> zur Verfügung.',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Allgemeiner Beschreibungstext');
  t('Alternative Spitzmarke für die Teaser-Ansicht "Empfehlung der Redaktion", wenn diese von der Universal-Teaserspitzmarke abweichen soll.<br>Optimal wären ca. 23 Zeichen, abgeschnitten wird des Designs wegen nach 30 Zeichen. ');
  t('Alternative Spitzmarke für die Teaser-Ansicht "Themendossier", wenn diese von der Universal-Teaserspitzmarke abweichen soll.<br>Optimal wären ca. 20 Zeichen, abgeschnitten wird des Designs wegen nach 30 Zeichen.
');
  t('Alternative Spitzmarke für die Teaser-Ansicht "Themenslider", wenn diese von der Universal-Teaserspitzmarke abweichen soll.<br>
Optimal wären ca. 20 Zeichen, abgeschnitten wird des Designs wegen nach 30 Zeichen.');
  t('Alternativer Titel für die Teaser-Ansicht " Empfehlung der Redaktion", wenn dieser von dem Universal-Teasertitel abweichen soll.<br>Optimal wären ca. 25 Zeichen, abgeschnitten wird im Template nach 30 Zeichen.');
  t('Alternativer Titel für die Teaser-Ansicht " Sliderbühne ", wenn dieser von dem Universal-Teasertitel abweichen soll.<br>Optimal wären ca. 23 Zeichen, abgeschnitten wird im Template nach 40 Zeichen.');
  t('Alternativer Titel für die Teaser-Ansicht "Themendossier", wenn dieser von dem Universal-Teasertitel abweichen soll.<br>Abgeschnitten wird im Template nach 50 Zeichen.
');
  t('Alternativer Titel für die Teaser-Ansicht "Themenslider", wenn dieser von dem Universal-Teasertitel abweichen soll.<br>Optimal wären ca. 20 Zeichen, abgeschnitten wird im Template nach 30 Zeichen.');
  t('Amt des Sprechers');
  t('Amt/Rolle des Accountinhabers');
  t('Angehängte Dateien zum Download (max. 20 MB).
Erlaubte Datei-Formate: jpg, jpeg, gif, png, bmp, tiff, tif, txt, pdf, mp3, ico, zip, rar.');
  t('Angehängte Dateien zum Download (max. 20 MB). Erlaubte Datei-Formate: jpg, jpeg, gif, png, txt, doc, docx, xls, xlsx, pdf, ppt, pptx, pps, ppsx, odt, ods, odp, mp3, ico, zip, rar, dmg. Bitte beachten Sie, dass MS Office-Dateien schutzbedürftige Informationen enthalten können. Nutzen Sie deshalb vorzugsweise das Dateiformat *.pdf.');
  t('Anmerkung (intern)');
  t('Anstelle eines Bildes, kann auch ein Teaser zu einem Video in den Artikel eingebunden werden. Bitte beachten Sie, dass der hier anzuzeigende Teaser zum Video bereits im Redaktionssystem eingepflegt sein muss. Der anzuzeigende Teaser zum Video ist per Autocomplete auffindbar.');
  t('Artikelinhalt');
  t('Bild');
  t('Bild des Accountinhabers');
  t('Bild des Sprechers');
  t('Bild oder Video für den Artikel');
  t('Bildergalerie-Teaser');
  t('Bitte für Design und Lesbarkeit eine kurze Bezeichnung wählen, z.B.: „Umweltministerin“ statt „Hessische Ministerin für Umwelt, Ernährung, Landwirtschaft und Verbraucherschutz“. ');
  t('Bitte für Optik und Lesbarkeit eine kurze Bezeichnung wählen, z.B.: „Umweltministerin“ statt „Hessische Ministerin für Umwelt, Ernährung, Landwirtschaft und Verbraucherschutz“.');
  t('Bitte geben Sie das Geburtsdatum ein, z. B. 20.12.2013.');
  t('Bitte geben Sie hier an, wobei es sich bei dem Hauptmedium des Artikels handelt.');
  t('Bitte stellen Sie hier den aktuellen Workflow-Status ein. (Für Release 1+)');
  t('Block Titel');
  t('Body');
  t('Comment');
  t('Datum');
  t('Der Text wird im Template bei <b>25 Zeichen</b> abgeschnitten.');
  t('Der hier eingegebenen Titel wird als Überschrift in dem Universalblock ausgegeben. Die maximale Zeichenzahl beträgt 30 Zeichen.');
  t('Die Überschrift.');
  t('Dies ist das Feld für die Spitzmarke der ersten Verlinkung auf eine interne oder externe Seite oder eine Datei (im Themendossier unten links angezeigt). Siehe  <a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/tdspitzmarke1.png?height=400" class="colorbox-load">Screenshot</a>. Maximal 22 Zeichen. Optimal wären ca. 15 Zeichen.');
  t('Dies ist das Feld für die Spitzmarke der zweiten Verlinkung auf eine interne oder externe Seite oder eine Datei (im Themendossier unten in den Mitte angezeigt). Siehe  <a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/tdspitzmarke2.png?height=400" class="colorbox-load">Screenshot</a>. Maximal 22 Zeichen. Optimal wären ca. 15 Zeichen.');
  t('Dies ist das Feld für die erste Verlinkung auf eine interne oder externe Seite oder eine Datei (im Themendossier unten links angezeigt). Siehe  <a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/tdlink1.png?height=400" class="colorbox-load">Screenshot</a>. Maximal 30 Zeichen. Optimal wären ca. 20 Zeichen.');
  t('Dies ist das Feld für die zweite Verlinkung auf eine interne oder externe Seite oder eine Datei (im Themendossier unten in der Mitte angezeigt). Siehe <a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/tdlink2.png?height=400" class="colorbox-load">Screenshot</a>. Maximal 30 Zeichen. Optimal wären ca. 20 Zeichen.');
  t('Downloads:');
  t('Durch das Befüllen dieses Feldes, können Sie bestimmen, wie der Reiter (Tab) zu diesem Artikel beschriftet sein soll. Siehe <a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/tdtab.png?height=400" class="colorbox-load">Screenshot</a>. Maximal 25 Zeichen. Optimal wären ca. 16 Zeichen.');
  t('Empfehlung Teaserspitzmarke');
  t('Empfehlung Teasertitel');
  t('Empfehlung der Redaktion');
  t('Ereignis/Tätigkeit');
  t('Erlaubte Formate: jpg, jpeg, gif, png');
  t('Erscheint hervorgehoben zwischen Titel und dem Bild oder Video zum Artikel. ');
  t('Erscheint über dem Titel');
  t('Erscheint über dem Titel.');
  t('Es wird ein Bild im Format 130x130 px angezeigt. Wenn Sie ein größeres Bild verwenden, wird ein Ausschnitt automatisch aus der Bildmitte generiert. Um den bestmöglichen Bildausschnitt einsetzen zu können ist es unter Umständen sinnvoll, selbst ein Bild im Format 130x130px zu erzeugen und hier hochzuladen. ');
  t('Es wird ein Bild im Format 60x60 px angezeigt. Wenn Sie ein größeres Bild verwenden, wird ein Ausschnitt automatisch aus der Bildmitte generiert. Um den bestmöglichen Bildausschnitt einsetzen zu können, ist es unter Umständen sinnvoll, selbst ein Bild im Format 60x60px zu erzeugen und hier hochzuladen.');
  t('Familienstand');
  t('Formulartext/Anmoderation');
  t('Fragebox');
  t('Geben Sie hier den Titel der einzubindenden Bildergalerie ein, um einen Teaser dieser Bildergalerie am Ende des Artikels anzeigen zu lassen. SCREENSHOT????????????');
  t('Geben Sie hier den Titel des Blocks an (z.B. Zitat des Tages, Zitat der Woche, Zitat des Monats oder Zitat des Jahres).');
  t('Geben Sie hier die Spitzmarke für den verlinkten Inhalt (interne oder externe Seite) oder die verlinkte Datei an. Eine beispielhafte Darstellung finden Sie in folgendem <a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/vispitzmarke.png?height=400" class="colorbox-load">Screenshot</a>.');
  t('Geburtsdatum');
  t('Geburtsort');
  t('Hauptinhalt');
  t('Hier geben Sie die Anzahl der Kinder an, z.B. 1 Sohn (erste Zeile), 2 Töchter (zweite Zeile).');
  t('Hier geben Sie die tabellarischen Daten zu dem Lebenslauf ein.');
  t('Hier ist die URL zur Themenseite einzutragen. Diese kann intern oder extern sein. In der Ausgabe wird der Link automatisch mit dem Titel "Zur Themenseite" versehen. Siehe  <a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/tdthemenseite.png?height=400" class="colorbox-load">Screenshot</a>');
  t('Hier kann ein kleiner Fließtext über die Person eingegeben werden.');
  t('Hier können Sie das Portraitbild hochladen. (Das Portraitbild wird in der Größe 225x170px ausgegeben. Bitte achten Sie darauf, das Bild mit dem richtigen Seitenverhältnis hochzuladen.)

Formate: jpg, jpeg, gif, png
');
  t('Hier können Sie ein Bild für die Teaseransicht des Artikels hochladen. Bitte achten Sie darauf, dass das Bild möglichst den Seitenverhältnissen des im jeweiligen Modul (Themendossier, Themenslider, ...) ausgegebenen Bilds entspricht.');
  t('Hier können interne/externe <a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/biografielinks.png?height=400" class="colorbox-load">Links</a> zu weiterführenden Informationen eingebunden werden.');
  t('Hierbei handelt es sich um den Titel, der in der Inhaltsübersicht erscheint (in der Web-Ansicht nicht sichtbar, nur intern).');
  t('Hierbei handelt es sich um die Spitzmarke der Biographie.');
  t('Icon');
  t('Icon 30x30 Pixel');
  t('In dieses Feld geben Sie nun den Titel des anzuzeigenden Social Media Teasers ein. Bitte beachten Sie, dass der hier anzuzeigende Social Media Teaser bereits im Redaktionssystem eingepflegt sein muss. Der anzuzeigende Social Media Teaser ist per Autocomplete auffindbar.');
  t('In dieses Feld geben Sie nun den Titel des anzuzeigenden Universal-Inhaltes ein. Bitte beachten Sie, dass der hier anzuzeigende Universal-Inhalt bereits im Redaktionssystem eingepflegt sein muss. Der anzuzeigende Universal-Inhalt ist per Autocomplete auffindbar.');
  t('In dieses Feld geben Sie nun den Titel des anzuzeigenden Videos ein. Bitte beachten Sie, dass das hier anzuzeigende Video bereits im Redaktionssystem eingepflegt sein muss. Das anzuzeigende Video ist per Autocomplete auffindbar.');
  t('In dieses Feld geben Sie nun den Titel des anzuzeigenden Zitates ein. Bitte beachten Sie, dass das hier anzuzeigende Zitat bereits im Redaktionssystem eingepflegt sein muss. Das anzuzeigende Zitat ist per Autocomplete auffindbar.');
  t('In dieses Feld geben Sie nun den anzuzeigenden Kontakt ein. Bitte beachten Sie, dass der hier anzuzeigende Kontakt bereits im Redaktionssystem eingepflegt sein muss. Der anzuzeigende Kontakt ist per Autocomplete auffindbar.');
  t('Individuelle Infos & Texte für den "Haben Sie noch Fragen zu diesem Thema"-Block.
Hierbei handelt es sich um die blaue Box am Fuße des Artikels. Sie können die unten aufgeführten Kontaktdaten editieren. Screenshot folgt (!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!)');
  t('Info');
  t('Interne Anmerkungen für Redaktions-Workflow.');
  t('Jahr/Zeitraum');
  t('Karriere Block');
  t('Kinder');
  t('Konfession');
  t('Kontakt Block');
  t('Kontakt Inhalt');
  t('Kontaktzeiten');
  t('Kurztext für Teaser-Ansicht " Sliderbühne ", der neugierig macht. Dieses Feld ist auszufüllen, wenn der Teasertext in der Sliderbühne von dem Universal-Teasertext abweichen soll.<br>Optimal wären bis zu 90 Zeichen, abgeschnitten wird im Template nach 100 Zeichen.
');
  t('Kurztext für Teaser-Ansicht "Themendossier", der neugierig macht. Dieses Feld ist auszufüllen, wenn der Teasertext im Themendossier von dem Universal-Teasertext abweichen soll.<br>Optimal wären ca. 230 Zeichen, abgeschnitten wird im Template nach 250 Zeichen.
');
  t('Kurztext für Teaser-Ansicht "Themenslider", der neugierig macht. Dieses Feld ist auszufüllen, wenn der Teasertext im Themenslider von dem Universal-Teasertext abweichen soll.<br>Optimal wären bis zu 180 Zeichen, abgeschnitten wird im Template nach 190 Zeichen.
');
  t('Kurztext für Teaser-Ansichten, der neugierig macht. Wenn dieser Artikel für eine Centerpage vorgesehen ist, wird dieser Teasertext angezeigt.');
  t('Lebenslauf');
  t('Link extern');
  t('Link intern');
  t('Link zum Artikel');
  t('Link zum Profil');
  t('Link zum Profil/Video');
  t('Link zum externen Inhalt');
  t('Link/Datei 1');
  t('Link/Datei 2');
  t('Links');
  t('Links zu anderen Inhalten, Quellennachweisen etc.');
  t('Links:');
  t('Listeninhalte');
  t('Listeninhalte, die angezeigt werden sollen.');
  t('Meistgelesen Block');
  t('Metadaten');
  t('Mit diesem Textfeld können Sie Ihre Listenseite anmoderieren. Optimal wären dazu ca. 200 Zeichen, die Ausgabe wird von System aber nicht beschränkt.');
  t('Name');
  t('Name des Accountinhabers');
  t('Optimal für den Linktitel wären 20 Zeichen, abgeschnitten wird im Template nach 30 Zeichen.');
  t('Optimal im Sinne des Designs wären hier ca. 90 Zeichen, abgeschnitten wird im Template nach <b>300 Zeichen</b>.');
  t('Optimal im Sinne des Designs wären hier ca. 90 Zeichen. Im Template wird bei <b>200 Zeichen</b> abgeschnitten.');
  t('Optimal wären 15 Zeichen, abgeschnitten wird im Template nach 30 Zeichen.');
  t('Optimal wären ca. 100 Zeichen, abgeschnitten wird im Template nach 150 Zeichen.');
  t('Optimal wären ca. 100 Zeichen, abgeschnitten wird im Template nach 200 Zeichen.');
  t('Optimal wären ca. 140 Zeichen, abgeschnitten wird im Template nach 200 Zeichen.');
  t('Optimal wären ca. 20 Zeichen im Linktitel, abgeschnitten wird im Template nach 30 Zeichen.');
  t('Optimal wären ca. 20 Zeichen, abgeschnitten wird im Template nach 60 Zeichen.');
  t('Optimal wären ca. 40 Zeichen, abgeschnitten wird im Template nach 60 Zeichen.');
  t('Optimal wären hier ca. 20 Zeichen, die Ausgabe wird von System aber nicht beschränkt.');
  t('Ort des Zitats');
  t('Sliderbühne');
  t('Sliderbühne Teasertext');
  t('Sliderbühne Teasertitel');
  t('Social Media Block');
  t('Social Media Inhalt');
  t('Social Network');
  t('Soll der Teaser dieses Artikels in den Modulen Themendossier und Themenslider ganz oben in der Liste erscheinen, aktivieren Sie diese Checkbox.');
  t('Soll dieser Artikel als Teaser im Modul "<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/empfehlungredaktion.png?height=400" class="colorbox-load">Empfehlung der Redaktion</a>" erscheinen? Bitte an die maximalen Zeichenlängen denken: Teaser-Spitzmarke max. 23 und Teaser-Titel max. 30 Zeichen.');
  t('Soll dieser Artikel als Teaser im Modul "<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/sliderbuehne.png?height=400" class="colorbox-load">Sliderbühne</a>" erscheinen? Bitte an die maximalen Zeichenlängen denken: Teaser-Titel max. 40 und Teaser max. 100 Zeichen.
Die Sliderbühne erscheint nur auf http://www.hessen.de, nicht auf den Seiten der Ressorts.');
  t('Soll dieser Artikel als Teaser im Modul "<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/themendossier.png?height=400" class="colorbox-load">Themendossier</a>" erscheinen? ');
  t('Soll dieser Artikel als Teaser im Modul "<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/themenslider.png?height=400" class="colorbox-load">Top Newsbox (Themenslider)</a>" erscheinen? <br> Bitte an die maximalen Zeichenlängen denken: Teaser-Spitzmarke max. 30, Teaser-Titel max. 30 und Teaser max. 100 Zeichen.');
  t('Soll unterhalb dieses Artikels der Block "<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/verwandteinhalte.png?height=400" class="colorbox-load">Verwandte Inhalte</a>" angezeigt werden? Wenn ja, aktivieren Sie die Checkbox.');
  t('Soll vom Teaser aus auf einen externen Artikel verlinkt werden, ist die URL des Artikels hier einzutragen. Handelt es sich um einen internen Artikel bleibt dieses Feld leer.');
  t('Soll zu diesem Artikel in der rechten Marginalspalte der Block "<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/karriereportalblock.png?height=400" class="colorbox-load">Karriereportal</a>" angezeigt werden? Wenn ja, aktivieren Sie die Checkbox.');
  t('Soll zu diesem Artikel in der rechten Marginalspalte der Block "<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/kontaktblock.png?height=400" class="colorbox-load">Kontakt</a>" angezeigt werden? Wenn ja, aktivieren Sie die Checkbox.');
  t('Soll zu diesem Artikel in der rechten Marginalspalte der Block "<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/socialmediateaser.png?height=400" class="colorbox-load">Social Media</a>" angezeigt werden? Wenn ja, aktivieren Sie die Checkbox.');
  t('Soll zu diesem Artikel in der rechten Marginalspalte der Block "<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/videobeitrag.png?height=400" class="colorbox-load">Videobeitrag</a>" angezeigt werden? Wenn ja, aktivieren Sie die Checkbox.');
  t('Soll zu diesem Artikel in der rechten Marginalspalte der Block "<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/zitatblock.png?height=400" class="colorbox-load">Zitat das Tages</a>" angezeigt werden? Wenn ja, aktivieren Sie die Checkbox.');
  t('Soll zu diesem Artikel in der rechten Marginalspalte der Universal-Block angezeigt werden? Wenn ja, aktivieren Sie die Checkbox.');
  t('Soll zu dieser Seite in der rechten Marginalspalte der Block "<a href="/sites/default/themes/hessen_web_omega/documentation/Redaktionssystem/meistgelesen.png?height=400" class="colorbox-load">Meistgelesen</a>" angezeigt werden? Wenn ja, aktivieren Sie die Checkbox. (Hinweis: Diese Funktion ist für Release 1 nicht vorgesehen. Wenn Sie diese Checkbox aktivieren, wird der Block "Meistgelesen" trotzdem nicht angezeigt.)');
  t('Spitzmarke');
  t('Spitzmarke für Link/Datei 1');
  t('Spitzmarke für Link/Datei 2');
  t('Spitzmarke für Teaser-Ansichten. Wenn dieser Artikel für eine Centerpage vorgesehen ist, wird diese Spitzmarke angezeigt.');
  t('Sprecher');
  t('Stelle/Behörde/Ressort');
  t('Sticky');
  t('Tab Titel');
  t('Tags');
  t('Tags sind Wörter, die den Inhalt/Artikel beschreiben. In Release 1+ sollen Inhalte mittels Tags (Schlagworte) in Beziehung gesetzt werden (z.B. für den Block "Verwandte Themen"). Für Release 1 ist das Befüllen dieses Feldes nicht notwendig.');
  t('Teaserbild');
  t('Teaserspitzmarke');
  t('Teasertext');
  t('Teasertitel');
  t('Telefax');
  t('Telefon');
  t('Text');
  t('Textblock');
  t('Themendossier');
  t('Themendossier Teaserspitzmarke');
  t('Themendossier Teasertext');
  t('Themendossier Teasertitel');
  t('Themenslider');
  t('Themenslider Teaserspitzmarke');
  t('Themenslider Teasertext');
  t('Themenslider Teasertitel');
  t('Titel');
  t('Titel des Artikels.');
  t('Titel für die Teaser-Ansichten. Wenn dieser Artikel für eine Centerpage vorgesehen ist, wird dieser Titel angezeigt.');
  t('URL Themenseite');
  t('Universal Bild');
  t('Universal Block');
  t('Universal Inhalt');
  t('Unterhalb des Artikels können ein oder mehrere Links (intern oder extern) zur Anzeige gebracht werden. Diese Links sind hier einzupflegen. Falls Dateien angefügt werden sollen, ist dies unter dem Reiter "Medien" vorzunehmen. SCREENSHOT????????????');
  t('Verwandte Inhalte');
  t('Verwandte Inhalte Block ');
  t('Video Block');
  t('Video Inhalt');
  t('Video Ref');
  t('Workflow-Status');
  t('Zitat');
  t('Zitat Block');
  t('Zitat Inhalt');
  t('Zusammenfassung');
  t('testteaser');
  t('Überschrift der Formularseite.');
  t('Überschrift/Titel');

  return $field_instances;
}
