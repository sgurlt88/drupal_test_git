<?php
/*
Plugin Name: neosmart STREAM for Wordpress
Plugin URI: https://neosmart-stream.de/docs/
Description: The most advanced Wordpress plug-in to add Facebook and Twitter to your website.
Version: 1.4.1
Author: neosmart GmbH
Author URI: https://neosmart-stream.de/
License: https://neosmart-stream.de/legal/license-agreement/
*/

define( 'NSS_WP_PATH', plugin_dir_path(__FILE__) );
define( 'NSS_WP_URL', plugin_dir_url(__FILE__) );

include "setup.php";


function nss_func($atts) {
	global $nss;
	extract(shortcode_atts(array(
		'theme' => ''
	), $atts));
	
	$html = $nss->themeWordpress($theme);
	return $html.$nss->show(false);
}
add_shortcode('nss', 'nss_func');


/*****************************************************************
 * Admin
 *****************************************************************/
 
if (!is_admin()) {
	return;
}

include "nss-admin/functions.php";
	
function nss_init_admin(){
	global $nss;
	$permissionError = testFilePermissions();

	if($nss->get('plugin_mode')!='wordpress'){
		activatePluginMode('wordpress');	
	}
	
	$dynpw = md5(NSS_WP_URL.LOGGED_IN_KEY.date('d').AUTH_KEY);
	$_SESSION['nss_admin_password'] = $dynpw;
	//if(!is_logged_in($nss,false))
	updatePassword($dynpw,false,false);
	
	add_menu_page('neosmart-stream-admin', 'neosmart STREAM', 'manage_options', 'neosmart-stream', 'nss_dashboard',NSS_WP_URL.'/nss-core/nss-icon-16x16.png',100.3);	
}

function nss_dashboard(){
	global $nss;
	$page = $nss->testLicenseSyntax() ? NSS_WP_URL.'nss-admin/index.php' : NSS_WP_URL.'index.php';
	$page .= '?dynpw='.$_SESSION['nss_admin_password'];
	include 'iframe.php';
}

add_action("admin_menu", "nss_init_admin");