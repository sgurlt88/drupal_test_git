<?php
// $Id: day_counter.views.inc,v 1.1.2.1 2013/03/07 21:13:54 andischwarz Exp $
/**
 * @file
 * Provide views data and handlers for the day_counter module
 */

/**
 * Implementation of hook_views_data()
 */
function day_counter_views_data() {
  // sevendaycount
  $data['node_counter']['sevendaycount'] = array(
    'title' => t('Views from last Seven Days'),
    'help' => t('Views from last Seven Days'),

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
} // end function day_counter_views_data()

/**
 * Implementation of hook_views_handlers().
 */
function day_counter_views_handlers() {
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
} // end function day_counter_views_handlers()
