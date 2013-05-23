<?php
/**
 * @file
 * feature_hzd_events.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function feature_hzd_events_taxonomy_default_vocabularies() {
  return array(
    'tax_termin_kategorien' => array(
      'name' => 'Termin-Kategorien',
      'machine_name' => 'tax_termin_kategorien',
      'description' => 'Event-Arten, Kategorien & Veranstaltungstypen.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 5,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'tax_termin_regionen' => array(
      'name' => 'Termin-Regionen',
      'machine_name' => 'tax_termin_regionen',
      'description' => 'Termin-Regionen',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 6,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
