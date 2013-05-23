<?php
/**
 * @file
 * feature_hzd_content.default_secureshare_profiles.inc
 */

/**
 * Implements hook_default_secureshare_profile().
 */
function feature_hzd_content_default_secureshare_profile() {
  $export = array();

  $profile = new stdClass();
  $profile->disabled = FALSE; /* Edit this to true to make a default profile disabled initially */
  $profile->api_version = 2;
  $profile->name = 'Secureshare';
  $profile->config = array(
    'css_path' => '',
    'info_link' => '',
    'txt_help' => '',
    'settings_perma' => '',
    'cookie_expires' => '',
    'services' => array(
      'facebook' => array(
        'status' => 0,
        'dummy_img' => '',
        'txt_info' => '',
        'txt_fb_off' => '',
        'txt_fb_on' => '',
        'perma_option' => 0,
        'display_name' => '',
        'language' => 'system',
        'language_static' => '',
        'action' => 'recommend',
      ),
      'twitter' => array(
        'status' => 0,
        'dummy_img' => '',
        'txt_info' => '',
        'txt_twitter_off' => '',
        'txt_twitter_on' => '',
        'perma_option' => 0,
        'display_name' => '',
        'tweet_text' => 'default',
        'language' => 'system',
      ),
      'gplus' => array(
        'status' => 0,
        'dummy_img' => '',
        'txt_info' => '',
        'txt_gplus_off' => '',
        'txt_gplus_on' => '',
        'perma_option' => 0,
        'display_name' => '',
        'language' => 'user',
      ),
    ),
  );
  $export['Secureshare'] = $profile;

  return $export;
}
