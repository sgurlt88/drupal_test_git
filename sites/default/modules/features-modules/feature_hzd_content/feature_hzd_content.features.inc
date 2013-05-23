<?php
/**
 * @file
 * feature_hzd_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_hzd_content_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "secureshare" && $api == "default_secureshare_profiles") {
    return array("version" => "2");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_hzd_content_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function feature_hzd_content_image_default_styles() {
  $styles = array();

  // Exported image style: artikel-detail.
  $styles['artikel-detail'] = array(
    'name' => 'artikel-detail',
    'effects' => array(
      31 => array(
        'label' => 'Aspect switcher',
        'help' => 'Use different effects depending on whether the image is landscape of portrait shaped. This re-uses other preset definitions, and just chooses between them based on the rule.',
        'effect callback' => 'canvasactions_aspect_image',
        'dimensions callback' => 'canvasactions_aspect_dimensions',
        'form callback' => 'canvasactions_aspect_form',
        'summary theme' => 'canvasactions_aspect_summary',
        'module' => 'imagecache_canvasactions',
        'name' => 'canvasactions_aspect',
        'data' => array(
          'portrait' => 'artikel-detail_hochformat',
          'landscape' => 'bildergalerie_grossansicht_querformat',
          'ratio_adjustment' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: artikel-detail_hochformat.
  $styles['artikel-detail_hochformat'] = array(
    'name' => 'artikel-detail_hochformat',
    'effects' => array(
      30 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 360,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: artikel-detail_querformat.
  $styles['artikel-detail_querformat'] = array(
    'name' => 'artikel-detail_querformat',
    'effects' => array(
      29 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 480,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: biografie_portraitbild.
  $styles['biografie_portraitbild'] = array(
    'name' => 'biografie_portraitbild',
    'effects' => array(
      15 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 225,
          'height' => 170,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: icon30x30.
  $styles['icon30x30'] = array(
    'name' => 'icon30x30',
    'effects' => array(
      22 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 30,
          'height' => 30,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function feature_hzd_content_node_info() {
  $items = array(
    'allgemeine_seite' => array(
      'name' => t('Allgemeine Seite'),
      'base' => 'node_content',
      'description' => t('Allgemeine Seite ohne Hessennavigator'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'artikel' => array(
      'name' => t('Artikel'),
      'base' => 'node_content',
      'description' => t('Artikel decken als Default-Informationstyp den weitaus größten Teil der Informationsangebote ab.
Die meisten Bedürfnisse der Informationsvermittlung lassen sich mit diesem Informationstyp erfüllen.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'biografie' => array(
      'name' => t('Biografie'),
      'base' => 'node_content',
      'description' => t('Biografie'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'listenseite' => array(
      'name' => t('Listenseite'),
      'base' => 'node_content',
      'description' => t('Das Template soll sowohl zur Darstellung von Personen (z. B. für Kontakte zu Pressesprechern, zur Darstellung der Minister und Staatssekretäre) zum Einsatz kommen, als auch für Themen
Elemente: Spitzmarke, Headline, 5 Listenelemente mit Bild (optional), Spitzmarke, Headline, Text, Link (optional), Blätterfunktion.
'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'socialmediaitem' => array(
      'name' => t('Social Media Item'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'socialmediateaser' => array(
      'name' => t('Social Media Teaser'),
      'base' => 'node_content',
      'description' => t('Social Media Teaser'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'universal' => array(
      'name' => t('Universal'),
      'base' => 'node_content',
      'description' => t('Universalbox für die Marginalspalte: Icongröße (30x30px)'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'webform' => array(
      'name' => t('Formular'),
      'base' => 'node_content',
      'description' => t('Standard Kontaktformular.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'zitat_des_tages' => array(
      'name' => t('Zitat des Tages'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
