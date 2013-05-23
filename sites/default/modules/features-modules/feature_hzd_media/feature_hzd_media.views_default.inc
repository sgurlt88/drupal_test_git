<?php
/**
 * @file
 * feature_hzd_media.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_hzd_media_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'bildergalerie';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Bildergalerie';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Bildergalerie';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_file_image_alt_text' => 0,
    'field_file_image_title_text' => 0,
    'field_images_2' => 0,
    'field_images' => 0,
    'field_images_1' => 0,
    'field_caption' => 0,
    'field_copyright' => 0,
    'field_caption_1' => 0,
    'field_copyright_1' => 0,
    'nothing' => 0,
    'field_file_attachments' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_jcarousel_pager_orientation'] = '0';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_jcarousel_pager_scroll'] = '3';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_jcarousel_pager_visible'] = '3';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_jcarousel_pager_wrap'] = '';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '2';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_jcarousel_pager';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_images_1' => 'field_images_1',
    'field_file_image_alt_text' => 0,
    'field_file_image_title_text' => 0,
    'field_images_2' => 0,
    'field_images' => 0,
    'field_caption' => 0,
    'field_copyright' => 0,
    'field_caption_1' => 0,
    'field_copyright_1' => 0,
    'nothing' => 0,
    'field_file_attachments' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_jcarousel_pager_orientation'] = '0';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_jcarousel_pager_scroll'] = '4';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_jcarousel_pager_visible'] = '4';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_jcarousel_pager_wrap'] = 'circular';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['pause'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['action_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['fixed_height'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['advanced_options'] = '{"pager":"ul.jcarousel-list"}';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<nav class="links node-links clearfix">
[field_file_attachments]
</nav>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  /* Relationship: Content: Galerie-Bilder (field_images:fid) */
  $handler->display->display_options['relationships']['field_images_fid']['id'] = 'field_images_fid';
  $handler->display->display_options['relationships']['field_images_fid']['table'] = 'field_data_field_images';
  $handler->display->display_options['relationships']['field_images_fid']['field'] = 'field_images_fid';
  /* Field: File: Title Text */
  $handler->display->display_options['fields']['field_file_image_title_text']['id'] = 'field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['table'] = 'field_data_field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['field'] = 'field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['relationship'] = 'field_images_fid';
  $handler->display->display_options['fields']['field_file_image_title_text']['label'] = '';
  $handler->display->display_options['fields']['field_file_image_title_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_title_text']['element_label_colon'] = FALSE;
  /* Field: Content: Galerie-Bilder */
  $handler->display->display_options['fields']['field_images_2']['id'] = 'field_images_2';
  $handler->display->display_options['fields']['field_images_2']['table'] = 'field_data_field_images';
  $handler->display->display_options['fields']['field_images_2']['field'] = 'field_images';
  $handler->display->display_options['fields']['field_images_2']['label'] = '';
  $handler->display->display_options['fields']['field_images_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_images_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_images_2']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_images_2']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_images_2']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_images_2']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_images_2']['delta_offset'] = '0';
  /* Field: Content: Galerie-Bilder */
  $handler->display->display_options['fields']['field_images']['id'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['table'] = 'field_data_field_images';
  $handler->display->display_options['fields']['field_images']['field'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['label'] = '';
  $handler->display->display_options['fields']['field_images']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_images']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_images']['alter']['text'] = '<img src="[field_images]" alt="[field_file_image_title_text]" title="[field_file_image_title_text]"></img>';
  $handler->display->display_options['fields']['field_images']['element_class'] = 'field-slideshow';
  $handler->display->display_options['fields']['field_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_images']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_images']['settings'] = array(
    'image_style' => 'bildergalerie_grossansicht',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_images']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_images']['multi_type'] = 'ul';
  /* Field: Content: Galerie-Bilder */
  $handler->display->display_options['fields']['field_images_1']['id'] = 'field_images_1';
  $handler->display->display_options['fields']['field_images_1']['table'] = 'field_data_field_images';
  $handler->display->display_options['fields']['field_images_1']['field'] = 'field_images';
  $handler->display->display_options['fields']['field_images_1']['label'] = '';
  $handler->display->display_options['fields']['field_images_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_images_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_images_1']['alter']['text'] = '<img src="[field_images_1]" alt="[field_file_image_title_text]" title="[field_file_image_title_text]"></img>';
  $handler->display->display_options['fields']['field_images_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_images_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_images_1']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_images_1']['settings'] = array(
    'image_style' => 'bildergalerie_thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_images_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_images_1']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_images_1']['multi_type'] = 'ul';
  /* Field: File: Beschreibung */
  $handler->display->display_options['fields']['field_caption']['id'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption']['field'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['relationship'] = 'field_images_fid';
  $handler->display->display_options['fields']['field_caption']['label'] = '';
  $handler->display->display_options['fields']['field_caption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_caption']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_caption']['alter']['text'] = '<span class="bildergalerie_text_unterschrift">[field_caption]</span><br>';
  $handler->display->display_options['fields']['field_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_caption']['hide_empty'] = TRUE;
  /* Field: File: Copyright/Urheber */
  $handler->display->display_options['fields']['field_copyright']['id'] = 'field_copyright';
  $handler->display->display_options['fields']['field_copyright']['table'] = 'field_data_field_copyright';
  $handler->display->display_options['fields']['field_copyright']['field'] = 'field_copyright';
  $handler->display->display_options['fields']['field_copyright']['relationship'] = 'field_images_fid';
  $handler->display->display_options['fields']['field_copyright']['label'] = '';
  $handler->display->display_options['fields']['field_copyright']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_copyright']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_copyright']['alter']['text'] = '<span class="bildergalerie_text_copyright">© [field_copyright]</span><br>';
  $handler->display->display_options['fields']['field_copyright']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_copyright']['hide_empty'] = TRUE;
  /* Field: File: Beschreibung */
  $handler->display->display_options['fields']['field_caption_1']['id'] = 'field_caption_1';
  $handler->display->display_options['fields']['field_caption_1']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption_1']['field'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption_1']['relationship'] = 'field_images_fid';
  $handler->display->display_options['fields']['field_caption_1']['label'] = '';
  $handler->display->display_options['fields']['field_caption_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_caption_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_caption_1']['type'] = 'text_plain';
  /* Field: File: Copyright/Urheber */
  $handler->display->display_options['fields']['field_copyright_1']['id'] = 'field_copyright_1';
  $handler->display->display_options['fields']['field_copyright_1']['table'] = 'field_data_field_copyright';
  $handler->display->display_options['fields']['field_copyright_1']['field'] = 'field_copyright';
  $handler->display->display_options['fields']['field_copyright_1']['relationship'] = 'field_images_fid';
  $handler->display->display_options['fields']['field_copyright_1']['label'] = '';
  $handler->display->display_options['fields']['field_copyright_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_copyright_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_copyright_1']['alter']['text'] = '[field_caption_1] © [field_copyright_1]';
  $handler->display->display_options['fields']['field_copyright_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_copyright_1']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_copyright_1']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="bildergalerie_container">
<div class="bildergalerie_bild"><a title="[field_copyright_1]" class="colorbox" href="[field_images_2]">[field_images]</a></div>
<div class="bildergalerie_text">
[field_caption]
[field_copyright]
<a class="more_link" target="_blank" href="[field_images_2]">Bild in Orginalgröße</a>
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Field: Downloads: */
  $handler->display->display_options['fields']['field_file_attachments']['id'] = 'field_file_attachments';
  $handler->display->display_options['fields']['field_file_attachments']['table'] = 'field_data_field_file_attachments';
  $handler->display->display_options['fields']['field_file_attachments']['field'] = 'field_file_attachments';
  $handler->display->display_options['fields']['field_file_attachments']['label'] = '';
  $handler->display->display_options['fields']['field_file_attachments']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_attachments']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_file_attachments']['alter']['text'] = '<div class="bildergalerie_download">Bildergalerie herunterladen: [field_file_attachments]</div>';
  $handler->display->display_options['fields']['field_file_attachments']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_attachments']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_file_attachments']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_file_attachments']['settings'] = array(
    'file_view_mode' => 'default',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'bildergalerie' => 'bildergalerie',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $translatables['bildergalerie'] = array(
    t('Master'),
    t('Bildergalerie'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<nav class="links node-links clearfix">
[field_file_attachments]
</nav>'),
    t('image from field_images'),
    t('<img src="[field_images]" alt="[field_file_image_title_text]" title="[field_file_image_title_text]"></img>'),
    t('<img src="[field_images_1]" alt="[field_file_image_title_text]" title="[field_file_image_title_text]"></img>'),
    t('<span class="bildergalerie_text_unterschrift">[field_caption]</span><br>'),
    t('<span class="bildergalerie_text_copyright">© [field_copyright]</span><br>'),
    t('[field_caption_1] © [field_copyright_1]'),
    t('<div class="bildergalerie_container">
<div class="bildergalerie_bild"><a title="[field_copyright_1]" class="colorbox" href="[field_images_2]">[field_images]</a></div>
<div class="bildergalerie_text">
[field_caption]
[field_copyright]
<a class="more_link" target="_blank" href="[field_images_2]">Bild in Orginalgröße</a>
</div>
</div>'),
    t('<div class="bildergalerie_download">Bildergalerie herunterladen: [field_file_attachments]</div>'),
    t('All'),
    t('Block'),
  );
  $export['bildergalerie'] = $view;

  $view = new view();
  $view->name = 'bildergalerie_teaser';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Bildergalerie Teaser';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Bildergalerie-Teaser (field_ref_bildergalerie) */
  $handler->display->display_options['relationships']['field_ref_bildergalerie_nid']['id'] = 'field_ref_bildergalerie_nid';
  $handler->display->display_options['relationships']['field_ref_bildergalerie_nid']['table'] = 'field_data_field_ref_bildergalerie';
  $handler->display->display_options['relationships']['field_ref_bildergalerie_nid']['field'] = 'field_ref_bildergalerie_nid';
  $handler->display->display_options['relationships']['field_ref_bildergalerie_nid']['delta'] = '-1';
  /* Field: Content: Galerie-Bilder */
  $handler->display->display_options['fields']['field_images']['id'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['table'] = 'field_data_field_images';
  $handler->display->display_options['fields']['field_images']['field'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['relationship'] = 'field_ref_bildergalerie_nid';
  $handler->display->display_options['fields']['field_images']['label'] = '';
  $handler->display->display_options['fields']['field_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_images']['type'] = 'slideshow';
  $handler->display->display_options['fields']['field_images']['settings'] = array(
    'slideshow_image_style' => 'galerieteaser_preview',
    'slideshow_link' => 'content',
    'slideshow_colorbox_image_style' => '',
    'slideshow_colorbox_slideshow' => '',
    'slideshow_colorbox_slideshow_speed' => '4000',
    'slideshow_colorbox_transition' => 'elastic',
    'slideshow_colorbox_speed' => '350',
    'slideshow_caption' => '',
    'slideshow_caption_link' => '',
    'slideshow_fx' => 'fade',
    'slideshow_speed' => '1000',
    'slideshow_timeout' => '4000',
    'slideshow_order' => '',
    'slideshow_controls' => 0,
    'slideshow_controls_pause' => 0,
    'slideshow_controls_position' => 'after',
    'slideshow_pause' => 0,
    'slideshow_start_on_hover' => 0,
    'slideshow_pager' => 'image',
    'slideshow_pager_position' => 'after',
    'slideshow_pager_image_style' => 'galerieteaser_thumbnail',
    'slideshow_carousel_image_style' => 'galerieteaser_preview',
    'slideshow_carousel_visible' => '3',
    'slideshow_carousel_scroll' => '0',
    'slideshow_carousel_speed' => '500',
    'slideshow_carousel_skin' => '',
    'slideshow_carousel_follow' => 0,
    'slideshow_carousel_vertical' => 0,
    'slideshow_carousel_circular' => 0,
  );
  $handler->display->display_options['fields']['field_images']['delta_limit'] = '3';
  $handler->display->display_options['fields']['field_images']['delta_offset'] = '0';
  /* Field: Content: Bildergalerie-Teaser */
  $handler->display->display_options['fields']['field_ref_bildergalerie']['id'] = 'field_ref_bildergalerie';
  $handler->display->display_options['fields']['field_ref_bildergalerie']['table'] = 'field_data_field_ref_bildergalerie';
  $handler->display->display_options['fields']['field_ref_bildergalerie']['field'] = 'field_ref_bildergalerie';
  $handler->display->display_options['fields']['field_ref_bildergalerie']['label'] = '';
  $handler->display->display_options['fields']['field_ref_bildergalerie']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ref_bildergalerie']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ref_bildergalerie']['type'] = 'node_reference_path';
  $handler->display->display_options['fields']['field_ref_bildergalerie']['settings'] = array(
    'alias' => 1,
    'absolute' => 0,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[field_ref_bildergalerie]" class="more_link">Zur Bildgalerie</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Field: Titel */
  $handler->display->display_options['fields']['field_titel']['id'] = 'field_titel';
  $handler->display->display_options['fields']['field_titel']['table'] = 'field_data_field_titel';
  $handler->display->display_options['fields']['field_titel']['field'] = 'field_titel';
  $handler->display->display_options['fields']['field_titel']['relationship'] = 'field_ref_bildergalerie_nid';
  $handler->display->display_options['fields']['field_titel']['label'] = '';
  $handler->display->display_options['fields']['field_titel']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'artikel' => 'artikel',
    'pressemitteilung' => 'pressemitteilung',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $translatables['bildergalerie_teaser'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('field_ref_bildergalerie'),
    t('<a href="[field_ref_bildergalerie]" class="more_link">Zur Bildgalerie</a>'),
    t('All'),
    t('Block'),
  );
  $export['bildergalerie_teaser'] = $view;

  $view = new view();
  $view->name = 'videouebersicht';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Medienübersicht';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Videoübersicht';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['striping_classes'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Teaser Bild (field_teaser_bild:fid) */
  $handler->display->display_options['relationships']['field_teaser_bild_fid']['id'] = 'field_teaser_bild_fid';
  $handler->display->display_options['relationships']['field_teaser_bild_fid']['table'] = 'field_data_field_teaser_bild';
  $handler->display->display_options['relationships']['field_teaser_bild_fid']['field'] = 'field_teaser_bild_fid';
  /* Field: Content: Teaser-Titel */
  $handler->display->display_options['fields']['field_teaser_titel']['id'] = 'field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['table'] = 'field_data_field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['field'] = 'field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_titel']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_titel']['element_label_colon'] = FALSE;
  /* Field: Content: Teaser */
  $handler->display->display_options['fields']['field_teaser']['id'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['table'] = 'field_data_field_teaser';
  $handler->display->display_options['fields']['field_teaser']['field'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  /* Field: Content: Teaser Bild */
  $handler->display->display_options['fields']['field_teaser_bild']['id'] = 'field_teaser_bild';
  $handler->display->display_options['fields']['field_teaser_bild']['table'] = 'field_data_field_teaser_bild';
  $handler->display->display_options['fields']['field_teaser_bild']['field'] = 'field_teaser_bild';
  $handler->display->display_options['fields']['field_teaser_bild']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_bild']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_bild']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_teaser_bild']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_hauptvideo']['id'] = 'field_hauptvideo';
  $handler->display->display_options['fields']['field_hauptvideo']['table'] = 'field_data_field_hauptvideo';
  $handler->display->display_options['fields']['field_hauptvideo']['field'] = 'field_hauptvideo';
  $handler->display->display_options['fields']['field_hauptvideo']['label'] = '';
  $handler->display->display_options['fields']['field_hauptvideo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hauptvideo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_hauptvideo']['settings'] = array(
    'file_view_mode' => 'preview',
  );
  $handler->display->display_options['fields']['field_hauptvideo']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Sticky (field_sticky) */
  $handler->display->display_options['sorts']['field_sticky_value']['id'] = 'field_sticky_value';
  $handler->display->display_options['sorts']['field_sticky_value']['table'] = 'field_data_field_sticky';
  $handler->display->display_options['sorts']['field_sticky_value']['field'] = 'field_sticky_value';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'video' => 'video',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Video Groß */
  $handler = $view->new_display('block', 'Video Groß', 'block');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'videogross';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Spitzmarke */
  $handler->display->display_options['fields']['field_spitzmarke']['id'] = 'field_spitzmarke';
  $handler->display->display_options['fields']['field_spitzmarke']['table'] = 'field_data_field_spitzmarke';
  $handler->display->display_options['fields']['field_spitzmarke']['field'] = 'field_spitzmarke';
  $handler->display->display_options['fields']['field_spitzmarke']['label'] = '';
  $handler->display->display_options['fields']['field_spitzmarke']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_spitzmarke']['element_label_colon'] = FALSE;
  /* Field: Content: Teaserspitzmarke */
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['id'] = 'field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['table'] = 'field_data_field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['field'] = 'field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['empty'] = '[field_spitzmarke]';
  /* Field: Field: Titel */
  $handler->display->display_options['fields']['field_titel']['id'] = 'field_titel';
  $handler->display->display_options['fields']['field_titel']['table'] = 'field_data_field_titel';
  $handler->display->display_options['fields']['field_titel']['field'] = 'field_titel';
  $handler->display->display_options['fields']['field_titel']['label'] = '';
  $handler->display->display_options['fields']['field_titel']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_titel']['element_label_colon'] = FALSE;
  /* Field: Content: Teaser-Titel */
  $handler->display->display_options['fields']['field_teaser_titel']['id'] = 'field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['table'] = 'field_data_field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['field'] = 'field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_titel']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_titel']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_titel']['empty'] = '[field_titel]';
  /* Field: Content: Teaser */
  $handler->display->display_options['fields']['field_teaser']['id'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['table'] = 'field_data_field_teaser';
  $handler->display->display_options['fields']['field_teaser']['field'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_teaser']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['alter']['text'] = '[field_teaser]<br>';
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser']['settings'] = array(
    'trim_length' => '95',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: File: Title Text */
  $handler->display->display_options['fields']['field_file_image_title_text']['id'] = 'field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['table'] = 'field_data_field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['field'] = 'field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['relationship'] = 'field_teaser_bild_fid';
  $handler->display->display_options['fields']['field_file_image_title_text']['label'] = '';
  $handler->display->display_options['fields']['field_file_image_title_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_title_text']['element_label_colon'] = FALSE;
  /* Field: Content: Teaser Bild */
  $handler->display->display_options['fields']['field_teaser_bild']['id'] = 'field_teaser_bild';
  $handler->display->display_options['fields']['field_teaser_bild']['table'] = 'field_data_field_teaser_bild';
  $handler->display->display_options['fields']['field_teaser_bild']['field'] = 'field_teaser_bild';
  $handler->display->display_options['fields']['field_teaser_bild']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_bild']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_bild']['alter']['text'] = '<div class="videouebersicht">
<div class="videouebersicht_gross">
<span class="spitzmarke">[field_teaser_spitzmarke]</span>
<h2 class="view_titel">[field_teaser_titel]</h2>
[field_teaser]
<div class="videouebersicht_gross_bild_overlay">
<a class="videouebersicht_gross_bild_overlay_background" title="[field_file_image_title_text]" alt="[field_file_image_title_text]" href="[path]"/>
[field_teaser_bild]
</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_teaser_bild']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_bild']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_teaser_bild']['settings'] = array(
    'image_style' => 'tn480x270',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'video' => 'video',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Sticky (field_sticky) */
  $handler->display->display_options['filters']['field_sticky_value']['id'] = 'field_sticky_value';
  $handler->display->display_options['filters']['field_sticky_value']['table'] = 'field_data_field_sticky';
  $handler->display->display_options['filters']['field_sticky_value']['field'] = 'field_sticky_value';
  $handler->display->display_options['filters']['field_sticky_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Auswahl Übersichtsseite (field_auswahl_uebersichtsseite) */
  $handler->display->display_options['filters']['field_auswahl_uebersichtsseite_value']['id'] = 'field_auswahl_uebersichtsseite_value';
  $handler->display->display_options['filters']['field_auswahl_uebersichtsseite_value']['table'] = 'field_data_field_auswahl_uebersichtsseite';
  $handler->display->display_options['filters']['field_auswahl_uebersichtsseite_value']['field'] = 'field_auswahl_uebersichtsseite_value';
  $handler->display->display_options['filters']['field_auswahl_uebersichtsseite_value']['value'] = array(
    'Normale Videoübersichtsseite' => 'Normale Videoübersichtsseite',
  );
  /* Filter criterion: Content: Hidden */
  $handler->display->display_options['filters']['hidden']['id'] = 'hidden';
  $handler->display->display_options['filters']['hidden']['table'] = 'hidden_nodes';
  $handler->display->display_options['filters']['hidden']['field'] = 'hidden';
  $handler->display->display_options['filters']['hidden']['value'] = '0';

  /* Display: Video Klein */
  $handler = $view->new_display('block', 'Video Klein', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '5';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« Erste';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ Zurück';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'Weiter ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'Letzte »';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Spitzmarke */
  $handler->display->display_options['fields']['field_spitzmarke']['id'] = 'field_spitzmarke';
  $handler->display->display_options['fields']['field_spitzmarke']['table'] = 'field_data_field_spitzmarke';
  $handler->display->display_options['fields']['field_spitzmarke']['field'] = 'field_spitzmarke';
  $handler->display->display_options['fields']['field_spitzmarke']['label'] = '';
  $handler->display->display_options['fields']['field_spitzmarke']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_spitzmarke']['element_label_colon'] = FALSE;
  /* Field: Content: Teaserspitzmarke */
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['id'] = 'field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['table'] = 'field_data_field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['field'] = 'field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['empty'] = '[field_spitzmarke]';
  /* Field: Field: Titel */
  $handler->display->display_options['fields']['field_titel']['id'] = 'field_titel';
  $handler->display->display_options['fields']['field_titel']['table'] = 'field_data_field_titel';
  $handler->display->display_options['fields']['field_titel']['field'] = 'field_titel';
  $handler->display->display_options['fields']['field_titel']['label'] = '';
  $handler->display->display_options['fields']['field_titel']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_titel']['alter']['max_length'] = '60';
  $handler->display->display_options['fields']['field_titel']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_titel']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_titel']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_titel']['element_label_colon'] = FALSE;
  /* Field: Content: Teaser-Titel */
  $handler->display->display_options['fields']['field_teaser_titel']['id'] = 'field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['table'] = 'field_data_field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['field'] = 'field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_titel']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['max_length'] = '60';
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_titel']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_titel']['empty'] = '[field_titel]';
  $handler->display->display_options['fields']['field_teaser_titel']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_teaser_titel']['settings'] = array(
    'trim_length' => '60',
  );
  /* Field: Content: Teaser */
  $handler->display->display_options['fields']['field_teaser']['id'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['table'] = 'field_data_field_teaser';
  $handler->display->display_options['fields']['field_teaser']['field'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_teaser']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['field_teaser']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser']['settings'] = array(
    'trim_length' => '100',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = '<span class="more_link">Mehr erfahren</span>';
  /* Field: File: Title Text */
  $handler->display->display_options['fields']['field_file_image_title_text']['id'] = 'field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['table'] = 'field_data_field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['field'] = 'field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['relationship'] = 'field_teaser_bild_fid';
  $handler->display->display_options['fields']['field_file_image_title_text']['label'] = '';
  $handler->display->display_options['fields']['field_file_image_title_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_title_text']['element_label_colon'] = FALSE;
  /* Field: Content: Teaser Bild */
  $handler->display->display_options['fields']['field_teaser_bild']['id'] = 'field_teaser_bild';
  $handler->display->display_options['fields']['field_teaser_bild']['table'] = 'field_data_field_teaser_bild';
  $handler->display->display_options['fields']['field_teaser_bild']['field'] = 'field_teaser_bild';
  $handler->display->display_options['fields']['field_teaser_bild']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_bild']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_bild']['alter']['text'] = '<div class="videouebersicht">
<div class="videouebersicht_klein">
<div class="videouebersicht_klein_bild_overlay">
<a class="videouebersicht_klein_bild_overlay_background" title="[field_file_image_title_text]" alt="[field_file_image_title_text]" href="[path]"/>
[field_teaser_bild]
</div>
<div class="videouebersicht_teaser">
<span class="spitzmarke">[field_teaser_spitzmarke]</span>
<h2 class="view_titel">[field_teaser_titel]</h2>
[field_teaser] [view_node]
</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_teaser_bild']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_bild']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_teaser_bild']['settings'] = array(
    'image_style' => 'tn130x130',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'video' => 'video',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Auswahl Übersichtsseite (field_auswahl_uebersichtsseite) */
  $handler->display->display_options['filters']['field_auswahl_uebersichtsseite_value']['id'] = 'field_auswahl_uebersichtsseite_value';
  $handler->display->display_options['filters']['field_auswahl_uebersichtsseite_value']['table'] = 'field_data_field_auswahl_uebersichtsseite';
  $handler->display->display_options['filters']['field_auswahl_uebersichtsseite_value']['field'] = 'field_auswahl_uebersichtsseite_value';
  $handler->display->display_options['filters']['field_auswahl_uebersichtsseite_value']['value'] = array(
    'Normale Videoübersichtsseite' => 'Normale Videoübersichtsseite',
  );
  /* Filter criterion: Content: Hidden */
  $handler->display->display_options['filters']['hidden']['id'] = 'hidden';
  $handler->display->display_options['filters']['hidden']['table'] = 'hidden_nodes';
  $handler->display->display_options['filters']['hidden']['field'] = 'hidden';
  $handler->display->display_options['filters']['hidden']['value'] = '0';

  /* Display: Bildergalerien */
  $handler = $view->new_display('block', 'Bildergalerien', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Bildergalerien';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '5';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« Erste';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ Zurück';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'Weiter ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'Letzte »';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Teaser Bild (field_teaser_bild:fid) */
  $handler->display->display_options['relationships']['field_teaser_bild_fid']['id'] = 'field_teaser_bild_fid';
  $handler->display->display_options['relationships']['field_teaser_bild_fid']['table'] = 'field_data_field_teaser_bild';
  $handler->display->display_options['relationships']['field_teaser_bild_fid']['field'] = 'field_teaser_bild_fid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Spitzmarke */
  $handler->display->display_options['fields']['field_spitzmarke']['id'] = 'field_spitzmarke';
  $handler->display->display_options['fields']['field_spitzmarke']['table'] = 'field_data_field_spitzmarke';
  $handler->display->display_options['fields']['field_spitzmarke']['field'] = 'field_spitzmarke';
  $handler->display->display_options['fields']['field_spitzmarke']['label'] = '';
  $handler->display->display_options['fields']['field_spitzmarke']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_spitzmarke']['element_label_colon'] = FALSE;
  /* Field: Content: Teaserspitzmarke */
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['id'] = 'field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['table'] = 'field_data_field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['field'] = 'field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['empty'] = '[field_spitzmarke]';
  /* Field: Field: Titel */
  $handler->display->display_options['fields']['field_titel']['id'] = 'field_titel';
  $handler->display->display_options['fields']['field_titel']['table'] = 'field_data_field_titel';
  $handler->display->display_options['fields']['field_titel']['field'] = 'field_titel';
  $handler->display->display_options['fields']['field_titel']['label'] = '';
  $handler->display->display_options['fields']['field_titel']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_titel']['element_label_colon'] = FALSE;
  /* Field: Content: Teaser-Titel */
  $handler->display->display_options['fields']['field_teaser_titel']['id'] = 'field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['table'] = 'field_data_field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['field'] = 'field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_titel']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['max_length'] = '80';
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_titel']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_titel']['empty'] = '[field_titel]';
  $handler->display->display_options['fields']['field_teaser_titel']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_teaser_titel']['settings'] = array(
    'trim_length' => '80',
  );
  /* Field: Content: Teaser */
  $handler->display->display_options['fields']['field_teaser']['id'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['table'] = 'field_data_field_teaser';
  $handler->display->display_options['fields']['field_teaser']['field'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_teaser']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['field_teaser']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser']['settings'] = array(
    'trim_length' => '105',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = '<span class="more_link">Mehr erfahren</span>';
  /* Field: File: Title Text */
  $handler->display->display_options['fields']['field_file_image_title_text']['id'] = 'field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['table'] = 'field_data_field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['field'] = 'field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['relationship'] = 'field_teaser_bild_fid';
  $handler->display->display_options['fields']['field_file_image_title_text']['label'] = '';
  $handler->display->display_options['fields']['field_file_image_title_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_title_text']['element_label_colon'] = FALSE;
  /* Field: Content: Teaser Bild */
  $handler->display->display_options['fields']['field_teaser_bild']['id'] = 'field_teaser_bild';
  $handler->display->display_options['fields']['field_teaser_bild']['table'] = 'field_data_field_teaser_bild';
  $handler->display->display_options['fields']['field_teaser_bild']['field'] = 'field_teaser_bild';
  $handler->display->display_options['fields']['field_teaser_bild']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_bild']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_bild']['alter']['text'] = '<div class="bildergalerien_teaser">
<div class="bildergalerien_teaser_bild">
<a class="bildergalerien_teaser_background" href="[path]"> </a>
<img src="[field_teaser_bild]" alt="[field_file_image_title_text]" title="[field_file_image_title_text]">
</div>
<div class="bildergalerien_info">
<span class="spitzmarke">[field_teaser_spitzmarke]</span>
<h2 class="view_titel">[field_teaser_titel]</h2>
[field_teaser] [view_node]
</div>
</div>
';
  $handler->display->display_options['fields']['field_teaser_bild']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_bild']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_teaser_bild']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_teaser_bild']['settings'] = array(
    'image_style' => 'tn130x130',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Sticky (field_sticky) */
  $handler->display->display_options['sorts']['field_sticky_value']['id'] = 'field_sticky_value';
  $handler->display->display_options['sorts']['field_sticky_value']['table'] = 'field_data_field_sticky';
  $handler->display->display_options['sorts']['field_sticky_value']['field'] = 'field_sticky_value';
  $handler->display->display_options['sorts']['field_sticky_value']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'bildergalerie' => 'bildergalerie',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Bildergalerieübersicht (field_bildergalerieuebersicht) */
  $handler->display->display_options['filters']['field_bildergalerieuebersicht_value']['id'] = 'field_bildergalerieuebersicht_value';
  $handler->display->display_options['filters']['field_bildergalerieuebersicht_value']['table'] = 'field_data_field_bildergalerieuebersicht';
  $handler->display->display_options['filters']['field_bildergalerieuebersicht_value']['field'] = 'field_bildergalerieuebersicht_value';
  $handler->display->display_options['filters']['field_bildergalerieuebersicht_value']['value'] = array(
    'Ja' => 'Ja',
  );
  /* Filter criterion: Content: Hidden */
  $handler->display->display_options['filters']['hidden']['id'] = 'hidden';
  $handler->display->display_options['filters']['hidden']['table'] = 'hidden_nodes';
  $handler->display->display_options['filters']['hidden']['field'] = 'hidden';
  $handler->display->display_options['filters']['hidden']['value'] = '0';

  /* Display: Gebärdensprache */
  $handler = $view->new_display('block', 'Gebärdensprache', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« Erste';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ Zurück';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'Weiter ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'Letzte »';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="blockVideodatenschutz caption">Bei den auf dieser Website eingebetteten YouTube-Videos ist der sogenannte "erweiterte Datenschutzmodus" aktiviert. Mit diesem Modus wird verhindert, dass YouTube-Cookies (kleine Textdateien mit Nutzer-Informationen, die durch Ihren Browser auf Ihrem Rechner gespeichert werden) für einen nicht bei YouTube angemeldeten Nutzer speichert, der eine Website mit einem eingebetteten YouTube-Videoplayer mit erweitertem Datenschutz anzeigt, jedoch nicht auf das Video klickt, um die Wiedergabe zu starten. Zwar speichert YouTube unter Umständen Cookies auf dem Computer des Nutzers, nachdem er auf den YouTube-Videoplayer geklickt hat, es werden jedoch keine personenbezogenen Cookie-Informationen für Wiedergaben von eingebetteten Videos mit erweitertem Datenschutz gespeichert.<br><br>Weitere Informationen finden Sie auf der Webseite von <a target="_blank" href="http://support.google.com/youtube/bin/answer.py?hl=de&answer=141046">YouTube</a>.</div>';
  $handler->display->display_options['footer']['area']['format'] = 'filter_redaktion';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Video (field_hauptvideo:fid) */
  $handler->display->display_options['relationships']['field_hauptvideo_fid']['id'] = 'field_hauptvideo_fid';
  $handler->display->display_options['relationships']['field_hauptvideo_fid']['table'] = 'field_data_field_hauptvideo';
  $handler->display->display_options['relationships']['field_hauptvideo_fid']['field'] = 'field_hauptvideo_fid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Spitzmarke */
  $handler->display->display_options['fields']['field_spitzmarke']['id'] = 'field_spitzmarke';
  $handler->display->display_options['fields']['field_spitzmarke']['table'] = 'field_data_field_spitzmarke';
  $handler->display->display_options['fields']['field_spitzmarke']['field'] = 'field_spitzmarke';
  $handler->display->display_options['fields']['field_spitzmarke']['label'] = '';
  $handler->display->display_options['fields']['field_spitzmarke']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_spitzmarke']['element_label_colon'] = FALSE;
  /* Field: Field: Titel */
  $handler->display->display_options['fields']['field_titel']['id'] = 'field_titel';
  $handler->display->display_options['fields']['field_titel']['table'] = 'field_data_field_titel';
  $handler->display->display_options['fields']['field_titel']['field'] = 'field_titel';
  $handler->display->display_options['fields']['field_titel']['label'] = '';
  $handler->display->display_options['fields']['field_titel']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_titel']['element_label_colon'] = FALSE;
  /* Field: Field: Artikelinhalt */
  $handler->display->display_options['fields']['field_inhalt']['id'] = 'field_inhalt';
  $handler->display->display_options['fields']['field_inhalt']['table'] = 'field_data_field_inhalt';
  $handler->display->display_options['fields']['field_inhalt']['field'] = 'field_inhalt';
  $handler->display->display_options['fields']['field_inhalt']['label'] = '';
  $handler->display->display_options['fields']['field_inhalt']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_inhalt']['element_label_colon'] = FALSE;
  /* Field: Content: Teaser Bild */
  $handler->display->display_options['fields']['field_teaser_bild']['id'] = 'field_teaser_bild';
  $handler->display->display_options['fields']['field_teaser_bild']['table'] = 'field_data_field_teaser_bild';
  $handler->display->display_options['fields']['field_teaser_bild']['field'] = 'field_teaser_bild';
  $handler->display->display_options['fields']['field_teaser_bild']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_bild']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_bild']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_bild']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_teaser_bild']['settings'] = array(
    'image_style' => 'tn660x376',
    'image_link' => '',
  );
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_hauptvideo']['id'] = 'field_hauptvideo';
  $handler->display->display_options['fields']['field_hauptvideo']['table'] = 'field_data_field_hauptvideo';
  $handler->display->display_options['fields']['field_hauptvideo']['field'] = 'field_hauptvideo';
  $handler->display->display_options['fields']['field_hauptvideo']['label'] = '';
  $handler->display->display_options['fields']['field_hauptvideo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hauptvideo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hauptvideo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_hauptvideo']['settings'] = array(
    'file_view_mode' => 'videodetailseite_url',
  );
  /* Field: File: Beschreibung */
  $handler->display->display_options['fields']['field_caption']['id'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption']['field'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['relationship'] = 'field_hauptvideo_fid';
  $handler->display->display_options['fields']['field_caption']['label'] = '';
  $handler->display->display_options['fields']['field_caption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_caption']['element_label_colon'] = FALSE;
  /* Field: File: Copyright/Urheber */
  $handler->display->display_options['fields']['field_copyright']['id'] = 'field_copyright';
  $handler->display->display_options['fields']['field_copyright']['table'] = 'field_data_field_copyright';
  $handler->display->display_options['fields']['field_copyright']['field'] = 'field_copyright';
  $handler->display->display_options['fields']['field_copyright']['relationship'] = 'field_hauptvideo_fid';
  $handler->display->display_options['fields']['field_copyright']['label'] = '';
  $handler->display->display_options['fields']['field_copyright']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_copyright']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_copyright']['alter']['text'] = '<div class="caption">
[field_caption]<br>
<span class="copyright">© [field_copyright]</span>
</div>';
  $handler->display->display_options['fields']['field_copyright']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="spitzmarke">[field_spitzmarke]</span>
<h2 class="view_titel">[field_titel]</h2>
[field_inhalt]
<div class="gebaerdensprache_2click">
<div class="gebaerdensprache_2click_overlay"></div>
[field_teaser_bild]
<div class="gebaerdensprache-2click-detail">
<div class="gebaerdensprache-2click-text">Ich habe die <a class="colorbox-node" href="/datenschutz?width=600&height=600">Datenschutzbestimmungen</a> gelesen und erkläre mich durch Klick auf „Akzeptieren“ damit einverstanden.
Weitere Informationen zum Datenschutz bei Youtube finden Sie unter <a href="http://www.google.de/intl/de/policies/privacy/" target="_blank">http://www.google.de/intl/de/policies/privacy/</a>.</div>
<div class="gebaerdensprache-2click-button">Akzeptieren</div>
<div class="gebaerdensprache_2click_url">[field_hauptvideo]</div>
</div>
</div>
[field_copyright]


';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Sticky (field_sticky) */
  $handler->display->display_options['sorts']['field_sticky_value']['id'] = 'field_sticky_value';
  $handler->display->display_options['sorts']['field_sticky_value']['table'] = 'field_data_field_sticky';
  $handler->display->display_options['sorts']['field_sticky_value']['field'] = 'field_sticky_value';
  $handler->display->display_options['sorts']['field_sticky_value']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'video' => 'video',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Auswahl Übersichtsseite (field_auswahl_uebersichtsseite) */
  $handler->display->display_options['filters']['field_auswahl_uebersichtsseite_value']['id'] = 'field_auswahl_uebersichtsseite_value';
  $handler->display->display_options['filters']['field_auswahl_uebersichtsseite_value']['table'] = 'field_data_field_auswahl_uebersichtsseite';
  $handler->display->display_options['filters']['field_auswahl_uebersichtsseite_value']['field'] = 'field_auswahl_uebersichtsseite_value';
  $handler->display->display_options['filters']['field_auswahl_uebersichtsseite_value']['value'] = array(
    'Übersicht der Gebärdensprachevideos' => 'Übersicht der Gebärdensprachevideos',
  );

  /* Display: Video Groß Unpublished */
  $handler = $view->new_display('block', 'Video Groß Unpublished', 'block_3');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'videogross';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Spitzmarke */
  $handler->display->display_options['fields']['field_spitzmarke']['id'] = 'field_spitzmarke';
  $handler->display->display_options['fields']['field_spitzmarke']['table'] = 'field_data_field_spitzmarke';
  $handler->display->display_options['fields']['field_spitzmarke']['field'] = 'field_spitzmarke';
  $handler->display->display_options['fields']['field_spitzmarke']['label'] = '';
  $handler->display->display_options['fields']['field_spitzmarke']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_spitzmarke']['element_label_colon'] = FALSE;
  /* Field: Content: Teaserspitzmarke */
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['id'] = 'field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['table'] = 'field_data_field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['field'] = 'field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['empty'] = '[field_spitzmarke]';
  /* Field: Field: Titel */
  $handler->display->display_options['fields']['field_titel']['id'] = 'field_titel';
  $handler->display->display_options['fields']['field_titel']['table'] = 'field_data_field_titel';
  $handler->display->display_options['fields']['field_titel']['field'] = 'field_titel';
  $handler->display->display_options['fields']['field_titel']['label'] = '';
  $handler->display->display_options['fields']['field_titel']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_titel']['element_label_colon'] = FALSE;
  /* Field: Content: Teaser-Titel */
  $handler->display->display_options['fields']['field_teaser_titel']['id'] = 'field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['table'] = 'field_data_field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['field'] = 'field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_titel']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_titel']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_titel']['empty'] = '[field_titel]';
  /* Field: Content: Teaser */
  $handler->display->display_options['fields']['field_teaser']['id'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['table'] = 'field_data_field_teaser';
  $handler->display->display_options['fields']['field_teaser']['field'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_teaser']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['alter']['text'] = '[field_teaser]<br>';
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser']['settings'] = array(
    'trim_length' => '95',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: File: Title Text */
  $handler->display->display_options['fields']['field_file_image_title_text']['id'] = 'field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['table'] = 'field_data_field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['field'] = 'field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['relationship'] = 'field_teaser_bild_fid';
  $handler->display->display_options['fields']['field_file_image_title_text']['label'] = '';
  $handler->display->display_options['fields']['field_file_image_title_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_title_text']['element_label_colon'] = FALSE;
  /* Field: Content: Teaser Bild */
  $handler->display->display_options['fields']['field_teaser_bild']['id'] = 'field_teaser_bild';
  $handler->display->display_options['fields']['field_teaser_bild']['table'] = 'field_data_field_teaser_bild';
  $handler->display->display_options['fields']['field_teaser_bild']['field'] = 'field_teaser_bild';
  $handler->display->display_options['fields']['field_teaser_bild']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_bild']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_bild']['alter']['text'] = '<div class="videouebersicht">
<div class="videouebersicht_gross">
<span class="spitzmarke">[field_teaser_spitzmarke]</span>
<h2 class="view_titel">[field_teaser_titel]</h2>
[field_teaser]
<div class="videouebersicht_gross_bild_overlay">
<a class="videouebersicht_gross_bild_overlay_background" title="[field_file_image_title_text]" alt="[field_file_image_title_text]" href="[path]"/>
[field_teaser_bild]
</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_teaser_bild']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_bild']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_teaser_bild']['settings'] = array(
    'image_style' => 'tn480x270',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'video' => 'video',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Sticky (field_sticky) */
  $handler->display->display_options['filters']['field_sticky_value']['id'] = 'field_sticky_value';
  $handler->display->display_options['filters']['field_sticky_value']['table'] = 'field_data_field_sticky';
  $handler->display->display_options['filters']['field_sticky_value']['field'] = 'field_sticky_value';
  $handler->display->display_options['filters']['field_sticky_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_sticky_value']['group'] = 1;
  /* Filter criterion: Content: Auswahl Übersichtsseite (field_auswahl_uebersichtsseite) */
  $handler->display->display_options['filters']['field_auswahl_uebersichtsseite_value']['id'] = 'field_auswahl_uebersichtsseite_value';
  $handler->display->display_options['filters']['field_auswahl_uebersichtsseite_value']['table'] = 'field_data_field_auswahl_uebersichtsseite';
  $handler->display->display_options['filters']['field_auswahl_uebersichtsseite_value']['field'] = 'field_auswahl_uebersichtsseite_value';
  $handler->display->display_options['filters']['field_auswahl_uebersichtsseite_value']['value'] = array(
    'Normale Videoübersichtsseite' => 'Normale Videoübersichtsseite',
  );
  $handler->display->display_options['filters']['field_auswahl_uebersichtsseite_value']['group'] = 1;

  /* Display: Video Klein Unpublished */
  $handler = $view->new_display('block', 'Video Klein Unpublished', 'block_5');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '5';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« Erste';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ Zurück';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'Weiter ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'Letzte »';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Spitzmarke */
  $handler->display->display_options['fields']['field_spitzmarke']['id'] = 'field_spitzmarke';
  $handler->display->display_options['fields']['field_spitzmarke']['table'] = 'field_data_field_spitzmarke';
  $handler->display->display_options['fields']['field_spitzmarke']['field'] = 'field_spitzmarke';
  $handler->display->display_options['fields']['field_spitzmarke']['label'] = '';
  $handler->display->display_options['fields']['field_spitzmarke']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_spitzmarke']['element_label_colon'] = FALSE;
  /* Field: Content: Teaserspitzmarke */
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['id'] = 'field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['table'] = 'field_data_field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['field'] = 'field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['empty'] = '[field_spitzmarke]';
  /* Field: Field: Titel */
  $handler->display->display_options['fields']['field_titel']['id'] = 'field_titel';
  $handler->display->display_options['fields']['field_titel']['table'] = 'field_data_field_titel';
  $handler->display->display_options['fields']['field_titel']['field'] = 'field_titel';
  $handler->display->display_options['fields']['field_titel']['label'] = '';
  $handler->display->display_options['fields']['field_titel']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_titel']['alter']['max_length'] = '60';
  $handler->display->display_options['fields']['field_titel']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_titel']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_titel']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_titel']['element_label_colon'] = FALSE;
  /* Field: Content: Teaser-Titel */
  $handler->display->display_options['fields']['field_teaser_titel']['id'] = 'field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['table'] = 'field_data_field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['field'] = 'field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_titel']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['max_length'] = '60';
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_titel']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_titel']['empty'] = '[field_titel]';
  $handler->display->display_options['fields']['field_teaser_titel']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_teaser_titel']['settings'] = array(
    'trim_length' => '60',
  );
  /* Field: Content: Teaser */
  $handler->display->display_options['fields']['field_teaser']['id'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['table'] = 'field_data_field_teaser';
  $handler->display->display_options['fields']['field_teaser']['field'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_teaser']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['field_teaser']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser']['settings'] = array(
    'trim_length' => '100',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = '<span class="more_link">Mehr erfahren</span>';
  /* Field: File: Title Text */
  $handler->display->display_options['fields']['field_file_image_title_text']['id'] = 'field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['table'] = 'field_data_field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['field'] = 'field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['relationship'] = 'field_teaser_bild_fid';
  $handler->display->display_options['fields']['field_file_image_title_text']['label'] = '';
  $handler->display->display_options['fields']['field_file_image_title_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_title_text']['element_label_colon'] = FALSE;
  /* Field: Content: Teaser Bild */
  $handler->display->display_options['fields']['field_teaser_bild']['id'] = 'field_teaser_bild';
  $handler->display->display_options['fields']['field_teaser_bild']['table'] = 'field_data_field_teaser_bild';
  $handler->display->display_options['fields']['field_teaser_bild']['field'] = 'field_teaser_bild';
  $handler->display->display_options['fields']['field_teaser_bild']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_bild']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_bild']['alter']['text'] = '<div class="videouebersicht">
<div class="videouebersicht_klein">
<div class="videouebersicht_klein_bild_overlay">
<a class="videouebersicht_klein_bild_overlay_background" title="[field_file_image_title_text]" alt="[field_file_image_title_text]" href="[path]"/>
[field_teaser_bild]
</div>
<div class="videouebersicht_teaser">
<span class="spitzmarke">[field_teaser_spitzmarke]</span>
<h2 class="view_titel">[field_teaser_titel]</h2>
[field_teaser] [view_node]
</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_teaser_bild']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_bild']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_teaser_bild']['settings'] = array(
    'image_style' => 'tn130x130',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'video' => 'video',
  );
  /* Filter criterion: Content: Auswahl Übersichtsseite (field_auswahl_uebersichtsseite) */
  $handler->display->display_options['filters']['field_auswahl_uebersichtsseite_value']['id'] = 'field_auswahl_uebersichtsseite_value';
  $handler->display->display_options['filters']['field_auswahl_uebersichtsseite_value']['table'] = 'field_data_field_auswahl_uebersichtsseite';
  $handler->display->display_options['filters']['field_auswahl_uebersichtsseite_value']['field'] = 'field_auswahl_uebersichtsseite_value';
  $handler->display->display_options['filters']['field_auswahl_uebersichtsseite_value']['value'] = array(
    'Normale Videoübersichtsseite' => 'Normale Videoübersichtsseite',
  );

  /* Display: Bildergalerien Unpublished */
  $handler = $view->new_display('block', 'Bildergalerien Unpublished', 'block_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Bildergalerien';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '5';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« Erste';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ Zurück';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'Weiter ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'Letzte »';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Teaser Bild (field_teaser_bild:fid) */
  $handler->display->display_options['relationships']['field_teaser_bild_fid']['id'] = 'field_teaser_bild_fid';
  $handler->display->display_options['relationships']['field_teaser_bild_fid']['table'] = 'field_data_field_teaser_bild';
  $handler->display->display_options['relationships']['field_teaser_bild_fid']['field'] = 'field_teaser_bild_fid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Spitzmarke */
  $handler->display->display_options['fields']['field_spitzmarke']['id'] = 'field_spitzmarke';
  $handler->display->display_options['fields']['field_spitzmarke']['table'] = 'field_data_field_spitzmarke';
  $handler->display->display_options['fields']['field_spitzmarke']['field'] = 'field_spitzmarke';
  $handler->display->display_options['fields']['field_spitzmarke']['label'] = '';
  $handler->display->display_options['fields']['field_spitzmarke']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_spitzmarke']['element_label_colon'] = FALSE;
  /* Field: Content: Teaserspitzmarke */
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['id'] = 'field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['table'] = 'field_data_field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['field'] = 'field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['empty'] = '[field_spitzmarke]';
  /* Field: Field: Titel */
  $handler->display->display_options['fields']['field_titel']['id'] = 'field_titel';
  $handler->display->display_options['fields']['field_titel']['table'] = 'field_data_field_titel';
  $handler->display->display_options['fields']['field_titel']['field'] = 'field_titel';
  $handler->display->display_options['fields']['field_titel']['label'] = '';
  $handler->display->display_options['fields']['field_titel']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_titel']['element_label_colon'] = FALSE;
  /* Field: Content: Teaser-Titel */
  $handler->display->display_options['fields']['field_teaser_titel']['id'] = 'field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['table'] = 'field_data_field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['field'] = 'field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_titel']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['max_length'] = '80';
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_titel']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_titel']['empty'] = '[field_titel]';
  $handler->display->display_options['fields']['field_teaser_titel']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_teaser_titel']['settings'] = array(
    'trim_length' => '80',
  );
  /* Field: Content: Teaser */
  $handler->display->display_options['fields']['field_teaser']['id'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['table'] = 'field_data_field_teaser';
  $handler->display->display_options['fields']['field_teaser']['field'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_teaser']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['field_teaser']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser']['settings'] = array(
    'trim_length' => '105',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = '<span class="more_link">Mehr erfahren</span>';
  /* Field: File: Title Text */
  $handler->display->display_options['fields']['field_file_image_title_text']['id'] = 'field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['table'] = 'field_data_field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['field'] = 'field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['relationship'] = 'field_teaser_bild_fid';
  $handler->display->display_options['fields']['field_file_image_title_text']['label'] = '';
  $handler->display->display_options['fields']['field_file_image_title_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_title_text']['element_label_colon'] = FALSE;
  /* Field: Content: Teaser Bild */
  $handler->display->display_options['fields']['field_teaser_bild']['id'] = 'field_teaser_bild';
  $handler->display->display_options['fields']['field_teaser_bild']['table'] = 'field_data_field_teaser_bild';
  $handler->display->display_options['fields']['field_teaser_bild']['field'] = 'field_teaser_bild';
  $handler->display->display_options['fields']['field_teaser_bild']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_bild']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_bild']['alter']['text'] = '<div class="bildergalerien_teaser">
<div class="bildergalerien_teaser_bild">
<a class="bildergalerien_teaser_background" href="[path]"> </a>
<img src="[field_teaser_bild]" alt="[field_file_image_title_text]" title="[field_file_image_title_text]">
</div>
<div class="bildergalerien_info">
<span class="spitzmarke">[field_teaser_spitzmarke]</span>
<h2 class="view_titel">[field_teaser_titel]</h2>
[field_teaser] [view_node]
</div>
</div>
';
  $handler->display->display_options['fields']['field_teaser_bild']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_bild']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_teaser_bild']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_teaser_bild']['settings'] = array(
    'image_style' => 'tn130x130',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Sticky (field_sticky) */
  $handler->display->display_options['sorts']['field_sticky_value']['id'] = 'field_sticky_value';
  $handler->display->display_options['sorts']['field_sticky_value']['table'] = 'field_data_field_sticky';
  $handler->display->display_options['sorts']['field_sticky_value']['field'] = 'field_sticky_value';
  $handler->display->display_options['sorts']['field_sticky_value']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'bildergalerie' => 'bildergalerie',
  );
  /* Filter criterion: Content: Bildergalerieübersicht (field_bildergalerieuebersicht) */
  $handler->display->display_options['filters']['field_bildergalerieuebersicht_value']['id'] = 'field_bildergalerieuebersicht_value';
  $handler->display->display_options['filters']['field_bildergalerieuebersicht_value']['table'] = 'field_data_field_bildergalerieuebersicht';
  $handler->display->display_options['filters']['field_bildergalerieuebersicht_value']['field'] = 'field_bildergalerieuebersicht_value';
  $handler->display->display_options['filters']['field_bildergalerieuebersicht_value']['value'] = array(
    'Ja' => 'Ja',
  );
  $translatables['videouebersicht'] = array(
    t('Master'),
    t('Videoübersicht'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('image from field_teaser_bild'),
    t('Video Groß'),
    t('[field_spitzmarke]'),
    t('[field_titel]'),
    t('[field_teaser]<br>'),
    t('<div class="videouebersicht">
<div class="videouebersicht_gross">
<span class="spitzmarke">[field_teaser_spitzmarke]</span>
<h2 class="view_titel">[field_teaser_titel]</h2>
[field_teaser]
<div class="videouebersicht_gross_bild_overlay">
<a class="videouebersicht_gross_bild_overlay_background" title="[field_file_image_title_text]" alt="[field_file_image_title_text]" href="[path]"/>
[field_teaser_bild]
</div>
</div>
</div>'),
    t('Video Klein'),
    t('« Erste'),
    t('‹ Zurück'),
    t('Weiter ›'),
    t('Letzte »'),
    t('<span class="more_link">Mehr erfahren</span>'),
    t('<div class="videouebersicht">
<div class="videouebersicht_klein">
<div class="videouebersicht_klein_bild_overlay">
<a class="videouebersicht_klein_bild_overlay_background" title="[field_file_image_title_text]" alt="[field_file_image_title_text]" href="[path]"/>
[field_teaser_bild]
</div>
<div class="videouebersicht_teaser">
<span class="spitzmarke">[field_teaser_spitzmarke]</span>
<h2 class="view_titel">[field_teaser_titel]</h2>
[field_teaser] [view_node]
</div>
</div>
</div>'),
    t('Bildergalerien'),
    t('<div class="bildergalerien_teaser">
<div class="bildergalerien_teaser_bild">
<a class="bildergalerien_teaser_background" href="[path]"> </a>
<img src="[field_teaser_bild]" alt="[field_file_image_title_text]" title="[field_file_image_title_text]">
</div>
<div class="bildergalerien_info">
<span class="spitzmarke">[field_teaser_spitzmarke]</span>
<h2 class="view_titel">[field_teaser_titel]</h2>
[field_teaser] [view_node]
</div>
</div>
'),
    t('Gebärdensprache'),
    t('<div class="blockVideodatenschutz caption">Bei den auf dieser Website eingebetteten YouTube-Videos ist der sogenannte "erweiterte Datenschutzmodus" aktiviert. Mit diesem Modus wird verhindert, dass YouTube-Cookies (kleine Textdateien mit Nutzer-Informationen, die durch Ihren Browser auf Ihrem Rechner gespeichert werden) für einen nicht bei YouTube angemeldeten Nutzer speichert, der eine Website mit einem eingebetteten YouTube-Videoplayer mit erweitertem Datenschutz anzeigt, jedoch nicht auf das Video klickt, um die Wiedergabe zu starten. Zwar speichert YouTube unter Umständen Cookies auf dem Computer des Nutzers, nachdem er auf den YouTube-Videoplayer geklickt hat, es werden jedoch keine personenbezogenen Cookie-Informationen für Wiedergaben von eingebetteten Videos mit erweitertem Datenschutz gespeichert.<br><br>Weitere Informationen finden Sie auf der Webseite von <a target="_blank" href="http://support.google.com/youtube/bin/answer.py?hl=de&answer=141046">YouTube</a>.</div>'),
    t('file from field_hauptvideo'),
    t('<div class="caption">
[field_caption]<br>
<span class="copyright">© [field_copyright]</span>
</div>'),
    t('<span class="spitzmarke">[field_spitzmarke]</span>
<h2 class="view_titel">[field_titel]</h2>
[field_inhalt]
<div class="gebaerdensprache_2click">
<div class="gebaerdensprache_2click_overlay"></div>
[field_teaser_bild]
<div class="gebaerdensprache-2click-detail">
<div class="gebaerdensprache-2click-text">Ich habe die <a class="colorbox-node" href="/datenschutz?width=600&height=600">Datenschutzbestimmungen</a> gelesen und erkläre mich durch Klick auf „Akzeptieren“ damit einverstanden.
Weitere Informationen zum Datenschutz bei Youtube finden Sie unter <a href="http://www.google.de/intl/de/policies/privacy/" target="_blank">http://www.google.de/intl/de/policies/privacy/</a>.</div>
<div class="gebaerdensprache-2click-button">Akzeptieren</div>
<div class="gebaerdensprache_2click_url">[field_hauptvideo]</div>
</div>
</div>
[field_copyright]


'),
    t('Video Groß Unpublished'),
    t('Video Klein Unpublished'),
    t('Bildergalerien Unpublished'),
  );
  $export['videouebersicht'] = $view;

  $view = new view();
  $view->name = 'views_videodetailseite';
  $view->description = 'Views für die Video Detailseite';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Videodetailseite';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Video (field_hauptvideo:fid) */
  $handler->display->display_options['relationships']['field_hauptvideo_fid']['id'] = 'field_hauptvideo_fid';
  $handler->display->display_options['relationships']['field_hauptvideo_fid']['table'] = 'field_data_field_hauptvideo';
  $handler->display->display_options['relationships']['field_hauptvideo_fid']['field'] = 'field_hauptvideo_fid';
  /* Field: Field: Artikelinhalt */
  $handler->display->display_options['fields']['field_inhalt']['id'] = 'field_inhalt';
  $handler->display->display_options['fields']['field_inhalt']['table'] = 'field_data_field_inhalt';
  $handler->display->display_options['fields']['field_inhalt']['field'] = 'field_inhalt';
  $handler->display->display_options['fields']['field_inhalt']['label'] = '';
  $handler->display->display_options['fields']['field_inhalt']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_inhalt']['alter']['text'] = '[field_inhalt]<br><br>';
  $handler->display->display_options['fields']['field_inhalt']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_inhalt']['alter']['preserve_tags'] = '<a> <span> <h2> <h3> <h4> <strong> <bold> <br>';
  $handler->display->display_options['fields']['field_inhalt']['element_type'] = '0';
  $handler->display->display_options['fields']['field_inhalt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_inhalt']['element_default_classes'] = FALSE;
  /* Field: Content: Teaser Bild */
  $handler->display->display_options['fields']['field_teaser_bild']['id'] = 'field_teaser_bild';
  $handler->display->display_options['fields']['field_teaser_bild']['table'] = 'field_data_field_teaser_bild';
  $handler->display->display_options['fields']['field_teaser_bild']['field'] = 'field_teaser_bild';
  $handler->display->display_options['fields']['field_teaser_bild']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_bild']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_bild']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_bild']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_teaser_bild']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_teaser_bild']['settings'] = array(
    'image_style' => 'tn750x427',
    'image_link' => '',
  );
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_hauptvideo']['id'] = 'field_hauptvideo';
  $handler->display->display_options['fields']['field_hauptvideo']['table'] = 'field_data_field_hauptvideo';
  $handler->display->display_options['fields']['field_hauptvideo']['field'] = 'field_hauptvideo';
  $handler->display->display_options['fields']['field_hauptvideo']['label'] = '';
  $handler->display->display_options['fields']['field_hauptvideo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_hauptvideo']['alter']['text'] = '<div class="youtube_2click">
<div class="youtube_2click_overlay"></div>
<img src="[field_teaser_bild]">
<div class="youtube-2click-detail">
<div class="youtube-2click-text">Ich habe die <a class="colorbox-node" href="/datenschutz?width=600&height=600">Datenschutzbestimmungen</a> gelesen und erkläre mich durch Klick auf „Akzeptieren“ damit einverstanden.
Weitere Informationen zum Datenschutz bei Youtube finden Sie unter <a href="http://www.google.de/intl/de/policies/privacy/" target="_blank">http://www.google.de/intl/de/policies/privacy/</a>.</div>
<div class="youtube-2click-button">Akzeptieren</div>
<div class="youtube_2click_url">[field_hauptvideo]</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_hauptvideo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hauptvideo']['element_wrapper_class'] = 'youtube_2click_wrapper';
  $handler->display->display_options['fields']['field_hauptvideo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_hauptvideo']['settings'] = array(
    'file_view_mode' => 'videodetailseite_url',
  );
  /* Field: File: Beschreibung */
  $handler->display->display_options['fields']['field_caption']['id'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption']['field'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['relationship'] = 'field_hauptvideo_fid';
  $handler->display->display_options['fields']['field_caption']['label'] = '';
  $handler->display->display_options['fields']['field_caption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_caption']['element_label_colon'] = FALSE;
  /* Field: File: Copyright/Urheber */
  $handler->display->display_options['fields']['field_copyright']['id'] = 'field_copyright';
  $handler->display->display_options['fields']['field_copyright']['table'] = 'field_data_field_copyright';
  $handler->display->display_options['fields']['field_copyright']['field'] = 'field_copyright';
  $handler->display->display_options['fields']['field_copyright']['relationship'] = 'field_hauptvideo_fid';
  $handler->display->display_options['fields']['field_copyright']['label'] = '';
  $handler->display->display_options['fields']['field_copyright']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_copyright']['alter']['text'] = '<div class="caption">
[field_caption]<br>
<span class="copyright">© [field_copyright]</span>
</div>';
  $handler->display->display_options['fields']['field_copyright']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_copyright']['element_default_classes'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Block Videodetailseite */
  $handler = $view->new_display('block', 'Block Videodetailseite', 'block');
  $handler->display->display_options['display_description'] = 'Spezieller View zur Ausgabe der "Untertitel" aus Video & Node-Inhalten';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;

  /* Display: Block Video Presse/Artikel */
  $handler = $view->new_display('block', 'Block Video Presse/Artikel', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['element_type'] = '';
  $handler->display->display_options['style_options']['row']['first_class'] = '';
  $handler->display->display_options['style_options']['row']['last_class'] = '';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '';
  $handler->display->display_options['style_options']['row']['striping_classes'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Teaser Bild */
  $handler->display->display_options['fields']['field_teaser_bild']['id'] = 'field_teaser_bild';
  $handler->display->display_options['fields']['field_teaser_bild']['table'] = 'field_data_field_teaser_bild';
  $handler->display->display_options['fields']['field_teaser_bild']['field'] = 'field_teaser_bild';
  $handler->display->display_options['fields']['field_teaser_bild']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_bild']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_bild']['alter']['text'] = '<a class="video_preview_overlay" href="[path]"></a>
<div class="video_preview_artikel">[field_teaser_bild]</div>';
  $handler->display->display_options['fields']['field_teaser_bild']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_bild']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_teaser_bild']['settings'] = array(
    'image_style' => 'artikel-detail',
    'image_link' => 'content',
  );
  /* Field: File: Beschreibung */
  $handler->display->display_options['fields']['field_caption']['id'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption']['field'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['relationship'] = 'field_hauptvideo_fid';
  $handler->display->display_options['fields']['field_caption']['label'] = '';
  $handler->display->display_options['fields']['field_caption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_caption']['element_label_colon'] = FALSE;
  /* Field: File: Copyright/Urheber */
  $handler->display->display_options['fields']['field_copyright']['id'] = 'field_copyright';
  $handler->display->display_options['fields']['field_copyright']['table'] = 'field_data_field_copyright';
  $handler->display->display_options['fields']['field_copyright']['field'] = 'field_copyright';
  $handler->display->display_options['fields']['field_copyright']['relationship'] = 'field_hauptvideo_fid';
  $handler->display->display_options['fields']['field_copyright']['label'] = '';
  $handler->display->display_options['fields']['field_copyright']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_copyright']['alter']['text'] = '<div class="caption">
[field_caption]<br>
<span class="copyright">© [field_copyright]</span>
</div><br>';
  $handler->display->display_options['fields']['field_copyright']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_copyright']['element_default_classes'] = FALSE;
  $translatables['views_videodetailseite'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('file from field_hauptvideo'),
    t('[field_inhalt]<br><br>'),
    t('<div class="youtube_2click">
<div class="youtube_2click_overlay"></div>
<img src="[field_teaser_bild]">
<div class="youtube-2click-detail">
<div class="youtube-2click-text">Ich habe die <a class="colorbox-node" href="/datenschutz?width=600&height=600">Datenschutzbestimmungen</a> gelesen und erkläre mich durch Klick auf „Akzeptieren“ damit einverstanden.
Weitere Informationen zum Datenschutz bei Youtube finden Sie unter <a href="http://www.google.de/intl/de/policies/privacy/" target="_blank">http://www.google.de/intl/de/policies/privacy/</a>.</div>
<div class="youtube-2click-button">Akzeptieren</div>
<div class="youtube_2click_url">[field_hauptvideo]</div>
</div>
</div>'),
    t('<div class="caption">
[field_caption]<br>
<span class="copyright">© [field_copyright]</span>
</div>'),
    t('All'),
    t('Block Videodetailseite'),
    t('Spezieller View zur Ausgabe der "Untertitel" aus Video & Node-Inhalten'),
    t('Block Video Presse/Artikel'),
    t('<a class="video_preview_overlay" href="[path]"></a>
<div class="video_preview_artikel">[field_teaser_bild]</div>'),
    t('<div class="caption">
[field_caption]<br>
<span class="copyright">© [field_copyright]</span>
</div><br>'),
  );
  $export['views_videodetailseite'] = $view;

  return $export;
}
