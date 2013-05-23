<?php
/**
 * @file
 * feature_hzd_core.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function feature_hzd_core_taxonomy_default_vocabularies() {
  return array(
    'tax_dienststellen' => array(
      'name' => 'Dienststellen',
      'machine_name' => 'tax_dienststellen',
      'description' => 'Publizierende Dienststelle',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -3,
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
