<?php



/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 * 
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */
 
//function hessen–web–omega_links__system_main_menu($variables) {
  //$output = '';
  //foreach ($variables['links'] as $link) {
    //$output .= l($link['title'], $link['href'], $link);
  //}
  //return $output;
//}

function hessen_web_omega_menu_tree__main_menu($variables) {
  return '<ul id="main-menu" class="links inline mainmenu clearfix main-menu">' . $variables['tree'] . '</ul>';
}

function hessen_web_omega_preprocess_node ( &$vars ) {
    if ($vars["is_front"]) {
        $vars["theme_hook_suggestions"][] = "node__front";
    }
}

function hessen_web_omega_menu_link__main_menu(array $variables) {
  $element = $variables['element'];
  $sub_menu = '';

  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  $element['#attributes']['class'][] = 'menu-'.$element['#original_link']['mlid'];
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}



function hessen_web_omega_delta_blocks_breadcrumb($variables) {
  $output = '';

  if (!empty($variables['breadcrumb'])) {
    if ($variables['breadcrumb_current']) {
      //$variables['breadcrumb'][] = l(drupal_get_title(), current_path(), array('html' => TRUE));
      $variables['breadcrumb'][] = drupal_get_title();
    }
    
    $output = '<div id="breadcrumb" class="clearfix"><ul class="breadcrumb">';
    $switch = array('odd' => 'even', 'even' => 'odd');
    $zebra = 'even';
    $last = count($variables['breadcrumb']) - 1;

    foreach ($variables['breadcrumb'] as $key => $item) {
      $zebra = $switch[$zebra];
      $attributes['class'] = array('depth-' . ($key + 1), $zebra);

      if ($key == 0) {
        $attributes['class'][] = 'first';
      }

      if ($key == $last) {
        $attributes['class'][] = 'last';
        $output .= '<li' . drupal_attributes($attributes) . '><span id="breadcrumb-delimiter">&rsaquo; </span>' . $item . '</li>' . '';
      }

      else {
        $output .= '<li' . drupal_attributes($attributes) . '>' . $item . '</li>';
      }
    }

    $output .= '</ul></div>';
  }

  if (drupal_is_front_page()) {
    //$output = '<h2>' . t('You are here:') . '</h2>';
    //$output .= '<div class="breadcrumb">Frontpage</div>';
 }

  return $output;
}

/** 	preprocess for colorbox display of a node without additional blocks (http://drupal.org/node/836160) &
 *	http://stackoverflow.com/questions/247991/displaying-a-drupal-view-without-a-page-template-around-it
 */

function hessen_web_omega_preprocess_page(&$variables, &$source) {
 $source['path'] = str_replace('http://', 'https://', $source['path']);

  if (isset($_GET['response_type']) && $_GET['response_type'] == 'embed') {
    $variables['theme_hook_suggestions'][] = 'page__embed';
  }
if (isset($_GET['template']) && $_GET['template'] == 'colorbox') {
    $variables['theme_hook_suggestions'][] = 'page__colorbox';
  }
  
}

function hessen_web_omega_preprocess_html(&$variables) {
  if (isset($_GET['response_type']) && $_GET['response_type'] == 'embed') {
    $variables['theme_hook_suggestions'][] = 'html__embed';
  }
}

/**
 * Returns HTML for a breadcrumb trail.
 *
 * @param $variables
 *   An associative array containing:
 *   - breadcrumb: An array containing the breadcrumb links.
 */
 
function hessen_web_omega_breadcrumb($variables) {
  $sep = ' » ';
  if (count($variables['breadcrumb']) > 0) {
    return implode($sep, $variables['breadcrumb']) . $sep . '<span class="active">' . drupal_get_title() . '</span>';
  }
  else {
    return t("Home");
  }
}
/* Alter Code
function hessen_web_omega_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];

  if (!empty($breadcrumb)) {
    // Provide a navigational heading to give context for breadcrumb links to
    // screen-reader users. Make the heading invisible with .element-invisible.
    $output .= '<div class="breadcrumb">' . '<span class="prePhase">' . t('You are here') . ': </span>' . implode(' » ', $breadcrumb) . '</div>';
    return $output;
  }
}
*/

function get_scripts(){
	$js = drupal_add_js('sites/default/themes/hessen_web_omega/js/jquery-1.8.2.js', 'core', 'header');
	unset($js['core']['misc/jquery.js']);
	print drupal_get_js('header', $js);
}

/** IE CSS Support -> http://api.drupal.org/api/drupal/includes!common.inc/function/drupal_add_css/7 **/
drupal_add_css(path_to_theme() . '/css/ie/ie-all.css', array('group' => CSS_THEME, 'weight' => 115, 'browsers' => array('IE' => 'lte IE 8', '!IE' => FALSE), 'preprocess' => FALSE));
drupal_add_css(path_to_theme() . '/css/ie/ie-8.css', array('group' => CSS_THEME, 'weight' => 110, 'browsers' => array('IE' => 'IE 8', '!IE' => FALSE), 'preprocess' => FALSE));
drupal_add_css(path_to_theme() . '/css/ie/ie-7.css', array('group' => CSS_THEME, 'weight' => 110, 'browsers' => array('IE' => 'IE 7', '!IE' => FALSE), 'preprocess' => FALSE));

/** old IE HTML5 Supports via html5shiv -> http://api.drupal.org/api/drupal/includes!common.inc/function/drupal_add_js/7 **/


drupal_add_js(path_to_theme() . '/js/html5shiv.js', array('group' => JS_LIBRARY, 'weight' => 115, 'browsers' => array('IE' => 'lte IE 8', '!IE' => FALSE), 'preprocess' => FALSE));

// Fix Views Slideshow jCarousel

function hessen_web_omega_preprocess_views_slideshow_jcarousel_pager(&$vars) {
_views_slideshow_jcarousel_preprocess_pager($vars);
}

function hessen_web_omega_preprocess_views_slideshow_jcarousel_pager_item(&$vars) {
_views_slideshow_jcarousel_preprocess_pager_item($vars);
}