<?php
/**
 * @file
 * feature_hzd_content.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_hzd_content_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'all_feeds';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Feeds';
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Publikationsdatum */
  $handler->display->display_options['fields']['field_datum_default']['id'] = 'field_datum_default';
  $handler->display->display_options['fields']['field_datum_default']['table'] = 'field_data_field_datum_default';
  $handler->display->display_options['fields']['field_datum_default']['field'] = 'field_datum_default';
  $handler->display->display_options['fields']['field_datum_default']['label'] = '';
  $handler->display->display_options['fields']['field_datum_default']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_datum_default']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_datum_default']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_datum_default']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Domains: Site name */
  $handler->display->display_options['fields']['sitename']['id'] = 'sitename';
  $handler->display->display_options['fields']['sitename']['table'] = 'domain';
  $handler->display->display_options['fields']['sitename']['field'] = 'sitename';
  $handler->display->display_options['fields']['sitename']['label'] = '';
  $handler->display->display_options['fields']['sitename']['exclude'] = TRUE;
  $handler->display->display_options['fields']['sitename']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['sitename']['alter']['text'] = 'RSS Feed vom [sitename]';
  $handler->display->display_options['fields']['sitename']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['sitename']['link_to_site'] = 0;
  /* Field: Content: Pressestelle */
  $handler->display->display_options['fields']['field_nref_pressestelle']['id'] = 'field_nref_pressestelle';
  $handler->display->display_options['fields']['field_nref_pressestelle']['table'] = 'field_data_field_nref_pressestelle';
  $handler->display->display_options['fields']['field_nref_pressestelle']['field'] = 'field_nref_pressestelle';
  $handler->display->display_options['fields']['field_nref_pressestelle']['label'] = '';
  $handler->display->display_options['fields']['field_nref_pressestelle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nref_pressestelle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nref_pressestelle']['type'] = 'node_reference_plain';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '[nid] [field_datum_default]';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['style_options']['description'] = '[sitename]';
  $handler->display->display_options['row_plugin'] = 'rss_fields';
  $handler->display->display_options['row_options']['title_field'] = 'title';
  $handler->display->display_options['row_options']['link_field'] = 'path';
  $handler->display->display_options['row_options']['description_field'] = 'title';
  $handler->display->display_options['row_options']['creator_field'] = 'field_nref_pressestelle';
  $handler->display->display_options['row_options']['date_field'] = 'field_datum_default';
  $handler->display->display_options['row_options']['guid_field_options'] = array(
    'guid_field' => 'nid',
    'guid_field_is_permalink' => 0,
  );
  $handler->display->display_options['path'] = 'feeds';
  $handler->display->display_options['sitename_title'] = 1;
  $translatables['all_feeds'] = array(
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
    t('RSS Feed vom [sitename]'),
    t('[nid] [field_datum_default]'),
    t('Feed'),
  );
  $export['all_feeds'] = $view;

  $view = new view();
  $view->name = 'frontpage_social_media';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Frontpage: Social Media';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'SOCIAL MEDIA';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['element_type'] = '';
  $handler->display->display_options['style_options']['row']['first_class'] = '';
  $handler->display->display_options['style_options']['row']['last_class'] = '';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '';
  $handler->display->display_options['style_options']['row']['striping_classes'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Textblock */
  $handler->display->display_options['fields']['field_smi_textblock']['id'] = 'field_smi_textblock';
  $handler->display->display_options['fields']['field_smi_textblock']['table'] = 'field_data_field_smi_textblock';
  $handler->display->display_options['fields']['field_smi_textblock']['field'] = 'field_smi_textblock';
  $handler->display->display_options['fields']['field_smi_textblock']['label'] = '';
  $handler->display->display_options['fields']['field_smi_textblock']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_smi_textblock']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_smi_textblock']['alter']['text'] = '<div class="cntHighlight">[field_smi_textblock]</div>';
  $handler->display->display_options['fields']['field_smi_textblock']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_smi_textblock']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_smi_textblock']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_smi_textblock']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_smi_textblock']['hide_empty'] = TRUE;
  /* Field: Content: Amt/Rolle des Accountinhabers */
  $handler->display->display_options['fields']['field_sprecher_amt']['id'] = 'field_sprecher_amt';
  $handler->display->display_options['fields']['field_sprecher_amt']['table'] = 'field_data_field_sprecher_amt';
  $handler->display->display_options['fields']['field_sprecher_amt']['field'] = 'field_sprecher_amt';
  $handler->display->display_options['fields']['field_sprecher_amt']['label'] = '';
  $handler->display->display_options['fields']['field_sprecher_amt']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sprecher_amt']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sprecher_amt']['alter']['text'] = '[field_sprecher_amt]<br/>';
  $handler->display->display_options['fields']['field_sprecher_amt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sprecher_amt']['hide_empty'] = TRUE;
  /* Field: Content: Name des Accountinhabers */
  $handler->display->display_options['fields']['field_sprecher']['id'] = 'field_sprecher';
  $handler->display->display_options['fields']['field_sprecher']['table'] = 'field_data_field_sprecher';
  $handler->display->display_options['fields']['field_sprecher']['field'] = 'field_sprecher';
  $handler->display->display_options['fields']['field_sprecher']['label'] = '';
  $handler->display->display_options['fields']['field_sprecher']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sprecher']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sprecher']['alter']['text'] = '[field_sprecher]<br/>';
  $handler->display->display_options['fields']['field_sprecher']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sprecher']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_sprecher']['hide_empty'] = TRUE;
  /* Field: Link zum Profil - für social network link */
  $handler->display->display_options['fields']['field_smi_url_1']['id'] = 'field_smi_url_1';
  $handler->display->display_options['fields']['field_smi_url_1']['table'] = 'field_data_field_smi_url';
  $handler->display->display_options['fields']['field_smi_url_1']['field'] = 'field_smi_url';
  $handler->display->display_options['fields']['field_smi_url_1']['ui_name'] = 'Link zum Profil - für social network link';
  $handler->display->display_options['fields']['field_smi_url_1']['label'] = '';
  $handler->display->display_options['fields']['field_smi_url_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_smi_url_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_smi_url_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_smi_url_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_smi_url_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_smi_url_1']['type'] = 'link_plain';
  /* Field: Content: Social Network */
  $handler->display->display_options['fields']['field_termref_socialnetwork']['id'] = 'field_termref_socialnetwork';
  $handler->display->display_options['fields']['field_termref_socialnetwork']['table'] = 'field_data_field_termref_socialnetwork';
  $handler->display->display_options['fields']['field_termref_socialnetwork']['field'] = 'field_termref_socialnetwork';
  $handler->display->display_options['fields']['field_termref_socialnetwork']['label'] = '';
  $handler->display->display_options['fields']['field_termref_socialnetwork']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_termref_socialnetwork']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_termref_socialnetwork']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_termref_socialnetwork']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_termref_socialnetwork']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Bild des Accountinhabers */
  $handler->display->display_options['fields']['field_bild_des_sprechers']['id'] = 'field_bild_des_sprechers';
  $handler->display->display_options['fields']['field_bild_des_sprechers']['table'] = 'field_data_field_bild_des_sprechers';
  $handler->display->display_options['fields']['field_bild_des_sprechers']['field'] = 'field_bild_des_sprechers';
  $handler->display->display_options['fields']['field_bild_des_sprechers']['label'] = '';
  $handler->display->display_options['fields']['field_bild_des_sprechers']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_bild_des_sprechers']['alter']['text'] = '<div class="socal_media_block_text">
[field_smi_textblock]
<div class="more_link">[field_smi_url]</div>
</div>
<div class="arrow_call_out"></div>

<div class="socal_media_block_sprecher">
[field_bild_des_sprechers]
[field_sprecher_amt]
[field_sprecher]<br />
auf [field_termref_socialnetwork] <img width="16px" height="16px" class="social_media_favicon_block" src="/sites/default/files/buttons/white.png">
</div>';
  $handler->display->display_options['fields']['field_bild_des_sprechers']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bild_des_sprechers']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_bild_des_sprechers']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_bild_des_sprechers']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_bild_des_sprechers']['settings'] = array(
    'image_style' => 'tn60x60',
    'image_link' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_smi_textblock]
<div class="arrow_call_out"></div>

<div class="wrapperSprecher">
[field_bild_des_sprechers]
<div class="wrapperCnt">
[field_sprecher_amt]
[field_sprecher]
auf <a href="[field_smi_url_1]" social="[field_termref_socialnetwork]">[field_termref_socialnetwork]</a> <img width="16px" height="16px" class="social_media_favicon_block" src="/sites/default/themes/hessen_web_omega/css/images/socialmediafavicons/[field_termref_socialnetwork].png">
</div></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = TRUE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Post date';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['code'] = '$entity_type=\'node\';
global $node;
if(arg(0)==\'node\' ){
   if(arg(0)==\'node\' && is_numeric(arg(1))){
               $nid = arg(1);
               }
$instance=node_load($nid);
$instance_item1=field_get_items($entity_type,$instance, \'field_marginalspalte_so_m_inhalt\');
$instance_item1value = $instance_item1[0][\'nid\'];
return $instance_item1value;
}';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'socialmediateaser' => 'socialmediateaser',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Bild des Accountinhabers (field_bild_des_sprechers:fid) */
  $handler->display->display_options['relationships']['field_bild_des_sprechers_fid']['id'] = 'field_bild_des_sprechers_fid';
  $handler->display->display_options['relationships']['field_bild_des_sprechers_fid']['table'] = 'field_data_field_bild_des_sprechers';
  $handler->display->display_options['relationships']['field_bild_des_sprechers_fid']['field'] = 'field_bild_des_sprechers_fid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Textblock */
  $handler->display->display_options['fields']['field_smi_textblock']['id'] = 'field_smi_textblock';
  $handler->display->display_options['fields']['field_smi_textblock']['table'] = 'field_data_field_smi_textblock';
  $handler->display->display_options['fields']['field_smi_textblock']['field'] = 'field_smi_textblock';
  $handler->display->display_options['fields']['field_smi_textblock']['label'] = '';
  $handler->display->display_options['fields']['field_smi_textblock']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_smi_textblock']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_smi_textblock']['alter']['text'] = '<div class="cntHighlight">[field_smi_textblock]</div>';
  $handler->display->display_options['fields']['field_smi_textblock']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_smi_textblock']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_smi_textblock']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_smi_textblock']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_smi_textblock']['hide_empty'] = TRUE;
  /* Field: Content: Amt/Rolle des Accountinhabers */
  $handler->display->display_options['fields']['field_sprecher_amt']['id'] = 'field_sprecher_amt';
  $handler->display->display_options['fields']['field_sprecher_amt']['table'] = 'field_data_field_sprecher_amt';
  $handler->display->display_options['fields']['field_sprecher_amt']['field'] = 'field_sprecher_amt';
  $handler->display->display_options['fields']['field_sprecher_amt']['label'] = '';
  $handler->display->display_options['fields']['field_sprecher_amt']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sprecher_amt']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sprecher_amt']['alter']['text'] = '[field_sprecher_amt]<br/>';
  $handler->display->display_options['fields']['field_sprecher_amt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sprecher_amt']['hide_empty'] = TRUE;
  /* Field: Content: Name des Accountinhabers */
  $handler->display->display_options['fields']['field_sprecher']['id'] = 'field_sprecher';
  $handler->display->display_options['fields']['field_sprecher']['table'] = 'field_data_field_sprecher';
  $handler->display->display_options['fields']['field_sprecher']['field'] = 'field_sprecher';
  $handler->display->display_options['fields']['field_sprecher']['label'] = '';
  $handler->display->display_options['fields']['field_sprecher']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sprecher']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sprecher']['alter']['text'] = '[field_sprecher]<br/>';
  $handler->display->display_options['fields']['field_sprecher']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sprecher']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_sprecher']['hide_empty'] = TRUE;
  /* Field: Link zum Profil - für social network link */
  $handler->display->display_options['fields']['field_smi_url_1']['id'] = 'field_smi_url_1';
  $handler->display->display_options['fields']['field_smi_url_1']['table'] = 'field_data_field_smi_url';
  $handler->display->display_options['fields']['field_smi_url_1']['field'] = 'field_smi_url';
  $handler->display->display_options['fields']['field_smi_url_1']['ui_name'] = 'Link zum Profil - für social network link';
  $handler->display->display_options['fields']['field_smi_url_1']['label'] = '';
  $handler->display->display_options['fields']['field_smi_url_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_smi_url_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_smi_url_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_smi_url_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_smi_url_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_smi_url_1']['type'] = 'link_plain';
  /* Field: Content: Social Network */
  $handler->display->display_options['fields']['field_termref_socialnetwork']['id'] = 'field_termref_socialnetwork';
  $handler->display->display_options['fields']['field_termref_socialnetwork']['table'] = 'field_data_field_termref_socialnetwork';
  $handler->display->display_options['fields']['field_termref_socialnetwork']['field'] = 'field_termref_socialnetwork';
  $handler->display->display_options['fields']['field_termref_socialnetwork']['label'] = '';
  $handler->display->display_options['fields']['field_termref_socialnetwork']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_termref_socialnetwork']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_termref_socialnetwork']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_termref_socialnetwork']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_termref_socialnetwork']['type'] = 'taxonomy_term_reference_plain';
  /* Field: File: Alternativtext */
  $handler->display->display_options['fields']['field_file_image_alt_text']['id'] = 'field_file_image_alt_text';
  $handler->display->display_options['fields']['field_file_image_alt_text']['table'] = 'field_data_field_file_image_alt_text';
  $handler->display->display_options['fields']['field_file_image_alt_text']['field'] = 'field_file_image_alt_text';
  $handler->display->display_options['fields']['field_file_image_alt_text']['relationship'] = 'field_bild_des_sprechers_fid';
  $handler->display->display_options['fields']['field_file_image_alt_text']['label'] = '';
  $handler->display->display_options['fields']['field_file_image_alt_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_alt_text']['element_label_colon'] = FALSE;
  /* Field: File: Title Text */
  $handler->display->display_options['fields']['field_file_image_title_text']['id'] = 'field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['table'] = 'field_data_field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['field'] = 'field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['relationship'] = 'field_bild_des_sprechers_fid';
  $handler->display->display_options['fields']['field_file_image_title_text']['label'] = '';
  $handler->display->display_options['fields']['field_file_image_title_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_title_text']['element_label_colon'] = FALSE;
  /* Field: Content: Bild des Accountinhabers */
  $handler->display->display_options['fields']['field_bild_des_sprechers']['id'] = 'field_bild_des_sprechers';
  $handler->display->display_options['fields']['field_bild_des_sprechers']['table'] = 'field_data_field_bild_des_sprechers';
  $handler->display->display_options['fields']['field_bild_des_sprechers']['field'] = 'field_bild_des_sprechers';
  $handler->display->display_options['fields']['field_bild_des_sprechers']['label'] = '';
  $handler->display->display_options['fields']['field_bild_des_sprechers']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_bild_des_sprechers']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_bild_des_sprechers']['alter']['text'] = '<img src="[field_bild_des_sprechers]" alt="[field_file_image_alt_text]" title="[field_file_image_title_text]">';
  $handler->display->display_options['fields']['field_bild_des_sprechers']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bild_des_sprechers']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_bild_des_sprechers']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_bild_des_sprechers']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_bild_des_sprechers']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_bild_des_sprechers']['settings'] = array(
    'image_style' => 'tn60x60',
    'image_link' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_smi_textblock]
<div class="arrow_call_out"></div>

<div class="wrapperSprecher">
[field_bild_des_sprechers]
<div class="wrapperCnt">
[field_sprecher_amt]
[field_sprecher]
auf <a href="[field_smi_url_1]" social="[field_termref_socialnetwork]">[field_termref_socialnetwork]</a> <img width="16px" height="16px" class="social_media_favicon_block" src="/sites/default/themes/hessen_web_omega/css/images/socialmediafavicons/[field_termref_socialnetwork].png">
</div></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = TRUE;
  $translatables['frontpage_social_media'] = array(
    t('Master'),
    t('SOCIAL MEDIA'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<div class="cntHighlight">[field_smi_textblock]</div>'),
    t('[field_sprecher_amt]<br/>'),
    t('[field_sprecher]<br/>'),
    t('<div class="socal_media_block_text">
[field_smi_textblock]
<div class="more_link">[field_smi_url]</div>
</div>
<div class="arrow_call_out"></div>

<div class="socal_media_block_sprecher">
[field_bild_des_sprechers]
[field_sprecher_amt]
[field_sprecher]<br />
auf [field_termref_socialnetwork] <img width="16px" height="16px" class="social_media_favicon_block" src="/sites/default/files/buttons/white.png">
</div>'),
    t('[field_smi_textblock]
<div class="arrow_call_out"></div>

<div class="wrapperSprecher">
[field_bild_des_sprechers]
<div class="wrapperCnt">
[field_sprecher_amt]
[field_sprecher]
auf <a href="[field_smi_url_1]" social="[field_termref_socialnetwork]">[field_termref_socialnetwork]</a> <img width="16px" height="16px" class="social_media_favicon_block" src="/sites/default/themes/hessen_web_omega/css/images/socialmediafavicons/[field_termref_socialnetwork].png">
</div></div>'),
    t('Post date'),
    t('All'),
    t('Block'),
    t('image from field_bild_des_sprechers'),
    t('<img src="[field_bild_des_sprechers]" alt="[field_file_image_alt_text]" title="[field_file_image_title_text]">'),
  );
  $export['frontpage_social_media'] = $view;

  $view = new view();
  $view->name = 'frontpage_zitat_des_tages';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Frontpage: Zitat des Tages';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '[field_block_titel]';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Bild des Accountinhabers (field_bild_des_sprechers:fid) */
  $handler->display->display_options['relationships']['field_bild_des_sprechers_fid']['id'] = 'field_bild_des_sprechers_fid';
  $handler->display->display_options['relationships']['field_bild_des_sprechers_fid']['table'] = 'field_data_field_bild_des_sprechers';
  $handler->display->display_options['relationships']['field_bild_des_sprechers_fid']['field'] = 'field_bild_des_sprechers_fid';
  /* Field: Content: Block Titel */
  $handler->display->display_options['fields']['field_block_titel']['id'] = 'field_block_titel';
  $handler->display->display_options['fields']['field_block_titel']['table'] = 'field_data_field_block_titel';
  $handler->display->display_options['fields']['field_block_titel']['field'] = 'field_block_titel';
  $handler->display->display_options['fields']['field_block_titel']['label'] = '';
  $handler->display->display_options['fields']['field_block_titel']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_block_titel']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Link zum Artikel */
  $handler->display->display_options['fields']['field_link_zum_artikel']['id'] = 'field_link_zum_artikel';
  $handler->display->display_options['fields']['field_link_zum_artikel']['table'] = 'field_data_field_link_zum_artikel';
  $handler->display->display_options['fields']['field_link_zum_artikel']['field'] = 'field_link_zum_artikel';
  $handler->display->display_options['fields']['field_link_zum_artikel']['label'] = '';
  $handler->display->display_options['fields']['field_link_zum_artikel']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_zum_artikel']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_zum_artikel']['click_sort_column'] = 'url';
  /* Field: Content: Bild des Accountinhabers */
  $handler->display->display_options['fields']['field_bild_des_sprechers']['id'] = 'field_bild_des_sprechers';
  $handler->display->display_options['fields']['field_bild_des_sprechers']['table'] = 'field_data_field_bild_des_sprechers';
  $handler->display->display_options['fields']['field_bild_des_sprechers']['field'] = 'field_bild_des_sprechers';
  $handler->display->display_options['fields']['field_bild_des_sprechers']['label'] = '';
  $handler->display->display_options['fields']['field_bild_des_sprechers']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_bild_des_sprechers']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_bild_des_sprechers']['alter']['text'] = '<img src="[field_bild_des_sprechers]" alt="[field_file_image_alt_text]" title="[field_file_image_title_text]">';
  $handler->display->display_options['fields']['field_bild_des_sprechers']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bild_des_sprechers']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_bild_des_sprechers']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_bild_des_sprechers']['settings'] = array(
    'image_style' => 'tn60x60',
    'image_link' => '',
  );
  /* Field: Content: Amt/Rolle des Accountinhabers */
  $handler->display->display_options['fields']['field_sprecher_amt']['id'] = 'field_sprecher_amt';
  $handler->display->display_options['fields']['field_sprecher_amt']['table'] = 'field_data_field_sprecher_amt';
  $handler->display->display_options['fields']['field_sprecher_amt']['field'] = 'field_sprecher_amt';
  $handler->display->display_options['fields']['field_sprecher_amt']['label'] = '';
  $handler->display->display_options['fields']['field_sprecher_amt']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sprecher_amt']['element_label_colon'] = FALSE;
  /* Field: Content: Name des Accountinhabers */
  $handler->display->display_options['fields']['field_sprecher']['id'] = 'field_sprecher';
  $handler->display->display_options['fields']['field_sprecher']['table'] = 'field_data_field_sprecher';
  $handler->display->display_options['fields']['field_sprecher']['field'] = 'field_sprecher';
  $handler->display->display_options['fields']['field_sprecher']['label'] = '';
  $handler->display->display_options['fields']['field_sprecher']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sprecher']['element_label_colon'] = FALSE;
  /* Field: Content: Ort des Zitats */
  $handler->display->display_options['fields']['field_zitat_ort']['id'] = 'field_zitat_ort';
  $handler->display->display_options['fields']['field_zitat_ort']['table'] = 'field_data_field_zitat_ort';
  $handler->display->display_options['fields']['field_zitat_ort']['field'] = 'field_zitat_ort';
  $handler->display->display_options['fields']['field_zitat_ort']['label'] = '';
  $handler->display->display_options['fields']['field_zitat_ort']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_zitat_ort']['alter']['text'] = '<div class="zitat_block_text">
[body]
</div>

<div class="zitat_block_sprecher">
[field_bild_des_sprechers]
[field_sprecher_amt]<br>
[field_sprecher]<br>
[field_zitat_ort]
</div>';
  $handler->display->display_options['fields']['field_zitat_ort']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="zitat_block_text">
[body]
<span class="more_link">[field_link_zum_artikel]</span> 
</div>
<div class="arrow_call_out"></div>

<div class="zitat_block_sprecher">
[field_bild_des_sprechers]
[field_sprecher_amt]<br>
[field_sprecher]<br>
[field_zitat_ort]
</div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['code'] = '$entity_type=\'node\';
global $node;
if(arg(0)==\'node\' ){
   if(arg(0)==\'node\' && is_numeric(arg(1))){
               $nid = arg(1);
               }
$instance=node_load($nid);
$instance_item1=field_get_items($entity_type,$instance, \'field_marginalspalte_z_inhalt\');
$instance_item1value = $instance_item1[0][\'nid\'];
return $instance_item1value;
}';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Workflow-Status (field_workflow_status) */
  $handler->display->display_options['filters']['field_workflow_status_tid']['id'] = 'field_workflow_status_tid';
  $handler->display->display_options['filters']['field_workflow_status_tid']['table'] = 'field_data_field_workflow_status';
  $handler->display->display_options['filters']['field_workflow_status_tid']['field'] = 'field_workflow_status_tid';
  $handler->display->display_options['filters']['field_workflow_status_tid']['value'] = array(
    0 => '12',
  );
  $handler->display->display_options['filters']['field_workflow_status_tid']['vocabulary'] = 'tax_workflow_status';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'zitat_des_tages' => 'zitat_des_tages',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'zitate');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Block Titel */
  $handler->display->display_options['fields']['field_block_titel']['id'] = 'field_block_titel';
  $handler->display->display_options['fields']['field_block_titel']['table'] = 'field_data_field_block_titel';
  $handler->display->display_options['fields']['field_block_titel']['field'] = 'field_block_titel';
  $handler->display->display_options['fields']['field_block_titel']['label'] = '';
  $handler->display->display_options['fields']['field_block_titel']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_block_titel']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* Field: Content: Link zum Artikel */
  $handler->display->display_options['fields']['field_link_zum_artikel']['id'] = 'field_link_zum_artikel';
  $handler->display->display_options['fields']['field_link_zum_artikel']['table'] = 'field_data_field_link_zum_artikel';
  $handler->display->display_options['fields']['field_link_zum_artikel']['field'] = 'field_link_zum_artikel';
  $handler->display->display_options['fields']['field_link_zum_artikel']['label'] = '';
  $handler->display->display_options['fields']['field_link_zum_artikel']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_zum_artikel']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_link_zum_artikel']['alter']['text'] = '<span class="more_link">[field_link_zum_artikel]</span> ';
  $handler->display->display_options['fields']['field_link_zum_artikel']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_zum_artikel']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_link_zum_artikel']['click_sort_column'] = 'url';
  /* Field: File: Alternativtext */
  $handler->display->display_options['fields']['field_file_image_alt_text']['id'] = 'field_file_image_alt_text';
  $handler->display->display_options['fields']['field_file_image_alt_text']['table'] = 'field_data_field_file_image_alt_text';
  $handler->display->display_options['fields']['field_file_image_alt_text']['field'] = 'field_file_image_alt_text';
  $handler->display->display_options['fields']['field_file_image_alt_text']['relationship'] = 'field_bild_des_sprechers_fid';
  $handler->display->display_options['fields']['field_file_image_alt_text']['label'] = '';
  $handler->display->display_options['fields']['field_file_image_alt_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_alt_text']['element_label_colon'] = FALSE;
  /* Field: File: Title Text */
  $handler->display->display_options['fields']['field_file_image_title_text']['id'] = 'field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['table'] = 'field_data_field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['field'] = 'field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['relationship'] = 'field_bild_des_sprechers_fid';
  $handler->display->display_options['fields']['field_file_image_title_text']['label'] = '';
  $handler->display->display_options['fields']['field_file_image_title_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_title_text']['element_label_colon'] = FALSE;
  /* Field: Content: Bild des Accountinhabers */
  $handler->display->display_options['fields']['field_bild_des_sprechers']['id'] = 'field_bild_des_sprechers';
  $handler->display->display_options['fields']['field_bild_des_sprechers']['table'] = 'field_data_field_bild_des_sprechers';
  $handler->display->display_options['fields']['field_bild_des_sprechers']['field'] = 'field_bild_des_sprechers';
  $handler->display->display_options['fields']['field_bild_des_sprechers']['label'] = '';
  $handler->display->display_options['fields']['field_bild_des_sprechers']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_bild_des_sprechers']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_bild_des_sprechers']['alter']['text'] = '<img src="[field_bild_des_sprechers]" alt="[field_file_image_alt_text]" title="[field_file_image_title_text]">';
  $handler->display->display_options['fields']['field_bild_des_sprechers']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bild_des_sprechers']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_bild_des_sprechers']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_bild_des_sprechers']['settings'] = array(
    'image_style' => 'tn60x60',
    'image_link' => '',
  );
  /* Field: Content: Amt/Rolle des Accountinhabers */
  $handler->display->display_options['fields']['field_sprecher_amt']['id'] = 'field_sprecher_amt';
  $handler->display->display_options['fields']['field_sprecher_amt']['table'] = 'field_data_field_sprecher_amt';
  $handler->display->display_options['fields']['field_sprecher_amt']['field'] = 'field_sprecher_amt';
  $handler->display->display_options['fields']['field_sprecher_amt']['label'] = '';
  $handler->display->display_options['fields']['field_sprecher_amt']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sprecher_amt']['element_label_colon'] = FALSE;
  /* Field: Content: Name des Accountinhabers */
  $handler->display->display_options['fields']['field_sprecher']['id'] = 'field_sprecher';
  $handler->display->display_options['fields']['field_sprecher']['table'] = 'field_data_field_sprecher';
  $handler->display->display_options['fields']['field_sprecher']['field'] = 'field_sprecher';
  $handler->display->display_options['fields']['field_sprecher']['label'] = '';
  $handler->display->display_options['fields']['field_sprecher']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sprecher']['element_label_colon'] = FALSE;
  /* Field: Content: Ort des Zitats */
  $handler->display->display_options['fields']['field_zitat_ort']['id'] = 'field_zitat_ort';
  $handler->display->display_options['fields']['field_zitat_ort']['table'] = 'field_data_field_zitat_ort';
  $handler->display->display_options['fields']['field_zitat_ort']['field'] = 'field_zitat_ort';
  $handler->display->display_options['fields']['field_zitat_ort']['label'] = '';
  $handler->display->display_options['fields']['field_zitat_ort']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_zitat_ort']['alter']['text'] = '<div class="zitat_block_text">
[body]
</div>

<div class="zitat_block_sprecher">
[field_bild_des_sprechers]
[field_sprecher_amt]<br>
[field_sprecher]<br>
[field_zitat_ort]
</div>';
  $handler->display->display_options['fields']['field_zitat_ort']['alter']['max_length'] = '25';
  $handler->display->display_options['fields']['field_zitat_ort']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_zitat_ort']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_zitat_ort']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_zitat_ort']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<div class="view-edit-block view-edit-zitat-des-tages"><img src="/sites/default/themes/hessen_web_omega/css/images/wrench_icon.png"></div>';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_wrapper_class'] = 'edit-link-wrapper';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="zitat_block_text">
[body]<br>
[field_link_zum_artikel]
</div>
<div class="arrow_call_out"></div>

<div class="zitat_block_sprecher">
[field_bild_des_sprechers]
[field_sprecher_amt]<br>
[field_sprecher]<br>
[field_zitat_ort]
<div class="edit-link-wrapper">[edit_node]</div>
</div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'zitat_des_tages' => 'zitat_des_tages',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $translatables['frontpage_zitat_des_tages'] = array(
    t('Master'),
    t('[field_block_titel]'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('image from field_bild_des_sprechers'),
    t('<img src="[field_bild_des_sprechers]" alt="[field_file_image_alt_text]" title="[field_file_image_title_text]">'),
    t('<div class="zitat_block_text">
[body]
</div>

<div class="zitat_block_sprecher">
[field_bild_des_sprechers]
[field_sprecher_amt]<br>
[field_sprecher]<br>
[field_zitat_ort]
</div>'),
    t('<div class="zitat_block_text">
[body]
<span class="more_link">[field_link_zum_artikel]</span> 
</div>
<div class="arrow_call_out"></div>

<div class="zitat_block_sprecher">
[field_bild_des_sprechers]
[field_sprecher_amt]<br>
[field_sprecher]<br>
[field_zitat_ort]
</div>
'),
    t('All'),
    t('Block'),
    t('<span class="more_link">[field_link_zum_artikel]</span> '),
    t('<div class="zitat_block_text">
[body]
</div>

<div class="zitat_block_sprecher">
[field_bild_des_sprechers]
[field_sprecher_amt]<br>
[field_sprecher]<br>
[field_zitat_ort]
</div>'),
    t('<div class="view-edit-block view-edit-zitat-des-tages"><img src="/sites/default/themes/hessen_web_omega/css/images/wrench_icon.png"></div>'),
    t('<div class="zitat_block_text">
[body]<br>
[field_link_zum_artikel]
</div>
<div class="arrow_call_out"></div>

<div class="zitat_block_sprecher">
[field_bild_des_sprechers]
[field_sprecher_amt]<br>
[field_sprecher]<br>
[field_zitat_ort]
<div class="edit-link-wrapper">[edit_node]</div>
</div>
'),
  );
  $export['frontpage_zitat_des_tages'] = $view;

  $view = new view();
  $view->name = 'marginal_bloecke';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Marginal Blöcke';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Marginal Blöcke';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="kontakt-form">
<form name="kontaktblock" method="post" action="[path]">
<textarea rows="5" cols="10" name="Frage">Geben Sie hier Ihr Anliegen ein ...</textarea>
<input id="edit-submit" class="form-submit" type="submit" value="Weiter" name="kontaktblock-submit">
</form>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  /* Field: Content: Amt/Rolle des Accountinhabers */
  $handler->display->display_options['fields']['field_sprecher_amt']['id'] = 'field_sprecher_amt';
  $handler->display->display_options['fields']['field_sprecher_amt']['table'] = 'field_data_field_sprecher_amt';
  $handler->display->display_options['fields']['field_sprecher_amt']['field'] = 'field_sprecher_amt';
  $handler->display->display_options['fields']['field_sprecher_amt']['label'] = '';
  $handler->display->display_options['fields']['field_sprecher_amt']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sprecher_amt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sprecher_amt']['type'] = 'text_plain';
  /* Field: Content: Bild des Accountinhabers */
  $handler->display->display_options['fields']['field_bild_des_sprechers']['id'] = 'field_bild_des_sprechers';
  $handler->display->display_options['fields']['field_bild_des_sprechers']['table'] = 'field_data_field_bild_des_sprechers';
  $handler->display->display_options['fields']['field_bild_des_sprechers']['field'] = 'field_bild_des_sprechers';
  $handler->display->display_options['fields']['field_bild_des_sprechers']['label'] = '';
  $handler->display->display_options['fields']['field_bild_des_sprechers']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_bild_des_sprechers']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bild_des_sprechers']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_bild_des_sprechers']['settings'] = array(
    'image_style' => 'tn60x60',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* Field: Content: Ort des Zitats */
  $handler->display->display_options['fields']['field_zitat_ort']['id'] = 'field_zitat_ort';
  $handler->display->display_options['fields']['field_zitat_ort']['table'] = 'field_data_field_zitat_ort';
  $handler->display->display_options['fields']['field_zitat_ort']['field'] = 'field_zitat_ort';
  $handler->display->display_options['fields']['field_zitat_ort']['label'] = '';
  $handler->display->display_options['fields']['field_zitat_ort']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_zitat_ort']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_zitat_ort']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_zitat_ort']['settings'] = array(
    'trim_length' => '25',
  );
  /* Field: Content: Name des Accountinhabers */
  $handler->display->display_options['fields']['field_sprecher']['id'] = 'field_sprecher';
  $handler->display->display_options['fields']['field_sprecher']['table'] = 'field_data_field_sprecher';
  $handler->display->display_options['fields']['field_sprecher']['field'] = 'field_sprecher';
  $handler->display->display_options['fields']['field_sprecher']['label'] = '';
  $handler->display->display_options['fields']['field_sprecher']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sprecher']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sprecher']['type'] = 'text_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="zitat-wrapper">
<div class="zitat-text">[body][field_zitat]</div>
<div class="zitat-bild">[field_bild_des_sprechers] </div>
<div class="zitat-sprecher-amt">[field_sprecher_amt] </div>
<div class="zitat-sprecher">[field_sprecher] </div>
<div class="zitat-ort">[field_zitat_ort]</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'artikel' => 'artikel',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Name des Accountinhabers (field_sprecher) */
  $handler->display->display_options['filters']['field_sprecher_value']['id'] = 'field_sprecher_value';
  $handler->display->display_options['filters']['field_sprecher_value']['table'] = 'field_data_field_sprecher';
  $handler->display->display_options['filters']['field_sprecher_value']['field'] = 'field_sprecher_value';
  $handler->display->display_options['filters']['field_sprecher_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_sprecher_value']['group'] = 1;

  /* Display: Zitat Block */
  $handler = $view->new_display('block', 'Zitat Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Bild des Accountinhabers (field_bild_des_sprechers:fid) */
  $handler->display->display_options['relationships']['field_bild_des_sprechers_fid']['id'] = 'field_bild_des_sprechers_fid';
  $handler->display->display_options['relationships']['field_bild_des_sprechers_fid']['table'] = 'field_data_field_bild_des_sprechers';
  $handler->display->display_options['relationships']['field_bild_des_sprechers_fid']['field'] = 'field_bild_des_sprechers_fid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Amt/Rolle des Accountinhabers */
  $handler->display->display_options['fields']['field_sprecher_amt']['id'] = 'field_sprecher_amt';
  $handler->display->display_options['fields']['field_sprecher_amt']['table'] = 'field_data_field_sprecher_amt';
  $handler->display->display_options['fields']['field_sprecher_amt']['field'] = 'field_sprecher_amt';
  $handler->display->display_options['fields']['field_sprecher_amt']['label'] = '';
  $handler->display->display_options['fields']['field_sprecher_amt']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sprecher_amt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sprecher_amt']['type'] = 'text_plain';
  /* Field: File: Title Text */
  $handler->display->display_options['fields']['field_file_image_title_text']['id'] = 'field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['table'] = 'field_data_field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['field'] = 'field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['relationship'] = 'field_bild_des_sprechers_fid';
  $handler->display->display_options['fields']['field_file_image_title_text']['label'] = '';
  $handler->display->display_options['fields']['field_file_image_title_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_title_text']['element_label_colon'] = FALSE;
  /* Field: Content: Bild des Accountinhabers */
  $handler->display->display_options['fields']['field_bild_des_sprechers']['id'] = 'field_bild_des_sprechers';
  $handler->display->display_options['fields']['field_bild_des_sprechers']['table'] = 'field_data_field_bild_des_sprechers';
  $handler->display->display_options['fields']['field_bild_des_sprechers']['field'] = 'field_bild_des_sprechers';
  $handler->display->display_options['fields']['field_bild_des_sprechers']['label'] = '';
  $handler->display->display_options['fields']['field_bild_des_sprechers']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_bild_des_sprechers']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_bild_des_sprechers']['alter']['text'] = '<img src="[field_bild_des_sprechers]" alt="[field_file_image_title_text]" title="[field_file_image_title_text]">';
  $handler->display->display_options['fields']['field_bild_des_sprechers']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bild_des_sprechers']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_bild_des_sprechers']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_bild_des_sprechers']['settings'] = array(
    'image_style' => 'tn60x60',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* Field: Content: Ort des Zitats */
  $handler->display->display_options['fields']['field_zitat_ort']['id'] = 'field_zitat_ort';
  $handler->display->display_options['fields']['field_zitat_ort']['table'] = 'field_data_field_zitat_ort';
  $handler->display->display_options['fields']['field_zitat_ort']['field'] = 'field_zitat_ort';
  $handler->display->display_options['fields']['field_zitat_ort']['label'] = '';
  $handler->display->display_options['fields']['field_zitat_ort']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_zitat_ort']['alter']['max_length'] = '25';
  $handler->display->display_options['fields']['field_zitat_ort']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_zitat_ort']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_zitat_ort']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_zitat_ort']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_zitat_ort']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_zitat_ort']['settings'] = array(
    'trim_length' => '25',
  );
  /* Field: Content: Name des Accountinhabers */
  $handler->display->display_options['fields']['field_sprecher']['id'] = 'field_sprecher';
  $handler->display->display_options['fields']['field_sprecher']['table'] = 'field_data_field_sprecher';
  $handler->display->display_options['fields']['field_sprecher']['field'] = 'field_sprecher';
  $handler->display->display_options['fields']['field_sprecher']['label'] = '';
  $handler->display->display_options['fields']['field_sprecher']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sprecher']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sprecher']['type'] = 'text_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="zitat-wrapper">
<div class="zitat-text">[body][field_zitat]</div>
<div class="zitat-bild">[field_bild_des_sprechers] </div>
<div class="zitat-sprecher-amt">[field_sprecher_amt] </div>
<div class="zitat-sprecher">[field_sprecher] </div>
<div class="zitat-ort">[field_zitat_ort]</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;

  /* Display: Zitat References */
  $handler = $view->new_display('references', 'Zitat References', 'references_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'references_style';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'references_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Amt/Rolle des Accountinhabers */
  $handler->display->display_options['fields']['field_sprecher_amt']['id'] = 'field_sprecher_amt';
  $handler->display->display_options['fields']['field_sprecher_amt']['table'] = 'field_data_field_sprecher_amt';
  $handler->display->display_options['fields']['field_sprecher_amt']['field'] = 'field_sprecher_amt';
  $handler->display->display_options['fields']['field_sprecher_amt']['label'] = '';
  $handler->display->display_options['fields']['field_sprecher_amt']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sprecher_amt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sprecher_amt']['type'] = 'text_plain';
  /* Field: Content: Bild des Accountinhabers */
  $handler->display->display_options['fields']['field_bild_des_sprechers']['id'] = 'field_bild_des_sprechers';
  $handler->display->display_options['fields']['field_bild_des_sprechers']['table'] = 'field_data_field_bild_des_sprechers';
  $handler->display->display_options['fields']['field_bild_des_sprechers']['field'] = 'field_bild_des_sprechers';
  $handler->display->display_options['fields']['field_bild_des_sprechers']['label'] = '';
  $handler->display->display_options['fields']['field_bild_des_sprechers']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_bild_des_sprechers']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bild_des_sprechers']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_bild_des_sprechers']['settings'] = array(
    'image_style' => 'tn60x60',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* Field: Content: Ort des Zitats */
  $handler->display->display_options['fields']['field_zitat_ort']['id'] = 'field_zitat_ort';
  $handler->display->display_options['fields']['field_zitat_ort']['table'] = 'field_data_field_zitat_ort';
  $handler->display->display_options['fields']['field_zitat_ort']['field'] = 'field_zitat_ort';
  $handler->display->display_options['fields']['field_zitat_ort']['label'] = '';
  $handler->display->display_options['fields']['field_zitat_ort']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_zitat_ort']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_zitat_ort']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_zitat_ort']['settings'] = array(
    'trim_length' => '25',
  );
  /* Field: Content: Name des Accountinhabers */
  $handler->display->display_options['fields']['field_sprecher']['id'] = 'field_sprecher';
  $handler->display->display_options['fields']['field_sprecher']['table'] = 'field_data_field_sprecher';
  $handler->display->display_options['fields']['field_sprecher']['field'] = 'field_sprecher';
  $handler->display->display_options['fields']['field_sprecher']['label'] = '';
  $handler->display->display_options['fields']['field_sprecher']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sprecher']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sprecher']['type'] = 'text_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="zitat-wrapper">
<div class="zitat-text">[body][field_zitat]</div>
<div class="zitat-bild">[field_bild_des_sprechers] </div>
<div class="zitat-sprecher-amt">[field_sprecher_amt] </div>
<div class="zitat-sprecher">[field_sprecher] </div>
<div class="zitat-ort">[field_zitat_ort]</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'artikel' => 'artikel',
    'zitat_des_tages' => 'zitat_des_tages',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Name des Accountinhabers (field_sprecher) */
  $handler->display->display_options['filters']['field_sprecher_value']['id'] = 'field_sprecher_value';
  $handler->display->display_options['filters']['field_sprecher_value']['table'] = 'field_data_field_sprecher';
  $handler->display->display_options['filters']['field_sprecher_value']['field'] = 'field_sprecher_value';
  $handler->display->display_options['filters']['field_sprecher_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_sprecher_value']['group'] = 1;

  /* Display: Video Block */
  $handler = $view->new_display('block', 'Video Block', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Teaser Bild (field_teaser_bild:fid) */
  $handler->display->display_options['relationships']['field_teaser_bild_fid']['id'] = 'field_teaser_bild_fid';
  $handler->display->display_options['relationships']['field_teaser_bild_fid']['table'] = 'field_data_field_teaser_bild';
  $handler->display->display_options['relationships']['field_teaser_bild_fid']['field'] = 'field_teaser_bild_fid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Teaser Bild */
  $handler->display->display_options['fields']['field_teaser_bild']['id'] = 'field_teaser_bild';
  $handler->display->display_options['fields']['field_teaser_bild']['table'] = 'field_data_field_teaser_bild';
  $handler->display->display_options['fields']['field_teaser_bild']['field'] = 'field_teaser_bild';
  $handler->display->display_options['fields']['field_teaser_bild']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_bild']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_bild']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_bild']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_teaser_bild']['settings'] = array(
    'image_style' => 'tn225x120',
    'image_link' => 'content',
  );
  /* Field: Field: Spitzmarke */
  $handler->display->display_options['fields']['field_spitzmarke']['id'] = 'field_spitzmarke';
  $handler->display->display_options['fields']['field_spitzmarke']['table'] = 'field_data_field_spitzmarke';
  $handler->display->display_options['fields']['field_spitzmarke']['field'] = 'field_spitzmarke';
  $handler->display->display_options['fields']['field_spitzmarke']['label'] = '';
  $handler->display->display_options['fields']['field_spitzmarke']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_spitzmarke']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['field_spitzmarke']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_spitzmarke']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_spitzmarke']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_spitzmarke']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_spitzmarke']['element_class'] = 'spitzmarke';
  $handler->display->display_options['fields']['field_spitzmarke']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spitzmarke']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_spitzmarke']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_spitzmarke']['settings'] = array(
    'trim_length' => '30',
  );
  /* Field: Content: Teaser-Titel */
  $handler->display->display_options['fields']['field_teaser_titel']['id'] = 'field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['table'] = 'field_data_field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['field'] = 'field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_titel']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['max_length'] = '60';
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_titel']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_teaser_titel']['element_class'] = 'tsrUeberschrift';
  $handler->display->display_options['fields']['field_teaser_titel']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_titel']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_titel']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_teaser_titel']['settings'] = array(
    'trim_length' => '60',
  );
  /* Field: Content: Teaser Linktext */
  $handler->display->display_options['fields']['field_teaser_linktext']['id'] = 'field_teaser_linktext';
  $handler->display->display_options['fields']['field_teaser_linktext']['table'] = 'field_data_field_teaser_linktext';
  $handler->display->display_options['fields']['field_teaser_linktext']['field'] = 'field_teaser_linktext';
  $handler->display->display_options['fields']['field_teaser_linktext']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_linktext']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_linktext']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_linktext']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_linktext']['empty'] = 'Zum Video';
  $handler->display->display_options['fields']['field_teaser_linktext']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_teaser_linktext']['settings'] = array(
    'trim_length' => '30',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: File: Title Text */
  $handler->display->display_options['fields']['field_file_image_title_text_1']['id'] = 'field_file_image_title_text_1';
  $handler->display->display_options['fields']['field_file_image_title_text_1']['table'] = 'field_data_field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text_1']['field'] = 'field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text_1']['relationship'] = 'field_teaser_bild_fid';
  $handler->display->display_options['fields']['field_file_image_title_text_1']['label'] = '';
  $handler->display->display_options['fields']['field_file_image_title_text_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_title_text_1']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="wrapper-video-box">
<div class="video-box-image">
<a alt="[field_file_image_title_text_1]" title="[field_file_image_title_text_1]" class="videouebersicht_klein_bild_overlay_background" href="[path]" tabindex="-1"> </a>
[field_teaser_bild]
</div>
<div class="video-box-text">
<span class="spitzmarke">[field_spitzmarke]</span>
<h3 class="tsrUeberschrift">[field_teaser_titel]</h3>
<a href="[path]" class="more_link">[field_teaser_linktext]</a>
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['code'] = '###### Views Contextual Filter um aufgrund einer Node Reference den Inhalt zu laden. Muss ohne < ?php ? > angegeben werden. ######

## Der entitiy Typ, die zwei wichtigsten: node und user
		$entity_type=\'node\';

## Globale variablen der $node Laden (nicht immer nötig aber brauchbar zur Fehlervermeidung)
		global $node;

## Abfrage ob die Seite eine Node ist (Fehlervermeidung)
		if(arg(0)==\'node\' ){

				if(arg(0)==\'node\' && is_numeric(arg(1))){
				## Abfrage damit bei ansicht die richtige NodeID geladen wird (also die angezeigte)
							$nid = arg(1);
		}
			   
## Laden der Node				   
		$instance=node_load($nid);

## dein_field in das Feld ändern das abgefragt werden soll
		$instance_item1=field_get_items($entity_type,$instance, \'field_marginalspalte_vid_inhalt\');

## Inhalt des Feldes, bei Nodereference gibt diese eine NID zurück. Sollten nodeID´s Manuel in Textfeldern gespeichert werden muss aus \'nid\' \'value\' gemacht werden.
		$instance_item1value = $instance_item1[0][\'nid\'];

## Rückgabe der NodeID an Views um Inhalt der referenzierten Nid zu Laden. Muss "return" sein.
		return $instance_item1value;

}';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'video' => 'video',
  );

  /* Display: Kontakt Block */
  $handler = $view->new_display('block', 'Kontakt Block', 'block_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="kontakt-form">
<form name="kontaktblock" method="post" action="[path]">
<textarea id="kontaktblocktext" rows="5" cols="10" name="Frage">Geben Sie hier Ihr Anliegen ein ...</textarea>
<input id="edit-submit" class="form-submit" type="submit" value="Weiter" name="kontaktblock-submit">
</form>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Info */
  $handler->display->display_options['fields']['field_kontakt_info']['id'] = 'field_kontakt_info';
  $handler->display->display_options['fields']['field_kontakt_info']['table'] = 'field_data_field_kontakt_info';
  $handler->display->display_options['fields']['field_kontakt_info']['field'] = 'field_kontakt_info';
  $handler->display->display_options['fields']['field_kontakt_info']['label'] = '';
  $handler->display->display_options['fields']['field_kontakt_info']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kontakt_info']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kontakt_info']['type'] = 'text_plain';
  /* Field: Content: Kontaktzeiten */
  $handler->display->display_options['fields']['field_kontakt_zeiten']['id'] = 'field_kontakt_zeiten';
  $handler->display->display_options['fields']['field_kontakt_zeiten']['table'] = 'field_data_field_kontakt_zeiten';
  $handler->display->display_options['fields']['field_kontakt_zeiten']['field'] = 'field_kontakt_zeiten';
  $handler->display->display_options['fields']['field_kontakt_zeiten']['label'] = '';
  $handler->display->display_options['fields']['field_kontakt_zeiten']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kontakt_zeiten']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kontakt_zeiten']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_kontakt_zeiten']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_kontakt_zeiten']['separator'] = '<br>';
  /* Field: Content: Telefax */
  $handler->display->display_options['fields']['field_kontakt_telefax']['id'] = 'field_kontakt_telefax';
  $handler->display->display_options['fields']['field_kontakt_telefax']['table'] = 'field_data_field_kontakt_telefax';
  $handler->display->display_options['fields']['field_kontakt_telefax']['field'] = 'field_kontakt_telefax';
  $handler->display->display_options['fields']['field_kontakt_telefax']['label'] = '';
  $handler->display->display_options['fields']['field_kontakt_telefax']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kontakt_telefax']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kontakt_telefax']['type'] = 'text_plain';
  /* Field: Content: Telefon */
  $handler->display->display_options['fields']['field_kontakt_telefon']['id'] = 'field_kontakt_telefon';
  $handler->display->display_options['fields']['field_kontakt_telefon']['table'] = 'field_data_field_kontakt_telefon';
  $handler->display->display_options['fields']['field_kontakt_telefon']['field'] = 'field_kontakt_telefon';
  $handler->display->display_options['fields']['field_kontakt_telefon']['label'] = '';
  $handler->display->display_options['fields']['field_kontakt_telefon']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kontakt_telefon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kontakt_telefon']['type'] = 'text_plain';
  /* Field: Content: Text */
  $handler->display->display_options['fields']['field_kontaktblock_text']['id'] = 'field_kontaktblock_text';
  $handler->display->display_options['fields']['field_kontaktblock_text']['table'] = 'field_data_field_kontaktblock_text';
  $handler->display->display_options['fields']['field_kontaktblock_text']['field'] = 'field_kontaktblock_text';
  $handler->display->display_options['fields']['field_kontaktblock_text']['label'] = '';
  $handler->display->display_options['fields']['field_kontaktblock_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kontaktblock_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kontaktblock_text']['type'] = 'text_plain';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="kontaktblock">
<div class="kontakt-textblock">
<div class="kontakttext">[field_kontaktblock_text]</div>
<div class="kontaktzeiten">[field_kontakt_zeiten]</div>
<div class="kontakttel"><span>Telefon: </span>[field_kontakt_telefon]</div>
<div class="kontaktfax"><span>Telefax: </span>[field_kontakt_telefax]</div>
<div class="kontaktinfo">[field_kontakt_info]</div>
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['code'] = '		$entity_type=\'node\';

		global $node;

		if(arg(0)==\'node\' ){

				if(arg(0)==\'node\' && is_numeric(arg(1))){
							$nid = arg(1);
		}
			   
		$instance=node_load($nid);

		$instance_item1=field_get_items($entity_type,$instance, \'field_marginalspalte_kon_inhalt\');

		$instance_item1value = $instance_item1[0][\'nid\'];

		return $instance_item1value;

}';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'webform' => 'webform',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Universal Reference */
  $handler = $view->new_display('references', 'Universal Reference', 'references_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'references_style';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'references_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'universal' => 'universal',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['operator'] = '!=';
  $handler->display->display_options['filters']['nid']['value']['value'] = ' 479';

  /* Display: Universal Block */
  $handler = $view->new_display('block', 'Universal Block', 'block_3');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['element_type'] = 'section';
  $handler->display->display_options['style_options']['row']['first_class'] = '';
  $handler->display->display_options['style_options']['row']['last_class'] = '';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '';
  $handler->display->display_options['style_options']['row']['striping_classes'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 1;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'php' => array(
      'element_type' => '',
      'class' => '',
    ),
    'field_icon' => array(
      'element_type' => 'span',
      'class' => 'blockIcon',
    ),
    'field_spitzmarke' => array(
      'element_type' => 'h2',
      'class' => 'block-title',
    ),
    'field_universal_bild' => array(
      'element_type' => 'div',
      'class' => 'tsrImageWrapper',
    ),
    'title' => array(
      'element_type' => 'h3',
      'class' => 'tsrUeberschrift',
    ),
    'body' => array(
      'element_type' => 'div',
      'class' => 'blockContent',
    ),
    'field_linklist' => array(
      'element_type' => 'div',
      'class' => 'relatedLinksWrapper',
    ),
    'php_1' => array(
      'element_type' => '',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Universal Bild (field_universal_bild:fid) */
  $handler->display->display_options['relationships']['field_universal_bild_fid']['id'] = 'field_universal_bild_fid';
  $handler->display->display_options['relationships']['field_universal_bild_fid']['table'] = 'field_data_field_universal_bild';
  $handler->display->display_options['relationships']['field_universal_bild_fid']['field'] = 'field_universal_bild_fid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Icon */
  $handler->display->display_options['fields']['field_icon']['id'] = 'field_icon';
  $handler->display->display_options['fields']['field_icon']['table'] = 'field_data_field_icon';
  $handler->display->display_options['fields']['field_icon']['field'] = 'field_icon';
  $handler->display->display_options['fields']['field_icon']['label'] = '';
  $handler->display->display_options['fields']['field_icon']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_icon']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_icon']['settings'] = array(
    'image_style' => 'icon30x30',
    'image_link' => '',
  );
  /* Field: Field: Spitzmarke */
  $handler->display->display_options['fields']['field_spitzmarke']['id'] = 'field_spitzmarke';
  $handler->display->display_options['fields']['field_spitzmarke']['table'] = 'field_data_field_spitzmarke';
  $handler->display->display_options['fields']['field_spitzmarke']['field'] = 'field_spitzmarke';
  $handler->display->display_options['fields']['field_spitzmarke']['label'] = '';
  $handler->display->display_options['fields']['field_spitzmarke']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_spitzmarke']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['field_spitzmarke']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_spitzmarke']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_spitzmarke']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_spitzmarke']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_spitzmarke']['element_class'] = 'spitzmarke';
  $handler->display->display_options['fields']['field_spitzmarke']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spitzmarke']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_spitzmarke']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_spitzmarke']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_spitzmarke']['settings'] = array(
    'trim_length' => '30',
  );
  /* Field: File: Title Text */
  $handler->display->display_options['fields']['field_file_image_title_text']['id'] = 'field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['table'] = 'field_data_field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['field'] = 'field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['relationship'] = 'field_universal_bild_fid';
  $handler->display->display_options['fields']['field_file_image_title_text']['label'] = '';
  $handler->display->display_options['fields']['field_file_image_title_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_title_text']['element_label_colon'] = FALSE;
  /* Field: Content: Universal Bild */
  $handler->display->display_options['fields']['field_universal_bild']['id'] = 'field_universal_bild';
  $handler->display->display_options['fields']['field_universal_bild']['table'] = 'field_data_field_universal_bild';
  $handler->display->display_options['fields']['field_universal_bild']['field'] = 'field_universal_bild';
  $handler->display->display_options['fields']['field_universal_bild']['label'] = '';
  $handler->display->display_options['fields']['field_universal_bild']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_universal_bild']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_universal_bild']['alter']['text'] = '<div class="tsrImageWrapper">
<img src="[field_universal_bild]" alt="[field_file_image_title_text]" title="[field_file_image_title_text]">
</div>';
  $handler->display->display_options['fields']['field_universal_bild']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_universal_bild']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_universal_bild']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_universal_bild']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_universal_bild']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_universal_bild']['settings'] = array(
    'image_style' => 'tn60x60',
    'image_link' => '',
  );
  /* Field: Content: Block Titel */
  $handler->display->display_options['fields']['field_block_titel']['id'] = 'field_block_titel';
  $handler->display->display_options['fields']['field_block_titel']['table'] = 'field_data_field_block_titel';
  $handler->display->display_options['fields']['field_block_titel']['field'] = 'field_block_titel';
  $handler->display->display_options['fields']['field_block_titel']['label'] = '';
  $handler->display->display_options['fields']['field_block_titel']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_block_titel']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['field_block_titel']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_block_titel']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_block_titel']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_block_titel']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_block_titel']['hide_empty'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<div class="blockContent">[body]</div>';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '503';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '500',
  );
  /* Field: Content: Links: */
  $handler->display->display_options['fields']['field_linklist']['id'] = 'field_linklist';
  $handler->display->display_options['fields']['field_linklist']['table'] = 'field_data_field_linklist';
  $handler->display->display_options['fields']['field_linklist']['field'] = 'field_linklist';
  $handler->display->display_options['fields']['field_linklist']['label'] = '';
  $handler->display->display_options['fields']['field_linklist']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_linklist']['element_class'] = 'more_link';
  $handler->display->display_options['fields']['field_linklist']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linklist']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_linklist']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_linklist']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_linklist']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_linklist']['multi_type'] = 'ul';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="block-inner">
<span class="blockIcon">[field_icon]</span>
<h2 class="block-title">[field_spitzmarke]</h2>
[field_universal_bild]
<h3 class="tsrUeberschrift">[field_block_titel]</h3>
[body]
<div class="relatedLinksWrapper">[field_linklist]</div>
</div>';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['code'] = '		$entity_type=\'node\';

		global $node;

		if(arg(0)==\'node\' ){

				if(arg(0)==\'node\' && is_numeric(arg(1))){
							$nid = arg(1);
		}
			   
		$instance=node_load($nid);

		$instance_item1=field_get_items($entity_type,$instance, \'field_marginalspalte_uni_inhalt\');

		$instance_item1value = $instance_item1[0][\'nid\'];

		return $instance_item1value;

}';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'universal' => 'universal',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['operator'] = '!=';
  $handler->display->display_options['filters']['nid']['value']['value'] = ' 479';
  $translatables['marginal_bloecke'] = array(
    t('Master'),
    t('Marginal Blöcke'),
    t('mehr'),
    t('Anwenden'),
    t('Zurücksetzen'),
    t('Sortieren nach'),
    t('Aufsteigend'),
    t('Absteigend'),
    t('<div class="kontakt-form">
<form name="kontaktblock" method="post" action="[path]">
<textarea rows="5" cols="10" name="Frage">Geben Sie hier Ihr Anliegen ein ...</textarea>
<input id="edit-submit" class="form-submit" type="submit" value="Weiter" name="kontaktblock-submit">
</form>
</div>'),
    t('<div class="zitat-wrapper">
<div class="zitat-text">[body][field_zitat]</div>
<div class="zitat-bild">[field_bild_des_sprechers] </div>
<div class="zitat-sprecher-amt">[field_sprecher_amt] </div>
<div class="zitat-sprecher">[field_sprecher] </div>
<div class="zitat-ort">[field_zitat_ort]</div>
</div>'),
    t('Zitat Block'),
    t('more'),
    t('image from field_bild_des_sprechers'),
    t('<img src="[field_bild_des_sprechers]" alt="[field_file_image_title_text]" title="[field_file_image_title_text]">'),
    t('Zitat References'),
    t('Video Block'),
    t('image from field_teaser_bild'),
    t('Zum Video'),
    t('<div class="wrapper-video-box">
<div class="video-box-image">
<a alt="[field_file_image_title_text_1]" title="[field_file_image_title_text_1]" class="videouebersicht_klein_bild_overlay_background" href="[path]" tabindex="-1"> </a>
[field_teaser_bild]
</div>
<div class="video-box-text">
<span class="spitzmarke">[field_spitzmarke]</span>
<h3 class="tsrUeberschrift">[field_teaser_titel]</h3>
<a href="[path]" class="more_link">[field_teaser_linktext]</a>
</div>
</div>'),
    t('All'),
    t('Kontakt Block'),
    t('<div class="kontakt-form">
<form name="kontaktblock" method="post" action="[path]">
<textarea id="kontaktblocktext" rows="5" cols="10" name="Frage">Geben Sie hier Ihr Anliegen ein ...</textarea>
<input id="edit-submit" class="form-submit" type="submit" value="Weiter" name="kontaktblock-submit">
</form>
</div>'),
    t('<div class="kontaktblock">
<div class="kontakt-textblock">
<div class="kontakttext">[field_kontaktblock_text]</div>
<div class="kontaktzeiten">[field_kontakt_zeiten]</div>
<div class="kontakttel"><span>Telefon: </span>[field_kontakt_telefon]</div>
<div class="kontaktfax"><span>Telefax: </span>[field_kontakt_telefax]</div>
<div class="kontaktinfo">[field_kontakt_info]</div>
</div>
</div>'),
    t('Universal Reference'),
    t('Universal Block'),
    t('image from field_universal_bild'),
    t('<div class="tsrImageWrapper">
<img src="[field_universal_bild]" alt="[field_file_image_title_text]" title="[field_file_image_title_text]">
</div>'),
    t('<div class="blockContent">[body]</div>'),
    t('Custom text'),
    t('<div class="block-inner">
<span class="blockIcon">[field_icon]</span>
<h2 class="block-title">[field_spitzmarke]</h2>
[field_universal_bild]
<h3 class="tsrUeberschrift">[field_block_titel]</h3>
[body]
<div class="relatedLinksWrapper">[field_linklist]</div>
</div>'),
  );
  $export['marginal_bloecke'] = $view;

  $view = new view();
  $view->name = 'social_media';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Social Media Übersicht';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Social Media Übersicht';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '5';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['pager']['options']['tags']['first'] = '« Erste';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ Zurück';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'Weiter ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'Letzte »';
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['list']['element_type'] = 'ul';
  $handler->display->display_options['style_options']['list']['class'] = 'tsrListe socialMediaUebersicht';
  $handler->display->display_options['style_options']['row']['element_type'] = 'li';
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 1;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'nothing' => array(
      'element_type' => '',
      'class' => '',
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h1>Vernetzen Sie sich mit uns über Facebook, Twitter und Co.</h1>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Field: Content: Datum */
  $handler->display->display_options['fields']['field_datum_detailed']['id'] = 'field_datum_detailed';
  $handler->display->display_options['fields']['field_datum_detailed']['table'] = 'field_data_field_datum_detailed';
  $handler->display->display_options['fields']['field_datum_detailed']['field'] = 'field_datum_detailed';
  $handler->display->display_options['fields']['field_datum_detailed']['label'] = '';
  $handler->display->display_options['fields']['field_datum_detailed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_datum_detailed']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_datum_detailed']['element_class'] = 'spitzmarke';
  $handler->display->display_options['fields']['field_datum_detailed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_datum_detailed']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_datum_detailed']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_datum_detailed']['settings'] = array(
    'format_type' => 'date_dmy',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Name des Accountinhabers */
  $handler->display->display_options['fields']['field_sprecher']['id'] = 'field_sprecher';
  $handler->display->display_options['fields']['field_sprecher']['table'] = 'field_data_field_sprecher';
  $handler->display->display_options['fields']['field_sprecher']['field'] = 'field_sprecher';
  $handler->display->display_options['fields']['field_sprecher']['label'] = '';
  $handler->display->display_options['fields']['field_sprecher']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sprecher']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_sprecher']['element_class'] = 'sprecher';
  $handler->display->display_options['fields']['field_sprecher']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sprecher']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_sprecher']['hide_empty'] = TRUE;
  /* Field: File: Alternativtext */
  $handler->display->display_options['fields']['field_file_image_alt_text']['id'] = 'field_file_image_alt_text';
  $handler->display->display_options['fields']['field_file_image_alt_text']['table'] = 'field_data_field_file_image_alt_text';
  $handler->display->display_options['fields']['field_file_image_alt_text']['field'] = 'field_file_image_alt_text';
  $handler->display->display_options['fields']['field_file_image_alt_text']['relationship'] = 'field_bild_des_sprechers_fid';
  $handler->display->display_options['fields']['field_file_image_alt_text']['label'] = '';
  $handler->display->display_options['fields']['field_file_image_alt_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_alt_text']['element_label_colon'] = FALSE;
  /* Field: File: Title Text */
  $handler->display->display_options['fields']['field_file_image_title_text']['id'] = 'field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['table'] = 'field_data_field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['field'] = 'field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['relationship'] = 'field_bild_des_sprechers_fid';
  $handler->display->display_options['fields']['field_file_image_title_text']['label'] = '';
  $handler->display->display_options['fields']['field_file_image_title_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_title_text']['element_label_colon'] = FALSE;
  /* Field: Content: Bild des Accountinhabers */
  $handler->display->display_options['fields']['field_bild_des_sprechers']['id'] = 'field_bild_des_sprechers';
  $handler->display->display_options['fields']['field_bild_des_sprechers']['table'] = 'field_data_field_bild_des_sprechers';
  $handler->display->display_options['fields']['field_bild_des_sprechers']['field'] = 'field_bild_des_sprechers';
  $handler->display->display_options['fields']['field_bild_des_sprechers']['label'] = '';
  $handler->display->display_options['fields']['field_bild_des_sprechers']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_bild_des_sprechers']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_bild_des_sprechers']['alter']['text'] = '<div class="wrapperImage" title="[field_file_image_title_text]" alt="[field_file_image_alt_text]">[field_bild_des_sprechers]</div>';
  $handler->display->display_options['fields']['field_bild_des_sprechers']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bild_des_sprechers']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_bild_des_sprechers']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_bild_des_sprechers']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_bild_des_sprechers']['settings'] = array(
    'image_style' => 'tn130x130',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h2 class="socialmedia_titel">[title]</h2>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Content: Social Network */
  $handler->display->display_options['fields']['field_termref_socialnetwork']['id'] = 'field_termref_socialnetwork';
  $handler->display->display_options['fields']['field_termref_socialnetwork']['table'] = 'field_data_field_termref_socialnetwork';
  $handler->display->display_options['fields']['field_termref_socialnetwork']['field'] = 'field_termref_socialnetwork';
  $handler->display->display_options['fields']['field_termref_socialnetwork']['label'] = '';
  $handler->display->display_options['fields']['field_termref_socialnetwork']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_termref_socialnetwork']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_termref_socialnetwork']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_termref_socialnetwork']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_termref_socialnetwork']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Link zum Profil/Video */
  $handler->display->display_options['fields']['field_smi_url']['id'] = 'field_smi_url';
  $handler->display->display_options['fields']['field_smi_url']['table'] = 'field_data_field_smi_url';
  $handler->display->display_options['fields']['field_smi_url']['field'] = 'field_smi_url';
  $handler->display->display_options['fields']['field_smi_url']['label'] = '';
  $handler->display->display_options['fields']['field_smi_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_smi_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_smi_url']['alter']['text'] = 'AUF <a href="[field_smi_url]" alt="Unser Profil auf [field_termref_socialnetwork]: [field_smi_url]" title="Unser Profil auf [field_termref_socialnetwork]: [field_smi_url]">[field_termref_socialnetwork]</a>';
  $handler->display->display_options['fields']['field_smi_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_smi_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_smi_url']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_smi_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_smi_url']['type'] = 'link_plain';
  /* Field: Content: Textblock */
  $handler->display->display_options['fields']['field_smi_textblock']['id'] = 'field_smi_textblock';
  $handler->display->display_options['fields']['field_smi_textblock']['table'] = 'field_data_field_smi_textblock';
  $handler->display->display_options['fields']['field_smi_textblock']['field'] = 'field_smi_textblock';
  $handler->display->display_options['fields']['field_smi_textblock']['label'] = '';
  $handler->display->display_options['fields']['field_smi_textblock']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_smi_textblock']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_smi_textblock']['alter']['text'] = '<div class="tsrText">[field_smi_textblock]</div>';
  $handler->display->display_options['fields']['field_smi_textblock']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['field_smi_textblock']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_smi_textblock']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_smi_textblock']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_smi_textblock']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_smi_textblock']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="wrapperItem">
[field_bild_des_sprechers]
<div class="wrapperCopy">
<img width="16px" height="16px" class="networkIcon" src="/sites/default/themes/hessen_web_omega/css/images/socialmediafavicons/[field_termref_socialnetwork].png" title="Meldung von [field_termref_socialnetwork]" alt="Meldung von [field_termref_socialnetwork]">
[field_datum_detailed] [field_sprecher]
<h2 class="view_titel">[title]</h2>
[field_smi_url]
[field_smi_textblock]
</div>
</div>
<div class="clear"></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = TRUE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'socialmediaitem' => 'socialmediaitem',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Bild des Accountinhabers (field_bild_des_sprechers:fid) */
  $handler->display->display_options['relationships']['field_bild_des_sprechers_fid']['id'] = 'field_bild_des_sprechers_fid';
  $handler->display->display_options['relationships']['field_bild_des_sprechers_fid']['table'] = 'field_data_field_bild_des_sprechers';
  $handler->display->display_options['relationships']['field_bild_des_sprechers_fid']['field'] = 'field_bild_des_sprechers_fid';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'social';
  $handler->display->display_options['menu']['title'] = 'Social Media Übersicht';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $translatables['social_media'] = array(
    t('Master'),
    t('Social Media Übersicht'),
    t('more'),
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
    t('<h1>Vernetzen Sie sich mit uns über Facebook, Twitter und Co.</h1>'),
    t('<div class="wrapperImage" title="[field_file_image_title_text]" alt="[field_file_image_alt_text]">[field_bild_des_sprechers]</div>'),
    t('<h2 class="socialmedia_titel">[title]</h2>'),
    t('AUF <a href="[field_smi_url]" alt="Unser Profil auf [field_termref_socialnetwork]: [field_smi_url]" title="Unser Profil auf [field_termref_socialnetwork]: [field_smi_url]">[field_termref_socialnetwork]</a>'),
    t('<div class="tsrText">[field_smi_textblock]</div>'),
    t('<div class="wrapperItem">
[field_bild_des_sprechers]
<div class="wrapperCopy">
<img width="16px" height="16px" class="networkIcon" src="/sites/default/themes/hessen_web_omega/css/images/socialmediafavicons/[field_termref_socialnetwork].png" title="Meldung von [field_termref_socialnetwork]" alt="Meldung von [field_termref_socialnetwork]">
[field_datum_detailed] [field_sprecher]
<h2 class="view_titel">[title]</h2>
[field_smi_url]
[field_smi_textblock]
</div>
</div>
<div class="clear"></div>'),
    t('Block'),
    t('image from field_bild_des_sprechers'),
    t('Page'),
  );
  $export['social_media'] = $view;

  $view = new view();
  $view->name = 'verwandte_inhalte';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Verwandte Inhalte';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Weitere Inhalte zum Thema';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['element_type'] = '';
  $handler->display->display_options['style_options']['row']['first_class'] = '';
  $handler->display->display_options['style_options']['row']['last_class'] = '';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '';
  $handler->display->display_options['style_options']['row']['striping_classes'] = '';
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 1;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'field_fc_verwandte_inhalte' => array(
      'element_type' => '',
      'class' => '',
    ),
  );
  /* Field: Content: Verwandte Inhalte */
  $handler->display->display_options['fields']['field_fc_verwandte_inhalte']['id'] = 'field_fc_verwandte_inhalte';
  $handler->display->display_options['fields']['field_fc_verwandte_inhalte']['table'] = 'field_data_field_fc_verwandte_inhalte';
  $handler->display->display_options['fields']['field_fc_verwandte_inhalte']['field'] = 'field_fc_verwandte_inhalte';
  $handler->display->display_options['fields']['field_fc_verwandte_inhalte']['label'] = '';
  $handler->display->display_options['fields']['field_fc_verwandte_inhalte']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_fc_verwandte_inhalte']['alter']['preserve_tags'] = '<span> <h3> <a>';
  $handler->display->display_options['fields']['field_fc_verwandte_inhalte']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fc_verwandte_inhalte']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_fc_verwandte_inhalte']['empty'] = 'Keine verwandten Inhalte vorhanden.';
  $handler->display->display_options['fields']['field_fc_verwandte_inhalte']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_fc_verwandte_inhalte']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_fc_verwandte_inhalte']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_fc_verwandte_inhalte']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_fc_verwandte_inhalte']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_fc_verwandte_inhalte']['separator'] = '';
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
  /* Filter criterion: Content: Verwandte Inhalte Block  (field_verwandte_inhalte_block_) */
  $handler->display->display_options['filters']['field_verwandte_inhalte_block__value']['id'] = 'field_verwandte_inhalte_block__value';
  $handler->display->display_options['filters']['field_verwandte_inhalte_block__value']['table'] = 'field_data_field_verwandte_inhalte_block_';
  $handler->display->display_options['filters']['field_verwandte_inhalte_block__value']['field'] = 'field_verwandte_inhalte_block__value';
  $handler->display->display_options['filters']['field_verwandte_inhalte_block__value']['value'] = array(
    1 => '1',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $translatables['verwandte_inhalte'] = array(
    t('Master'),
    t('Weitere Inhalte zum Thema'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Keine verwandten Inhalte vorhanden.'),
    t('All'),
    t('Block'),
  );
  $export['verwandte_inhalte'] = $view;

  return $export;
}
