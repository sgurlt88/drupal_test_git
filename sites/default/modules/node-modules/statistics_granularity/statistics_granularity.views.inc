<?php
// $Id: statistics_granularity.views.inc,v 1.1.2.1 2010/02/15 21:13:54 bassistjimmyjam Exp $
/**
 * @file
 * Provide views data and handlers for the statistics granularity module
 */

/**
 * Implementation of hook_views_data()
 */
function statistics_granularity_views_data() {
  // weekcount
  $data['node_counter']['weekcount'] = array(
    'title' => t('Views this week'),
    'help' => t('The total number of times the node has been viewed.'),

    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
     ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  // monthcount
  $data['node_counter']['monthcount'] = array(
    'title' => t('Views this month'),
    'help' => t('The total number of times the node has been viewed.'),

    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
     ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  // yearcount
  $data['node_counter']['yearcount'] = array(
    'title' => t('Views this year'),
    'help' => t('The total number of times the node has been viewed.'),

    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
     ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );
  
  return $data;
} // end function statistics_granularity_views_data()

/**
 * Implementation of hook_views_handlers().
 */
function statistics_granularity_views_handlers() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'views') . '/modules/statistics',
    ),
    'handlers' => array(
      'views_handler_field_accesslog_path' => array(
        'parent' => 'views_handler_field',
      ),
    ),
  );
} // end function statistics_granularity_views_handlers()
