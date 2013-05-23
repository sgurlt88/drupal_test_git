<?php
/**
 * @file
 * feature_hzd_presse.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_hzd_presse_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'pressemitteilung';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Pressemitteilung';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Pressemitteilung';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_datum_default_value' => array(
      'bef_format' => 'bef_datepicker',
      'more_options' => array(
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'field_herausgeber_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '3';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« Erste';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ Zurück';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'Weiter ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'Letzte »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="content clearfix">
<span class="field-item spitzmarke">Pressemitteilungen</span>
<h1 class="field-item ueberschrift">Alle Pressemitteilungen im Überblick</h1>
</div>
<div class="clearfix">
<nav class="links node-links clearfix">	</nav>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Derzeit keine Pressemitteilungen verfügbar.';
  $handler->display->display_options['empty']['area']['format'] = 'filter_redaktion';
  /* Relationship: Content: Teaser Bild (field_teaser_bild:fid) */
  $handler->display->display_options['relationships']['field_teaser_bild_fid']['id'] = 'field_teaser_bild_fid';
  $handler->display->display_options['relationships']['field_teaser_bild_fid']['table'] = 'field_data_field_teaser_bild';
  $handler->display->display_options['relationships']['field_teaser_bild_fid']['field'] = 'field_teaser_bild_fid';
  /* Field: Content: Teaser Bild */
  $handler->display->display_options['fields']['field_teaser_bild']['id'] = 'field_teaser_bild';
  $handler->display->display_options['fields']['field_teaser_bild']['table'] = 'field_data_field_teaser_bild';
  $handler->display->display_options['fields']['field_teaser_bild']['field'] = 'field_teaser_bild';
  $handler->display->display_options['fields']['field_teaser_bild']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_bild']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_bild']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_bild']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_teaser_bild']['settings'] = array(
    'image_style' => 'tn130x110',
    'image_link' => 'content',
  );
  /* Field: Content: Publikationsdatum */
  $handler->display->display_options['fields']['field_datum_default']['id'] = 'field_datum_default';
  $handler->display->display_options['fields']['field_datum_default']['table'] = 'field_data_field_datum_default';
  $handler->display->display_options['fields']['field_datum_default']['field'] = 'field_datum_default';
  $handler->display->display_options['fields']['field_datum_default']['label'] = '';
  $handler->display->display_options['fields']['field_datum_default']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_datum_default']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_datum_default']['settings'] = array(
    'format_type' => 'date_dmy',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Teaser */
  $handler->display->display_options['fields']['field_teaser']['id'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['table'] = 'field_data_field_teaser';
  $handler->display->display_options['fields']['field_teaser']['field'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_teaser']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser']['type'] = 'text_plain';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Weiterlesen';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="social_media_uebersicht">
	<div class="social_media_bild">
		[field_teaser_bild]
	</div>
	<div class="social_media_infos">
		<div class="social_media_kopf">
		<div class="social_media_date">[field_datum_default]</div>
		<h2 class="socialmedia_titel">[title]</h2>
		</div>
		<div class="social_media_text">[field_teaser]
		<div class="more_link">[view_node]</div>
		</div>
	</div>
</div>
<div class="clear"></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Publikationsdatum (field_datum_default) */
  $handler->display->display_options['sorts']['field_datum_default_value']['id'] = 'field_datum_default_value';
  $handler->display->display_options['sorts']['field_datum_default_value']['table'] = 'field_data_field_datum_default';
  $handler->display->display_options['sorts']['field_datum_default_value']['field'] = 'field_datum_default_value';
  $handler->display->display_options['sorts']['field_datum_default_value']['order'] = 'DESC';
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
    'pressemitteilung' => 'pressemitteilung',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Publikationsdatum (field_datum_default) */
  $handler->display->display_options['filters']['field_datum_default_value']['id'] = 'field_datum_default_value';
  $handler->display->display_options['filters']['field_datum_default_value']['table'] = 'field_data_field_datum_default';
  $handler->display->display_options['filters']['field_datum_default_value']['field'] = 'field_datum_default_value';
  $handler->display->display_options['filters']['field_datum_default_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_datum_default_value']['group'] = 1;
  $handler->display->display_options['filters']['field_datum_default_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_datum_default_value']['expose']['operator_id'] = 'field_datum_default_value_op';
  $handler->display->display_options['filters']['field_datum_default_value']['expose']['label'] = 'Zeitraum';
  $handler->display->display_options['filters']['field_datum_default_value']['expose']['operator'] = 'field_datum_default_value_op';
  $handler->display->display_options['filters']['field_datum_default_value']['expose']['identifier'] = 'field_datum_default_value';
  $handler->display->display_options['filters']['field_datum_default_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_datum_default_value']['form_type'] = 'date_text';
  /* Filter criterion: Content: Herausgeber (field_herausgeber) */
  $handler->display->display_options['filters']['field_herausgeber_tid']['id'] = 'field_herausgeber_tid';
  $handler->display->display_options['filters']['field_herausgeber_tid']['table'] = 'field_data_field_herausgeber';
  $handler->display->display_options['filters']['field_herausgeber_tid']['field'] = 'field_herausgeber_tid';
  $handler->display->display_options['filters']['field_herausgeber_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_herausgeber_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_herausgeber_tid']['expose']['operator_id'] = 'field_herausgeber_tid_op';
  $handler->display->display_options['filters']['field_herausgeber_tid']['expose']['label'] = 'Ministerien';
  $handler->display->display_options['filters']['field_herausgeber_tid']['expose']['operator'] = 'field_herausgeber_tid_op';
  $handler->display->display_options['filters']['field_herausgeber_tid']['expose']['identifier'] = 'field_herausgeber_tid';
  $handler->display->display_options['filters']['field_herausgeber_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_herausgeber_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_herausgeber_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_herausgeber_tid']['vocabulary'] = 'herausgeber';

  /* Display: Presse Hessen */
  $handler = $view->new_display('page', 'Presse Hessen', 'page');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path_1']['id'] = 'path_1';
  $handler->display->display_options['fields']['path_1']['table'] = 'node';
  $handler->display->display_options['fields']['path_1']['field'] = 'path';
  $handler->display->display_options['fields']['path_1']['label'] = '';
  $handler->display->display_options['fields']['path_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path_1']['element_label_colon'] = FALSE;
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
  /* Field: Content: Publikationsdatum */
  $handler->display->display_options['fields']['field_datum_default']['id'] = 'field_datum_default';
  $handler->display->display_options['fields']['field_datum_default']['table'] = 'field_data_field_datum_default';
  $handler->display->display_options['fields']['field_datum_default']['field'] = 'field_datum_default';
  $handler->display->display_options['fields']['field_datum_default']['label'] = '';
  $handler->display->display_options['fields']['field_datum_default']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_datum_default']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_datum_default']['settings'] = array(
    'format_type' => 'date_dmy',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Teaser-Titel */
  $handler->display->display_options['fields']['field_teaser_titel']['id'] = 'field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['table'] = 'field_data_field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['field'] = 'field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_titel']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['text'] = '[field_teaser_titel]';
  $handler->display->display_options['fields']['field_teaser_titel']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_titel']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Teaser */
  $handler->display->display_options['fields']['field_teaser']['id'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['table'] = 'field_data_field_teaser';
  $handler->display->display_options['fields']['field_teaser']['field'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_teaser']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser']['type'] = 'text_plain';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Weiterlesen';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="wrapperItem">
[field_teaser_bild]
<div class="wrapperCopy">
<span class="date">[field_datum_default]</span>
<h2 class="socialmedia_titel">[field_teaser_titel]</h2>
<p class="tsrText">[field_teaser]<span class="more_link">[view_node]</span></p>
</div>
</div>
<div class="clear"></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'pressemitteilung' => 'pressemitteilung',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Publikationsdatum (field_datum_default) */
  $handler->display->display_options['filters']['field_datum_default_value']['id'] = 'field_datum_default_value';
  $handler->display->display_options['filters']['field_datum_default_value']['table'] = 'field_data_field_datum_default';
  $handler->display->display_options['filters']['field_datum_default_value']['field'] = 'field_datum_default_value';
  $handler->display->display_options['filters']['field_datum_default_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_datum_default_value']['group'] = 1;
  $handler->display->display_options['filters']['field_datum_default_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_datum_default_value']['expose']['operator_id'] = 'field_datum_default_value_op';
  $handler->display->display_options['filters']['field_datum_default_value']['expose']['label'] = 'Zeitraum';
  $handler->display->display_options['filters']['field_datum_default_value']['expose']['operator'] = 'field_datum_default_value_op';
  $handler->display->display_options['filters']['field_datum_default_value']['expose']['identifier'] = 'field_datum_default_value';
  $handler->display->display_options['filters']['field_datum_default_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_datum_default_value']['form_type'] = 'date_text';
  /* Filter criterion: Content: Herausgeber (field_herausgeber) */
  $handler->display->display_options['filters']['field_herausgeber_tid']['id'] = 'field_herausgeber_tid';
  $handler->display->display_options['filters']['field_herausgeber_tid']['table'] = 'field_data_field_herausgeber';
  $handler->display->display_options['filters']['field_herausgeber_tid']['field'] = 'field_herausgeber_tid';
  $handler->display->display_options['filters']['field_herausgeber_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_herausgeber_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_herausgeber_tid']['expose']['operator_id'] = 'field_herausgeber_tid_op';
  $handler->display->display_options['filters']['field_herausgeber_tid']['expose']['label'] = 'Ministerien';
  $handler->display->display_options['filters']['field_herausgeber_tid']['expose']['operator'] = 'field_herausgeber_tid_op';
  $handler->display->display_options['filters']['field_herausgeber_tid']['expose']['identifier'] = 'field_herausgeber_tid';
  $handler->display->display_options['filters']['field_herausgeber_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_herausgeber_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_herausgeber_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_herausgeber_tid']['vocabulary'] = 'herausgeber';
  /* Filter criterion: Content: Hidden */
  $handler->display->display_options['filters']['hidden']['id'] = 'hidden';
  $handler->display->display_options['filters']['hidden']['table'] = 'hidden_nodes';
  $handler->display->display_options['filters']['hidden']['field'] = 'hidden';
  $handler->display->display_options['filters']['hidden']['value'] = '0';
  $handler->display->display_options['path'] = 'presse/pressemitteilungen_hessen';
  $handler->display->display_options['menu']['title'] = 'Presse';
  $handler->display->display_options['menu']['description'] = 'Bilderdownload, Kontakt, Akkreditierung';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Presse Block */
  $handler = $view->new_display('block', 'Presse Block', 'block_1');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'pressemitteilung' => 'pressemitteilung',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Presse Ressorts */
  $handler = $view->new_display('page', 'Presse Ressorts', 'presseressortspage');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path_1']['id'] = 'path_1';
  $handler->display->display_options['fields']['path_1']['table'] = 'node';
  $handler->display->display_options['fields']['path_1']['field'] = 'path';
  $handler->display->display_options['fields']['path_1']['label'] = '';
  $handler->display->display_options['fields']['path_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path_1']['element_label_colon'] = FALSE;
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
  /* Field: Content: Publikationsdatum */
  $handler->display->display_options['fields']['field_datum_default']['id'] = 'field_datum_default';
  $handler->display->display_options['fields']['field_datum_default']['table'] = 'field_data_field_datum_default';
  $handler->display->display_options['fields']['field_datum_default']['field'] = 'field_datum_default';
  $handler->display->display_options['fields']['field_datum_default']['label'] = '';
  $handler->display->display_options['fields']['field_datum_default']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_datum_default']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_datum_default']['settings'] = array(
    'format_type' => 'date_dmy',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Teaser-Titel */
  $handler->display->display_options['fields']['field_teaser_titel']['id'] = 'field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['table'] = 'field_data_field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['field'] = 'field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_titel']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['text'] = '[field_teaser_titel]';
  $handler->display->display_options['fields']['field_teaser_titel']['element_label_colon'] = FALSE;
  /* Field: Content: Teaser */
  $handler->display->display_options['fields']['field_teaser']['id'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['table'] = 'field_data_field_teaser';
  $handler->display->display_options['fields']['field_teaser']['field'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_teaser']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser']['type'] = 'text_plain';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Weiterlesen';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="wrapperItem">
[field_teaser_bild]
<div class="wrapperCopy">
<span class="date">[field_datum_default]</span>
<h2 class="socialmedia_titel">[field_teaser_titel]</h2>
<p class="tsrText">[field_teaser]<span class="more_link">[view_node]</span></p>
</div>
</div>
<div class="clear"></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'pressemitteilung' => 'pressemitteilung',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Publikationsdatum (field_datum_default) */
  $handler->display->display_options['filters']['field_datum_default_value']['id'] = 'field_datum_default_value';
  $handler->display->display_options['filters']['field_datum_default_value']['table'] = 'field_data_field_datum_default';
  $handler->display->display_options['filters']['field_datum_default_value']['field'] = 'field_datum_default_value';
  $handler->display->display_options['filters']['field_datum_default_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_datum_default_value']['group'] = 1;
  $handler->display->display_options['filters']['field_datum_default_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_datum_default_value']['expose']['operator_id'] = 'field_datum_default_value_op';
  $handler->display->display_options['filters']['field_datum_default_value']['expose']['label'] = 'Zeitraum';
  $handler->display->display_options['filters']['field_datum_default_value']['expose']['operator'] = 'field_datum_default_value_op';
  $handler->display->display_options['filters']['field_datum_default_value']['expose']['identifier'] = 'field_datum_default_value';
  $handler->display->display_options['filters']['field_datum_default_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_datum_default_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_datum_default_value']['year_range'] = '-10:+0';
  /* Filter criterion: Content: Hidden */
  $handler->display->display_options['filters']['hidden']['id'] = 'hidden';
  $handler->display->display_options['filters']['hidden']['table'] = 'hidden_nodes';
  $handler->display->display_options['filters']['hidden']['field'] = 'hidden';
  $handler->display->display_options['filters']['hidden']['value'] = '0';
  $handler->display->display_options['path'] = 'presse/pressemitteilungen_page';
  $handler->display->display_options['menu']['title'] = 'Presse';
  $handler->display->display_options['menu']['description'] = 'Bilderdownload, Kontakt, Akkreditierung';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Presse Hessen Unpublished */
  $handler = $view->new_display('page', 'Presse Hessen Unpublished', 'hessenpage_unpublished');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Vorschau Pressemitteilung';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
    7 => '7',
    4 => '4',
  );
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="content clearfix">
<span class="field-item spitzmarke">Vorschau</span>
<h1 class="field-item ueberschrift">Vorschau - Alle Pressemitteilungen im Überblick</h1>
</div>
<div class="clearfix">
<nav class="links node-links clearfix">	</nav>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path_1']['id'] = 'path_1';
  $handler->display->display_options['fields']['path_1']['table'] = 'node';
  $handler->display->display_options['fields']['path_1']['field'] = 'path';
  $handler->display->display_options['fields']['path_1']['label'] = '';
  $handler->display->display_options['fields']['path_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path_1']['element_label_colon'] = FALSE;
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
  /* Field: Content: Publikationsdatum */
  $handler->display->display_options['fields']['field_datum_default']['id'] = 'field_datum_default';
  $handler->display->display_options['fields']['field_datum_default']['table'] = 'field_data_field_datum_default';
  $handler->display->display_options['fields']['field_datum_default']['field'] = 'field_datum_default';
  $handler->display->display_options['fields']['field_datum_default']['label'] = '';
  $handler->display->display_options['fields']['field_datum_default']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_datum_default']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_datum_default']['settings'] = array(
    'format_type' => 'date_dmy',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Teaser-Titel */
  $handler->display->display_options['fields']['field_teaser_titel']['id'] = 'field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['table'] = 'field_data_field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['field'] = 'field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_titel']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['text'] = '[field_teaser_titel]';
  $handler->display->display_options['fields']['field_teaser_titel']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_titel']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Teaser */
  $handler->display->display_options['fields']['field_teaser']['id'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['table'] = 'field_data_field_teaser';
  $handler->display->display_options['fields']['field_teaser']['field'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_teaser']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser']['type'] = 'text_plain';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Weiterlesen';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="wrapperItem">
[field_teaser_bild]
<div class="wrapperCopy">
<span class="date">[field_datum_default]</span>
<h2 class="socialmedia_titel">[field_teaser_titel]</h2>
<p class="tsrText">[field_teaser]<span class="more_link">[view_node]</span></p>
</div>
</div>
<div class="clear"></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'pressemitteilung' => 'pressemitteilung',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Publikationsdatum (field_datum_default) */
  $handler->display->display_options['filters']['field_datum_default_value']['id'] = 'field_datum_default_value';
  $handler->display->display_options['filters']['field_datum_default_value']['table'] = 'field_data_field_datum_default';
  $handler->display->display_options['filters']['field_datum_default_value']['field'] = 'field_datum_default_value';
  $handler->display->display_options['filters']['field_datum_default_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_datum_default_value']['group'] = 1;
  $handler->display->display_options['filters']['field_datum_default_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_datum_default_value']['expose']['operator_id'] = 'field_datum_default_value_op';
  $handler->display->display_options['filters']['field_datum_default_value']['expose']['label'] = 'Zeitraum';
  $handler->display->display_options['filters']['field_datum_default_value']['expose']['operator'] = 'field_datum_default_value_op';
  $handler->display->display_options['filters']['field_datum_default_value']['expose']['identifier'] = 'field_datum_default_value';
  $handler->display->display_options['filters']['field_datum_default_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_datum_default_value']['form_type'] = 'date_text';
  /* Filter criterion: Content: Herausgeber (field_herausgeber) */
  $handler->display->display_options['filters']['field_herausgeber_tid']['id'] = 'field_herausgeber_tid';
  $handler->display->display_options['filters']['field_herausgeber_tid']['table'] = 'field_data_field_herausgeber';
  $handler->display->display_options['filters']['field_herausgeber_tid']['field'] = 'field_herausgeber_tid';
  $handler->display->display_options['filters']['field_herausgeber_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_herausgeber_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_herausgeber_tid']['expose']['operator_id'] = 'field_herausgeber_tid_op';
  $handler->display->display_options['filters']['field_herausgeber_tid']['expose']['label'] = 'Ministerien';
  $handler->display->display_options['filters']['field_herausgeber_tid']['expose']['operator'] = 'field_herausgeber_tid_op';
  $handler->display->display_options['filters']['field_herausgeber_tid']['expose']['identifier'] = 'field_herausgeber_tid';
  $handler->display->display_options['filters']['field_herausgeber_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_herausgeber_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_herausgeber_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_herausgeber_tid']['vocabulary'] = 'herausgeber';
  $handler->display->display_options['path'] = 'presse/vorschau-pressemitteilungen-hessen';
  $handler->display->display_options['menu']['title'] = 'Presse';
  $handler->display->display_options['menu']['description'] = 'Bilderdownload, Kontakt, Akkreditierung';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Presse Ressorts Unpublished */
  $handler = $view->new_display('page', 'Presse Ressorts Unpublished', 'presseressortspage_unpublished');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path_1']['id'] = 'path_1';
  $handler->display->display_options['fields']['path_1']['table'] = 'node';
  $handler->display->display_options['fields']['path_1']['field'] = 'path';
  $handler->display->display_options['fields']['path_1']['label'] = '';
  $handler->display->display_options['fields']['path_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path_1']['element_label_colon'] = FALSE;
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
  /* Field: Content: Publikationsdatum */
  $handler->display->display_options['fields']['field_datum_default']['id'] = 'field_datum_default';
  $handler->display->display_options['fields']['field_datum_default']['table'] = 'field_data_field_datum_default';
  $handler->display->display_options['fields']['field_datum_default']['field'] = 'field_datum_default';
  $handler->display->display_options['fields']['field_datum_default']['label'] = '';
  $handler->display->display_options['fields']['field_datum_default']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_datum_default']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_datum_default']['settings'] = array(
    'format_type' => 'date_dmy',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Teaser-Titel */
  $handler->display->display_options['fields']['field_teaser_titel']['id'] = 'field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['table'] = 'field_data_field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['field'] = 'field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_titel']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['text'] = '[field_teaser_titel]';
  $handler->display->display_options['fields']['field_teaser_titel']['element_label_colon'] = FALSE;
  /* Field: Content: Teaser */
  $handler->display->display_options['fields']['field_teaser']['id'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['table'] = 'field_data_field_teaser';
  $handler->display->display_options['fields']['field_teaser']['field'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_teaser']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser']['type'] = 'text_plain';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Weiterlesen';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="wrapperItem">
[field_teaser_bild]
<div class="wrapperCopy">
<span class="date">[field_datum_default]</span>
<h2 class="socialmedia_titel">[field_teaser_titel]</h2>
<p class="tsrText">[field_teaser]<span class="more_link">[view_node]</span></p>
</div>
</div>
<div class="clear"></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'pressemitteilung' => 'pressemitteilung',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Publikationsdatum (field_datum_default) */
  $handler->display->display_options['filters']['field_datum_default_value']['id'] = 'field_datum_default_value';
  $handler->display->display_options['filters']['field_datum_default_value']['table'] = 'field_data_field_datum_default';
  $handler->display->display_options['filters']['field_datum_default_value']['field'] = 'field_datum_default_value';
  $handler->display->display_options['filters']['field_datum_default_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_datum_default_value']['group'] = 1;
  $handler->display->display_options['filters']['field_datum_default_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_datum_default_value']['expose']['operator_id'] = 'field_datum_default_value_op';
  $handler->display->display_options['filters']['field_datum_default_value']['expose']['label'] = 'Zeitraum';
  $handler->display->display_options['filters']['field_datum_default_value']['expose']['operator'] = 'field_datum_default_value_op';
  $handler->display->display_options['filters']['field_datum_default_value']['expose']['identifier'] = 'field_datum_default_value';
  $handler->display->display_options['filters']['field_datum_default_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_datum_default_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_datum_default_value']['year_range'] = '-10:+0';
  $handler->display->display_options['path'] = 'presse/pressemitteilungen_page_unpublished';
  $handler->display->display_options['menu']['title'] = 'Presse';
  $handler->display->display_options['menu']['description'] = 'Bilderdownload, Kontakt, Akkreditierung';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $translatables['pressemitteilung'] = array(
    t('Master'),
    t('Pressemitteilung'),
    t('mehr'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« Erste'),
    t('‹ Zurück'),
    t('Weiter ›'),
    t('Letzte »'),
    t('<div class="content clearfix">
<span class="field-item spitzmarke">Pressemitteilungen</span>
<h1 class="field-item ueberschrift">Alle Pressemitteilungen im Überblick</h1>
</div>
<div class="clearfix">
<nav class="links node-links clearfix">	</nav>
</div>'),
    t('Derzeit keine Pressemitteilungen verfügbar.'),
    t('image from field_teaser_bild'),
    t('Weiterlesen'),
    t('<div class="social_media_uebersicht">
	<div class="social_media_bild">
		[field_teaser_bild]
	</div>
	<div class="social_media_infos">
		<div class="social_media_kopf">
		<div class="social_media_date">[field_datum_default]</div>
		<h2 class="socialmedia_titel">[title]</h2>
		</div>
		<div class="social_media_text">[field_teaser]
		<div class="more_link">[view_node]</div>
		</div>
	</div>
</div>
<div class="clear"></div>'),
    t('Zeitraum'),
    t('Ministerien'),
    t('Presse Hessen'),
    t('more'),
    t('<div class="tsrImage"><img src="[field_teaser_bild]" alt="[field_file_image_title_text]" title="[field_file_image_title_text]"></div>'),
    t('[field_teaser_titel]'),
    t('<div class="wrapperItem">
[field_teaser_bild]
<div class="wrapperCopy">
<span class="date">[field_datum_default]</span>
<h2 class="socialmedia_titel">[field_teaser_titel]</h2>
<p class="tsrText">[field_teaser]<span class="more_link">[view_node]</span></p>
</div>
</div>
<div class="clear"></div>'),
    t('Presse Block'),
    t('Presse Ressorts'),
    t('Presse Hessen Unpublished'),
    t('Vorschau Pressemitteilung'),
    t('<div class="content clearfix">
<span class="field-item spitzmarke">Vorschau</span>
<h1 class="field-item ueberschrift">Vorschau - Alle Pressemitteilungen im Überblick</h1>
</div>
<div class="clearfix">
<nav class="links node-links clearfix">	</nav>
</div>'),
    t('Presse Ressorts Unpublished'),
  );
  $export['pressemitteilung'] = $view;

  return $export;
}
