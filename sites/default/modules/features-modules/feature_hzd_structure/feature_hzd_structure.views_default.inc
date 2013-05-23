<?php
/**
 * @file
 * feature_hzd_structure.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_hzd_structure_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'centerpage_top_thema';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Centerpage';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'centerpage_klein';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: TopThema Centerpage (field_topthema_centerpage) */
  $handler->display->display_options['relationships']['field_topthema_centerpage_nid']['id'] = 'field_topthema_centerpage_nid';
  $handler->display->display_options['relationships']['field_topthema_centerpage_nid']['table'] = 'field_data_field_topthema_centerpage';
  $handler->display->display_options['relationships']['field_topthema_centerpage_nid']['field'] = 'field_topthema_centerpage_nid';
  $handler->display->display_options['relationships']['field_topthema_centerpage_nid']['delta'] = '-1';
  /* Relationship: Content: Teaser Bild (field_teaser_bild:fid) */
  $handler->display->display_options['relationships']['field_teaser_bild_fid']['id'] = 'field_teaser_bild_fid';
  $handler->display->display_options['relationships']['field_teaser_bild_fid']['table'] = 'field_data_field_teaser_bild';
  $handler->display->display_options['relationships']['field_teaser_bild_fid']['field'] = 'field_teaser_bild_fid';
  $handler->display->display_options['relationships']['field_teaser_bild_fid']['relationship'] = 'field_topthema_centerpage_nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '>> Weiterlesen';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Teaser-Titel */
  $handler->display->display_options['fields']['field_teaser_titel']['id'] = 'field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['table'] = 'field_data_field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['field'] = 'field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['relationship'] = 'field_topthema_centerpage_nid';
  $handler->display->display_options['fields']['field_teaser_titel']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_titel']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_titel']['element_label_colon'] = FALSE;
  /* Field: Content: Teaserspitzmarke */
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['id'] = 'field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['table'] = 'field_data_field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['field'] = 'field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['relationship'] = 'field_topthema_centerpage_nid';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['alter']['text'] = 'TOP THEMA: [field_teaser_spitzmarke]';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['element_label_colon'] = FALSE;
  /* Field: Content: Teaser */
  $handler->display->display_options['fields']['field_teaser']['id'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['table'] = 'field_data_field_teaser';
  $handler->display->display_options['fields']['field_teaser']['field'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['relationship'] = 'field_topthema_centerpage_nid';
  $handler->display->display_options['fields']['field_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_teaser']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_teaser']['settings'] = array(
    'trim_length' => '200',
  );
  /* Field: Content: Link/Datei 1 */
  $handler->display->display_options['fields']['field_link_datei_1']['id'] = 'field_link_datei_1';
  $handler->display->display_options['fields']['field_link_datei_1']['table'] = 'field_data_field_link_datei_1';
  $handler->display->display_options['fields']['field_link_datei_1']['field'] = 'field_link_datei_1';
  $handler->display->display_options['fields']['field_link_datei_1']['relationship'] = 'field_topthema_centerpage_nid';
  $handler->display->display_options['fields']['field_link_datei_1']['label'] = '';
  $handler->display->display_options['fields']['field_link_datei_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_datei_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_datei_1']['click_sort_column'] = 'url';
  /* Field: Content: Spitzmarke Link/Datei 1 */
  $handler->display->display_options['fields']['field_spitzmarke_link_datei_1']['id'] = 'field_spitzmarke_link_datei_1';
  $handler->display->display_options['fields']['field_spitzmarke_link_datei_1']['table'] = 'field_data_field_spitzmarke_link_datei_1';
  $handler->display->display_options['fields']['field_spitzmarke_link_datei_1']['field'] = 'field_spitzmarke_link_datei_1';
  $handler->display->display_options['fields']['field_spitzmarke_link_datei_1']['relationship'] = 'field_topthema_centerpage_nid';
  $handler->display->display_options['fields']['field_spitzmarke_link_datei_1']['label'] = '';
  $handler->display->display_options['fields']['field_spitzmarke_link_datei_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_spitzmarke_link_datei_1']['element_label_colon'] = FALSE;
  /* Field: Content: Link/Datei 2 */
  $handler->display->display_options['fields']['field_link_datei_2']['id'] = 'field_link_datei_2';
  $handler->display->display_options['fields']['field_link_datei_2']['table'] = 'field_data_field_link_datei_2';
  $handler->display->display_options['fields']['field_link_datei_2']['field'] = 'field_link_datei_2';
  $handler->display->display_options['fields']['field_link_datei_2']['relationship'] = 'field_topthema_centerpage_nid';
  $handler->display->display_options['fields']['field_link_datei_2']['label'] = '';
  $handler->display->display_options['fields']['field_link_datei_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_datei_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_datei_2']['click_sort_column'] = 'url';
  /* Field: Content: Spitzmarke Link/Datei 2 */
  $handler->display->display_options['fields']['field_spitzmarke_link_datei_2']['id'] = 'field_spitzmarke_link_datei_2';
  $handler->display->display_options['fields']['field_spitzmarke_link_datei_2']['table'] = 'field_data_field_spitzmarke_link_datei_2';
  $handler->display->display_options['fields']['field_spitzmarke_link_datei_2']['field'] = 'field_spitzmarke_link_datei_2';
  $handler->display->display_options['fields']['field_spitzmarke_link_datei_2']['relationship'] = 'field_topthema_centerpage_nid';
  $handler->display->display_options['fields']['field_spitzmarke_link_datei_2']['label'] = '';
  $handler->display->display_options['fields']['field_spitzmarke_link_datei_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_spitzmarke_link_datei_2']['element_label_colon'] = FALSE;
  /* Field: Content: URL Themenseite */
  $handler->display->display_options['fields']['field_url_themenseite']['id'] = 'field_url_themenseite';
  $handler->display->display_options['fields']['field_url_themenseite']['table'] = 'field_data_field_url_themenseite';
  $handler->display->display_options['fields']['field_url_themenseite']['field'] = 'field_url_themenseite';
  $handler->display->display_options['fields']['field_url_themenseite']['relationship'] = 'field_topthema_centerpage_nid';
  $handler->display->display_options['fields']['field_url_themenseite']['label'] = '';
  $handler->display->display_options['fields']['field_url_themenseite']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url_themenseite']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url_themenseite']['click_sort_column'] = 'url';
  /* Field: Content: Teaser Bild */
  $handler->display->display_options['fields']['field_teaser_bild']['id'] = 'field_teaser_bild';
  $handler->display->display_options['fields']['field_teaser_bild']['table'] = 'field_data_field_teaser_bild';
  $handler->display->display_options['fields']['field_teaser_bild']['field'] = 'field_teaser_bild';
  $handler->display->display_options['fields']['field_teaser_bild']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_bild']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_bild']['alter']['text'] = '<div class="topthema_teaser">
[field_teaser_bild]
<b>[field_teaser_spitzmarke]</b><br>
<h2>[field_teaser_titel]</h2><br>
<p>[field_teaser][title]</p>
</div>

<div class="topthema_infos">
<div class="topthema_infos_links">
<b>[field_spitzmarke_link_datei_1]</b><br>
[field_link_datei_1]
</div>

<div class="topthema_infos_mitte">
<b>[field_spitzmarke_link_datei_2]</b><br>
[field_link_datei_2]
</div>

<div class="topthema_infos_rechts">
[field_url_themenseite]
</div>
</div>';
  $handler->display->display_options['fields']['field_teaser_bild']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_bild']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_teaser_bild']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
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
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Topthema Centerpage groß */
  $handler = $view->new_display('block', 'Topthema Centerpage groß', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Titel */
  $handler->display->display_options['fields']['field_titel']['id'] = 'field_titel';
  $handler->display->display_options['fields']['field_titel']['table'] = 'field_data_field_titel';
  $handler->display->display_options['fields']['field_titel']['field'] = 'field_titel';
  $handler->display->display_options['fields']['field_titel']['relationship'] = 'field_topthema_centerpage_nid';
  $handler->display->display_options['fields']['field_titel']['label'] = '';
  $handler->display->display_options['fields']['field_titel']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_titel']['alter']['max_length'] = '70';
  $handler->display->display_options['fields']['field_titel']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_titel']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_titel']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_titel']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_titel']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_titel']['settings'] = array(
    'trim_length' => '70',
  );
  /* Field: Content: Teaser-Titel */
  $handler->display->display_options['fields']['field_teaser_titel']['id'] = 'field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['table'] = 'field_data_field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['field'] = 'field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['relationship'] = 'field_topthema_centerpage_nid';
  $handler->display->display_options['fields']['field_teaser_titel']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_titel']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['max_length'] = '70';
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_titel']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_titel']['empty'] = '[field_titel]';
  $handler->display->display_options['fields']['field_teaser_titel']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_teaser_titel']['settings'] = array(
    'trim_length' => '70',
  );
  /* Field: Field: Spitzmarke */
  $handler->display->display_options['fields']['field_spitzmarke']['id'] = 'field_spitzmarke';
  $handler->display->display_options['fields']['field_spitzmarke']['table'] = 'field_data_field_spitzmarke';
  $handler->display->display_options['fields']['field_spitzmarke']['field'] = 'field_spitzmarke';
  $handler->display->display_options['fields']['field_spitzmarke']['relationship'] = 'field_topthema_centerpage_nid';
  $handler->display->display_options['fields']['field_spitzmarke']['label'] = '';
  $handler->display->display_options['fields']['field_spitzmarke']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_spitzmarke']['alter']['text'] = '[field_spitzmarke]';
  $handler->display->display_options['fields']['field_spitzmarke']['alter']['max_length'] = '22';
  $handler->display->display_options['fields']['field_spitzmarke']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_spitzmarke']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_spitzmarke']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_spitzmarke']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spitzmarke']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_spitzmarke']['settings'] = array(
    'trim_length' => '22',
  );
  /* Field: Content: Teaserspitzmarke */
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['id'] = 'field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['table'] = 'field_data_field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['field'] = 'field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['relationship'] = 'field_topthema_centerpage_nid';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['alter']['text'] = '<b>TOP THEMA: </b>[field_teaser_spitzmarke]';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['alter']['max_length'] = '22';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['empty'] = '[field_spitzmarke]';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['settings'] = array(
    'trim_length' => '22',
  );
  /* Field: Field: Artikelinhalt */
  $handler->display->display_options['fields']['field_inhalt']['id'] = 'field_inhalt';
  $handler->display->display_options['fields']['field_inhalt']['table'] = 'field_data_field_inhalt';
  $handler->display->display_options['fields']['field_inhalt']['field'] = 'field_inhalt';
  $handler->display->display_options['fields']['field_inhalt']['relationship'] = 'field_topthema_centerpage_nid';
  $handler->display->display_options['fields']['field_inhalt']['label'] = '';
  $handler->display->display_options['fields']['field_inhalt']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_inhalt']['alter']['max_length'] = '170';
  $handler->display->display_options['fields']['field_inhalt']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_inhalt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_inhalt']['settings'] = array(
    'trim_length' => '400',
  );
  /* Field: Content: Teaser */
  $handler->display->display_options['fields']['field_teaser']['id'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['table'] = 'field_data_field_teaser';
  $handler->display->display_options['fields']['field_teaser']['field'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['relationship'] = 'field_topthema_centerpage_nid';
  $handler->display->display_options['fields']['field_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_teaser']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['alter']['max_length'] = '170';
  $handler->display->display_options['fields']['field_teaser']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser']['empty'] = '[field_inhalt]';
  $handler->display->display_options['fields']['field_teaser']['settings'] = array(
    'trim_length' => '400',
  );
  /* Field: Content: Link/Datei 1 */
  $handler->display->display_options['fields']['field_link_datei_1']['id'] = 'field_link_datei_1';
  $handler->display->display_options['fields']['field_link_datei_1']['table'] = 'field_data_field_link_datei_1';
  $handler->display->display_options['fields']['field_link_datei_1']['field'] = 'field_link_datei_1';
  $handler->display->display_options['fields']['field_link_datei_1']['label'] = '';
  $handler->display->display_options['fields']['field_link_datei_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_datei_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_datei_1']['click_sort_column'] = 'url';
  /* Field: Content: Spitzmarke Link/Datei 1 */
  $handler->display->display_options['fields']['field_spitzmarke_link_datei_1']['id'] = 'field_spitzmarke_link_datei_1';
  $handler->display->display_options['fields']['field_spitzmarke_link_datei_1']['table'] = 'field_data_field_spitzmarke_link_datei_1';
  $handler->display->display_options['fields']['field_spitzmarke_link_datei_1']['field'] = 'field_spitzmarke_link_datei_1';
  $handler->display->display_options['fields']['field_spitzmarke_link_datei_1']['label'] = '';
  $handler->display->display_options['fields']['field_spitzmarke_link_datei_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_spitzmarke_link_datei_1']['alter']['max_length'] = '22';
  $handler->display->display_options['fields']['field_spitzmarke_link_datei_1']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_spitzmarke_link_datei_1']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_spitzmarke_link_datei_1']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_spitzmarke_link_datei_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spitzmarke_link_datei_1']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_spitzmarke_link_datei_1']['settings'] = array(
    'trim_length' => '22',
  );
  /* Field: Content: Link/Datei 2 */
  $handler->display->display_options['fields']['field_link_datei_2']['id'] = 'field_link_datei_2';
  $handler->display->display_options['fields']['field_link_datei_2']['table'] = 'field_data_field_link_datei_2';
  $handler->display->display_options['fields']['field_link_datei_2']['field'] = 'field_link_datei_2';
  $handler->display->display_options['fields']['field_link_datei_2']['label'] = '';
  $handler->display->display_options['fields']['field_link_datei_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_datei_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_datei_2']['click_sort_column'] = 'url';
  /* Field: Content: Spitzmarke Link/Datei 2 */
  $handler->display->display_options['fields']['field_spitzmarke_link_datei_2']['id'] = 'field_spitzmarke_link_datei_2';
  $handler->display->display_options['fields']['field_spitzmarke_link_datei_2']['table'] = 'field_data_field_spitzmarke_link_datei_2';
  $handler->display->display_options['fields']['field_spitzmarke_link_datei_2']['field'] = 'field_spitzmarke_link_datei_2';
  $handler->display->display_options['fields']['field_spitzmarke_link_datei_2']['label'] = '';
  $handler->display->display_options['fields']['field_spitzmarke_link_datei_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_spitzmarke_link_datei_2']['alter']['max_length'] = '22';
  $handler->display->display_options['fields']['field_spitzmarke_link_datei_2']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_spitzmarke_link_datei_2']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_spitzmarke_link_datei_2']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_spitzmarke_link_datei_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spitzmarke_link_datei_2']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_spitzmarke_link_datei_2']['settings'] = array(
    'trim_length' => '22',
  );
  /* Field: Content: URL Themenseite */
  $handler->display->display_options['fields']['field_url_themenseite']['id'] = 'field_url_themenseite';
  $handler->display->display_options['fields']['field_url_themenseite']['table'] = 'field_data_field_url_themenseite';
  $handler->display->display_options['fields']['field_url_themenseite']['field'] = 'field_url_themenseite';
  $handler->display->display_options['fields']['field_url_themenseite']['label'] = '';
  $handler->display->display_options['fields']['field_url_themenseite']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url_themenseite']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_url_themenseite']['alter']['text'] = '<div class="topthema_infos_rechts">
<div class="inner">
[field_url_themenseite]
</div>
</div>';
  $handler->display->display_options['fields']['field_url_themenseite']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['field_url_themenseite']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_url_themenseite']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_url_themenseite']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url_themenseite']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_url_themenseite']['click_sort_column'] = 'url';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['relationship'] = 'field_topthema_centerpage_nid';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Link zum externen Inhalt */
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['id'] = 'field_link_zum_externen_inhalt';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['table'] = 'field_data_field_link_zum_externen_inhalt';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['field'] = 'field_link_zum_externen_inhalt';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['relationship'] = 'field_topthema_centerpage_nid';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['label'] = '';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['alter']['text'] = '<a href="[field_link_zum_externen_inhalt]">Weiterlesen</a>';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['empty'] = '<a class="more_link" href="[path]">Weiterlesen</a>';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['type'] = 'link_plain';
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
  $handler->display->display_options['fields']['field_teaser_bild']['relationship'] = 'field_topthema_centerpage_nid';
  $handler->display->display_options['fields']['field_teaser_bild']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_bild']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_bild']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_bild']['alter']['text'] = '<img src="[field_teaser_bild]" alt="[field_file_image_title_text]" title="[field_file_image_title_text]">';
  $handler->display->display_options['fields']['field_teaser_bild']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_bild']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_teaser_bild']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_teaser_bild']['settings'] = array(
    'image_style' => 'tn220x220',
    'image_link' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="topthema_teaser">
[field_teaser_bild]
<div class="spitzmarke"><b>TOP THEMA:</b> [field_teaser_spitzmarke]</div>
<h2>[field_teaser_titel]</h2>
<p>[field_teaser]
<span>[field_link_zum_externen_inhalt]</span>
</p>
</div>

<div class="topthema_infos">
<div class="topthema_infos_links">
<div class="inner">
<b>[field_spitzmarke_link_datei_1]</b><br>
<div class="more_link">[field_link_datei_1]</div>
</div>
</div>

<div class="topthema_infos_mitte">
<div class="inner">
<b>[field_spitzmarke_link_datei_2]</b><br>
<div class="more_link">[field_link_datei_2]</div>
</div>
</div>

[field_url_themenseite]
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Layout (field_layout_centerpage) */
  $handler->display->display_options['filters']['field_layout_centerpage_value']['id'] = 'field_layout_centerpage_value';
  $handler->display->display_options['filters']['field_layout_centerpage_value']['table'] = 'field_data_field_layout_centerpage';
  $handler->display->display_options['filters']['field_layout_centerpage_value']['field'] = 'field_layout_centerpage_value';
  $handler->display->display_options['filters']['field_layout_centerpage_value']['value'] = array(
    'Layout groß' => 'Layout groß',
  );
  $handler->display->display_options['block_description'] = 'Topthema Centerpage groß';

  /* Display: Topthema Centerpage klein */
  $handler = $view->new_display('block', 'Topthema Centerpage klein', 'block_6');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'centerpage_klein';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Titel */
  $handler->display->display_options['fields']['field_titel']['id'] = 'field_titel';
  $handler->display->display_options['fields']['field_titel']['table'] = 'field_data_field_titel';
  $handler->display->display_options['fields']['field_titel']['field'] = 'field_titel';
  $handler->display->display_options['fields']['field_titel']['relationship'] = 'field_topthema_centerpage_nid';
  $handler->display->display_options['fields']['field_titel']['label'] = '';
  $handler->display->display_options['fields']['field_titel']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_titel']['alter']['max_length'] = '70';
  $handler->display->display_options['fields']['field_titel']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_titel']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_titel']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_titel']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_titel']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_titel']['settings'] = array(
    'trim_length' => '70',
  );
  /* Field: Content: Teaser-Titel */
  $handler->display->display_options['fields']['field_teaser_titel']['id'] = 'field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['table'] = 'field_data_field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['field'] = 'field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['relationship'] = 'field_topthema_centerpage_nid';
  $handler->display->display_options['fields']['field_teaser_titel']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_titel']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['max_length'] = '70';
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_titel']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_titel']['empty'] = '[field_titel]';
  $handler->display->display_options['fields']['field_teaser_titel']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_teaser_titel']['settings'] = array(
    'trim_length' => '70',
  );
  /* Field: Field: Spitzmarke */
  $handler->display->display_options['fields']['field_spitzmarke']['id'] = 'field_spitzmarke';
  $handler->display->display_options['fields']['field_spitzmarke']['table'] = 'field_data_field_spitzmarke';
  $handler->display->display_options['fields']['field_spitzmarke']['field'] = 'field_spitzmarke';
  $handler->display->display_options['fields']['field_spitzmarke']['relationship'] = 'field_topthema_centerpage_nid';
  $handler->display->display_options['fields']['field_spitzmarke']['label'] = '';
  $handler->display->display_options['fields']['field_spitzmarke']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_spitzmarke']['alter']['max_length'] = '22';
  $handler->display->display_options['fields']['field_spitzmarke']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_spitzmarke']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_spitzmarke']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_spitzmarke']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spitzmarke']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_spitzmarke']['settings'] = array(
    'trim_length' => '22',
  );
  /* Field: Content: Teaserspitzmarke */
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['id'] = 'field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['table'] = 'field_data_field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['field'] = 'field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['relationship'] = 'field_topthema_centerpage_nid';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['alter']['text'] = '[field_teaser_spitzmarke]';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['alter']['max_length'] = '22';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['empty'] = '[field_spitzmarke]';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['settings'] = array(
    'trim_length' => '22',
  );
  /* Field: Field: Artikelinhalt */
  $handler->display->display_options['fields']['field_inhalt']['id'] = 'field_inhalt';
  $handler->display->display_options['fields']['field_inhalt']['table'] = 'field_data_field_inhalt';
  $handler->display->display_options['fields']['field_inhalt']['field'] = 'field_inhalt';
  $handler->display->display_options['fields']['field_inhalt']['relationship'] = 'field_topthema_centerpage_nid';
  $handler->display->display_options['fields']['field_inhalt']['label'] = '';
  $handler->display->display_options['fields']['field_inhalt']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_inhalt']['alter']['max_length'] = '170';
  $handler->display->display_options['fields']['field_inhalt']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_inhalt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_inhalt']['settings'] = array(
    'trim_length' => '170',
  );
  /* Field: Content: Teaser */
  $handler->display->display_options['fields']['field_teaser']['id'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['table'] = 'field_data_field_teaser';
  $handler->display->display_options['fields']['field_teaser']['field'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['relationship'] = 'field_topthema_centerpage_nid';
  $handler->display->display_options['fields']['field_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_teaser']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['alter']['max_length'] = '170';
  $handler->display->display_options['fields']['field_teaser']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser']['empty'] = '[field_inhalt]';
  $handler->display->display_options['fields']['field_teaser']['settings'] = array(
    'trim_length' => '200',
  );
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
  $handler->display->display_options['fields']['field_teaser_bild']['relationship'] = 'field_topthema_centerpage_nid';
  $handler->display->display_options['fields']['field_teaser_bild']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_bild']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_bild']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_bild']['alter']['text'] = '<img src="[field_teaser_bild]" alt="[field_file_image_title_text]" title="[field_file_image_title_text]">';
  $handler->display->display_options['fields']['field_teaser_bild']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_bild']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_teaser_bild']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_teaser_bild']['settings'] = array(
    'image_style' => 'tn345x345',
    'image_link' => '',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['relationship'] = 'field_topthema_centerpage_nid';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Link zum externen Inhalt */
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['id'] = 'field_link_zum_externen_inhalt';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['table'] = 'field_data_field_link_zum_externen_inhalt';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['field'] = 'field_link_zum_externen_inhalt';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['relationship'] = 'field_topthema_centerpage_nid';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['label'] = '';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['alter']['text'] = '<a class="more_link" href="[field_link_zum_externen_inhalt]">Weiterlesen</a>';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['empty'] = '<a class="more_link" href="[path]">Weiterlesen</a>';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['type'] = 'link_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="topthema_teaser">
[field_teaser_bild]
<div class="topthema_text">
<div class="spitzmarke">[field_teaser_spitzmarke]</div>
<h2>[field_teaser_titel]</h2>
<p>[field_teaser]<div class="more_link">[field_link_zum_externen_inhalt]</div></p>
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Layout (field_layout_centerpage) */
  $handler->display->display_options['filters']['field_layout_centerpage_value']['id'] = 'field_layout_centerpage_value';
  $handler->display->display_options['filters']['field_layout_centerpage_value']['table'] = 'field_data_field_layout_centerpage';
  $handler->display->display_options['filters']['field_layout_centerpage_value']['field'] = 'field_layout_centerpage_value';
  $handler->display->display_options['filters']['field_layout_centerpage_value']['value'] = array(
    'Layout klein' => 'Layout klein',
  );
  $handler->display->display_options['block_description'] = 'Topthema Centerpage klein';

  /* Display: Topthema Centerpage klein "ohne" */
  $handler = $view->new_display('block', 'Topthema Centerpage klein "ohne"', 'block_3');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'centerpage_klein';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Titel */
  $handler->display->display_options['fields']['field_titel']['id'] = 'field_titel';
  $handler->display->display_options['fields']['field_titel']['table'] = 'field_data_field_titel';
  $handler->display->display_options['fields']['field_titel']['field'] = 'field_titel';
  $handler->display->display_options['fields']['field_titel']['relationship'] = 'field_topthema_centerpage_nid';
  $handler->display->display_options['fields']['field_titel']['label'] = '';
  $handler->display->display_options['fields']['field_titel']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_titel']['alter']['max_length'] = '70';
  $handler->display->display_options['fields']['field_titel']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_titel']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_titel']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_titel']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_titel']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_titel']['settings'] = array(
    'trim_length' => '70',
  );
  /* Field: Content: Teaser-Titel */
  $handler->display->display_options['fields']['field_teaser_titel']['id'] = 'field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['table'] = 'field_data_field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['field'] = 'field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['relationship'] = 'field_topthema_centerpage_nid';
  $handler->display->display_options['fields']['field_teaser_titel']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_titel']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['max_length'] = '70';
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_titel']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_titel']['empty'] = '[field_titel]';
  $handler->display->display_options['fields']['field_teaser_titel']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_teaser_titel']['settings'] = array(
    'trim_length' => '70',
  );
  /* Field: Field: Spitzmarke */
  $handler->display->display_options['fields']['field_spitzmarke']['id'] = 'field_spitzmarke';
  $handler->display->display_options['fields']['field_spitzmarke']['table'] = 'field_data_field_spitzmarke';
  $handler->display->display_options['fields']['field_spitzmarke']['field'] = 'field_spitzmarke';
  $handler->display->display_options['fields']['field_spitzmarke']['relationship'] = 'field_topthema_centerpage_nid';
  $handler->display->display_options['fields']['field_spitzmarke']['label'] = '';
  $handler->display->display_options['fields']['field_spitzmarke']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_spitzmarke']['alter']['max_length'] = '22';
  $handler->display->display_options['fields']['field_spitzmarke']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_spitzmarke']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_spitzmarke']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_spitzmarke']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spitzmarke']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_spitzmarke']['settings'] = array(
    'trim_length' => '22',
  );
  /* Field: Content: Teaserspitzmarke */
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['id'] = 'field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['table'] = 'field_data_field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['field'] = 'field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['relationship'] = 'field_topthema_centerpage_nid';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['alter']['text'] = '[field_teaser_spitzmarke]';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['alter']['max_length'] = '22';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['empty'] = '[field_spitzmarke]';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['settings'] = array(
    'trim_length' => '22',
  );
  /* Field: Field: Artikelinhalt */
  $handler->display->display_options['fields']['field_inhalt']['id'] = 'field_inhalt';
  $handler->display->display_options['fields']['field_inhalt']['table'] = 'field_data_field_inhalt';
  $handler->display->display_options['fields']['field_inhalt']['field'] = 'field_inhalt';
  $handler->display->display_options['fields']['field_inhalt']['relationship'] = 'field_topthema_centerpage_nid';
  $handler->display->display_options['fields']['field_inhalt']['label'] = '';
  $handler->display->display_options['fields']['field_inhalt']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_inhalt']['alter']['max_length'] = '170';
  $handler->display->display_options['fields']['field_inhalt']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_inhalt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_inhalt']['settings'] = array(
    'trim_length' => '200',
  );
  /* Field: Content: Teaser */
  $handler->display->display_options['fields']['field_teaser']['id'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['table'] = 'field_data_field_teaser';
  $handler->display->display_options['fields']['field_teaser']['field'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['relationship'] = 'field_topthema_centerpage_nid';
  $handler->display->display_options['fields']['field_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_teaser']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['alter']['max_length'] = '170';
  $handler->display->display_options['fields']['field_teaser']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser']['empty'] = '[field_inhalt]';
  $handler->display->display_options['fields']['field_teaser']['settings'] = array(
    'trim_length' => '200',
  );
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
  $handler->display->display_options['fields']['field_teaser_bild']['relationship'] = 'field_topthema_centerpage_nid';
  $handler->display->display_options['fields']['field_teaser_bild']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_bild']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_bild']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_bild']['alter']['text'] = '<img src="[field_teaser_bild]" alt="[field_file_image_title_text]" title="[field_file_image_title_text]">';
  $handler->display->display_options['fields']['field_teaser_bild']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_bild']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_teaser_bild']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_teaser_bild']['settings'] = array(
    'image_style' => 'tn345x345',
    'image_link' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="topthema_teaser">
[field_teaser_bild]
<div class="topthema_text">
<div class="spitzmarke">[field_teaser_spitzmarke]</div>
<h2>[field_teaser_titel]</h2>
<p>[field_teaser]</p>
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Layout (field_layout_centerpage) */
  $handler->display->display_options['filters']['field_layout_centerpage_value']['id'] = 'field_layout_centerpage_value';
  $handler->display->display_options['filters']['field_layout_centerpage_value']['table'] = 'field_data_field_layout_centerpage';
  $handler->display->display_options['filters']['field_layout_centerpage_value']['field'] = 'field_layout_centerpage_value';
  $handler->display->display_options['filters']['field_layout_centerpage_value']['value'] = array(
    'Layout klein ohne "Weiterlesen"' => 'Layout klein ohne "Weiterlesen"',
  );
  $handler->display->display_options['block_description'] = 'Topthema Centerpage klein "ohne"';

  /* Display: Artikelübersicht Header */
  $handler = $view->new_display('block', 'Artikelübersicht Header', 'block_4');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'centerpage_klein';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Titel */
  $handler->display->display_options['fields']['field_titel']['id'] = 'field_titel';
  $handler->display->display_options['fields']['field_titel']['table'] = 'field_data_field_titel';
  $handler->display->display_options['fields']['field_titel']['field'] = 'field_titel';
  $handler->display->display_options['fields']['field_titel']['relationship'] = 'field_topthema_centerpage_nid';
  $handler->display->display_options['fields']['field_titel']['label'] = '';
  $handler->display->display_options['fields']['field_titel']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_titel']['alter']['max_length'] = '70';
  $handler->display->display_options['fields']['field_titel']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_titel']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_titel']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_titel']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_titel']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_titel']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_titel']['settings'] = array(
    'trim_length' => '70',
  );
  /* Field: Content: Teaser-Titel */
  $handler->display->display_options['fields']['field_teaser_titel']['id'] = 'field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['table'] = 'field_data_field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['field'] = 'field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['relationship'] = 'field_topthema_centerpage_nid';
  $handler->display->display_options['fields']['field_teaser_titel']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_titel']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['max_length'] = '70';
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_titel']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_titel']['empty'] = '[field_titel]';
  $handler->display->display_options['fields']['field_teaser_titel']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_teaser_titel']['settings'] = array(
    'trim_length' => '70',
  );
  /* Field: Field: Spitzmarke */
  $handler->display->display_options['fields']['field_spitzmarke']['id'] = 'field_spitzmarke';
  $handler->display->display_options['fields']['field_spitzmarke']['table'] = 'field_data_field_spitzmarke';
  $handler->display->display_options['fields']['field_spitzmarke']['field'] = 'field_spitzmarke';
  $handler->display->display_options['fields']['field_spitzmarke']['relationship'] = 'field_topthema_centerpage_nid';
  $handler->display->display_options['fields']['field_spitzmarke']['label'] = '';
  $handler->display->display_options['fields']['field_spitzmarke']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_spitzmarke']['alter']['max_length'] = '22';
  $handler->display->display_options['fields']['field_spitzmarke']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_spitzmarke']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_spitzmarke']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_spitzmarke']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spitzmarke']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_spitzmarke']['settings'] = array(
    'trim_length' => '22',
  );
  /* Field: Content: Teaserspitzmarke */
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['id'] = 'field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['table'] = 'field_data_field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['field'] = 'field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['relationship'] = 'field_topthema_centerpage_nid';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['alter']['text'] = '[field_teaser_spitzmarke]';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['empty'] = '[field_spitzmarke]';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['settings'] = array(
    'trim_length' => '22',
  );
  /* Field: Field: Artikelinhalt */
  $handler->display->display_options['fields']['field_inhalt']['id'] = 'field_inhalt';
  $handler->display->display_options['fields']['field_inhalt']['table'] = 'field_data_field_inhalt';
  $handler->display->display_options['fields']['field_inhalt']['field'] = 'field_inhalt';
  $handler->display->display_options['fields']['field_inhalt']['relationship'] = 'field_topthema_centerpage_nid';
  $handler->display->display_options['fields']['field_inhalt']['label'] = '';
  $handler->display->display_options['fields']['field_inhalt']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_inhalt']['alter']['max_length'] = '170';
  $handler->display->display_options['fields']['field_inhalt']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_inhalt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_inhalt']['settings'] = array(
    'trim_length' => '200',
  );
  /* Field: Content: Teaser */
  $handler->display->display_options['fields']['field_teaser']['id'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['table'] = 'field_data_field_teaser';
  $handler->display->display_options['fields']['field_teaser']['field'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['relationship'] = 'field_topthema_centerpage_nid';
  $handler->display->display_options['fields']['field_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_teaser']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['alter']['max_length'] = '170';
  $handler->display->display_options['fields']['field_teaser']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser']['empty'] = '[field_inhalt]';
  $handler->display->display_options['fields']['field_teaser']['settings'] = array(
    'trim_length' => '200',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="topthema_teaser">
<div class="spitzmarke">[field_teaser_spitzmarke]</div>
<h2>[field_teaser_titel]</h2>
<p>[field_teaser]</p>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Layout (field_layout_centerpage) */
  $handler->display->display_options['filters']['field_layout_centerpage_value']['id'] = 'field_layout_centerpage_value';
  $handler->display->display_options['filters']['field_layout_centerpage_value']['table'] = 'field_data_field_layout_centerpage';
  $handler->display->display_options['filters']['field_layout_centerpage_value']['field'] = 'field_layout_centerpage_value';
  $handler->display->display_options['filters']['field_layout_centerpage_value']['value'] = array(
    'Layout Artikelübersicht' => 'Layout Artikelübersicht',
  );
  $handler->display->display_options['block_description'] = 'Artikelübersicht Header';

  /* Display: Unterthemen Centerpage  */
  $handler = $view->new_display('block', 'Unterthemen Centerpage ', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['list']['element_type'] = 'ul';
  $handler->display->display_options['style_options']['list']['class'] = 'tsrListe unterthemenCenterpage';
  $handler->display->display_options['style_options']['row']['element_type'] = 'li';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '[field_unterthemen_ueberschrift]';
  $handler->display->display_options['header']['area']['format'] = 'filter_redaktion';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Unterthemen (field_unterthemen_centerpage) */
  $handler->display->display_options['relationships']['field_unterthemen_centerpage_nid']['id'] = 'field_unterthemen_centerpage_nid';
  $handler->display->display_options['relationships']['field_unterthemen_centerpage_nid']['table'] = 'field_data_field_unterthemen_centerpage';
  $handler->display->display_options['relationships']['field_unterthemen_centerpage_nid']['field'] = 'field_unterthemen_centerpage_nid';
  $handler->display->display_options['relationships']['field_unterthemen_centerpage_nid']['delta'] = '-1';
  /* Relationship: Content: Teaser Bild (field_teaser_bild:fid) */
  $handler->display->display_options['relationships']['field_teaser_bild_fid']['id'] = 'field_teaser_bild_fid';
  $handler->display->display_options['relationships']['field_teaser_bild_fid']['table'] = 'field_data_field_teaser_bild';
  $handler->display->display_options['relationships']['field_teaser_bild_fid']['field'] = 'field_teaser_bild_fid';
  $handler->display->display_options['relationships']['field_teaser_bild_fid']['relationship'] = 'field_unterthemen_centerpage_nid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Unterthemen Überschrift */
  $handler->display->display_options['fields']['field_unterthemen_ueberschrift']['id'] = 'field_unterthemen_ueberschrift';
  $handler->display->display_options['fields']['field_unterthemen_ueberschrift']['table'] = 'field_data_field_unterthemen_ueberschrift';
  $handler->display->display_options['fields']['field_unterthemen_ueberschrift']['field'] = 'field_unterthemen_ueberschrift';
  $handler->display->display_options['fields']['field_unterthemen_ueberschrift']['label'] = '';
  $handler->display->display_options['fields']['field_unterthemen_ueberschrift']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_unterthemen_ueberschrift']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_unterthemen_ueberschrift']['alter']['text'] = '<div class="centerpage_unterthemen_header"><h2 class="block-title">[field_unterthemen_ueberschrift]</h2></div>';
  $handler->display->display_options['fields']['field_unterthemen_ueberschrift']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_unterthemen_ueberschrift']['hide_empty'] = TRUE;
  /* Field: Field: Titel */
  $handler->display->display_options['fields']['field_titel']['id'] = 'field_titel';
  $handler->display->display_options['fields']['field_titel']['table'] = 'field_data_field_titel';
  $handler->display->display_options['fields']['field_titel']['field'] = 'field_titel';
  $handler->display->display_options['fields']['field_titel']['relationship'] = 'field_unterthemen_centerpage_nid';
  $handler->display->display_options['fields']['field_titel']['label'] = '';
  $handler->display->display_options['fields']['field_titel']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_titel']['element_label_colon'] = FALSE;
  /* Field: Content: Teaser-Titel */
  $handler->display->display_options['fields']['field_teaser_titel']['id'] = 'field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['table'] = 'field_data_field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['field'] = 'field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['relationship'] = 'field_unterthemen_centerpage_nid';
  $handler->display->display_options['fields']['field_teaser_titel']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_titel']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_titel']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_titel']['empty'] = '[field_titel]';
  /* Field: Field: Spitzmarke */
  $handler->display->display_options['fields']['field_spitzmarke']['id'] = 'field_spitzmarke';
  $handler->display->display_options['fields']['field_spitzmarke']['table'] = 'field_data_field_spitzmarke';
  $handler->display->display_options['fields']['field_spitzmarke']['field'] = 'field_spitzmarke';
  $handler->display->display_options['fields']['field_spitzmarke']['relationship'] = 'field_unterthemen_centerpage_nid';
  $handler->display->display_options['fields']['field_spitzmarke']['label'] = '';
  $handler->display->display_options['fields']['field_spitzmarke']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_spitzmarke']['element_label_colon'] = FALSE;
  /* Field: Content: Teaserspitzmarke */
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['id'] = 'field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['table'] = 'field_data_field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['field'] = 'field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['relationship'] = 'field_unterthemen_centerpage_nid';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['alter']['text'] = '[field_teaser_spitzmarke]';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['empty'] = '[field_spitzmarke]';
  /* Field: Field: Artikelinhalt */
  $handler->display->display_options['fields']['field_inhalt']['id'] = 'field_inhalt';
  $handler->display->display_options['fields']['field_inhalt']['table'] = 'field_data_field_inhalt';
  $handler->display->display_options['fields']['field_inhalt']['field'] = 'field_inhalt';
  $handler->display->display_options['fields']['field_inhalt']['relationship'] = 'field_unterthemen_centerpage_nid';
  $handler->display->display_options['fields']['field_inhalt']['label'] = '';
  $handler->display->display_options['fields']['field_inhalt']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_inhalt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_inhalt']['settings'] = array(
    'trim_length' => '200',
  );
  /* Field: Content: Teaser */
  $handler->display->display_options['fields']['field_teaser']['id'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['table'] = 'field_data_field_teaser';
  $handler->display->display_options['fields']['field_teaser']['field'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['relationship'] = 'field_unterthemen_centerpage_nid';
  $handler->display->display_options['fields']['field_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_teaser']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser']['empty'] = '[field_inhalt]';
  $handler->display->display_options['fields']['field_teaser']['settings'] = array(
    'trim_length' => '200',
  );
  /* Field: Content: URL Themenseite */
  $handler->display->display_options['fields']['field_url_themenseite']['id'] = 'field_url_themenseite';
  $handler->display->display_options['fields']['field_url_themenseite']['table'] = 'field_data_field_url_themenseite';
  $handler->display->display_options['fields']['field_url_themenseite']['field'] = 'field_url_themenseite';
  $handler->display->display_options['fields']['field_url_themenseite']['relationship'] = 'field_unterthemen_centerpage_nid';
  $handler->display->display_options['fields']['field_url_themenseite']['label'] = '';
  $handler->display->display_options['fields']['field_url_themenseite']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url_themenseite']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url_themenseite']['click_sort_column'] = 'url';
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
  $handler->display->display_options['fields']['field_teaser_bild']['relationship'] = 'field_unterthemen_centerpage_nid';
  $handler->display->display_options['fields']['field_teaser_bild']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_bild']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_bild']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_bild']['alter']['text'] = '<img src="[field_teaser_bild]" alt="[field_file_image_title_text]" title="[field_file_image_title_text]">';
  $handler->display->display_options['fields']['field_teaser_bild']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_bild']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_teaser_bild']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_teaser_bild']['settings'] = array(
    'image_style' => 'tn130x130',
    'image_link' => '',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['relationship'] = 'field_unterthemen_centerpage_nid';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Link zum externen Inhalt */
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['id'] = 'field_link_zum_externen_inhalt';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['table'] = 'field_data_field_link_zum_externen_inhalt';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['field'] = 'field_link_zum_externen_inhalt';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['relationship'] = 'field_unterthemen_centerpage_nid';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['label'] = '';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['alter']['text'] = '<a class="more_link" href="[field_link_zum_externen_inhalt]">Weiterlesen</a>';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['empty'] = '<a class="more_link" href="[path]">Weiterlesen</a>';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['type'] = 'link_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="wrapperItem unterthema_teaser">
[field_teaser_bild]
<div class="wrapperCopy">
<span class="spitzmarke">[field_teaser_spitzmarke]</span>
<h2>[field_teaser_titel]</h2>
<p class="tsrText">[field_teaser]</p>
[field_link_zum_externen_inhalt]
</div>
</div>
<div class="clear"></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Layout (field_layout_centerpage) */
  $handler->display->display_options['filters']['field_layout_centerpage_value']['id'] = 'field_layout_centerpage_value';
  $handler->display->display_options['filters']['field_layout_centerpage_value']['table'] = 'field_data_field_layout_centerpage';
  $handler->display->display_options['filters']['field_layout_centerpage_value']['field'] = 'field_layout_centerpage_value';
  $handler->display->display_options['filters']['field_layout_centerpage_value']['value'] = array(
    'Layout groß' => 'Layout groß',
    'Layout klein' => 'Layout klein',
    'Layout klein ohne "Weiterlesen"' => 'Layout klein ohne "Weiterlesen"',
  );
  $handler->display->display_options['block_description'] = 'Unterthemen Centerpage';

  /* Display: Artikelübersicht */
  $handler = $view->new_display('block', 'Artikelübersicht', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['list']['element_type'] = 'ul';
  $handler->display->display_options['style_options']['list']['class'] = 'tsrListe unterthemenTeaser';
  $handler->display->display_options['style_options']['row']['element_type'] = 'li';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '[field_unterthemen_ueberschrift]';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Unterthemen (field_unterthemen_centerpage) */
  $handler->display->display_options['relationships']['field_unterthemen_centerpage_nid']['id'] = 'field_unterthemen_centerpage_nid';
  $handler->display->display_options['relationships']['field_unterthemen_centerpage_nid']['table'] = 'field_data_field_unterthemen_centerpage';
  $handler->display->display_options['relationships']['field_unterthemen_centerpage_nid']['field'] = 'field_unterthemen_centerpage_nid';
  $handler->display->display_options['relationships']['field_unterthemen_centerpage_nid']['delta'] = '-1';
  /* Relationship: Content: Teaser Bild (field_teaser_bild:fid) */
  $handler->display->display_options['relationships']['field_teaser_bild_fid']['id'] = 'field_teaser_bild_fid';
  $handler->display->display_options['relationships']['field_teaser_bild_fid']['table'] = 'field_data_field_teaser_bild';
  $handler->display->display_options['relationships']['field_teaser_bild_fid']['field'] = 'field_teaser_bild_fid';
  $handler->display->display_options['relationships']['field_teaser_bild_fid']['relationship'] = 'field_unterthemen_centerpage_nid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Unterthemen Überschrift */
  $handler->display->display_options['fields']['field_unterthemen_ueberschrift']['id'] = 'field_unterthemen_ueberschrift';
  $handler->display->display_options['fields']['field_unterthemen_ueberschrift']['table'] = 'field_data_field_unterthemen_ueberschrift';
  $handler->display->display_options['fields']['field_unterthemen_ueberschrift']['field'] = 'field_unterthemen_ueberschrift';
  $handler->display->display_options['fields']['field_unterthemen_ueberschrift']['label'] = '';
  $handler->display->display_options['fields']['field_unterthemen_ueberschrift']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_unterthemen_ueberschrift']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_unterthemen_ueberschrift']['alter']['text'] = '<div class="centerpage_unterthemen_header"><h2 class="block-title">[field_unterthemen_ueberschrift]</h2></div>';
  $handler->display->display_options['fields']['field_unterthemen_ueberschrift']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_unterthemen_ueberschrift']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_unterthemen_ueberschrift']['hide_empty'] = TRUE;
  /* Field: Field: Titel */
  $handler->display->display_options['fields']['field_titel']['id'] = 'field_titel';
  $handler->display->display_options['fields']['field_titel']['table'] = 'field_data_field_titel';
  $handler->display->display_options['fields']['field_titel']['field'] = 'field_titel';
  $handler->display->display_options['fields']['field_titel']['relationship'] = 'field_unterthemen_centerpage_nid';
  $handler->display->display_options['fields']['field_titel']['label'] = '';
  $handler->display->display_options['fields']['field_titel']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_titel']['element_label_colon'] = FALSE;
  /* Field: Content: Teaser-Titel */
  $handler->display->display_options['fields']['field_teaser_titel']['id'] = 'field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['table'] = 'field_data_field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['field'] = 'field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['relationship'] = 'field_unterthemen_centerpage_nid';
  $handler->display->display_options['fields']['field_teaser_titel']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_titel']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_titel']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_titel']['empty'] = '[field_titel]';
  /* Field: Field: Spitzmarke */
  $handler->display->display_options['fields']['field_spitzmarke']['id'] = 'field_spitzmarke';
  $handler->display->display_options['fields']['field_spitzmarke']['table'] = 'field_data_field_spitzmarke';
  $handler->display->display_options['fields']['field_spitzmarke']['field'] = 'field_spitzmarke';
  $handler->display->display_options['fields']['field_spitzmarke']['relationship'] = 'field_unterthemen_centerpage_nid';
  $handler->display->display_options['fields']['field_spitzmarke']['label'] = '';
  $handler->display->display_options['fields']['field_spitzmarke']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_spitzmarke']['element_label_colon'] = FALSE;
  /* Field: Content: Teaserspitzmarke */
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['id'] = 'field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['table'] = 'field_data_field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['field'] = 'field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['relationship'] = 'field_unterthemen_centerpage_nid';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['alter']['text'] = '[field_teaser_spitzmarke]';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['empty'] = '[field_spitzmarke]';
  /* Field: Field: Artikelinhalt */
  $handler->display->display_options['fields']['field_inhalt']['id'] = 'field_inhalt';
  $handler->display->display_options['fields']['field_inhalt']['table'] = 'field_data_field_inhalt';
  $handler->display->display_options['fields']['field_inhalt']['field'] = 'field_inhalt';
  $handler->display->display_options['fields']['field_inhalt']['relationship'] = 'field_unterthemen_centerpage_nid';
  $handler->display->display_options['fields']['field_inhalt']['label'] = '';
  $handler->display->display_options['fields']['field_inhalt']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_inhalt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_inhalt']['settings'] = array(
    'trim_length' => '180',
  );
  /* Field: Content: Teaser */
  $handler->display->display_options['fields']['field_teaser']['id'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['table'] = 'field_data_field_teaser';
  $handler->display->display_options['fields']['field_teaser']['field'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['relationship'] = 'field_unterthemen_centerpage_nid';
  $handler->display->display_options['fields']['field_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_teaser']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['alter']['max_length'] = '180';
  $handler->display->display_options['fields']['field_teaser']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser']['empty'] = '[field_inhalt]';
  $handler->display->display_options['fields']['field_teaser']['settings'] = array(
    'trim_length' => '180',
  );
  /* Field: Content: URL Themenseite */
  $handler->display->display_options['fields']['field_url_themenseite']['id'] = 'field_url_themenseite';
  $handler->display->display_options['fields']['field_url_themenseite']['table'] = 'field_data_field_url_themenseite';
  $handler->display->display_options['fields']['field_url_themenseite']['field'] = 'field_url_themenseite';
  $handler->display->display_options['fields']['field_url_themenseite']['relationship'] = 'field_unterthemen_centerpage_nid';
  $handler->display->display_options['fields']['field_url_themenseite']['label'] = '';
  $handler->display->display_options['fields']['field_url_themenseite']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url_themenseite']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url_themenseite']['click_sort_column'] = 'url';
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
  $handler->display->display_options['fields']['field_teaser_bild']['relationship'] = 'field_unterthemen_centerpage_nid';
  $handler->display->display_options['fields']['field_teaser_bild']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_bild']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_bild']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_bild']['alter']['text'] = '<div class="tsrImage"><img src="[field_teaser_bild]" alt="[field_file_image_title_text]" title="[field_file_image_title_text]"></div>';
  $handler->display->display_options['fields']['field_teaser_bild']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_bild']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_bild']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_bild']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_teaser_bild']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_teaser_bild']['settings'] = array(
    'image_style' => 'tn130x130',
    'image_link' => '',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['relationship'] = 'field_unterthemen_centerpage_nid';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Link zum externen Inhalt */
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['id'] = 'field_link_zum_externen_inhalt';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['table'] = 'field_data_field_link_zum_externen_inhalt';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['field'] = 'field_link_zum_externen_inhalt';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['relationship'] = 'field_unterthemen_centerpage_nid';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['label'] = '';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['alter']['text'] = '<a class="more_link" href="[field_link_zum_externen_inhalt]">Weiterlesen</a>';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['empty'] = '<a class="more_link" href="[path]">Weiterlesen</a>';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['type'] = 'link_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="wrapperItem unterthema_teaser">
[field_teaser_bild]
<div class="wrapperCopy">
<span class="spitzmarke">[field_teaser_spitzmarke]</span>
<h2>[field_teaser_titel]</h2>
<p class="tsrText">[field_teaser]</p>
[field_link_zum_externen_inhalt]
</div>
</div>
<div class="clear"></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Layout (field_layout_centerpage) */
  $handler->display->display_options['filters']['field_layout_centerpage_value']['id'] = 'field_layout_centerpage_value';
  $handler->display->display_options['filters']['field_layout_centerpage_value']['table'] = 'field_data_field_layout_centerpage';
  $handler->display->display_options['filters']['field_layout_centerpage_value']['field'] = 'field_layout_centerpage_value';
  $handler->display->display_options['filters']['field_layout_centerpage_value']['value'] = array(
    'Layout Artikelübersicht' => 'Layout Artikelübersicht',
  );
  $handler->display->display_options['block_description'] = 'Artikelübersicht';
  $translatables['centerpage_top_thema'] = array(
    t('Master'),
    t('mehr'),
    t('Anwenden'),
    t('Zurücksetzen'),
    t('Sortieren nach'),
    t('Aufsteigend'),
    t('Absteigend'),
    t('field_topthema_centerpage'),
    t('image from field_teaser_bild'),
    t('>> Weiterlesen'),
    t('TOP THEMA: [field_teaser_spitzmarke]'),
    t('<div class="topthema_teaser">
[field_teaser_bild]
<b>[field_teaser_spitzmarke]</b><br>
<h2>[field_teaser_titel]</h2><br>
<p>[field_teaser][title]</p>
</div>

<div class="topthema_infos">
<div class="topthema_infos_links">
<b>[field_spitzmarke_link_datei_1]</b><br>
[field_link_datei_1]
</div>

<div class="topthema_infos_mitte">
<b>[field_spitzmarke_link_datei_2]</b><br>
[field_link_datei_2]
</div>

<div class="topthema_infos_rechts">
[field_url_themenseite]
</div>
</div>'),
    t('All'),
    t('Topthema Centerpage groß'),
    t('more'),
    t('[field_titel]'),
    t('[field_spitzmarke]'),
    t('<b>TOP THEMA: </b>[field_teaser_spitzmarke]'),
    t('[field_inhalt]'),
    t('<div class="topthema_infos_rechts">
<div class="inner">
[field_url_themenseite]
</div>
</div>'),
    t('<a href="[field_link_zum_externen_inhalt]">Weiterlesen</a>'),
    t('<a class="more_link" href="[path]">Weiterlesen</a>'),
    t('<img src="[field_teaser_bild]" alt="[field_file_image_title_text]" title="[field_file_image_title_text]">'),
    t('<div class="topthema_teaser">
[field_teaser_bild]
<div class="spitzmarke"><b>TOP THEMA:</b> [field_teaser_spitzmarke]</div>
<h2>[field_teaser_titel]</h2>
<p>[field_teaser]
<span>[field_link_zum_externen_inhalt]</span>
</p>
</div>

<div class="topthema_infos">
<div class="topthema_infos_links">
<div class="inner">
<b>[field_spitzmarke_link_datei_1]</b><br>
<div class="more_link">[field_link_datei_1]</div>
</div>
</div>

<div class="topthema_infos_mitte">
<div class="inner">
<b>[field_spitzmarke_link_datei_2]</b><br>
<div class="more_link">[field_link_datei_2]</div>
</div>
</div>

[field_url_themenseite]
</div>'),
    t('Topthema Centerpage klein'),
    t('[field_teaser_spitzmarke]'),
    t('<a class="more_link" href="[field_link_zum_externen_inhalt]">Weiterlesen</a>'),
    t('<div class="topthema_teaser">
[field_teaser_bild]
<div class="topthema_text">
<div class="spitzmarke">[field_teaser_spitzmarke]</div>
<h2>[field_teaser_titel]</h2>
<p>[field_teaser]<div class="more_link">[field_link_zum_externen_inhalt]</div></p>
</div>
</div>'),
    t('Topthema Centerpage klein "ohne"'),
    t('<div class="topthema_teaser">
[field_teaser_bild]
<div class="topthema_text">
<div class="spitzmarke">[field_teaser_spitzmarke]</div>
<h2>[field_teaser_titel]</h2>
<p>[field_teaser]</p>
</div>
</div>'),
    t('Artikelübersicht Header'),
    t('<div class="topthema_teaser">
<div class="spitzmarke">[field_teaser_spitzmarke]</div>
<h2>[field_teaser_titel]</h2>
<p>[field_teaser]</p>
</div>'),
    t('Unterthemen Centerpage '),
    t('[field_unterthemen_ueberschrift]'),
    t('field_unterthemen_centerpage'),
    t('<div class="centerpage_unterthemen_header"><h2 class="block-title">[field_unterthemen_ueberschrift]</h2></div>'),
    t('<div class="wrapperItem unterthema_teaser">
[field_teaser_bild]
<div class="wrapperCopy">
<span class="spitzmarke">[field_teaser_spitzmarke]</span>
<h2>[field_teaser_titel]</h2>
<p class="tsrText">[field_teaser]</p>
[field_link_zum_externen_inhalt]
</div>
</div>
<div class="clear"></div>'),
    t('Unterthemen Centerpage'),
    t('Artikelübersicht'),
    t('<div class="tsrImage"><img src="[field_teaser_bild]" alt="[field_file_image_title_text]" title="[field_file_image_title_text]"></div>'),
  );
  $export['centerpage_top_thema'] = $view;

  return $export;
}
