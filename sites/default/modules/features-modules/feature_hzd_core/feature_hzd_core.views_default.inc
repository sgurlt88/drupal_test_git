<?php
/**
 * @file
 * feature_hzd_core.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_hzd_core_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'frontpage_empfehlung';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Frontpage: Empfehlung der Redaktion';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Frontpage: Empfehlung der Redaktion';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['row_class'] = 'empfehlung_row';
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
    'field_titel' => 0,
    'field_universal_spitzmarke' => 0,
    'field_link' => 0,
    'field_bild' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_titel' => 0,
    'field_universal_spitzmarke' => 0,
    'field_link' => 0,
    'field_bild' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['effect'] = 'scrollHorz';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['pause'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['action_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '3';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Teaserspitzmarke */
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['id'] = 'field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['table'] = 'field_data_field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['field'] = 'field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['element_label_colon'] = FALSE;
  /* Field: Content: Teaser-Titel */
  $handler->display->display_options['fields']['field_teaser_titel']['id'] = 'field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['table'] = 'field_data_field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['field'] = 'field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_titel']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_titel']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Link zum externen Inhalt */
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['id'] = 'field_link_zum_externen_inhalt';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['table'] = 'field_data_field_link_zum_externen_inhalt';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['field'] = 'field_link_zum_externen_inhalt';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['label'] = '';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['empty'] = '[path]';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['click_sort_column'] = 'url';
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
    'artikel' => 'artikel',
    'pressemitteilung' => 'pressemitteilung',
  );
  /* Filter criterion: Content: Empfehlung der Redaktion (field_empfehlung_der_redaktion) */
  $handler->display->display_options['filters']['field_empfehlung_der_redaktion_value']['id'] = 'field_empfehlung_der_redaktion_value';
  $handler->display->display_options['filters']['field_empfehlung_der_redaktion_value']['table'] = 'field_data_field_empfehlung_der_redaktion';
  $handler->display->display_options['filters']['field_empfehlung_der_redaktion_value']['field'] = 'field_empfehlung_der_redaktion_value';
  $handler->display->display_options['filters']['field_empfehlung_der_redaktion_value']['value'] = array(
    'Ja' => 'Ja',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Teaserspitzmarke */
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['id'] = 'field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['table'] = 'field_data_field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['field'] = 'field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['element_label_colon'] = FALSE;
  /* Field: Content: Teaser-Titel */
  $handler->display->display_options['fields']['field_teaser_titel']['id'] = 'field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['table'] = 'field_data_field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['field'] = 'field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_titel']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_titel']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Link zum externen Inhalt */
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['id'] = 'field_link_zum_externen_inhalt';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['table'] = 'field_data_field_link_zum_externen_inhalt';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['field'] = 'field_link_zum_externen_inhalt';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['label'] = '';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['empty'] = '[path]';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['click_sort_column'] = 'url';
  /* Field: Content: Teaser Bild */
  $handler->display->display_options['fields']['field_teaser_bild']['id'] = 'field_teaser_bild';
  $handler->display->display_options['fields']['field_teaser_bild']['table'] = 'field_data_field_teaser_bild';
  $handler->display->display_options['fields']['field_teaser_bild']['field'] = 'field_teaser_bild';
  $handler->display->display_options['fields']['field_teaser_bild']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_bild']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_bild']['alter']['text'] = ' <div class="demo">
                <div id="capslide_img_cont3" class="ic_container">
                    [field_teaser_bild]
                    <div class="overlay" style="display:none;"></div>
                    <div class="ic_caption">
                        <p class="ic_category"><span class="spitzmarke">[field_teaser_spitzmarke]</span></p>
                        <div class="ic_text"><h3>[field_teaser_titel]</h3>
                        <p >
                           [field_link_zum_externen_inhalt]
                        </p></div>
                    </div>
                </div>
            </div>';
  $handler->display->display_options['fields']['field_teaser_bild']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_bild']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_teaser_bild']['settings'] = array(
    'image_style' => 'empfehlung_der_redaktion',
    'image_link' => '',
  );
  $handler->display->display_options['block_description'] = 'Empfehlung der Redaktion Frontpage';

  /* Display: Centerpage_Block */
  $handler = $view->new_display('block', 'Centerpage_Block', 'block_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['style_options']['wrap'] = 'circular';
  $handler->display->display_options['style_options']['visible'] = '3';
  $handler->display->display_options['style_options']['scroll'] = '1';
  $handler->display->display_options['style_options']['auto'] = '0';
  $handler->display->display_options['style_options']['autoPause'] = 1;
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['style_options']['ajax'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Teaserspitzmarke */
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['id'] = 'field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['table'] = 'field_data_field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['field'] = 'field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['settings'] = array(
    'trim_length' => '30',
  );
  /* Field: Content: Teaser-Titel */
  $handler->display->display_options['fields']['field_teaser_titel']['id'] = 'field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['table'] = 'field_data_field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['field'] = 'field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_titel']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_titel']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_titel']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_teaser_titel']['settings'] = array(
    'trim_length' => '30',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = 'Weiterlesen';
  $handler->display->display_options['fields']['path']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Link zum externen Inhalt */
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['id'] = 'field_link_zum_externen_inhalt';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['table'] = 'field_data_field_link_zum_externen_inhalt';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['field'] = 'field_link_zum_externen_inhalt';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['label'] = '';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['alter']['text'] = 'Weiterlesen';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['alter']['path'] = '[field_link_zum_externen_inhalt]';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['empty'] = '[path]';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['type'] = 'link_plain';
  /* Field: Content: Teaser Bild */
  $handler->display->display_options['fields']['field_teaser_bild']['id'] = 'field_teaser_bild';
  $handler->display->display_options['fields']['field_teaser_bild']['table'] = 'field_data_field_teaser_bild';
  $handler->display->display_options['fields']['field_teaser_bild']['field'] = 'field_teaser_bild';
  $handler->display->display_options['fields']['field_teaser_bild']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_bild']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_bild']['alter']['text'] = '<div class="demo">
                <div id="capslide_img_cont3" class="ic_container">
                    [field_teaser_bild]
                    
                    <div class="ic_caption">
                        <div class="ic_category"><span class="spitzmarke">[field_teaser_spitzmarke]&nbsp;</span></div>
                        <div class="ic_text"><h3>[field_teaser_titel]</h3>
                           [field_link_zum_externen_inhalt]
                        </div>
                    </div>
                </div>
            </div>';
  $handler->display->display_options['fields']['field_teaser_bild']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_bild']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_teaser_bild']['settings'] = array(
    'image_style' => 'empfehlung_der_redaktion',
    'image_link' => '',
  );
  $handler->display->display_options['block_description'] = 'Empfehlung der Redaktion Centerpage';

  /* Display: Social_Media_Block */
  $handler = $view->new_display('block', 'Social_Media_Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Empfehlung der Redaktion';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['style_options']['wrap'] = 'circular';
  $handler->display->display_options['style_options']['visible'] = '3';
  $handler->display->display_options['style_options']['scroll'] = '1';
  $handler->display->display_options['style_options']['auto'] = '0';
  $handler->display->display_options['style_options']['autoPause'] = 1;
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Teaserspitzmarke */
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['id'] = 'field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['table'] = 'field_data_field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['field'] = 'field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['settings'] = array(
    'trim_length' => '30',
  );
  /* Field: Content: Teaser-Titel */
  $handler->display->display_options['fields']['field_teaser_titel']['id'] = 'field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['table'] = 'field_data_field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['field'] = 'field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_titel']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_titel']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_titel']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_teaser_titel']['settings'] = array(
    'trim_length' => '30',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = 'Weiterlesen';
  $handler->display->display_options['fields']['path']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Link zum externen Inhalt */
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['id'] = 'field_link_zum_externen_inhalt';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['table'] = 'field_data_field_link_zum_externen_inhalt';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['field'] = 'field_link_zum_externen_inhalt';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['label'] = '';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['alter']['text'] = 'Weiterlesen';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['alter']['path'] = '[field_link_zum_externen_inhalt]';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['empty'] = '[path]';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['type'] = 'link_plain';
  /* Field: Content: Teaser Bild */
  $handler->display->display_options['fields']['field_teaser_bild']['id'] = 'field_teaser_bild';
  $handler->display->display_options['fields']['field_teaser_bild']['table'] = 'field_data_field_teaser_bild';
  $handler->display->display_options['fields']['field_teaser_bild']['field'] = 'field_teaser_bild';
  $handler->display->display_options['fields']['field_teaser_bild']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_bild']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_bild']['alter']['text'] = '<div class="demo">
                <div id="capslide_img_cont3" class="ic_container">
                    [field_teaser_bild]
                    <div class="ic_caption">
                        <div class="ic_category"><span class="spitzmarke">[field_teaser_spitzmarke]</span></p>
                        <div class="ic_text"><h3>[field_teaser_titel]</h3>
                           [field_link_zum_externen_inhalt]
                        </div>
                    </div>
                </div>
            </div>';
  $handler->display->display_options['fields']['field_teaser_bild']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_bild']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_teaser_bild']['settings'] = array(
    'image_style' => 'empfehlung_der_redaktion',
    'image_link' => '',
  );
  $handler->display->display_options['block_description'] = 'Empfehlung der Redaktion Social Media';

  /* Display: Empfehlung_Carousel */
  $handler = $view->new_display('block', 'Empfehlung_Carousel', 'block_3');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['style_options']['wrap'] = 'circular';
  $handler->display->display_options['style_options']['visible'] = '3';
  $handler->display->display_options['style_options']['scroll'] = '1';
  $handler->display->display_options['style_options']['auto'] = '0';
  $handler->display->display_options['style_options']['autoPause'] = 1;
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['style_options']['ajax'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Teaserspitzmarke */
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['id'] = 'field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['table'] = 'field_data_field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['field'] = 'field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['settings'] = array(
    'trim_length' => '30',
  );
  /* Field: Content: Empfehlung Teaserspitzmarke */
  $handler->display->display_options['fields']['field_edr_teaserspitzmarke']['id'] = 'field_edr_teaserspitzmarke';
  $handler->display->display_options['fields']['field_edr_teaserspitzmarke']['table'] = 'field_data_field_edr_teaserspitzmarke';
  $handler->display->display_options['fields']['field_edr_teaserspitzmarke']['field'] = 'field_edr_teaserspitzmarke';
  $handler->display->display_options['fields']['field_edr_teaserspitzmarke']['label'] = '';
  $handler->display->display_options['fields']['field_edr_teaserspitzmarke']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_edr_teaserspitzmarke']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['field_edr_teaserspitzmarke']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_edr_teaserspitzmarke']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_edr_teaserspitzmarke']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_edr_teaserspitzmarke']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_edr_teaserspitzmarke']['empty'] = '[field_teaser_spitzmarke]';
  $handler->display->display_options['fields']['field_edr_teaserspitzmarke']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_edr_teaserspitzmarke']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Teaser-Titel */
  $handler->display->display_options['fields']['field_teaser_titel']['id'] = 'field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['table'] = 'field_data_field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['field'] = 'field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_titel']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_titel']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_titel']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_teaser_titel']['settings'] = array(
    'trim_length' => '30',
  );
  /* Field: Content: Empfehlung Teasertitel */
  $handler->display->display_options['fields']['field_edr_teasertitel']['id'] = 'field_edr_teasertitel';
  $handler->display->display_options['fields']['field_edr_teasertitel']['table'] = 'field_data_field_edr_teasertitel';
  $handler->display->display_options['fields']['field_edr_teasertitel']['field'] = 'field_edr_teasertitel';
  $handler->display->display_options['fields']['field_edr_teasertitel']['label'] = '';
  $handler->display->display_options['fields']['field_edr_teasertitel']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_edr_teasertitel']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['field_edr_teasertitel']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_edr_teasertitel']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_edr_teasertitel']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_edr_teasertitel']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_edr_teasertitel']['empty'] = '[field_teaser_titel]';
  $handler->display->display_options['fields']['field_edr_teasertitel']['type'] = 'text_plain';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '<span class="more_link_white">Weiterlesen</span>';
  $handler->display->display_options['fields']['path']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Link zum externen Inhalt */
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['id'] = 'field_link_zum_externen_inhalt';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['table'] = 'field_data_field_link_zum_externen_inhalt';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['field'] = 'field_link_zum_externen_inhalt';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['label'] = '';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['alter']['text'] = '<span class="more_link_white">Weiterlesen</span>';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['alter']['path'] = '[field_link_zum_externen_inhalt]';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['empty'] = '[path]';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['type'] = 'link_url';
  /* Field: Content: Teaser Bild */
  $handler->display->display_options['fields']['field_teaser_bild']['id'] = 'field_teaser_bild';
  $handler->display->display_options['fields']['field_teaser_bild']['table'] = 'field_data_field_teaser_bild';
  $handler->display->display_options['fields']['field_teaser_bild']['field'] = 'field_teaser_bild';
  $handler->display->display_options['fields']['field_teaser_bild']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_bild']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_bild']['alter']['text'] = '<div class="demo">
                <div id="capslide_img_cont3" class="ic_container">
                    [field_teaser_bild]

                    <div class="ic_caption"><div class="ic_category"><span class="spitzmarke">[field_edr_teaserspitzmarke]</span></div>                        
                        <div class="ic_text"><h3>[field_edr_teasertitel]</h3>
                           [field_link_zum_externen_inhalt]
                        </div>
                    </div>
                </div>
            </div>';
  $handler->display->display_options['fields']['field_teaser_bild']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_bild']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_teaser_bild']['settings'] = array(
    'image_style' => 'empfehlung_der_redaktion',
    'image_link' => '',
  );
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
    'artikel' => 'artikel',
    'pressemitteilung' => 'pressemitteilung',
  );
  /* Filter criterion: Content: Empfehlung der Redaktion (field_empfehlung_der_redaktion) */
  $handler->display->display_options['filters']['field_empfehlung_der_redaktion_value']['id'] = 'field_empfehlung_der_redaktion_value';
  $handler->display->display_options['filters']['field_empfehlung_der_redaktion_value']['table'] = 'field_data_field_empfehlung_der_redaktion';
  $handler->display->display_options['filters']['field_empfehlung_der_redaktion_value']['field'] = 'field_empfehlung_der_redaktion_value';
  $handler->display->display_options['filters']['field_empfehlung_der_redaktion_value']['value'] = array(
    'Ja' => 'Ja',
  );
  /* Filter criterion: Content: Hidden */
  $handler->display->display_options['filters']['hidden']['id'] = 'hidden';
  $handler->display->display_options['filters']['hidden']['table'] = 'hidden_nodes';
  $handler->display->display_options['filters']['hidden']['field'] = 'hidden';
  $handler->display->display_options['filters']['hidden']['value'] = '0';

  /* Display: Empfehlung_Carousel unpublished */
  $handler = $view->new_display('block', 'Empfehlung_Carousel unpublished', 'block_4');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['style_options']['wrap'] = 'circular';
  $handler->display->display_options['style_options']['visible'] = '3';
  $handler->display->display_options['style_options']['scroll'] = '1';
  $handler->display->display_options['style_options']['auto'] = '0';
  $handler->display->display_options['style_options']['autoPause'] = 1;
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['style_options']['ajax'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Teaserspitzmarke */
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['id'] = 'field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['table'] = 'field_data_field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['field'] = 'field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['settings'] = array(
    'trim_length' => '30',
  );
  /* Field: Content: Empfehlung Teaserspitzmarke */
  $handler->display->display_options['fields']['field_edr_teaserspitzmarke']['id'] = 'field_edr_teaserspitzmarke';
  $handler->display->display_options['fields']['field_edr_teaserspitzmarke']['table'] = 'field_data_field_edr_teaserspitzmarke';
  $handler->display->display_options['fields']['field_edr_teaserspitzmarke']['field'] = 'field_edr_teaserspitzmarke';
  $handler->display->display_options['fields']['field_edr_teaserspitzmarke']['label'] = '';
  $handler->display->display_options['fields']['field_edr_teaserspitzmarke']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_edr_teaserspitzmarke']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['field_edr_teaserspitzmarke']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_edr_teaserspitzmarke']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_edr_teaserspitzmarke']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_edr_teaserspitzmarke']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_edr_teaserspitzmarke']['empty'] = '[field_teaser_spitzmarke]';
  $handler->display->display_options['fields']['field_edr_teaserspitzmarke']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_edr_teaserspitzmarke']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Teaser-Titel */
  $handler->display->display_options['fields']['field_teaser_titel']['id'] = 'field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['table'] = 'field_data_field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['field'] = 'field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_titel']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_titel']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_titel']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_teaser_titel']['settings'] = array(
    'trim_length' => '30',
  );
  /* Field: Content: Empfehlung Teasertitel */
  $handler->display->display_options['fields']['field_edr_teasertitel']['id'] = 'field_edr_teasertitel';
  $handler->display->display_options['fields']['field_edr_teasertitel']['table'] = 'field_data_field_edr_teasertitel';
  $handler->display->display_options['fields']['field_edr_teasertitel']['field'] = 'field_edr_teasertitel';
  $handler->display->display_options['fields']['field_edr_teasertitel']['label'] = '';
  $handler->display->display_options['fields']['field_edr_teasertitel']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_edr_teasertitel']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['field_edr_teasertitel']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_edr_teasertitel']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_edr_teasertitel']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_edr_teasertitel']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_edr_teasertitel']['empty'] = '[field_teaser_titel]';
  $handler->display->display_options['fields']['field_edr_teasertitel']['type'] = 'text_plain';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '<span class="more_link_white">Weiterlesen</span>';
  $handler->display->display_options['fields']['path']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Link zum externen Inhalt */
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['id'] = 'field_link_zum_externen_inhalt';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['table'] = 'field_data_field_link_zum_externen_inhalt';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['field'] = 'field_link_zum_externen_inhalt';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['label'] = '';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['alter']['text'] = '<span class="more_link_white">Weiterlesen</span>';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['alter']['path'] = '[field_link_zum_externen_inhalt]';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['empty'] = '[path]';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['type'] = 'link_url';
  /* Field: Content: Teaser Bild */
  $handler->display->display_options['fields']['field_teaser_bild']['id'] = 'field_teaser_bild';
  $handler->display->display_options['fields']['field_teaser_bild']['table'] = 'field_data_field_teaser_bild';
  $handler->display->display_options['fields']['field_teaser_bild']['field'] = 'field_teaser_bild';
  $handler->display->display_options['fields']['field_teaser_bild']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_bild']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_bild']['alter']['text'] = '<div class="demo">
                <div id="capslide_img_cont3" class="ic_container">
                    [field_teaser_bild]

                    <div class="ic_caption"><div class="ic_category"><span class="spitzmarke">[field_edr_teaserspitzmarke]</span></div>                        
                        <div class="ic_text"><h3>[field_edr_teasertitel]</h3>
                           [field_link_zum_externen_inhalt]
                        </div>
                    </div>
                </div>
            </div>';
  $handler->display->display_options['fields']['field_teaser_bild']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_bild']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_teaser_bild']['settings'] = array(
    'image_style' => 'empfehlung_der_redaktion',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'artikel' => 'artikel',
    'pressemitteilung' => 'pressemitteilung',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Empfehlung der Redaktion (field_empfehlung_der_redaktion) */
  $handler->display->display_options['filters']['field_empfehlung_der_redaktion_value']['id'] = 'field_empfehlung_der_redaktion_value';
  $handler->display->display_options['filters']['field_empfehlung_der_redaktion_value']['table'] = 'field_data_field_empfehlung_der_redaktion';
  $handler->display->display_options['filters']['field_empfehlung_der_redaktion_value']['field'] = 'field_empfehlung_der_redaktion_value';
  $handler->display->display_options['filters']['field_empfehlung_der_redaktion_value']['value'] = array(
    'Ja' => 'Ja',
  );
  $handler->display->display_options['filters']['field_empfehlung_der_redaktion_value']['group'] = 1;
  /* Filter criterion: Domain Access: Available on current domain */
  $handler->display->display_options['filters']['current_all']['id'] = 'current_all';
  $handler->display->display_options['filters']['current_all']['table'] = 'domain_access';
  $handler->display->display_options['filters']['current_all']['field'] = 'current_all';
  $handler->display->display_options['filters']['current_all']['value'] = '1';
  $translatables['frontpage_empfehlung'] = array(
    t('Master'),
    t('Frontpage: Empfehlung der Redaktion'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('[path]'),
    t('Block'),
    t(' <div class="demo">
                <div id="capslide_img_cont3" class="ic_container">
                    [field_teaser_bild]
                    <div class="overlay" style="display:none;"></div>
                    <div class="ic_caption">
                        <p class="ic_category"><span class="spitzmarke">[field_teaser_spitzmarke]</span></p>
                        <div class="ic_text"><h3>[field_teaser_titel]</h3>
                        <p >
                           [field_link_zum_externen_inhalt]
                        </p></div>
                    </div>
                </div>
            </div>'),
    t('Empfehlung der Redaktion Frontpage'),
    t('Centerpage_Block'),
    t('Weiterlesen'),
    t('<div class="demo">
                <div id="capslide_img_cont3" class="ic_container">
                    [field_teaser_bild]
                    
                    <div class="ic_caption">
                        <div class="ic_category"><span class="spitzmarke">[field_teaser_spitzmarke]&nbsp;</span></div>
                        <div class="ic_text"><h3>[field_teaser_titel]</h3>
                           [field_link_zum_externen_inhalt]
                        </div>
                    </div>
                </div>
            </div>'),
    t('Empfehlung der Redaktion Centerpage'),
    t('Social_Media_Block'),
    t('Empfehlung der Redaktion'),
    t('<div class="demo">
                <div id="capslide_img_cont3" class="ic_container">
                    [field_teaser_bild]
                    <div class="ic_caption">
                        <div class="ic_category"><span class="spitzmarke">[field_teaser_spitzmarke]</span></p>
                        <div class="ic_text"><h3>[field_teaser_titel]</h3>
                           [field_link_zum_externen_inhalt]
                        </div>
                    </div>
                </div>
            </div>'),
    t('Empfehlung der Redaktion Social Media'),
    t('Empfehlung_Carousel'),
    t('[field_teaser_spitzmarke]'),
    t('[field_teaser_titel]'),
    t('<span class="more_link_white">Weiterlesen</span>'),
    t('<div class="demo">
                <div id="capslide_img_cont3" class="ic_container">
                    [field_teaser_bild]

                    <div class="ic_caption"><div class="ic_category"><span class="spitzmarke">[field_edr_teaserspitzmarke]</span></div>                        
                        <div class="ic_text"><h3>[field_edr_teasertitel]</h3>
                           [field_link_zum_externen_inhalt]
                        </div>
                    </div>
                </div>
            </div>'),
    t('Empfehlung_Carousel unpublished'),
  );
  $export['frontpage_empfehlung'] = $view;

  $view = new view();
  $view->name = 'frontpage_sliderbuehne_und_header';
  $view->description = 'Frontpage: Sliderbuehne und Header';
  $view->tag = 'HeaderSlider';
  $view->base_table = 'node';
  $view->human_name = 'Frontpage HeaderSlider';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Frontpage headerSlider';
  $handler->display->display_options['css_class'] = 'headerSlider';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['style_options']['wrap'] = 'circular';
  $handler->display->display_options['style_options']['visible'] = '3';
  $handler->display->display_options['style_options']['scroll'] = '1';
  $handler->display->display_options['style_options']['auto'] = '0';
  $handler->display->display_options['style_options']['autoPause'] = 1;
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['style_options']['ajax'] = 1;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 1;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'h2',
      'class' => 'tsrHeadline',
    ),
  );
  /* Relationship: Content: Teaser Bild (field_teaser_bild:fid) */
  $handler->display->display_options['relationships']['field_teaser_bild_fid']['id'] = 'field_teaser_bild_fid';
  $handler->display->display_options['relationships']['field_teaser_bild_fid']['table'] = 'field_data_field_teaser_bild';
  $handler->display->display_options['relationships']['field_teaser_bild_fid']['field'] = 'field_teaser_bild_fid';
  /* Field: Content: Teaser */
  $handler->display->display_options['fields']['field_teaser']['id'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['table'] = 'field_data_field_teaser';
  $handler->display->display_options['fields']['field_teaser']['field'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_teaser']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['field_teaser']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser']['type'] = 'text_plain';
  /* Field: Content: Sliderbühne Teasertext */
  $handler->display->display_options['fields']['field_sb_teasertext']['id'] = 'field_sb_teasertext';
  $handler->display->display_options['fields']['field_sb_teasertext']['table'] = 'field_data_field_sb_teasertext';
  $handler->display->display_options['fields']['field_sb_teasertext']['field'] = 'field_sb_teasertext';
  $handler->display->display_options['fields']['field_sb_teasertext']['label'] = '';
  $handler->display->display_options['fields']['field_sb_teasertext']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sb_teasertext']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['field_sb_teasertext']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_sb_teasertext']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sb_teasertext']['empty'] = '[field_teaser]';
  $handler->display->display_options['fields']['field_sb_teasertext']['type'] = 'text_plain';
  /* Field: Content: Teaser-Titel */
  $handler->display->display_options['fields']['field_teaser_titel']['id'] = 'field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['table'] = 'field_data_field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['field'] = 'field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_titel']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['max_length'] = '40';
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_titel']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_titel']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_teaser_titel']['settings'] = array(
    'trim_length' => '40',
  );
  /* Field: Content: Sliderbühne Teasertitel */
  $handler->display->display_options['fields']['field_sb_teasertitel']['id'] = 'field_sb_teasertitel';
  $handler->display->display_options['fields']['field_sb_teasertitel']['table'] = 'field_data_field_sb_teasertitel';
  $handler->display->display_options['fields']['field_sb_teasertitel']['field'] = 'field_sb_teasertitel';
  $handler->display->display_options['fields']['field_sb_teasertitel']['label'] = '';
  $handler->display->display_options['fields']['field_sb_teasertitel']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sb_teasertitel']['alter']['max_length'] = '40';
  $handler->display->display_options['fields']['field_sb_teasertitel']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_sb_teasertitel']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_sb_teasertitel']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_sb_teasertitel']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sb_teasertitel']['empty'] = '[field_teaser_titel]';
  $handler->display->display_options['fields']['field_sb_teasertitel']['type'] = 'text_plain';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '<a href="[path]">Weiterlesen</a>';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Link zum externen Inhalt */
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['id'] = 'field_link_zum_externen_inhalt';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['table'] = 'field_data_field_link_zum_externen_inhalt';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['field'] = 'field_link_zum_externen_inhalt';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['label'] = '';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['alter']['text'] = 'Weiterlesen';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['alter']['path'] = '[field_link_zum_externen_inhalt]';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['empty'] = '[path]';
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
  $handler->display->display_options['fields']['field_teaser_bild']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_bild']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_bild']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_bild']['alter']['text'] = '<img src="[field_teaser_bild]" alt="[field_file_image_title_text]" title="[field_file_image_title_text]">';
  $handler->display->display_options['fields']['field_teaser_bild']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_bild']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_teaser_bild']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_teaser_bild']['settings'] = array(
    'image_style' => 'tn60x60',
    'image_link' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '	<div class="content">
	<div class="animatebox closeanimate">
	<div class="arrow_up inactive" height="35px"></div><p class="boxtitle">[field_sb_teasertitel]</p>
	<div class="clear-buehne"></div>
	 <div class="hiddenstuff">[field_teaser_bild]<p>[field_sb_teasertext]<br>
	<span class="more_link_white">[field_link_zum_externen_inhalt]</span></p></div>
	</div>
	</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
    'artikel' => 'artikel',
    'pressemitteilung' => 'pressemitteilung',
  );
  /* Filter criterion: Content: Sliderbühne (field_sliderbuehne) */
  $handler->display->display_options['filters']['field_sliderbuehne_value']['id'] = 'field_sliderbuehne_value';
  $handler->display->display_options['filters']['field_sliderbuehne_value']['table'] = 'field_data_field_sliderbuehne';
  $handler->display->display_options['filters']['field_sliderbuehne_value']['field'] = 'field_sliderbuehne_value';
  $handler->display->display_options['filters']['field_sliderbuehne_value']['value'] = array(
    'Ja' => 'Ja',
  );

  /* Display: Views-Block Header Slider */
  $handler = $view->new_display('block', 'Views-Block Header Slider', 'viewsblock_headerslider');
  $handler->display->display_options['display_description'] = 'Views-Block Sliderbühne Header';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'artikel' => 'artikel',
    'pressemitteilung' => 'pressemitteilung',
  );
  /* Filter criterion: Content: Sliderbühne (field_sliderbuehne) */
  $handler->display->display_options['filters']['field_sliderbuehne_value']['id'] = 'field_sliderbuehne_value';
  $handler->display->display_options['filters']['field_sliderbuehne_value']['table'] = 'field_data_field_sliderbuehne';
  $handler->display->display_options['filters']['field_sliderbuehne_value']['field'] = 'field_sliderbuehne_value';
  $handler->display->display_options['filters']['field_sliderbuehne_value']['value'] = array(
    'Ja' => 'Ja',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Hidden */
  $handler->display->display_options['filters']['hidden']['id'] = 'hidden';
  $handler->display->display_options['filters']['hidden']['table'] = 'hidden_nodes';
  $handler->display->display_options['filters']['hidden']['field'] = 'hidden';
  $handler->display->display_options['filters']['hidden']['value'] = '0';
  $handler->display->display_options['block_description'] = 'Header-Elemente';

  /* Display: Views-Block Header Slider Unpublished */
  $handler = $view->new_display('block', 'Views-Block Header Slider Unpublished', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Frontpage headerSlider Unpublished';
  $handler->display->display_options['display_description'] = 'Views-Block Sliderbühne Header';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'artikel' => 'artikel',
    'pressemitteilung' => 'pressemitteilung',
  );
  /* Filter criterion: Content: Sliderbühne (field_sliderbuehne) */
  $handler->display->display_options['filters']['field_sliderbuehne_value']['id'] = 'field_sliderbuehne_value';
  $handler->display->display_options['filters']['field_sliderbuehne_value']['table'] = 'field_data_field_sliderbuehne';
  $handler->display->display_options['filters']['field_sliderbuehne_value']['field'] = 'field_sliderbuehne_value';
  $handler->display->display_options['filters']['field_sliderbuehne_value']['value'] = array(
    'Ja' => 'Ja',
  );
  /* Filter criterion: Domain Access: Available on current domain */
  $handler->display->display_options['filters']['current_all']['id'] = 'current_all';
  $handler->display->display_options['filters']['current_all']['table'] = 'domain_access';
  $handler->display->display_options['filters']['current_all']['field'] = 'current_all';
  $handler->display->display_options['filters']['current_all']['value'] = '1';
  $handler->display->display_options['block_description'] = 'Header-Elemente Unpublished';
  $translatables['frontpage_sliderbuehne_und_header'] = array(
    t('Master'),
    t('Frontpage headerSlider'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('image from field_teaser_bild'),
    t('[field_teaser]'),
    t('[field_teaser_titel]'),
    t('<a href="[path]">Weiterlesen</a>'),
    t('Weiterlesen'),
    t('[path]'),
    t('<img src="[field_teaser_bild]" alt="[field_file_image_title_text]" title="[field_file_image_title_text]">'),
    t('	<div class="content">
	<div class="animatebox closeanimate">
	<div class="arrow_up inactive" height="35px"></div><p class="boxtitle">[field_sb_teasertitel]</p>
	<div class="clear-buehne"></div>
	 <div class="hiddenstuff">[field_teaser_bild]<p>[field_sb_teasertext]<br>
	<span class="more_link_white">[field_link_zum_externen_inhalt]</span></p></div>
	</div>
	</div>'),
    t('Views-Block Header Slider'),
    t('Views-Block Sliderbühne Header'),
    t('Header-Elemente'),
    t('Views-Block Header Slider Unpublished'),
    t('Frontpage headerSlider Unpublished'),
    t('Header-Elemente Unpublished'),
  );
  $export['frontpage_sliderbuehne_und_header'] = $view;

  $view = new view();
  $view->name = 'frontpage_themendossier';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Frontpage Themendossier';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'THEMEN';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'quicktabs';
  $handler->display->display_options['style_options']['tab_style'] = 'Navlist';
  $handler->display->display_options['style_options']['tab_title_field'] = 'field_tab_titel';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Teaser Bild (field_teaser_bild:fid) */
  $handler->display->display_options['relationships']['field_teaser_bild_fid']['id'] = 'field_teaser_bild_fid';
  $handler->display->display_options['relationships']['field_teaser_bild_fid']['table'] = 'field_data_field_teaser_bild';
  $handler->display->display_options['relationships']['field_teaser_bild_fid']['field'] = 'field_teaser_bild_fid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<span class="more_link">Weiterlesen</span>';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Tab Titel */
  $handler->display->display_options['fields']['field_tab_titel']['id'] = 'field_tab_titel';
  $handler->display->display_options['fields']['field_tab_titel']['table'] = 'field_data_field_tab_titel';
  $handler->display->display_options['fields']['field_tab_titel']['field'] = 'field_tab_titel';
  $handler->display->display_options['fields']['field_tab_titel']['label'] = '';
  $handler->display->display_options['fields']['field_tab_titel']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tab_titel']['alter']['max_length'] = '25';
  $handler->display->display_options['fields']['field_tab_titel']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_tab_titel']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_tab_titel']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_tab_titel']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tab_titel']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_tab_titel']['settings'] = array(
    'trim_length' => '25',
  );
  /* Field: Content: Teaser-Titel */
  $handler->display->display_options['fields']['field_teaser_titel']['id'] = 'field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['table'] = 'field_data_field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['field'] = 'field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_titel']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['max_length'] = '50';
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_titel']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_titel']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_teaser_titel']['settings'] = array(
    'trim_length' => '70',
  );
  /* Field: Content: Themendossier Teasertitel */
  $handler->display->display_options['fields']['field_td_teasertitel']['id'] = 'field_td_teasertitel';
  $handler->display->display_options['fields']['field_td_teasertitel']['table'] = 'field_data_field_td_teasertitel';
  $handler->display->display_options['fields']['field_td_teasertitel']['field'] = 'field_td_teasertitel';
  $handler->display->display_options['fields']['field_td_teasertitel']['label'] = '';
  $handler->display->display_options['fields']['field_td_teasertitel']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_td_teasertitel']['alter']['max_length'] = '50';
  $handler->display->display_options['fields']['field_td_teasertitel']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_td_teasertitel']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_td_teasertitel']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_td_teasertitel']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_td_teasertitel']['empty'] = '[field_teaser_titel]';
  $handler->display->display_options['fields']['field_td_teasertitel']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_td_teasertitel']['settings'] = array(
    'trim_length' => '70',
  );
  /* Field: Content: Teaserspitzmarke */
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['id'] = 'field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['table'] = 'field_data_field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['field'] = 'field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['settings'] = array(
    'trim_length' => '22',
  );
  /* Field: Content: Themendossier Teaserspitzmarke */
  $handler->display->display_options['fields']['field_td_teaserspitzmarke']['id'] = 'field_td_teaserspitzmarke';
  $handler->display->display_options['fields']['field_td_teaserspitzmarke']['table'] = 'field_data_field_td_teaserspitzmarke';
  $handler->display->display_options['fields']['field_td_teaserspitzmarke']['field'] = 'field_td_teaserspitzmarke';
  $handler->display->display_options['fields']['field_td_teaserspitzmarke']['label'] = '';
  $handler->display->display_options['fields']['field_td_teaserspitzmarke']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_td_teaserspitzmarke']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['field_td_teaserspitzmarke']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_td_teaserspitzmarke']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_td_teaserspitzmarke']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_td_teaserspitzmarke']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_td_teaserspitzmarke']['empty'] = '[field_teaser_spitzmarke]';
  $handler->display->display_options['fields']['field_td_teaserspitzmarke']['type'] = 'text_plain';
  /* Field: Content: Teaser */
  $handler->display->display_options['fields']['field_teaser']['id'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['table'] = 'field_data_field_teaser';
  $handler->display->display_options['fields']['field_teaser']['field'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_teaser']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['field_teaser']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser']['settings'] = array(
    'trim_length' => '200',
  );
  /* Field: Content: Themendossier Teasertext */
  $handler->display->display_options['fields']['field_td_teasertext']['id'] = 'field_td_teasertext';
  $handler->display->display_options['fields']['field_td_teasertext']['table'] = 'field_data_field_td_teasertext';
  $handler->display->display_options['fields']['field_td_teasertext']['field'] = 'field_td_teasertext';
  $handler->display->display_options['fields']['field_td_teasertext']['label'] = '';
  $handler->display->display_options['fields']['field_td_teasertext']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_td_teasertext']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['field_td_teasertext']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_td_teasertext']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_td_teasertext']['empty'] = '[field_teaser]';
  $handler->display->display_options['fields']['field_td_teasertext']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_td_teasertext']['settings'] = array(
    'trim_length' => '170',
  );
  /* Field: Content: Link/Datei 1 */
  $handler->display->display_options['fields']['field_link_datei_1']['id'] = 'field_link_datei_1';
  $handler->display->display_options['fields']['field_link_datei_1']['table'] = 'field_data_field_link_datei_1';
  $handler->display->display_options['fields']['field_link_datei_1']['field'] = 'field_link_datei_1';
  $handler->display->display_options['fields']['field_link_datei_1']['label'] = '';
  $handler->display->display_options['fields']['field_link_datei_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_datei_1']['alter']['text'] = '<a href="[field_link_datei_1-url]">[field_link_datei_1]</a>';
  $handler->display->display_options['fields']['field_link_datei_1']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['field_link_datei_1']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_link_datei_1']['alter']['ellipsis'] = FALSE;
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
  $handler->display->display_options['fields']['field_link_datei_2']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['field_link_datei_2']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_link_datei_2']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_link_datei_2']['alter']['html'] = TRUE;
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
  $handler->display->display_options['fields']['field_url_themenseite']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url_themenseite']['click_sort_column'] = 'url';
  /* Field: Content: Link zum externen Inhalt */
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['id'] = 'field_link_zum_externen_inhalt';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['table'] = 'field_data_field_link_zum_externen_inhalt';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['field'] = 'field_link_zum_externen_inhalt';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['label'] = '';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['alter']['text'] = '<span class="more_link">Weiterlesen</span>';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['alter']['path'] = '[field_link_zum_externen_inhalt]';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['empty'] = '[title]';
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
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<div class="view-edit view-edit-themendossier">[edit_node]</div>';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Bearbeiten';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="themendossier_teaser">
[field_teaser_bild]
<div class="spitzmarke">[field_td_teaserspitzmarke]</div>
<h2>[field_td_teasertitel]</h2>
<p>[field_td_teasertext][field_link_zum_externen_inhalt]</p>
</div>

<div class="themendossier_infos">
<div class="themendossier_infos_links">
<div class="inner">
<div class="spitzmarke_unten">[field_spitzmarke_link_datei_1]</div><br>
<div class="more_link">[field_link_datei_1]</div>
</div>
</div>

<div class="themendossier_infos_mitte">
<div class="inner">
<div class="spitzmarke_unten">[field_spitzmarke_link_datei_2]</div><br>
<div class="more_link">[field_link_datei_2]</div>
</div>
</div>

<div class="themendossier_infos_rechts">
<div class="inner">
<div class="link_themenseite">[field_url_themenseite]</div>
[edit_node]
</div>
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'artikel' => 'artikel',
    'pressemitteilung' => 'pressemitteilung',
  );
  /* Filter criterion: Content: Themendossier (field_themendossier) */
  $handler->display->display_options['filters']['field_themendossier_value']['id'] = 'field_themendossier_value';
  $handler->display->display_options['filters']['field_themendossier_value']['table'] = 'field_data_field_themendossier';
  $handler->display->display_options['filters']['field_themendossier_value']['field'] = 'field_themendossier_value';
  $handler->display->display_options['filters']['field_themendossier_value']['value'] = array(
    'Ja' => 'Ja',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'artikel' => 'artikel',
    'pressemitteilung' => 'pressemitteilung',
  );
  /* Filter criterion: Content: Themendossier (field_themendossier) */
  $handler->display->display_options['filters']['field_themendossier_value']['id'] = 'field_themendossier_value';
  $handler->display->display_options['filters']['field_themendossier_value']['table'] = 'field_data_field_themendossier';
  $handler->display->display_options['filters']['field_themendossier_value']['field'] = 'field_themendossier_value';
  $handler->display->display_options['filters']['field_themendossier_value']['value'] = array(
    'Ja' => 'Ja',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Hidden */
  $handler->display->display_options['filters']['hidden']['id'] = 'hidden';
  $handler->display->display_options['filters']['hidden']['table'] = 'hidden_nodes';
  $handler->display->display_options['filters']['hidden']['field'] = 'hidden';
  $handler->display->display_options['filters']['hidden']['value'] = '0';

  /* Display: Unpublished */
  $handler = $view->new_display('block', 'Unpublished', 'block_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'artikel' => 'artikel',
    'pressemitteilung' => 'pressemitteilung',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Themendossier (field_themendossier) */
  $handler->display->display_options['filters']['field_themendossier_value']['id'] = 'field_themendossier_value';
  $handler->display->display_options['filters']['field_themendossier_value']['table'] = 'field_data_field_themendossier';
  $handler->display->display_options['filters']['field_themendossier_value']['field'] = 'field_themendossier_value';
  $handler->display->display_options['filters']['field_themendossier_value']['value'] = array(
    'Ja' => 'Ja',
  );
  $handler->display->display_options['filters']['field_themendossier_value']['group'] = 1;
  /* Filter criterion: Domain Access: Available on current domain */
  $handler->display->display_options['filters']['current_all']['id'] = 'current_all';
  $handler->display->display_options['filters']['current_all']['table'] = 'domain_access';
  $handler->display->display_options['filters']['current_all']['field'] = 'current_all';
  $handler->display->display_options['filters']['current_all']['value'] = '1';
  $translatables['frontpage_themendossier'] = array(
    t('Master'),
    t('THEMEN'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('image from field_teaser_bild'),
    t('<span class="more_link">Weiterlesen</span>'),
    t('[field_teaser_titel]'),
    t('[field_teaser_spitzmarke]'),
    t('[field_teaser]'),
    t('<a href="[field_link_datei_1-url]">[field_link_datei_1]</a>'),
    t('[title]'),
    t('<img src="[field_teaser_bild]" alt="[field_file_image_title_text]" title="[field_file_image_title_text]">'),
    t('<div class="view-edit view-edit-themendossier">[edit_node]</div>'),
    t('Bearbeiten'),
    t('<div class="themendossier_teaser">
[field_teaser_bild]
<div class="spitzmarke">[field_td_teaserspitzmarke]</div>
<h2>[field_td_teasertitel]</h2>
<p>[field_td_teasertext][field_link_zum_externen_inhalt]</p>
</div>

<div class="themendossier_infos">
<div class="themendossier_infos_links">
<div class="inner">
<div class="spitzmarke_unten">[field_spitzmarke_link_datei_1]</div><br>
<div class="more_link">[field_link_datei_1]</div>
</div>
</div>

<div class="themendossier_infos_mitte">
<div class="inner">
<div class="spitzmarke_unten">[field_spitzmarke_link_datei_2]</div><br>
<div class="more_link">[field_link_datei_2]</div>
</div>
</div>

<div class="themendossier_infos_rechts">
<div class="inner">
<div class="link_themenseite">[field_url_themenseite]</div>
[edit_node]
</div>
</div>
</div>'),
    t('Block'),
    t('Unpublished'),
  );
  $export['frontpage_themendossier'] = $view;

  $view = new view();
  $view->name = 'frontpage_themenslider';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Frontpage: Themenslider';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Frontpage: Themenslider';
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
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Teaser Bild (field_teaser_bild:fid) */
  $handler->display->display_options['relationships']['field_teaser_bild_fid']['id'] = 'field_teaser_bild_fid';
  $handler->display->display_options['relationships']['field_teaser_bild_fid']['table'] = 'field_data_field_teaser_bild';
  $handler->display->display_options['relationships']['field_teaser_bild_fid']['field'] = 'field_teaser_bild_fid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Artikelinhalt */
  $handler->display->display_options['fields']['field_inhalt']['id'] = 'field_inhalt';
  $handler->display->display_options['fields']['field_inhalt']['table'] = 'field_data_field_inhalt';
  $handler->display->display_options['fields']['field_inhalt']['field'] = 'field_inhalt';
  $handler->display->display_options['fields']['field_inhalt']['label'] = '';
  $handler->display->display_options['fields']['field_inhalt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_inhalt']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_inhalt']['settings'] = array(
    'trim_length' => '600',
  );
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
  $handler->display->display_options['fields']['field_teaser_bild']['group_column'] = 'entity_id';
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
  /* Filter criterion: Content: Themenslider (field_themenslider) */
  $handler->display->display_options['filters']['field_themenslider_value']['id'] = 'field_themenslider_value';
  $handler->display->display_options['filters']['field_themenslider_value']['table'] = 'field_data_field_themenslider';
  $handler->display->display_options['filters']['field_themenslider_value']['field'] = 'field_themenslider_value';
  $handler->display->display_options['filters']['field_themenslider_value']['value'] = array(
    'Ja' => 'Ja',
  );
  /* Filter criterion: Content: Hidden */
  $handler->display->display_options['filters']['hidden']['id'] = 'hidden';
  $handler->display->display_options['filters']['hidden']['table'] = 'hidden_nodes';
  $handler->display->display_options['filters']['hidden']['field'] = 'hidden';
  $handler->display->display_options['filters']['hidden']['value'] = '0';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_all');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'frontpage_themenslider:block_1';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Spitzmarke */
  $handler->display->display_options['fields']['field_spitzmarke']['id'] = 'field_spitzmarke';
  $handler->display->display_options['fields']['field_spitzmarke']['table'] = 'field_data_field_spitzmarke';
  $handler->display->display_options['fields']['field_spitzmarke']['field'] = 'field_spitzmarke';
  $handler->display->display_options['fields']['field_spitzmarke']['label'] = '';
  $handler->display->display_options['fields']['field_spitzmarke']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_spitzmarke']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spitzmarke']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_spitzmarke']['settings'] = array(
    'trim_length' => '30',
  );
  /* Field: Content: Teaserspitzmarke */
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['id'] = 'field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['table'] = 'field_data_field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['field'] = 'field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['empty'] = '[field_spitzmarke]';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['settings'] = array(
    'trim_length' => '30',
  );
  /* Field: Content: Themenslider Teaserspitzmarke */
  $handler->display->display_options['fields']['field_ts_teaserspitzmarke']['id'] = 'field_ts_teaserspitzmarke';
  $handler->display->display_options['fields']['field_ts_teaserspitzmarke']['table'] = 'field_data_field_ts_teaserspitzmarke';
  $handler->display->display_options['fields']['field_ts_teaserspitzmarke']['field'] = 'field_ts_teaserspitzmarke';
  $handler->display->display_options['fields']['field_ts_teaserspitzmarke']['label'] = '';
  $handler->display->display_options['fields']['field_ts_teaserspitzmarke']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ts_teaserspitzmarke']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ts_teaserspitzmarke']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ts_teaserspitzmarke']['empty'] = '[field_teaser_spitzmarke]';
  $handler->display->display_options['fields']['field_ts_teaserspitzmarke']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_ts_teaserspitzmarke']['settings'] = array(
    'trim_length' => '30',
  );
  /* Field: Content: Teaser-Titel */
  $handler->display->display_options['fields']['field_teaser_titel']['id'] = 'field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['table'] = 'field_data_field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['field'] = 'field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_titel']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_titel']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_titel']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_titel']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_titel']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_teaser_titel']['settings'] = array(
    'trim_length' => '30',
  );
  /* Field: Content: Themenslider Teasertitel */
  $handler->display->display_options['fields']['field_ts_teasertitel']['id'] = 'field_ts_teasertitel';
  $handler->display->display_options['fields']['field_ts_teasertitel']['table'] = 'field_data_field_ts_teasertitel';
  $handler->display->display_options['fields']['field_ts_teasertitel']['field'] = 'field_ts_teasertitel';
  $handler->display->display_options['fields']['field_ts_teasertitel']['label'] = '';
  $handler->display->display_options['fields']['field_ts_teasertitel']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ts_teasertitel']['alter']['text'] = '<div class="spitzmarke">[field_ts_teaserspitzmarke]</div>
<div class="themenslider_titel">[field_ts_teasertitel]</div>';
  $handler->display->display_options['fields']['field_ts_teasertitel']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ts_teasertitel']['element_wrapper_class'] = 'link-header';
  $handler->display->display_options['fields']['field_ts_teasertitel']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ts_teasertitel']['empty'] = '<div class="spitzmarke">[field_ts_teaserspitzmarke]</div>
<div class="themenslider_titel">[field_teaser_titel]</div>';
  $handler->display->display_options['fields']['field_ts_teasertitel']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_ts_teasertitel']['settings'] = array(
    'trim_length' => '30',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = '<span class="more_link">Weiterlesen</span>';
  $handler->display->display_options['fields']['view_node']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['view_node']['node_in_colorbox_height'] = '600';
  /* Field: Content: Link zum externen Inhalt */
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['id'] = 'field_link_zum_externen_inhalt';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['table'] = 'field_data_field_link_zum_externen_inhalt';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['field'] = 'field_link_zum_externen_inhalt';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['label'] = '';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['alter']['text'] = '<a href="[field_link_zum_externen_inhalt]" class="more_link">Weiterlesen</a>';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['empty'] = '[view_node]';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['type'] = 'link_plain';
  /* Field: Field: Artikelinhalt */
  $handler->display->display_options['fields']['field_inhalt']['id'] = 'field_inhalt';
  $handler->display->display_options['fields']['field_inhalt']['table'] = 'field_data_field_inhalt';
  $handler->display->display_options['fields']['field_inhalt']['field'] = 'field_inhalt';
  $handler->display->display_options['fields']['field_inhalt']['label'] = '';
  $handler->display->display_options['fields']['field_inhalt']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_inhalt']['alter']['text'] = '[field_inhalt] [field_link_zum_externen_inhalt]';
  $handler->display->display_options['fields']['field_inhalt']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_inhalt']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_inhalt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_inhalt']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_inhalt']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_inhalt']['settings'] = array(
    'trim_length' => '100',
  );
  /* Field: Content: Teaser */
  $handler->display->display_options['fields']['field_teaser']['id'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['table'] = 'field_data_field_teaser';
  $handler->display->display_options['fields']['field_teaser']['field'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_teaser']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['alter']['text'] = '[field_teaser] [field_link_zum_externen_inhalt]';
  $handler->display->display_options['fields']['field_teaser']['alter']['max_length'] = '190';
  $handler->display->display_options['fields']['field_teaser']['alter']['more_link_text'] = 'Weiterlesen';
  $handler->display->display_options['fields']['field_teaser']['alter']['more_link_path'] = '[field_link_zum_externen_inhalt]';
  $handler->display->display_options['fields']['field_teaser']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_teaser']['empty'] = '[field_inhalt]';
  $handler->display->display_options['fields']['field_teaser']['settings'] = array(
    'trim_length' => '100',
  );
  /* Field: Content: Themenslider Teasertext */
  $handler->display->display_options['fields']['field_ts_teasertext']['id'] = 'field_ts_teasertext';
  $handler->display->display_options['fields']['field_ts_teasertext']['table'] = 'field_data_field_ts_teasertext';
  $handler->display->display_options['fields']['field_ts_teasertext']['field'] = 'field_ts_teasertext';
  $handler->display->display_options['fields']['field_ts_teasertext']['label'] = '';
  $handler->display->display_options['fields']['field_ts_teasertext']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ts_teasertext']['alter']['max_length'] = '190';
  $handler->display->display_options['fields']['field_ts_teasertext']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_ts_teasertext']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ts_teasertext']['element_wrapper_class'] = 'link-content';
  $handler->display->display_options['fields']['field_ts_teasertext']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ts_teasertext']['empty'] = '[field_teaser]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_ts_teasertext] [field_link_zum_externen_inhalt]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'link-content';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: File: Title Text */
  $handler->display->display_options['fields']['field_file_image_title_text']['id'] = 'field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['table'] = 'field_data_field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['field'] = 'field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['relationship'] = 'field_teaser_bild_fid';
  $handler->display->display_options['fields']['field_file_image_title_text']['label'] = '';
  $handler->display->display_options['fields']['field_file_image_title_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_title_text']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<div class="view-edit view-edit-themenslider">[edit_node]</div>';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Bearbeiten';
  /* Field: Content: Teaser Bild */
  $handler->display->display_options['fields']['field_teaser_bild']['id'] = 'field_teaser_bild';
  $handler->display->display_options['fields']['field_teaser_bild']['table'] = 'field_data_field_teaser_bild';
  $handler->display->display_options['fields']['field_teaser_bild']['field'] = 'field_teaser_bild';
  $handler->display->display_options['fields']['field_teaser_bild']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_bild']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_bild']['alter']['text'] = '[edit_node]
<img src="[field_teaser_bild]" alt="[field_file_image_title_text]" title="[field_file_image_title_text]">';
  $handler->display->display_options['fields']['field_teaser_bild']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_bild']['element_wrapper_class'] = 'slide';
  $handler->display->display_options['fields']['field_teaser_bild']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_bild']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_teaser_bild']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_teaser_bild']['settings'] = array(
    'image_style' => 'tn345x345',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_teaser_bild']['group_column'] = 'entity_id';
  $translatables['frontpage_themenslider'] = array(
    t('Master'),
    t('Frontpage: Themenslider'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('image from field_teaser_bild'),
    t('Block'),
    t('[field_spitzmarke]'),
    t('[field_teaser_spitzmarke]'),
    t('<div class="spitzmarke">[field_ts_teaserspitzmarke]</div>
<div class="themenslider_titel">[field_ts_teasertitel]</div>'),
    t('<div class="spitzmarke">[field_ts_teaserspitzmarke]</div>
<div class="themenslider_titel">[field_teaser_titel]</div>'),
    t('<span class="more_link">Weiterlesen</span>'),
    t('<a href="[field_link_zum_externen_inhalt]" class="more_link">Weiterlesen</a>'),
    t('[view_node]'),
    t('[field_inhalt] [field_link_zum_externen_inhalt]'),
    t('[field_teaser] [field_link_zum_externen_inhalt]'),
    t('Weiterlesen'),
    t('[field_inhalt]'),
    t('[field_teaser]'),
    t('[field_ts_teasertext] [field_link_zum_externen_inhalt]'),
    t('<div class="view-edit view-edit-themenslider">[edit_node]</div>'),
    t('Bearbeiten'),
    t('[edit_node]
<img src="[field_teaser_bild]" alt="[field_file_image_title_text]" title="[field_file_image_title_text]">'),
  );
  $export['frontpage_themenslider'] = $view;

  $view = new view();
  $view->name = 'frontpage_themenslider_unpublished';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Frontpage: Themenslider Unpublished';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Frontpage: Themenslider';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
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
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Teaser Bild (field_teaser_bild:fid) */
  $handler->display->display_options['relationships']['field_teaser_bild_fid']['id'] = 'field_teaser_bild_fid';
  $handler->display->display_options['relationships']['field_teaser_bild_fid']['table'] = 'field_data_field_teaser_bild';
  $handler->display->display_options['relationships']['field_teaser_bild_fid']['field'] = 'field_teaser_bild_fid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Artikelinhalt */
  $handler->display->display_options['fields']['field_inhalt']['id'] = 'field_inhalt';
  $handler->display->display_options['fields']['field_inhalt']['table'] = 'field_data_field_inhalt';
  $handler->display->display_options['fields']['field_inhalt']['field'] = 'field_inhalt';
  $handler->display->display_options['fields']['field_inhalt']['label'] = '';
  $handler->display->display_options['fields']['field_inhalt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_inhalt']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_inhalt']['settings'] = array(
    'trim_length' => '600',
  );
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
  $handler->display->display_options['fields']['field_teaser_bild']['group_column'] = 'entity_id';
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'artikel' => 'artikel',
    'pressemitteilung' => 'pressemitteilung',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Themenslider (field_themenslider) */
  $handler->display->display_options['filters']['field_themenslider_value']['id'] = 'field_themenslider_value';
  $handler->display->display_options['filters']['field_themenslider_value']['table'] = 'field_data_field_themenslider';
  $handler->display->display_options['filters']['field_themenslider_value']['field'] = 'field_themenslider_value';
  $handler->display->display_options['filters']['field_themenslider_value']['value'] = array(
    'Ja' => 'Ja',
  );
  $handler->display->display_options['filters']['field_themenslider_value']['group'] = 1;
  /* Filter criterion: Domain Access: Available on current domain */
  $handler->display->display_options['filters']['current_all']['id'] = 'current_all';
  $handler->display->display_options['filters']['current_all']['table'] = 'domain_access';
  $handler->display->display_options['filters']['current_all']['field'] = 'current_all';
  $handler->display->display_options['filters']['current_all']['value'] = '1';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_all');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'frontpage_themenslider_unpublished:block_1';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Spitzmarke */
  $handler->display->display_options['fields']['field_spitzmarke']['id'] = 'field_spitzmarke';
  $handler->display->display_options['fields']['field_spitzmarke']['table'] = 'field_data_field_spitzmarke';
  $handler->display->display_options['fields']['field_spitzmarke']['field'] = 'field_spitzmarke';
  $handler->display->display_options['fields']['field_spitzmarke']['label'] = '';
  $handler->display->display_options['fields']['field_spitzmarke']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_spitzmarke']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spitzmarke']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_spitzmarke']['settings'] = array(
    'trim_length' => '30',
  );
  /* Field: Content: Teaserspitzmarke */
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['id'] = 'field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['table'] = 'field_data_field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['field'] = 'field_teaser_spitzmarke';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['empty'] = '[field_spitzmarke]';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_teaser_spitzmarke']['settings'] = array(
    'trim_length' => '30',
  );
  /* Field: Content: Themenslider Teaserspitzmarke */
  $handler->display->display_options['fields']['field_ts_teaserspitzmarke']['id'] = 'field_ts_teaserspitzmarke';
  $handler->display->display_options['fields']['field_ts_teaserspitzmarke']['table'] = 'field_data_field_ts_teaserspitzmarke';
  $handler->display->display_options['fields']['field_ts_teaserspitzmarke']['field'] = 'field_ts_teaserspitzmarke';
  $handler->display->display_options['fields']['field_ts_teaserspitzmarke']['label'] = '';
  $handler->display->display_options['fields']['field_ts_teaserspitzmarke']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ts_teaserspitzmarke']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ts_teaserspitzmarke']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ts_teaserspitzmarke']['empty'] = '[field_teaser_spitzmarke]';
  $handler->display->display_options['fields']['field_ts_teaserspitzmarke']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_ts_teaserspitzmarke']['settings'] = array(
    'trim_length' => '30',
  );
  /* Field: Content: Teaser-Titel */
  $handler->display->display_options['fields']['field_teaser_titel']['id'] = 'field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['table'] = 'field_data_field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['field'] = 'field_teaser_titel';
  $handler->display->display_options['fields']['field_teaser_titel']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_titel']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_titel']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_titel']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_titel']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_titel']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_titel']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_teaser_titel']['settings'] = array(
    'trim_length' => '30',
  );
  /* Field: Content: Themenslider Teasertitel */
  $handler->display->display_options['fields']['field_ts_teasertitel']['id'] = 'field_ts_teasertitel';
  $handler->display->display_options['fields']['field_ts_teasertitel']['table'] = 'field_data_field_ts_teasertitel';
  $handler->display->display_options['fields']['field_ts_teasertitel']['field'] = 'field_ts_teasertitel';
  $handler->display->display_options['fields']['field_ts_teasertitel']['label'] = '';
  $handler->display->display_options['fields']['field_ts_teasertitel']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ts_teasertitel']['alter']['text'] = '<div class="spitzmarke">[field_ts_teaserspitzmarke]</div>
<div class="themenslider_titel">[field_ts_teasertitel]</div>';
  $handler->display->display_options['fields']['field_ts_teasertitel']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ts_teasertitel']['element_wrapper_class'] = 'link-header';
  $handler->display->display_options['fields']['field_ts_teasertitel']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ts_teasertitel']['empty'] = '<div class="spitzmarke">[field_ts_teaserspitzmarke]</div>
<div class="themenslider_titel">[field_teaser_titel]</div>';
  $handler->display->display_options['fields']['field_ts_teasertitel']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_ts_teasertitel']['settings'] = array(
    'trim_length' => '30',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = '<span class="more_link">Weiterlesen</span>';
  $handler->display->display_options['fields']['view_node']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['view_node']['node_in_colorbox_height'] = '600';
  /* Field: Content: Link zum externen Inhalt */
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['id'] = 'field_link_zum_externen_inhalt';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['table'] = 'field_data_field_link_zum_externen_inhalt';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['field'] = 'field_link_zum_externen_inhalt';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['label'] = '';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['alter']['text'] = '<a href="[field_link_zum_externen_inhalt]" class="more_link">Weiterlesen</a>';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['empty'] = '[view_node]';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link_zum_externen_inhalt']['type'] = 'link_plain';
  /* Field: Field: Artikelinhalt */
  $handler->display->display_options['fields']['field_inhalt']['id'] = 'field_inhalt';
  $handler->display->display_options['fields']['field_inhalt']['table'] = 'field_data_field_inhalt';
  $handler->display->display_options['fields']['field_inhalt']['field'] = 'field_inhalt';
  $handler->display->display_options['fields']['field_inhalt']['label'] = '';
  $handler->display->display_options['fields']['field_inhalt']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_inhalt']['alter']['text'] = '[field_inhalt] [field_link_zum_externen_inhalt]';
  $handler->display->display_options['fields']['field_inhalt']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_inhalt']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_inhalt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_inhalt']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_inhalt']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_inhalt']['settings'] = array(
    'trim_length' => '100',
  );
  /* Field: Content: Teaser */
  $handler->display->display_options['fields']['field_teaser']['id'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['table'] = 'field_data_field_teaser';
  $handler->display->display_options['fields']['field_teaser']['field'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_teaser']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['alter']['text'] = '[field_teaser] [field_link_zum_externen_inhalt]';
  $handler->display->display_options['fields']['field_teaser']['alter']['max_length'] = '190';
  $handler->display->display_options['fields']['field_teaser']['alter']['more_link_text'] = 'Weiterlesen';
  $handler->display->display_options['fields']['field_teaser']['alter']['more_link_path'] = '[field_link_zum_externen_inhalt]';
  $handler->display->display_options['fields']['field_teaser']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_teaser']['empty'] = '[field_inhalt]';
  $handler->display->display_options['fields']['field_teaser']['settings'] = array(
    'trim_length' => '100',
  );
  /* Field: Content: Themenslider Teasertext */
  $handler->display->display_options['fields']['field_ts_teasertext']['id'] = 'field_ts_teasertext';
  $handler->display->display_options['fields']['field_ts_teasertext']['table'] = 'field_data_field_ts_teasertext';
  $handler->display->display_options['fields']['field_ts_teasertext']['field'] = 'field_ts_teasertext';
  $handler->display->display_options['fields']['field_ts_teasertext']['label'] = '';
  $handler->display->display_options['fields']['field_ts_teasertext']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ts_teasertext']['alter']['max_length'] = '190';
  $handler->display->display_options['fields']['field_ts_teasertext']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_ts_teasertext']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ts_teasertext']['element_wrapper_class'] = 'link-content';
  $handler->display->display_options['fields']['field_ts_teasertext']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ts_teasertext']['empty'] = '[field_teaser]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_ts_teasertext] [field_link_zum_externen_inhalt]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'link-content';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;

  /* Display: Block_hidden */
  $handler = $view->new_display('block', 'Block_hidden', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: File: Title Text */
  $handler->display->display_options['fields']['field_file_image_title_text']['id'] = 'field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['table'] = 'field_data_field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['field'] = 'field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['relationship'] = 'field_teaser_bild_fid';
  $handler->display->display_options['fields']['field_file_image_title_text']['label'] = '';
  $handler->display->display_options['fields']['field_file_image_title_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_title_text']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<div class="view-edit view-edit-themenslider">[edit_node]</div>';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Bearbeiten';
  /* Field: Content: Teaser Bild */
  $handler->display->display_options['fields']['field_teaser_bild']['id'] = 'field_teaser_bild';
  $handler->display->display_options['fields']['field_teaser_bild']['table'] = 'field_data_field_teaser_bild';
  $handler->display->display_options['fields']['field_teaser_bild']['field'] = 'field_teaser_bild';
  $handler->display->display_options['fields']['field_teaser_bild']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_bild']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_bild']['alter']['text'] = '[edit_node]
<img src="[field_teaser_bild]" alt="[field_file_image_title_text]" title="[field_file_image_title_text]">';
  $handler->display->display_options['fields']['field_teaser_bild']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_bild']['element_wrapper_class'] = 'slide';
  $handler->display->display_options['fields']['field_teaser_bild']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_bild']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_teaser_bild']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_teaser_bild']['settings'] = array(
    'image_style' => 'tn345x345',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_teaser_bild']['group_column'] = 'entity_id';
  $translatables['frontpage_themenslider_unpublished'] = array(
    t('Master'),
    t('Frontpage: Themenslider'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('image from field_teaser_bild'),
    t('Block'),
    t('[field_spitzmarke]'),
    t('[field_teaser_spitzmarke]'),
    t('<div class="spitzmarke">[field_ts_teaserspitzmarke]</div>
<div class="themenslider_titel">[field_ts_teasertitel]</div>'),
    t('<div class="spitzmarke">[field_ts_teaserspitzmarke]</div>
<div class="themenslider_titel">[field_teaser_titel]</div>'),
    t('<span class="more_link">Weiterlesen</span>'),
    t('<a href="[field_link_zum_externen_inhalt]" class="more_link">Weiterlesen</a>'),
    t('[view_node]'),
    t('[field_inhalt] [field_link_zum_externen_inhalt]'),
    t('[field_teaser] [field_link_zum_externen_inhalt]'),
    t('Weiterlesen'),
    t('[field_inhalt]'),
    t('[field_teaser]'),
    t('[field_ts_teasertext] [field_link_zum_externen_inhalt]'),
    t('Block_hidden'),
    t('<div class="view-edit view-edit-themenslider">[edit_node]</div>'),
    t('Bearbeiten'),
    t('[edit_node]
<img src="[field_teaser_bild]" alt="[field_file_image_title_text]" title="[field_file_image_title_text]">'),
  );
  $export['frontpage_themenslider_unpublished'] = $view;

  return $export;
}
