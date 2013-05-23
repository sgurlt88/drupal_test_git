<?php
/**
 * @file
 * feature_hzd_admin.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_hzd_admin_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'admin_views_node';
  $view->description = 'Find and manage content.';
  $view->tag = 'admin';
  $view->base_table = 'node';
  $view->human_name = 'Administration: Nodes';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Content';
  $handler->display->display_options['css_class'] = 'admin-views-view';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nächste Seite ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'title' => 'title',
    'timestamp' => 'title',
    'type' => 'type',
    'name' => 'name',
    'status' => 'status',
    'changed' => 'changed',
    'edit_node' => 'edit_node',
    'delete_node' => 'delete_node',
  );
  $handler->display->display_options['style_options']['default'] = 'changed';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '&nbsp;',
      'empty_column' => 0,
    ),
    'timestamp' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['style_options']['empty_table'] = TRUE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'No content available.';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'forums' => 0,
    'tags' => 0,
  );
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_result'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Change author',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Delete',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Change value',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::system_message_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Stick',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Unstick',
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Promote to front page',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Publish',
    ),
    'action::system_goto_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Demote from front page',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Unpublish',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Has new content */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'history';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = '';
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  /* Field: Domain Access: Available on current domain */
  $handler->display->display_options['fields']['current_all']['id'] = 'current_all';
  $handler->display->display_options['fields']['current_all']['table'] = 'domain_access';
  $handler->display->display_options['fields']['current_all']['field'] = 'current_all';
  $handler->display->display_options['fields']['current_all']['exclude'] = TRUE;
  $handler->display->display_options['fields']['current_all']['not'] = 0;
  /* Field: Domains: Site name */
  $handler->display->display_options['fields']['sitename']['id'] = 'sitename';
  $handler->display->display_options['fields']['sitename']['table'] = 'domain';
  $handler->display->display_options['fields']['sitename']['field'] = 'sitename';
  $handler->display->display_options['fields']['sitename']['label'] = 'Name der Website';
  $handler->display->display_options['fields']['sitename']['link_to_site'] = 1;
  /* Field: Domains: Subdomain */
  $handler->display->display_options['fields']['subdomain']['id'] = 'subdomain';
  $handler->display->display_options['fields']['subdomain']['table'] = 'domain';
  $handler->display->display_options['fields']['subdomain']['field'] = 'subdomain';
  $handler->display->display_options['fields']['subdomain']['exclude'] = TRUE;
  $handler->display->display_options['fields']['subdomain']['link_to_site'] = 1;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = 'Pfad';
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Veröffentlicht';
  $handler->display->display_options['fields']['status']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Bearbeiten';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = 'Löschen';
  /* Field: Content: Clone link */
  $handler->display->display_options['fields']['clone_node']['id'] = 'clone_node';
  $handler->display->display_options['fields']['clone_node']['table'] = 'node';
  $handler->display->display_options['fields']['clone_node']['field'] = 'clone_node';
  $handler->display->display_options['fields']['clone_node']['label'] = '';
  $handler->display->display_options['fields']['clone_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['clone_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['clone_node']['text'] = 'Duplizieren';
  /* Field: Global: Contextual Links */
  $handler->display->display_options['fields']['contextual_links']['id'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['table'] = 'views';
  $handler->display->display_options['fields']['contextual_links']['field'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['label'] = '';
  $handler->display->display_options['fields']['contextual_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contextual_links']['fields'] = array(
    'edit_node' => 'edit_node',
    'delete_node' => 'delete_node',
    'clone_node' => 'clone_node',
    'views_bulk_operations' => 0,
    'title' => 0,
    'timestamp' => 0,
    'path' => 0,
    'type' => 0,
    'name' => 0,
    'status' => 0,
    'changed' => 0,
  );
  /* Filter criterion: Domains: Site name */
  $handler->display->display_options['filters']['sitename']['id'] = 'sitename';
  $handler->display->display_options['filters']['sitename']['table'] = 'domain';
  $handler->display->display_options['filters']['sitename']['field'] = 'sitename';
  $handler->display->display_options['filters']['sitename']['group'] = 1;
  $handler->display->display_options['filters']['sitename']['exposed'] = TRUE;
  $handler->display->display_options['filters']['sitename']['expose']['operator_id'] = 'sitename_op';
  $handler->display->display_options['filters']['sitename']['expose']['label'] = 'Name der Website';
  $handler->display->display_options['filters']['sitename']['expose']['operator'] = 'sitename_op';
  $handler->display->display_options['filters']['sitename']['expose']['identifier'] = 'sitename';
  $handler->display->display_options['filters']['sitename']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['sitename']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['sitename']['group_info']['label'] = 'Name der Website';
  $handler->display->display_options['filters']['sitename']['group_info']['identifier'] = 'sitename';
  $handler->display->display_options['filters']['sitename']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'hessen',
      'operator' => 'contains',
      'value' => 'hessen',
    ),
    2 => array(
      'title' => 'hmdis',
      'operator' => 'contains',
      'value' => 'hmdis',
    ),
    3 => array(
      'title' => 'hmdj',
      'operator' => 'contains',
      'value' => 'hmdj',
    ),
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember'] = TRUE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['group'] = 1;
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Author';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'author';
  $handler->display->display_options['filters']['uid']['expose']['remember'] = TRUE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
  );
  /* Filter criterion: Taxonomy term: Term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['tid']['group'] = 1;
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Begriff';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'tax_workflow_status';
  $handler->display->display_options['filters']['tid']['hierarchy'] = 1;

  /* Display: System */
  $handler = $view->new_display('system', 'System', 'system_1');
  $translatables['admin_views_node'] = array(
    t('Defaults'),
    t('Content'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Elemente pro Seite'),
    t('- Alle -'),
    t('Offset'),
    t('« erste Seite'),
    t('‹ vorherige Seite'),
    t('nächste Seite ›'),
    t('letzte Seite »'),
    t('No content available.'),
    t('author'),
    t('term'),
    t('Title'),
    t('Available on current domain'),
    t('Name der Website'),
    t('Subdomain'),
    t('Pfad'),
    t('Type'),
    t('Author'),
    t('Veröffentlicht'),
    t('Updated'),
    t('Bearbeiten'),
    t('Löschen'),
    t('Duplizieren'),
    t('Published'),
    t('Begriff'),
    t('System'),
  );
  $export['admin_views_node'] = $view;

  $view = new view();
  $view->name = 'bulk_operations_hidden';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Bulk Operations: Hidden';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Versteckte Inhalte';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'title' => 'title',
    'hidden' => 'hidden',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'hidden' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_result'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_message_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::hidden_nodes_hide_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_goto_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::hidden_nodes_unhide_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Hidden */
  $handler->display->display_options['fields']['hidden']['id'] = 'hidden';
  $handler->display->display_options['fields']['hidden']['table'] = 'hidden_nodes';
  $handler->display->display_options['fields']['hidden']['field'] = 'hidden';
  $handler->display->display_options['fields']['hidden']['not'] = 0;
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
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
  /* Filter criterion: Content: Hidden */
  $handler->display->display_options['filters']['hidden']['id'] = 'hidden';
  $handler->display->display_options['filters']['hidden']['table'] = 'hidden_nodes';
  $handler->display->display_options['filters']['hidden']['field'] = 'hidden';
  $handler->display->display_options['filters']['hidden']['value'] = '1';
  $handler->display->display_options['filters']['hidden']['exposed'] = TRUE;
  $handler->display->display_options['filters']['hidden']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['hidden']['expose']['label'] = 'Hidden';
  $handler->display->display_options['filters']['hidden']['expose']['operator'] = 'hidden_op';
  $handler->display->display_options['filters']['hidden']['expose']['identifier'] = 'hidden';
  $handler->display->display_options['filters']['hidden']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['hidden']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
    7 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'versteckte-inhalte';
  $translatables['bulk_operations_hidden'] = array(
    t('Master'),
    t('Versteckte Inhalte'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Hidden'),
    t('Author uid'),
    t('Post date'),
    t('Page'),
  );
  $export['bulk_operations_hidden'] = $view;

  $view = new view();
  $view->name = 'workflow_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Workflow View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Qualitätssicherung';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_inhalt' => 'field_inhalt',
    'field_erstellungsdatum' => 'field_erstellungsdatum',
    'field_aenderungsdatum' => 'field_aenderungsdatum',
    'field_internal_anmerkung' => 'field_internal_anmerkung',
    'field_workflow_status' => 'field_workflow_status',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'field_erstellungsdatum';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_inhalt' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_erstellungsdatum' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aenderungsdatum' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_internal_anmerkung' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_workflow_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Workflow Statuses';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<a class="button" href="/admin/workflow-view/erstellung" >Erstellung</a><a class="button" href="/admin/workflow-view/qualitaet" >Qualitätsssicherung</a><a class="button" href="/admin/workflow-view/freigabe" >Fertig zur Freigabe</a><a class="button" href="/admin/workflow-view/publizieren" >Publizieren</a>
';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Nichts Gefunden';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<strong>Derzeit gibt es keine Inhalte mit diesem Status.</strong>';
  $handler->display->display_options['empty']['area']['format'] = 'filter_redaktion';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Artikelinhalt */
  $handler->display->display_options['fields']['field_inhalt']['id'] = 'field_inhalt';
  $handler->display->display_options['fields']['field_inhalt']['table'] = 'field_data_field_inhalt';
  $handler->display->display_options['fields']['field_inhalt']['field'] = 'field_inhalt';
  $handler->display->display_options['fields']['field_inhalt']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_inhalt']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_inhalt']['settings'] = array(
    'trim_length' => '250',
  );
  /* Field: Field collection item: Erstellungsdatum */
  $handler->display->display_options['fields']['field_erstellungsdatum']['id'] = 'field_erstellungsdatum';
  $handler->display->display_options['fields']['field_erstellungsdatum']['table'] = 'field_data_field_erstellungsdatum';
  $handler->display->display_options['fields']['field_erstellungsdatum']['field'] = 'field_erstellungsdatum';
  $handler->display->display_options['fields']['field_erstellungsdatum']['alter']['max_length'] = '10';
  $handler->display->display_options['fields']['field_erstellungsdatum']['alter']['trim'] = TRUE;
  /* Field: Field collection item: Änderungsdatum */
  $handler->display->display_options['fields']['field_aenderungsdatum']['id'] = 'field_aenderungsdatum';
  $handler->display->display_options['fields']['field_aenderungsdatum']['table'] = 'field_data_field_aenderungsdatum';
  $handler->display->display_options['fields']['field_aenderungsdatum']['field'] = 'field_aenderungsdatum';
  $handler->display->display_options['fields']['field_aenderungsdatum']['alter']['max_length'] = '10';
  $handler->display->display_options['fields']['field_aenderungsdatum']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_aenderungsdatum']['type'] = 'text_plain';
  /* Field: Field: Anmerkung (intern) */
  $handler->display->display_options['fields']['field_internal_anmerkung']['id'] = 'field_internal_anmerkung';
  $handler->display->display_options['fields']['field_internal_anmerkung']['table'] = 'field_data_field_internal_anmerkung';
  $handler->display->display_options['fields']['field_internal_anmerkung']['field'] = 'field_internal_anmerkung';
  $handler->display->display_options['fields']['field_internal_anmerkung']['alter']['max_length'] = '120';
  $handler->display->display_options['fields']['field_internal_anmerkung']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_internal_anmerkung']['settings'] = array(
    'click_to_edit' => 1,
    'click_to_edit_style' => 'hover',
    'empty_text' => 'Derzeit gibt es noch keine Anmerkungen zu diesem Inhalt.
Um eine Anmerkung zu schreiben, fahren sie mit der Maus über das feld und klicken auf Editieren.',
    'fallback_format' => 'text_plain',
  );
  /* Field: Content: Workflow-Status */
  $handler->display->display_options['fields']['field_workflow_status']['id'] = 'field_workflow_status';
  $handler->display->display_options['fields']['field_workflow_status']['table'] = 'field_data_field_workflow_status';
  $handler->display->display_options['fields']['field_workflow_status']['field'] = 'field_workflow_status';
  $handler->display->display_options['fields']['field_workflow_status']['alter']['max_length'] = '120';
  $handler->display->display_options['fields']['field_workflow_status']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_workflow_status']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_workflow_status']['settings'] = array(
    'click_to_edit' => 1,
    'click_to_edit_style' => 'hover',
    'empty_text' => '',
    'fallback_format' => 'taxonomy_term_reference_plain',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Link';
  $handler->display->display_options['fields']['edit_node']['text'] = 'Bearbeiten';
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'Ersteller';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Workflow-Status (field_workflow_status) */
  $handler->display->display_options['filters']['field_workflow_status_tid']['id'] = 'field_workflow_status_tid';
  $handler->display->display_options['filters']['field_workflow_status_tid']['table'] = 'field_data_field_workflow_status';
  $handler->display->display_options['filters']['field_workflow_status_tid']['field'] = 'field_workflow_status_tid';
  $handler->display->display_options['filters']['field_workflow_status_tid']['value'] = array(
    9 => '9',
  );
  $handler->display->display_options['filters']['field_workflow_status_tid']['expose']['operator_id'] = 'field_workflow_status_tid_op';
  $handler->display->display_options['filters']['field_workflow_status_tid']['expose']['label'] = 'Workflow-Status';
  $handler->display->display_options['filters']['field_workflow_status_tid']['expose']['operator'] = 'field_workflow_status_tid_op';
  $handler->display->display_options['filters']['field_workflow_status_tid']['expose']['identifier'] = 'field_workflow_status_tid';
  $handler->display->display_options['filters']['field_workflow_status_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_workflow_status_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_workflow_status_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_workflow_status_tid']['vocabulary'] = 'tax_workflow_status';

  /* Display: Erstellung */
  $handler = $view->new_display('page', 'Erstellung', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Erstellung';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['hide_admin_links'] = TRUE;
  $handler->display->display_options['path'] = 'admin/workflow-view/erstellung';

  /* Display: Qualitätssicherung */
  $handler = $view->new_display('page', 'Qualitätssicherung', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Workflow-Status (field_workflow_status) */
  $handler->display->display_options['filters']['field_workflow_status_tid']['id'] = 'field_workflow_status_tid';
  $handler->display->display_options['filters']['field_workflow_status_tid']['table'] = 'field_data_field_workflow_status';
  $handler->display->display_options['filters']['field_workflow_status_tid']['field'] = 'field_workflow_status_tid';
  $handler->display->display_options['filters']['field_workflow_status_tid']['value'] = array(
    10 => '10',
  );
  $handler->display->display_options['filters']['field_workflow_status_tid']['expose']['operator_id'] = 'field_workflow_status_tid_op';
  $handler->display->display_options['filters']['field_workflow_status_tid']['expose']['label'] = 'Workflow-Status';
  $handler->display->display_options['filters']['field_workflow_status_tid']['expose']['operator'] = 'field_workflow_status_tid_op';
  $handler->display->display_options['filters']['field_workflow_status_tid']['expose']['identifier'] = 'field_workflow_status_tid';
  $handler->display->display_options['filters']['field_workflow_status_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_workflow_status_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_workflow_status_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_workflow_status_tid']['vocabulary'] = 'tax_workflow_status';
  $handler->display->display_options['path'] = 'admin/workflow-view/qualitaet';

  /* Display: Fertig zur Freigabe */
  $handler = $view->new_display('page', 'Fertig zur Freigabe', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Fertig zur Freigabe';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Workflow-Status (field_workflow_status) */
  $handler->display->display_options['filters']['field_workflow_status_tid']['id'] = 'field_workflow_status_tid';
  $handler->display->display_options['filters']['field_workflow_status_tid']['table'] = 'field_data_field_workflow_status';
  $handler->display->display_options['filters']['field_workflow_status_tid']['field'] = 'field_workflow_status_tid';
  $handler->display->display_options['filters']['field_workflow_status_tid']['value'] = array(
    11 => '11',
  );
  $handler->display->display_options['filters']['field_workflow_status_tid']['expose']['operator_id'] = 'field_workflow_status_tid_op';
  $handler->display->display_options['filters']['field_workflow_status_tid']['expose']['label'] = 'Workflow-Status';
  $handler->display->display_options['filters']['field_workflow_status_tid']['expose']['operator'] = 'field_workflow_status_tid_op';
  $handler->display->display_options['filters']['field_workflow_status_tid']['expose']['identifier'] = 'field_workflow_status_tid';
  $handler->display->display_options['filters']['field_workflow_status_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_workflow_status_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_workflow_status_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_workflow_status_tid']['vocabulary'] = 'tax_workflow_status';
  $handler->display->display_options['path'] = 'admin/workflow-view/freigabe';

  /* Display: Publizieren */
  $handler = $view->new_display('page', 'Publizieren', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Publizieren';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'title' => 'title',
    'field_inhalt' => 'field_inhalt',
    'field_erstellungsdatum' => 'field_erstellungsdatum',
    'field_aenderungsdatum' => 'field_aenderungsdatum',
    'field_internal_anmerkung' => 'field_internal_anmerkung',
    'field_workflow_status' => 'field_workflow_status',
  );
  $handler->display->display_options['style_options']['default'] = 'field_erstellungsdatum';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_inhalt' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_erstellungsdatum' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aenderungsdatum' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_internal_anmerkung' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_workflow_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Workflow-Status (field_workflow_status) */
  $handler->display->display_options['filters']['field_workflow_status_tid']['id'] = 'field_workflow_status_tid';
  $handler->display->display_options['filters']['field_workflow_status_tid']['table'] = 'field_data_field_workflow_status';
  $handler->display->display_options['filters']['field_workflow_status_tid']['field'] = 'field_workflow_status_tid';
  $handler->display->display_options['filters']['field_workflow_status_tid']['value'] = array(
    12 => '12',
  );
  $handler->display->display_options['filters']['field_workflow_status_tid']['expose']['operator_id'] = 'field_workflow_status_tid_op';
  $handler->display->display_options['filters']['field_workflow_status_tid']['expose']['label'] = 'Workflow-Status';
  $handler->display->display_options['filters']['field_workflow_status_tid']['expose']['operator'] = 'field_workflow_status_tid_op';
  $handler->display->display_options['filters']['field_workflow_status_tid']['expose']['identifier'] = 'field_workflow_status_tid';
  $handler->display->display_options['filters']['field_workflow_status_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_workflow_status_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_workflow_status_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_workflow_status_tid']['vocabulary'] = 'tax_workflow_status';
  $handler->display->display_options['path'] = 'admin/workflow-view/publizieren';

  /* Display: Alles */
  $handler = $view->new_display('page', 'Alles', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'All';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_inhalt' => 'field_inhalt',
    'field_erstellungsdatum' => 'field_erstellungsdatum',
    'field_aenderungsdatum' => 'field_aenderungsdatum',
    'field_internal_anmerkung' => 'field_internal_anmerkung',
    'field_workflow_status' => 'field_workflow_status',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'field_erstellungsdatum';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_inhalt' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_erstellungsdatum' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aenderungsdatum' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_internal_anmerkung' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_workflow_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Workflow-Status (field_workflow_status) */
  $handler->display->display_options['filters']['field_workflow_status_tid']['id'] = 'field_workflow_status_tid';
  $handler->display->display_options['filters']['field_workflow_status_tid']['table'] = 'field_data_field_workflow_status';
  $handler->display->display_options['filters']['field_workflow_status_tid']['field'] = 'field_workflow_status_tid';
  $handler->display->display_options['filters']['field_workflow_status_tid']['value'] = array(
    9 => '9',
    10 => '10',
    11 => '11',
    12 => '12',
  );
  $handler->display->display_options['filters']['field_workflow_status_tid']['expose']['operator_id'] = 'field_workflow_status_tid_op';
  $handler->display->display_options['filters']['field_workflow_status_tid']['expose']['label'] = 'Workflow-Status';
  $handler->display->display_options['filters']['field_workflow_status_tid']['expose']['operator'] = 'field_workflow_status_tid_op';
  $handler->display->display_options['filters']['field_workflow_status_tid']['expose']['identifier'] = 'field_workflow_status_tid';
  $handler->display->display_options['filters']['field_workflow_status_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_workflow_status_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_workflow_status_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_workflow_status_tid']['vocabulary'] = 'tax_workflow_status';
  $handler->display->display_options['path'] = 'admin/workflow-view';

  /* Display: Redakteursdashboard */
  $handler = $view->new_display('block', 'Redakteursdashboard', 'block_dashboard_redaktionsuebersicht');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Redaktions-Übersicht';
  $handler->display->display_options['display_description'] = 'Workflow - Redakteursdashboard-Ansicht';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'Rwdakteursdashboard';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_inhalt' => 'field_inhalt',
    'field_erstellungsdatum' => 'field_erstellungsdatum',
    'field_aenderungsdatum' => 'field_aenderungsdatum',
    'field_internal_anmerkung' => 'field_internal_anmerkung',
    'field_workflow_status' => 'field_workflow_status',
    'edit_node' => 'edit_node',
    'uid' => 'uid',
    'field_termref_autor' => 'field_termref_autor',
    'sitename' => 'sitename',
  );
  $handler->display->display_options['style_options']['default'] = 'sitename';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_inhalt' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_erstellungsdatum' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aenderungsdatum' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_internal_anmerkung' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_workflow_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uid' => array(
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_termref_autor' => array(
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'sitename' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<a class="button" href="/admin/workflow-view/erstellung" >Erstellung</a><a class="button" href="/admin/workflow-view/qualitaet" >Qualitätsssicherung</a><a class="button" href="/admin/workflow-view/freigabe" >Fertig zur Freigabe</a><a class="button" href="/admin/workflow-view/publizieren" >Publizieren</a>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Artikelinhalt */
  $handler->display->display_options['fields']['field_inhalt']['id'] = 'field_inhalt';
  $handler->display->display_options['fields']['field_inhalt']['table'] = 'field_data_field_inhalt';
  $handler->display->display_options['fields']['field_inhalt']['field'] = 'field_inhalt';
  $handler->display->display_options['fields']['field_inhalt']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_inhalt']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_inhalt']['settings'] = array(
    'trim_length' => '250',
  );
  /* Field: Field collection item: Erstellungsdatum */
  $handler->display->display_options['fields']['field_erstellungsdatum']['id'] = 'field_erstellungsdatum';
  $handler->display->display_options['fields']['field_erstellungsdatum']['table'] = 'field_data_field_erstellungsdatum';
  $handler->display->display_options['fields']['field_erstellungsdatum']['field'] = 'field_erstellungsdatum';
  $handler->display->display_options['fields']['field_erstellungsdatum']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_erstellungsdatum']['alter']['max_length'] = '25';
  $handler->display->display_options['fields']['field_erstellungsdatum']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_erstellungsdatum']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_erstellungsdatum']['alter']['trim'] = TRUE;
  /* Field: Field collection item: Änderungsdatum */
  $handler->display->display_options['fields']['field_aenderungsdatum']['id'] = 'field_aenderungsdatum';
  $handler->display->display_options['fields']['field_aenderungsdatum']['table'] = 'field_data_field_aenderungsdatum';
  $handler->display->display_options['fields']['field_aenderungsdatum']['field'] = 'field_aenderungsdatum';
  $handler->display->display_options['fields']['field_aenderungsdatum']['label'] = 'Erstellungs- / Änderungsdatum';
  $handler->display->display_options['fields']['field_aenderungsdatum']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_aenderungsdatum']['alter']['text'] = 'Erstellungsdatum: [field_erstellungsdatum]<br/>
Änderungsdatum: [field_aenderungsdatum]';
  $handler->display->display_options['fields']['field_aenderungsdatum']['alter']['max_length'] = '120';
  $handler->display->display_options['fields']['field_aenderungsdatum']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_aenderungsdatum']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_aenderungsdatum']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_aenderungsdatum']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_aenderungsdatum']['type'] = 'text_plain';
  /* Field: Field: Anmerkung (intern) */
  $handler->display->display_options['fields']['field_internal_anmerkung']['id'] = 'field_internal_anmerkung';
  $handler->display->display_options['fields']['field_internal_anmerkung']['table'] = 'field_data_field_internal_anmerkung';
  $handler->display->display_options['fields']['field_internal_anmerkung']['field'] = 'field_internal_anmerkung';
  $handler->display->display_options['fields']['field_internal_anmerkung']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_internal_anmerkung']['alter']['max_length'] = '185';
  $handler->display->display_options['fields']['field_internal_anmerkung']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_internal_anmerkung']['settings'] = array(
    'click_to_edit' => 1,
    'click_to_edit_style' => 'hover',
    'empty_text' => 'Derzeit gibt es noch keine Anmerkungen zu diesem Inhalt.
Um eine Anmerkung zu schreiben, fahren sie mit der Maus über das feld und klicken auf Editieren.',
    'fallback_format' => 'text_plain',
  );
  /* Field: Content: Workflow-Status */
  $handler->display->display_options['fields']['field_workflow_status']['id'] = 'field_workflow_status';
  $handler->display->display_options['fields']['field_workflow_status']['table'] = 'field_data_field_workflow_status';
  $handler->display->display_options['fields']['field_workflow_status']['field'] = 'field_workflow_status';
  $handler->display->display_options['fields']['field_workflow_status']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_workflow_status']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_workflow_status']['settings'] = array(
    'click_to_edit' => 1,
    'click_to_edit_style' => 'hover',
    'empty_text' => '',
    'fallback_format' => 'taxonomy_term_reference_plain',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Link';
  $handler->display->display_options['fields']['edit_node']['text'] = 'Bearbeiten';
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'Ersteller';
  /* Field: Domains: Site name */
  $handler->display->display_options['fields']['sitename']['id'] = 'sitename';
  $handler->display->display_options['fields']['sitename']['table'] = 'domain';
  $handler->display->display_options['fields']['sitename']['field'] = 'sitename';
  $handler->display->display_options['fields']['sitename']['exclude'] = TRUE;
  $handler->display->display_options['fields']['sitename']['link_to_site'] = 1;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Field: Titel (field_titel) */
  $handler->display->display_options['filters']['field_titel_value']['id'] = 'field_titel_value';
  $handler->display->display_options['filters']['field_titel_value']['table'] = 'field_data_field_titel';
  $handler->display->display_options['filters']['field_titel_value']['field'] = 'field_titel_value';
  $handler->display->display_options['filters']['field_titel_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_titel_value']['group'] = 1;
  $handler->display->display_options['filters']['field_titel_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_titel_value']['expose']['operator_id'] = 'field_titel_value_op';
  $handler->display->display_options['filters']['field_titel_value']['expose']['label'] = 'Titel (field_titel)';
  $handler->display->display_options['filters']['field_titel_value']['expose']['operator'] = 'field_titel_value_op';
  $handler->display->display_options['filters']['field_titel_value']['expose']['identifier'] = 'field_titel_value';
  $handler->display->display_options['filters']['field_titel_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_titel_value']['expose']['remember_roles'] = array(
    2 => 0,
    5 => '5',
    6 => '6',
    3 => '3',
    1 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'page' => 'page',
    'artikel' => 'artikel',
    'bildergalerie' => 'bildergalerie',
    'biografie' => 'biografie',
    'centerpage' => 'centerpage',
    'webform' => 'webform',
    'kontakt' => 'kontakt',
    'listenseite' => 'listenseite',
    'simplenews' => 'simplenews',
    'pressemitteilung' => 'pressemitteilung',
    'pressestelle' => 'pressestelle',
    'socialmediaitem' => 'socialmediaitem',
    'socialmediateaser' => 'socialmediateaser',
    'termin' => 'termin',
    'universal' => 'universal',
    'veranstalter' => 'veranstalter',
    'veranstaltungsort' => 'veranstaltungsort',
    'video' => 'video',
    'zitat_des_tages' => 'zitat_des_tages',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => 0,
    4 => '4',
    5 => '5',
    6 => '6',
    3 => '3',
    1 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Workflow-Status (field_workflow_status) */
  $handler->display->display_options['filters']['field_workflow_status_tid']['id'] = 'field_workflow_status_tid';
  $handler->display->display_options['filters']['field_workflow_status_tid']['table'] = 'field_data_field_workflow_status';
  $handler->display->display_options['filters']['field_workflow_status_tid']['field'] = 'field_workflow_status_tid';
  $handler->display->display_options['filters']['field_workflow_status_tid']['value'] = array(
    9 => '9',
  );
  $handler->display->display_options['filters']['field_workflow_status_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_workflow_status_tid']['expose']['operator_id'] = 'field_workflow_status_tid_op';
  $handler->display->display_options['filters']['field_workflow_status_tid']['expose']['label'] = 'Workflow-Status';
  $handler->display->display_options['filters']['field_workflow_status_tid']['expose']['operator'] = 'field_workflow_status_tid_op';
  $handler->display->display_options['filters']['field_workflow_status_tid']['expose']['identifier'] = 'field_workflow_status_tid';
  $handler->display->display_options['filters']['field_workflow_status_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_workflow_status_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_workflow_status_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_workflow_status_tid']['vocabulary'] = 'tax_workflow_status';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => 0,
    4 => '4',
    5 => '5',
    6 => '6',
    3 => '3',
    1 => 0,
  );
  $handler->display->display_options['block_description'] = 'Redaktionsdashboard - Übersicht';
  $translatables['workflow_view'] = array(
    t('Master'),
    t('Qualitätssicherung'),
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
    t('Workflow Statuses'),
    t('<a class="button" href="/admin/workflow-view/erstellung" >Erstellung</a><a class="button" href="/admin/workflow-view/qualitaet" >Qualitätsssicherung</a><a class="button" href="/admin/workflow-view/freigabe" >Fertig zur Freigabe</a><a class="button" href="/admin/workflow-view/publizieren" >Publizieren</a>
'),
    t('Nichts Gefunden'),
    t('<strong>Derzeit gibt es keine Inhalte mit diesem Status.</strong>'),
    t('author'),
    t('Title'),
    t('Artikelinhalt'),
    t('Erstellungsdatum'),
    t('Änderungsdatum'),
    t('Anmerkung (intern)'),
    t('Workflow-Status'),
    t('Link'),
    t('Bearbeiten'),
    t('Ersteller'),
    t('Erstellung'),
    t('Fertig zur Freigabe'),
    t('Publizieren'),
    t('Alles'),
    t('All'),
    t('Redakteursdashboard'),
    t('Redaktions-Übersicht'),
    t('Workflow - Redakteursdashboard-Ansicht'),
    t('<a class="button" href="/admin/workflow-view/erstellung" >Erstellung</a><a class="button" href="/admin/workflow-view/qualitaet" >Qualitätsssicherung</a><a class="button" href="/admin/workflow-view/freigabe" >Fertig zur Freigabe</a><a class="button" href="/admin/workflow-view/publizieren" >Publizieren</a>'),
    t('Erstellungs- / Änderungsdatum'),
    t('Erstellungsdatum: [field_erstellungsdatum]<br/>
Änderungsdatum: [field_aenderungsdatum]'),
    t('Site name'),
    t('Titel (field_titel)'),
    t('Type'),
    t('Published'),
    t('Redaktionsdashboard - Übersicht'),
  );
  $export['workflow_view'] = $view;

  return $export;
}
