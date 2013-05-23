<?php
/**
 * @file
 * feature_hzd_structure.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function feature_hzd_structure_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_empfehlung_centerpage'
  $field_bases['field_empfehlung_centerpage'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_empfehlung_centerpage',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Nein' => 'Nein',
        'Ja' => 'Ja',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_layout_centerpage'
  $field_bases['field_layout_centerpage'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_layout_centerpage',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Layout groß' => 'Centerpage',
        'Layout klein' => 'Ressortübersicht (Bildgröße optimiert für Layout ohne linke Seitennavigation)',
        'Layout klein ohne "Weiterlesen"' => 'Ressortübersicht ohne "Weiterlesen" (Bildgröße optimiert für Layout ohne linke Seitennavigation)',
        'Layout Artikelübersicht' => 'Teaserliste (3. Navigationsebene)',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_topthema_centerpage'
  $field_bases['field_topthema_centerpage'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_topthema_centerpage',
    'foreign keys' => array(
      'nid' => array(
        'columns' => array(
          'nid' => 'nid',
        ),
        'table' => 'node',
      ),
    ),
    'indexes' => array(
      'nid' => array(
        0 => 'nid',
      ),
    ),
    'locked' => 0,
    'module' => 'node_reference',
    'settings' => array(
      'referenceable_types' => array(
        'artikel' => 'artikel',
        'bildergalerie' => 0,
        'biografie' => 0,
        'centerpage' => 0,
        'listenseite' => 0,
        'newsletter_anmeldung' => 0,
        'page' => 0,
        'pressemitteilung' => 'pressemitteilung',
        'pressesprecher' => 0,
        'pressestelle' => 0,
        'simplenews' => 0,
        'socialmediaitem' => 0,
        'socialmediateaser' => 0,
        'termin' => 0,
        'universal' => 0,
        'veranstalter' => 0,
        'veranstaltungsort' => 0,
        'video' => 0,
        'webform' => 0,
        'zitat_des_tages' => 0,
      ),
      'view' => array(
        'args' => array(),
        'display_name' => '',
        'view_name' => '',
      ),
    ),
    'translatable' => 0,
    'type' => 'node_reference',
  );

  // Exported field_base: 'field_unterthemen_centerpage'
  $field_bases['field_unterthemen_centerpage'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_unterthemen_centerpage',
    'foreign keys' => array(
      'nid' => array(
        'columns' => array(
          'nid' => 'nid',
        ),
        'table' => 'node',
      ),
    ),
    'indexes' => array(
      'nid' => array(
        0 => 'nid',
      ),
    ),
    'locked' => 0,
    'module' => 'node_reference',
    'settings' => array(
      'referenceable_types' => array(
        'artikel' => 'artikel',
        'bildergalerie' => 0,
        'biografie' => 0,
        'centerpage' => 0,
        'listenseite' => 0,
        'newsletter_anmeldung' => 0,
        'page' => 0,
        'pressemitteilung' => 'pressemitteilung',
        'pressesprecher' => 0,
        'pressestelle' => 0,
        'simplenews' => 0,
        'socialmediaitem' => 0,
        'socialmediateaser' => 0,
        'termin' => 0,
        'universal' => 0,
        'veranstalter' => 0,
        'veranstaltungsort' => 0,
        'video' => 0,
        'webform' => 0,
        'zitat_des_tages' => 0,
      ),
      'view' => array(
        'args' => array(),
        'display_name' => '',
        'view_name' => '',
      ),
    ),
    'translatable' => 0,
    'type' => 'node_reference',
  );

  // Exported field_base: 'field_unterthemen_ueberschrift'
  $field_bases['field_unterthemen_ueberschrift'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_unterthemen_ueberschrift',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
