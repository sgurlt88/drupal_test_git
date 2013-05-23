<?php
/**
 * @file
 * feature_hzd_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function feature_hzd_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: access admin theme.
  $permissions['access admin theme'] = array(
    'name' => 'access admin theme',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'admin_theme',
  );

  // Exported permission: access administration menu.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'preview' => 'preview',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: access administration pages.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'system',
  );

  // Exported permission: access all views.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: access all webform results.
  $permissions['access all webform results'] = array(
    'name' => 'access all webform results',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'webform',
  );

  // Exported permission: access backup and migrate.
  $permissions['access backup and migrate'] = array(
    'name' => 'access backup and migrate',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: access backup files.
  $permissions['access backup files'] = array(
    'name' => 'access backup files',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: access ckeditor link.
  $permissions['access ckeditor link'] = array(
    'name' => 'access ckeditor link',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'ckeditor_link',
  );

  // Exported permission: access comments.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'comment',
  );

  // Exported permission: access content.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: access content overview.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: access contextual links.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'contextual',
  );

  // Exported permission: access dashboard.
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: access devel information.
  $permissions['access devel information'] = array(
    'name' => 'access devel information',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: access direct download file.
  $permissions['access direct download file'] = array(
    'name' => 'access direct download file',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'download_file',
  );

  // Exported permission: access domain navigation.
  $permissions['access domain navigation'] = array(
    'name' => 'access domain navigation',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
    ),
    'module' => 'domain_nav',
  );

  // Exported permission: access domain settings form.
  $permissions['access domain settings form'] = array(
    'name' => 'access domain settings form',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'domain_settings',
  );

  // Exported permission: access inactive domains.
  $permissions['access inactive domains'] = array(
    'name' => 'access inactive domains',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'domain',
  );

  // Exported permission: access journal.
  $permissions['access journal'] = array(
    'name' => 'access journal',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'journal',
  );

  // Exported permission: access media backend.
  $permissions['access media backend'] = array(
    'name' => 'access media backend',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'media_browser_plus',
  );

  // Exported permission: access own webform results.
  $permissions['access own webform results'] = array(
    'name' => 'access own webform results',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'webform',
  );

  // Exported permission: access own webform submissions.
  $permissions['access own webform submissions'] = array(
    'name' => 'access own webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'webform',
  );

  // Exported permission: access pagestyle content.
  $permissions['access pagestyle content'] = array(
    'name' => 'access pagestyle content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
    ),
    'module' => 'pagestyle',
  );

  // Exported permission: access pmautofill.
  $permissions['access pmautofill'] = array(
    'name' => 'access pmautofill',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
    ),
    'module' => 'pmautofill',
  );

  // Exported permission: access print.
  $permissions['access print'] = array(
    'name' => 'access print',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
    ),
    'module' => 'print',
  );

  // Exported permission: access printer-friendly version.
  $permissions['access printer-friendly version'] = array(
    'name' => 'access printer-friendly version',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'book',
  );

  // Exported permission: access rules debug.
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: access send by email.
  $permissions['access send by email'] = array(
    'name' => 'access send by email',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
    ),
    'module' => 'print_mail',
  );

  // Exported permission: access service links.
  $permissions['access service links'] = array(
    'name' => 'access service links',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'service_links',
  );

  // Exported permission: access site in maintenance mode.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: access site map.
  $permissions['access site map'] = array(
    'name' => 'access site map',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
    ),
    'module' => 'site_map',
  );

  // Exported permission: access site reports.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'system',
  );

  // Exported permission: access socialshareprivacy.
  $permissions['access socialshareprivacy'] = array(
    'name' => 'access socialshareprivacy',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'socialshareprivacy',
  );

  // Exported permission: access statistics.
  $permissions['access statistics'] = array(
    'name' => 'access statistics',
    'roles' => array(),
    'module' => 'statistics',
  );

  // Exported permission: access the domain content page.
  $permissions['access the domain content page'] = array(
    'name' => 'access the domain content page',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
    ),
    'module' => 'domain_content',
  );

  // Exported permission: access user profiles.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'user',
  );

  // Exported permission: add content to books.
  $permissions['add content to books'] = array(
    'name' => 'add content to books',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'book',
  );

  // Exported permission: add media from remote sources.
  $permissions['add media from remote sources'] = array(
    'name' => 'add media from remote sources',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'media_internet',
  );

  // Exported permission: administer CAPTCHA settings.
  $permissions['administer CAPTCHA settings'] = array(
    'name' => 'administer CAPTCHA settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'captcha',
  );

  // Exported permission: administer actions.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'system',
  );

  // Exported permission: administer addressfield staticmap.
  $permissions['administer addressfield staticmap'] = array(
    'name' => 'administer addressfield staticmap',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'addressfield_staticmap',
  );

  // Exported permission: administer backup and migrate.
  $permissions['administer backup and migrate'] = array(
    'name' => 'administer backup and migrate',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: administer blockify.
  $permissions['administer blockify'] = array(
    'name' => 'administer blockify',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'blockify',
  );

  // Exported permission: administer blocks.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'block',
  );

  // Exported permission: administer book outlines.
  $permissions['administer book outlines'] = array(
    'name' => 'administer book outlines',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'book',
  );

  // Exported permission: administer ckeditor link.
  $permissions['administer ckeditor link'] = array(
    'name' => 'administer ckeditor link',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'ckeditor_link',
  );

  // Exported permission: administer comments.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'comment',
  );

  // Exported permission: administer content types.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: administer dependencies.
  $permissions['administer dependencies'] = array(
    'name' => 'administer dependencies',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'conditional_fields',
  );

  // Exported permission: administer devel menu items.
  $permissions['administer devel menu items'] = array(
    'name' => 'administer devel menu items',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: administer domains.
  $permissions['administer domains'] = array(
    'name' => 'administer domains',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'domain',
  );

  // Exported permission: administer download file.
  $permissions['administer download file'] = array(
    'name' => 'administer download file',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'download_file',
  );

  // Exported permission: administer elysia_cron.
  $permissions['administer elysia_cron'] = array(
    'name' => 'administer elysia_cron',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'elysia_cron',
  );

  // Exported permission: administer entity view modes.
  $permissions['administer entity view modes'] = array(
    'name' => 'administer entity view modes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'entity_view_mode',
  );

  // Exported permission: administer features.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'features',
  );

  // Exported permission: administer features menu items.
  $permissions['administer features menu items'] = array(
    'name' => 'administer features menu items',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: administer field collections.
  $permissions['administer field collections'] = array(
    'name' => 'administer field collections',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'field_collection',
  );

  // Exported permission: administer fieldgroups.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'field_group',
  );

  // Exported permission: administer file types.
  $permissions['administer file types'] = array(
    'name' => 'administer file types',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: administer files.
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: administer filters.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'filter',
  );

  // Exported permission: administer image styles.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'image',
  );

  // Exported permission: administer inline form errors.
  $permissions['administer inline form errors'] = array(
    'name' => 'administer inline form errors',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ife',
  );

  // Exported permission: administer languages.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'locale',
  );

  // Exported permission: administer mailsystem.
  $permissions['administer mailsystem'] = array(
    'name' => 'administer mailsystem',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'mailsystem',
  );

  // Exported permission: administer main-menu menu items.
  $permissions['administer main-menu menu items'] = array(
    'name' => 'administer main-menu menu items',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: administer management menu items.
  $permissions['administer management menu items'] = array(
    'name' => 'administer management menu items',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: administer media folders.
  $permissions['administer media folders'] = array(
    'name' => 'administer media folders',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'media_browser_plus',
  );

  // Exported permission: administer mega menu.
  $permissions['administer mega menu'] = array(
    'name' => 'administer mega menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'megamenu',
  );

  // Exported permission: administer menu.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'menu',
  );

  // Exported permission: administer menu positions.
  $permissions['administer menu positions'] = array(
    'name' => 'administer menu positions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu_position',
  );

  // Exported permission: administer menu-footer-menu menu items.
  $permissions['administer menu-footer-menu menu items'] = array(
    'name' => 'administer menu-footer-menu menu items',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: administer menu-jquery-aim menu items.
  $permissions['administer menu-jquery-aim menu items'] = array(
    'name' => 'administer menu-jquery-aim menu items',
    'roles' => array(),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: administer menu-top-menu menu items.
  $permissions['administer menu-top-menu menu items'] = array(
    'name' => 'administer menu-top-menu menu items',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: administer menu-top-menu-hkm menu items.
  $permissions['administer menu-top-menu-hkm menu items'] = array(
    'name' => 'administer menu-top-menu-hkm menu items',
    'roles' => array(),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: administer menu-top-menu-hmdf menu items.
  $permissions['administer menu-top-menu-hmdf menu items'] = array(
    'name' => 'administer menu-top-menu-hmdf menu items',
    'roles' => array(),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: administer menu-top-menu-hmdis menu items.
  $permissions['administer menu-top-menu-hmdis menu items'] = array(
    'name' => 'administer menu-top-menu-hmdis menu items',
    'roles' => array(),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: administer menu-top-menu-hmdj menu items.
  $permissions['administer menu-top-menu-hmdj menu items'] = array(
    'name' => 'administer menu-top-menu-hmdj menu items',
    'roles' => array(),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: administer menu-top-menu-hmuelv menu items.
  $permissions['administer menu-top-menu-hmuelv menu items'] = array(
    'name' => 'administer menu-top-menu-hmuelv menu items',
    'roles' => array(),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: administer menu-top-menu-hmwk menu items.
  $permissions['administer menu-top-menu-hmwk menu items'] = array(
    'name' => 'administer menu-top-menu-hmwk menu items',
    'roles' => array(),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: administer menu-top-menu-hmwvl menu items.
  $permissions['administer menu-top-menu-hmwvl menu items'] = array(
    'name' => 'administer menu-top-menu-hmwvl menu items',
    'roles' => array(),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: administer menu-top-menu-hsm menu items.
  $permissions['administer menu-top-menu-hsm menu items'] = array(
    'name' => 'administer menu-top-menu-hsm menu items',
    'roles' => array(),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: administer menu-top-menu-hstk menu items.
  $permissions['administer menu-top-menu-hstk menu items'] = array(
    'name' => 'administer menu-top-menu-hstk menu items',
    'roles' => array(),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: administer meta tags.
  $permissions['administer meta tags'] = array(
    'name' => 'administer meta tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'metatag',
  );

  // Exported permission: administer module filter.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: administer modules.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'system',
  );

  // Exported permission: administer navigation menu items.
  $permissions['administer navigation menu items'] = array(
    'name' => 'administer navigation menu items',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: administer newsletters.
  $permissions['administer newsletters'] = array(
    'name' => 'administer newsletters',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: administer nodes.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: administer noreqnewpass.
  $permissions['administer noreqnewpass'] = array(
    'name' => 'administer noreqnewpass',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'noreqnewpass',
  );

  // Exported permission: administer page manager.
  $permissions['administer page manager'] = array(
    'name' => 'administer page manager',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: administer pagestyle.
  $permissions['administer pagestyle'] = array(
    'name' => 'administer pagestyle',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pagestyle',
  );

  // Exported permission: administer pathauto.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: administer permissions.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: administer print.
  $permissions['administer print'] = array(
    'name' => 'administer print',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'print',
  );

  // Exported permission: administer quicktabs.
  $permissions['administer quicktabs'] = array(
    'name' => 'administer quicktabs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'quicktabs',
  );

  // Exported permission: administer rules.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: administer scheduler.
  $permissions['administer scheduler'] = array(
    'name' => 'administer scheduler',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'scheduler',
  );

  // Exported permission: administer scs.
  $permissions['administer scs'] = array(
    'name' => 'administer scs',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
    ),
    'module' => 'scs',
  );

  // Exported permission: administer search.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'search',
  );

  // Exported permission: administer secureshare.
  $permissions['administer secureshare'] = array(
    'name' => 'administer secureshare',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'secureshare',
  );

  // Exported permission: administer semantic fields.
  $permissions['administer semantic fields'] = array(
    'name' => 'administer semantic fields',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'semantic_fields',
  );

  // Exported permission: administer shortcuts.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: administer simplenews settings.
  $permissions['administer simplenews settings'] = array(
    'name' => 'administer simplenews settings',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: administer simplenews subscriptions.
  $permissions['administer simplenews subscriptions'] = array(
    'name' => 'administer simplenews subscriptions',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: administer site configuration.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'system',
  );

  // Exported permission: administer socialshareprivacy.
  $permissions['administer socialshareprivacy'] = array(
    'name' => 'administer socialshareprivacy',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'socialshareprivacy',
  );

  // Exported permission: administer software updates.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer statistics.
  $permissions['administer statistics'] = array(
    'name' => 'administer statistics',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'statistics',
  );

  // Exported permission: administer taxonomy.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: administer themes.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'system',
  );

  // Exported permission: administer url aliases.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'path',
  );

  // Exported permission: administer user-menu menu items.
  $permissions['administer user-menu menu items'] = array(
    'name' => 'administer user-menu menu items',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: administer users.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'user',
  );

  // Exported permission: administer views.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'views',
  );

  // Exported permission: administer webform default fields.
  $permissions['administer webform default fields'] = array(
    'name' => 'administer webform default fields',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'webform_default_fields',
  );

  // Exported permission: administer widgets sets.
  $permissions['administer widgets sets'] = array(
    'name' => 'administer widgets sets',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'widgets',
  );

  // Exported permission: assign domain editors.
  $permissions['assign domain editors'] = array(
    'name' => 'assign domain editors',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'domain',
  );

  // Exported permission: block IP addresses.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'system',
  );

  // Exported permission: bypass file access.
  $permissions['bypass file access'] = array(
    'name' => 'bypass file access',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: bypass node access.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: bypass rules access.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: can change your own password.
  $permissions['can change your own password'] = array(
    'name' => 'can change your own password',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'noreqnewpass',
  );

  // Exported permission: cancel account.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'user',
  );

  // Exported permission: change own username.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'user',
  );

  // Exported permission: choose htmlmail_plaintext.
  $permissions['choose htmlmail_plaintext'] = array(
    'name' => 'choose htmlmail_plaintext',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'htmlmail',
  );

  // Exported permission: clone node.
  $permissions['clone node'] = array(
    'name' => 'clone node',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'clone',
  );

  // Exported permission: clone own nodes.
  $permissions['clone own nodes'] = array(
    'name' => 'clone own nodes',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'clone',
  );

  // Exported permission: create allgemeine_seite content.
  $permissions['create allgemeine_seite content'] = array(
    'name' => 'create allgemeine_seite content',
    'roles' => array(
      'chefredaktion' => 'chefredaktion',
    ),
    'module' => 'node',
  );

  // Exported permission: create allgemeine_seite content on assigned domains.
  $permissions['create allgemeine_seite content on assigned domains'] = array(
    'name' => 'create allgemeine_seite content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: create artikel content.
  $permissions['create artikel content'] = array(
    'name' => 'create artikel content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: create artikel content on assigned domains.
  $permissions['create artikel content on assigned domains'] = array(
    'name' => 'create artikel content on assigned domains',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'domain',
  );

  // Exported permission: create bildergalerie content.
  $permissions['create bildergalerie content'] = array(
    'name' => 'create bildergalerie content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: create bildergalerie content on assigned domains.
  $permissions['create bildergalerie content on assigned domains'] = array(
    'name' => 'create bildergalerie content on assigned domains',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'domain',
  );

  // Exported permission: create biografie content.
  $permissions['create biografie content'] = array(
    'name' => 'create biografie content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: create biografie content on assigned domains.
  $permissions['create biografie content on assigned domains'] = array(
    'name' => 'create biografie content on assigned domains',
    'roles' => array(
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'domain',
  );

  // Exported permission: create book content.
  $permissions['create book content'] = array(
    'name' => 'create book content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create book content on assigned domains.
  $permissions['create book content on assigned domains'] = array(
    'name' => 'create book content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: create centerpage content.
  $permissions['create centerpage content'] = array(
    'name' => 'create centerpage content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: create centerpage content on assigned domains.
  $permissions['create centerpage content on assigned domains'] = array(
    'name' => 'create centerpage content on assigned domains',
    'roles' => array(
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
    ),
    'module' => 'domain',
  );

  // Exported permission: create files.
  $permissions['create files'] = array(
    'name' => 'create files',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: create listenseite content.
  $permissions['create listenseite content'] = array(
    'name' => 'create listenseite content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: create listenseite content on assigned domains.
  $permissions['create listenseite content on assigned domains'] = array(
    'name' => 'create listenseite content on assigned domains',
    'roles' => array(
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
    ),
    'module' => 'domain',
  );

  // Exported permission: create new books.
  $permissions['create new books'] = array(
    'name' => 'create new books',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'book',
  );

  // Exported permission: create newsletter_anmeldung content.
  $permissions['create newsletter_anmeldung content'] = array(
    'name' => 'create newsletter_anmeldung content',
    'roles' => array(
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
    ),
    'module' => 'node',
  );

  // Exported permission: create newsletter_anmeldung content on assigned domains.
  $permissions['create newsletter_anmeldung content on assigned domains'] = array(
    'name' => 'create newsletter_anmeldung content on assigned domains',
    'roles' => array(
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
    ),
    'module' => 'domain',
  );

  // Exported permission: create page content.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: create page content on assigned domains.
  $permissions['create page content on assigned domains'] = array(
    'name' => 'create page content on assigned domains',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'domain',
  );

  // Exported permission: create pressemitteilung content.
  $permissions['create pressemitteilung content'] = array(
    'name' => 'create pressemitteilung content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: create pressemitteilung content on assigned domains.
  $permissions['create pressemitteilung content on assigned domains'] = array(
    'name' => 'create pressemitteilung content on assigned domains',
    'roles' => array(
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'domain',
  );

  // Exported permission: create pressesprecher content.
  $permissions['create pressesprecher content'] = array(
    'name' => 'create pressesprecher content',
    'roles' => array(
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
    ),
    'module' => 'node',
  );

  // Exported permission: create pressesprecher content on assigned domains.
  $permissions['create pressesprecher content on assigned domains'] = array(
    'name' => 'create pressesprecher content on assigned domains',
    'roles' => array(
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
    ),
    'module' => 'domain',
  );

  // Exported permission: create pressestelle content.
  $permissions['create pressestelle content'] = array(
    'name' => 'create pressestelle content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: create pressestelle content on assigned domains.
  $permissions['create pressestelle content on assigned domains'] = array(
    'name' => 'create pressestelle content on assigned domains',
    'roles' => array(
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'domain',
  );

  // Exported permission: create simplenews content.
  $permissions['create simplenews content'] = array(
    'name' => 'create simplenews content',
    'roles' => array(
      'chefredaktion' => 'chefredaktion',
    ),
    'module' => 'node',
  );

  // Exported permission: create simplenews content on assigned domains.
  $permissions['create simplenews content on assigned domains'] = array(
    'name' => 'create simplenews content on assigned domains',
    'roles' => array(
      'chefredaktion' => 'chefredaktion',
    ),
    'module' => 'domain',
  );

  // Exported permission: create socialmediaitem content.
  $permissions['create socialmediaitem content'] = array(
    'name' => 'create socialmediaitem content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: create socialmediaitem content on assigned domains.
  $permissions['create socialmediaitem content on assigned domains'] = array(
    'name' => 'create socialmediaitem content on assigned domains',
    'roles' => array(
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'domain',
  );

  // Exported permission: create socialmediateaser content.
  $permissions['create socialmediateaser content'] = array(
    'name' => 'create socialmediateaser content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: create socialmediateaser content on assigned domains.
  $permissions['create socialmediateaser content on assigned domains'] = array(
    'name' => 'create socialmediateaser content on assigned domains',
    'roles' => array(
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'domain',
  );

  // Exported permission: create termin content.
  $permissions['create termin content'] = array(
    'name' => 'create termin content',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: create termin content on assigned domains.
  $permissions['create termin content on assigned domains'] = array(
    'name' => 'create termin content on assigned domains',
    'roles' => array(
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'domain',
  );

  // Exported permission: create universal content.
  $permissions['create universal content'] = array(
    'name' => 'create universal content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: create universal content on assigned domains.
  $permissions['create universal content on assigned domains'] = array(
    'name' => 'create universal content on assigned domains',
    'roles' => array(
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
    ),
    'module' => 'domain',
  );

  // Exported permission: create url aliases.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'path',
  );

  // Exported permission: create veranstalter content.
  $permissions['create veranstalter content'] = array(
    'name' => 'create veranstalter content',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: create veranstalter content on assigned domains.
  $permissions['create veranstalter content on assigned domains'] = array(
    'name' => 'create veranstalter content on assigned domains',
    'roles' => array(
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'domain',
  );

  // Exported permission: create veranstaltungsort content.
  $permissions['create veranstaltungsort content'] = array(
    'name' => 'create veranstaltungsort content',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: create veranstaltungsort content on assigned domains.
  $permissions['create veranstaltungsort content on assigned domains'] = array(
    'name' => 'create veranstaltungsort content on assigned domains',
    'roles' => array(
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'domain',
  );

  // Exported permission: create video content.
  $permissions['create video content'] = array(
    'name' => 'create video content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: create video content on assigned domains.
  $permissions['create video content on assigned domains'] = array(
    'name' => 'create video content on assigned domains',
    'roles' => array(
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'domain',
  );

  // Exported permission: create webform content.
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: create webform content on assigned domains.
  $permissions['create webform content on assigned domains'] = array(
    'name' => 'create webform content on assigned domains',
    'roles' => array(
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'domain',
  );

  // Exported permission: create zitat_des_tages content.
  $permissions['create zitat_des_tages content'] = array(
    'name' => 'create zitat_des_tages content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: create zitat_des_tages content on assigned domains.
  $permissions['create zitat_des_tages content on assigned domains'] = array(
    'name' => 'create zitat_des_tages content on assigned domains',
    'roles' => array(
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
    ),
    'module' => 'domain',
  );

  // Exported permission: customize shortcut links.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: delete all webform submissions.
  $permissions['delete all webform submissions'] = array(
    'name' => 'delete all webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: delete allgemeine_seite content on assigned domains.
  $permissions['delete allgemeine_seite content on assigned domains'] = array(
    'name' => 'delete allgemeine_seite content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: delete any allgemeine_seite content.
  $permissions['delete any allgemeine_seite content'] = array(
    'name' => 'delete any allgemeine_seite content',
    'roles' => array(
      'chefredaktion' => 'chefredaktion',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any artikel content.
  $permissions['delete any artikel content'] = array(
    'name' => 'delete any artikel content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any bildergalerie content.
  $permissions['delete any bildergalerie content'] = array(
    'name' => 'delete any bildergalerie content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any biografie content.
  $permissions['delete any biografie content'] = array(
    'name' => 'delete any biografie content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any book content.
  $permissions['delete any book content'] = array(
    'name' => 'delete any book content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any centerpage content.
  $permissions['delete any centerpage content'] = array(
    'name' => 'delete any centerpage content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any files.
  $permissions['delete any files'] = array(
    'name' => 'delete any files',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: delete any listenseite content.
  $permissions['delete any listenseite content'] = array(
    'name' => 'delete any listenseite content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any newsletter_anmeldung content.
  $permissions['delete any newsletter_anmeldung content'] = array(
    'name' => 'delete any newsletter_anmeldung content',
    'roles' => array(
      'chefredaktion' => 'chefredaktion',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any page content.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any pressemitteilung content.
  $permissions['delete any pressemitteilung content'] = array(
    'name' => 'delete any pressemitteilung content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any pressesprecher content.
  $permissions['delete any pressesprecher content'] = array(
    'name' => 'delete any pressesprecher content',
    'roles' => array(
      'chefredaktion' => 'chefredaktion',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any pressestelle content.
  $permissions['delete any pressestelle content'] = array(
    'name' => 'delete any pressestelle content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any simplenews content.
  $permissions['delete any simplenews content'] = array(
    'name' => 'delete any simplenews content',
    'roles' => array(
      'chefredaktion' => 'chefredaktion',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any socialmediaitem content.
  $permissions['delete any socialmediaitem content'] = array(
    'name' => 'delete any socialmediaitem content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any socialmediateaser content.
  $permissions['delete any socialmediateaser content'] = array(
    'name' => 'delete any socialmediateaser content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any termin content.
  $permissions['delete any termin content'] = array(
    'name' => 'delete any termin content',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any universal content.
  $permissions['delete any universal content'] = array(
    'name' => 'delete any universal content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any veranstalter content.
  $permissions['delete any veranstalter content'] = array(
    'name' => 'delete any veranstalter content',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any veranstaltungsort content.
  $permissions['delete any veranstaltungsort content'] = array(
    'name' => 'delete any veranstaltungsort content',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any video content.
  $permissions['delete any video content'] = array(
    'name' => 'delete any video content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any webform content.
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any zitat_des_tages content.
  $permissions['delete any zitat_des_tages content'] = array(
    'name' => 'delete any zitat_des_tages content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: delete artikel content on assigned domains.
  $permissions['delete artikel content on assigned domains'] = array(
    'name' => 'delete artikel content on assigned domains',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'domain',
  );

  // Exported permission: delete backup files.
  $permissions['delete backup files'] = array(
    'name' => 'delete backup files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: delete bildergalerie content on assigned domains.
  $permissions['delete bildergalerie content on assigned domains'] = array(
    'name' => 'delete bildergalerie content on assigned domains',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'domain',
  );

  // Exported permission: delete biografie content on assigned domains.
  $permissions['delete biografie content on assigned domains'] = array(
    'name' => 'delete biografie content on assigned domains',
    'roles' => array(
      'chefredaktion' => 'chefredaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'domain',
  );

  // Exported permission: delete book content on assigned domains.
  $permissions['delete book content on assigned domains'] = array(
    'name' => 'delete book content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: delete centerpage content on assigned domains.
  $permissions['delete centerpage content on assigned domains'] = array(
    'name' => 'delete centerpage content on assigned domains',
    'roles' => array(
      'chefredaktion' => 'chefredaktion',
    ),
    'module' => 'domain',
  );

  // Exported permission: delete domain content.
  $permissions['delete domain content'] = array(
    'name' => 'delete domain content',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'domain',
  );

  // Exported permission: delete listenseite content on assigned domains.
  $permissions['delete listenseite content on assigned domains'] = array(
    'name' => 'delete listenseite content on assigned domains',
    'roles' => array(
      'chefredaktion' => 'chefredaktion',
    ),
    'module' => 'domain',
  );

  // Exported permission: delete newsletter_anmeldung content on assigned domains.
  $permissions['delete newsletter_anmeldung content on assigned domains'] = array(
    'name' => 'delete newsletter_anmeldung content on assigned domains',
    'roles' => array(
      'chefredaktion' => 'chefredaktion',
    ),
    'module' => 'domain',
  );

  // Exported permission: delete own allgemeine_seite content.
  $permissions['delete own allgemeine_seite content'] = array(
    'name' => 'delete own allgemeine_seite content',
    'roles' => array(
      'chefredaktion' => 'chefredaktion',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own artikel content.
  $permissions['delete own artikel content'] = array(
    'name' => 'delete own artikel content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own bildergalerie content.
  $permissions['delete own bildergalerie content'] = array(
    'name' => 'delete own bildergalerie content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own biografie content.
  $permissions['delete own biografie content'] = array(
    'name' => 'delete own biografie content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own book content.
  $permissions['delete own book content'] = array(
    'name' => 'delete own book content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own centerpage content.
  $permissions['delete own centerpage content'] = array(
    'name' => 'delete own centerpage content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own files.
  $permissions['delete own files'] = array(
    'name' => 'delete own files',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: delete own listenseite content.
  $permissions['delete own listenseite content'] = array(
    'name' => 'delete own listenseite content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own newsletter_anmeldung content.
  $permissions['delete own newsletter_anmeldung content'] = array(
    'name' => 'delete own newsletter_anmeldung content',
    'roles' => array(
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own page content.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own pressemitteilung content.
  $permissions['delete own pressemitteilung content'] = array(
    'name' => 'delete own pressemitteilung content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own pressesprecher content.
  $permissions['delete own pressesprecher content'] = array(
    'name' => 'delete own pressesprecher content',
    'roles' => array(
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own pressestelle content.
  $permissions['delete own pressestelle content'] = array(
    'name' => 'delete own pressestelle content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own simplenews content.
  $permissions['delete own simplenews content'] = array(
    'name' => 'delete own simplenews content',
    'roles' => array(
      'chefredaktion' => 'chefredaktion',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own socialmediaitem content.
  $permissions['delete own socialmediaitem content'] = array(
    'name' => 'delete own socialmediaitem content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own socialmediateaser content.
  $permissions['delete own socialmediateaser content'] = array(
    'name' => 'delete own socialmediateaser content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own termin content.
  $permissions['delete own termin content'] = array(
    'name' => 'delete own termin content',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own universal content.
  $permissions['delete own universal content'] = array(
    'name' => 'delete own universal content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own veranstalter content.
  $permissions['delete own veranstalter content'] = array(
    'name' => 'delete own veranstalter content',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own veranstaltungsort content.
  $permissions['delete own veranstaltungsort content'] = array(
    'name' => 'delete own veranstaltungsort content',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own video content.
  $permissions['delete own video content'] = array(
    'name' => 'delete own video content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own webform content.
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own webform submissions.
  $permissions['delete own webform submissions'] = array(
    'name' => 'delete own webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'webform',
  );

  // Exported permission: delete own zitat_des_tages content.
  $permissions['delete own zitat_des_tages content'] = array(
    'name' => 'delete own zitat_des_tages content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: delete page content on assigned domains.
  $permissions['delete page content on assigned domains'] = array(
    'name' => 'delete page content on assigned domains',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'domain',
  );

  // Exported permission: delete pressemitteilung content on assigned domains.
  $permissions['delete pressemitteilung content on assigned domains'] = array(
    'name' => 'delete pressemitteilung content on assigned domains',
    'roles' => array(
      'chefredaktion' => 'chefredaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'domain',
  );

  // Exported permission: delete pressesprecher content on assigned domains.
  $permissions['delete pressesprecher content on assigned domains'] = array(
    'name' => 'delete pressesprecher content on assigned domains',
    'roles' => array(
      'chefredaktion' => 'chefredaktion',
    ),
    'module' => 'domain',
  );

  // Exported permission: delete pressestelle content on assigned domains.
  $permissions['delete pressestelle content on assigned domains'] = array(
    'name' => 'delete pressestelle content on assigned domains',
    'roles' => array(
      'chefredaktion' => 'chefredaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'domain',
  );

  // Exported permission: delete revisions.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
    ),
    'module' => 'node',
  );

  // Exported permission: delete simplenews content on assigned domains.
  $permissions['delete simplenews content on assigned domains'] = array(
    'name' => 'delete simplenews content on assigned domains',
    'roles' => array(
      'chefredaktion' => 'chefredaktion',
    ),
    'module' => 'domain',
  );

  // Exported permission: delete socialmediaitem content on assigned domains.
  $permissions['delete socialmediaitem content on assigned domains'] = array(
    'name' => 'delete socialmediaitem content on assigned domains',
    'roles' => array(
      'chefredaktion' => 'chefredaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'domain',
  );

  // Exported permission: delete socialmediateaser content on assigned domains.
  $permissions['delete socialmediateaser content on assigned domains'] = array(
    'name' => 'delete socialmediateaser content on assigned domains',
    'roles' => array(
      'chefredaktion' => 'chefredaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'domain',
  );

  // Exported permission: delete termin content on assigned domains.
  $permissions['delete termin content on assigned domains'] = array(
    'name' => 'delete termin content on assigned domains',
    'roles' => array(
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'domain',
  );

 
  // Exported permission: delete universal content on assigned domains.
  $permissions['delete universal content on assigned domains'] = array(
    'name' => 'delete universal content on assigned domains',
    'roles' => array(
      'chefredaktion' => 'chefredaktion',
    ),
    'module' => 'domain',
  );

  // Exported permission: delete veranstalter content on assigned domains.
  $permissions['delete veranstalter content on assigned domains'] = array(
    'name' => 'delete veranstalter content on assigned domains',
    'roles' => array(
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'domain',
  );

  // Exported permission: delete veranstaltungsort content on assigned domains.
  $permissions['delete veranstaltungsort content on assigned domains'] = array(
    'name' => 'delete veranstaltungsort content on assigned domains',
    'roles' => array(
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'domain',
  );

  // Exported permission: delete video content on assigned domains.
  $permissions['delete video content on assigned domains'] = array(
    'name' => 'delete video content on assigned domains',
    'roles' => array(
      'chefredaktion' => 'chefredaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'domain',
  );

  // Exported permission: delete webform content on assigned domains.
  $permissions['delete webform content on assigned domains'] = array(
    'name' => 'delete webform content on assigned domains',
    'roles' => array(
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'domain',
  );

  // Exported permission: delete zitat_des_tages content on assigned domains.
  $permissions['delete zitat_des_tages content on assigned domains'] = array(
    'name' => 'delete zitat_des_tages content on assigned domains',
    'roles' => array(
      'chefredaktion' => 'chefredaktion',
    ),
    'module' => 'domain',
  );

  // Exported permission: display admin pages in another language.
  $permissions['display admin pages in another language'] = array(
    'name' => 'display admin pages in another language',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'admin_language',
  );

  // Exported permission: display drupal links.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: download files.
  $permissions['download files'] = array(
    'name' => 'download files',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'media_browser_plus',
  );

  // Exported permission: edit all webform submissions.
  $permissions['edit all webform submissions'] = array(
    'name' => 'edit all webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'webform',
  );

  // Exported permission: edit any allgemeine_seite content.
  $permissions['edit any allgemeine_seite content'] = array(
    'name' => 'edit any allgemeine_seite content',
    'roles' => array(
      'chefredaktion' => 'chefredaktion',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any artikel content.
  $permissions['edit any artikel content'] = array(
    'name' => 'edit any artikel content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any bildergalerie content.
  $permissions['edit any bildergalerie content'] = array(
    'name' => 'edit any bildergalerie content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any biografie content.
  $permissions['edit any biografie content'] = array(
    'name' => 'edit any biografie content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any book content.
  $permissions['edit any book content'] = array(
    'name' => 'edit any book content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any centerpage content.
  $permissions['edit any centerpage content'] = array(
    'name' => 'edit any centerpage content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any files.
  $permissions['edit any files'] = array(
    'name' => 'edit any files',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: edit any listenseite content.
  $permissions['edit any listenseite content'] = array(
    'name' => 'edit any listenseite content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any newsletter_anmeldung content.
  $permissions['edit any newsletter_anmeldung content'] = array(
    'name' => 'edit any newsletter_anmeldung content',
    'roles' => array(
      'chefredaktion' => 'chefredaktion',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any page content.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any pressemitteilung content.
  $permissions['edit any pressemitteilung content'] = array(
    'name' => 'edit any pressemitteilung content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any pressesprecher content.
  $permissions['edit any pressesprecher content'] = array(
    'name' => 'edit any pressesprecher content',
    'roles' => array(
      'chefredaktion' => 'chefredaktion',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any pressestelle content.
  $permissions['edit any pressestelle content'] = array(
    'name' => 'edit any pressestelle content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any simplenews content.
  $permissions['edit any simplenews content'] = array(
    'name' => 'edit any simplenews content',
    'roles' => array(
      'chefredaktion' => 'chefredaktion',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any socialmediaitem content.
  $permissions['edit any socialmediaitem content'] = array(
    'name' => 'edit any socialmediaitem content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any socialmediateaser content.
  $permissions['edit any socialmediateaser content'] = array(
    'name' => 'edit any socialmediateaser content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any termin content.
  $permissions['edit any termin content'] = array(
    'name' => 'edit any termin content',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any universal content.
  $permissions['edit any universal content'] = array(
    'name' => 'edit any universal content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any veranstalter content.
  $permissions['edit any veranstalter content'] = array(
    'name' => 'edit any veranstalter content',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any veranstaltungsort content.
  $permissions['edit any veranstaltungsort content'] = array(
    'name' => 'edit any veranstaltungsort content',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any video content.
  $permissions['edit any video content'] = array(
    'name' => 'edit any video content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any webform content.
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any zitat_des_tages content.
  $permissions['edit any zitat_des_tages content'] = array(
    'name' => 'edit any zitat_des_tages content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: edit domain content.
  $permissions['edit domain content'] = array(
    'name' => 'edit domain content',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'domain',
  );

  // Exported permission: edit meta tags.
  $permissions['edit meta tags'] = array(
    'name' => 'edit meta tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'metatag',
  );

  // Exported permission: edit own allgemeine_seite content.
  $permissions['edit own allgemeine_seite content'] = array(
    'name' => 'edit own allgemeine_seite content',
    'roles' => array(
      'chefredaktion' => 'chefredaktion',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own artikel content.
  $permissions['edit own artikel content'] = array(
    'name' => 'edit own artikel content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own bildergalerie content.
  $permissions['edit own bildergalerie content'] = array(
    'name' => 'edit own bildergalerie content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own biografie content.
  $permissions['edit own biografie content'] = array(
    'name' => 'edit own biografie content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own book content.
  $permissions['edit own book content'] = array(
    'name' => 'edit own book content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own centerpage content.
  $permissions['edit own centerpage content'] = array(
    'name' => 'edit own centerpage content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own comments.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'comment',
  );

  // Exported permission: edit own files.
  $permissions['edit own files'] = array(
    'name' => 'edit own files',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: edit own listenseite content.
  $permissions['edit own listenseite content'] = array(
    'name' => 'edit own listenseite content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own newsletter_anmeldung content.
  $permissions['edit own newsletter_anmeldung content'] = array(
    'name' => 'edit own newsletter_anmeldung content',
    'roles' => array(
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own page content.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own pressemitteilung content.
  $permissions['edit own pressemitteilung content'] = array(
    'name' => 'edit own pressemitteilung content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own pressesprecher content.
  $permissions['edit own pressesprecher content'] = array(
    'name' => 'edit own pressesprecher content',
    'roles' => array(
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own pressestelle content.
  $permissions['edit own pressestelle content'] = array(
    'name' => 'edit own pressestelle content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own simplenews content.
  $permissions['edit own simplenews content'] = array(
    'name' => 'edit own simplenews content',
    'roles' => array(
      'chefredaktion' => 'chefredaktion',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own socialmediaitem content.
  $permissions['edit own socialmediaitem content'] = array(
    'name' => 'edit own socialmediaitem content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own socialmediateaser content.
  $permissions['edit own socialmediateaser content'] = array(
    'name' => 'edit own socialmediateaser content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own termin content.
  $permissions['edit own termin content'] = array(
    'name' => 'edit own termin content',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own universal content.
  $permissions['edit own universal content'] = array(
    'name' => 'edit own universal content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own veranstalter content.
  $permissions['edit own veranstalter content'] = array(
    'name' => 'edit own veranstalter content',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own veranstaltungsort content.
  $permissions['edit own veranstaltungsort content'] = array(
    'name' => 'edit own veranstaltungsort content',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own video content.
  $permissions['edit own video content'] = array(
    'name' => 'edit own video content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own webform content.
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own webform submissions.
  $permissions['edit own webform submissions'] = array(
    'name' => 'edit own webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'webform',
  );

  // Exported permission: edit own zitat_des_tages content.
  $permissions['edit own zitat_des_tages content'] = array(
    'name' => 'edit own zitat_des_tages content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: execute php code.
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: filter media.
  $permissions['filter media'] = array(
    'name' => 'filter media',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'media_browser_plus',
  );

  // Exported permission: flush caches.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: import media.
  $permissions['import media'] = array(
    'name' => 'import media',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'media',
  );

  // Exported permission: manage features.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'features',
  );

  // Exported permission: media grid view.
  $permissions['media grid view'] = array(
    'name' => 'media grid view',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'media_browser_plus',
  );

  // Exported permission: media list view.
  $permissions['media list view'] = array(
    'name' => 'media list view',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'media_browser_plus',
  );

  // Exported permission: node-specific print configuration.
  $permissions['node-specific print configuration'] = array(
    'name' => 'node-specific print configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'print',
  );

  // Exported permission: notify of path changes.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: perform backup.
  $permissions['perform backup'] = array(
    'name' => 'perform backup',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: post comments.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'comment',
  );

  // Exported permission: preview media.
  $permissions['preview media'] = array(
    'name' => 'preview media',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'media_browser_plus',
  );

  // Exported permission: publish from assigned domain.
  $permissions['publish from assigned domain'] = array(
    'name' => 'publish from assigned domain',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: publish from default domain.
  $permissions['publish from default domain'] = array(
    'name' => 'publish from default domain',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'domain',
  );

  // Exported permission: publish to any assigned domain.
  $permissions['publish to any assigned domain'] = array(
    'name' => 'publish to any assigned domain',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'domain',
  );

  // Exported permission: restore from backup.
  $permissions['restore from backup'] = array(
    'name' => 'restore from backup',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: revert revisions.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: review content for all domains.
  $permissions['review content for all domains'] = array(
    'name' => 'review content for all domains',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
    ),
    'module' => 'domain_content',
  );

  // Exported permission: schedule (un)publishing of nodes.
  $permissions['schedule (un)publishing of nodes'] = array(
    'name' => 'schedule (un)publishing of nodes',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'scheduler',
  );

  // Exported permission: scs create newsletter.
  $permissions['scs create newsletter'] = array(
    'name' => 'scs create newsletter',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
    ),
    'module' => 'scs',
  );

  // Exported permission: search content.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'search',
  );

  // Exported permission: select account cancellation method.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'user',
  );

  // Exported permission: send newsletter.
  $permissions['send newsletter'] = array(
    'name' => 'send newsletter',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: send unlimited emails.
  $permissions['send unlimited emails'] = array(
    'name' => 'send unlimited emails',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'print_mail',
  );

  // Exported permission: set domain access.
  $permissions['set domain access'] = array(
    'name' => 'set domain access',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'domain',
  );

  // Exported permission: show format selection for comment.
  $permissions['show format selection for comment'] = array(
    'name' => 'show format selection for comment',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: show format selection for field_collection_item.
  $permissions['show format selection for field_collection_item'] = array(
    'name' => 'show format selection for field_collection_item',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: show format selection for file.
  $permissions['show format selection for file'] = array(
    'name' => 'show format selection for file',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: show format selection for node.
  $permissions['show format selection for node'] = array(
    'name' => 'show format selection for node',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: show format selection for rules_config.
  $permissions['show format selection for rules_config'] = array(
    'name' => 'show format selection for rules_config',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: show format selection for taxonomy_term.
  $permissions['show format selection for taxonomy_term'] = array(
    'name' => 'show format selection for taxonomy_term',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: show format selection for user.
  $permissions['show format selection for user'] = array(
    'name' => 'show format selection for user',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: show format tips.
  $permissions['show format tips'] = array(
    'name' => 'show format tips',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: show more format tips link.
  $permissions['show more format tips link'] = array(
    'name' => 'show more format tips link',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: skip CAPTCHA.
  $permissions['skip CAPTCHA'] = array(
    'name' => 'skip CAPTCHA',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'captcha',
  );

  // Exported permission: skip comment approval.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'comment',
  );

  // Exported permission: subscribe to newsletters.
  $permissions['subscribe to newsletters'] = array(
    'name' => 'subscribe to newsletters',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: switch shortcut sets.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: switch users.
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: translate admin strings.
  $permissions['translate admin strings'] = array(
    'name' => 'translate admin strings',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: translate content.
  $permissions['translate content'] = array(
    'name' => 'translate content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'translation',
  );

  // Exported permission: translate interface.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'locale',
  );

  // Exported permission: translate user-defined strings.
  $permissions['translate user-defined strings'] = array(
    'name' => 'translate user-defined strings',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: update allgemeine_seite content on assigned domains.
  $permissions['update allgemeine_seite content on assigned domains'] = array(
    'name' => 'update allgemeine_seite content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: update artikel content on assigned domains.
  $permissions['update artikel content on assigned domains'] = array(
    'name' => 'update artikel content on assigned domains',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'domain',
  );

  // Exported permission: update bildergalerie content on assigned domains.
  $permissions['update bildergalerie content on assigned domains'] = array(
    'name' => 'update bildergalerie content on assigned domains',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'domain',
  );

  // Exported permission: update biografie content on assigned domains.
  $permissions['update biografie content on assigned domains'] = array(
    'name' => 'update biografie content on assigned domains',
    'roles' => array(
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'domain',
  );

  // Exported permission: update book content on assigned domains.
  $permissions['update book content on assigned domains'] = array(
    'name' => 'update book content on assigned domains',
    'roles' => array(),
    'module' => 'domain',
  );

  // Exported permission: update centerpage content on assigned domains.
  $permissions['update centerpage content on assigned domains'] = array(
    'name' => 'update centerpage content on assigned domains',
    'roles' => array(
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
    ),
    'module' => 'domain',
  );

  // Exported permission: update listenseite content on assigned domains.
  $permissions['update listenseite content on assigned domains'] = array(
    'name' => 'update listenseite content on assigned domains',
    'roles' => array(
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
    ),
    'module' => 'domain',
  );

  // Exported permission: update newsletter_anmeldung content on assigned domains.
  $permissions['update newsletter_anmeldung content on assigned domains'] = array(
    'name' => 'update newsletter_anmeldung content on assigned domains',
    'roles' => array(
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
    ),
    'module' => 'domain',
  );

  // Exported permission: update page content on assigned domains.
  $permissions['update page content on assigned domains'] = array(
    'name' => 'update page content on assigned domains',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'domain',
  );

  // Exported permission: update pressemitteilung content on assigned domains.
  $permissions['update pressemitteilung content on assigned domains'] = array(
    'name' => 'update pressemitteilung content on assigned domains',
    'roles' => array(
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'domain',
  );

  // Exported permission: update pressesprecher content on assigned domains.
  $permissions['update pressesprecher content on assigned domains'] = array(
    'name' => 'update pressesprecher content on assigned domains',
    'roles' => array(
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
    ),
    'module' => 'domain',
  );

  // Exported permission: update pressestelle content on assigned domains.
  $permissions['update pressestelle content on assigned domains'] = array(
    'name' => 'update pressestelle content on assigned domains',
    'roles' => array(
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'domain',
  );

  // Exported permission: update simplenews content on assigned domains.
  $permissions['update simplenews content on assigned domains'] = array(
    'name' => 'update simplenews content on assigned domains',
    'roles' => array(
      'chefredaktion' => 'chefredaktion',
    ),
    'module' => 'domain',
  );

  // Exported permission: update socialmediaitem content on assigned domains.
  $permissions['update socialmediaitem content on assigned domains'] = array(
    'name' => 'update socialmediaitem content on assigned domains',
    'roles' => array(
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'domain',
  );

  // Exported permission: update socialmediateaser content on assigned domains.
  $permissions['update socialmediateaser content on assigned domains'] = array(
    'name' => 'update socialmediateaser content on assigned domains',
    'roles' => array(
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'domain',
  );

  // Exported permission: update termin content on assigned domains.
  $permissions['update termin content on assigned domains'] = array(
    'name' => 'update termin content on assigned domains',
    'roles' => array(
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'domain',
  );

  // Exported permission: update universal content on assigned domains.
  $permissions['update universal content on assigned domains'] = array(
    'name' => 'update universal content on assigned domains',
    'roles' => array(
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
    ),
    'module' => 'domain',
  );

  // Exported permission: update veranstalter content on assigned domains.
  $permissions['update veranstalter content on assigned domains'] = array(
    'name' => 'update veranstalter content on assigned domains',
    'roles' => array(
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'domain',
  );

  // Exported permission: update veranstaltungsort content on assigned domains.
  $permissions['update veranstaltungsort content on assigned domains'] = array(
    'name' => 'update veranstaltungsort content on assigned domains',
    'roles' => array(
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'domain',
  );

  // Exported permission: update video content on assigned domains.
  $permissions['update video content on assigned domains'] = array(
    'name' => 'update video content on assigned domains',
    'roles' => array(
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'domain',
  );

  // Exported permission: update webform content on assigned domains.
  $permissions['update webform content on assigned domains'] = array(
    'name' => 'update webform content on assigned domains',
    'roles' => array(
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'domain',
  );

  // Exported permission: update zitat_des_tages content on assigned domains.
  $permissions['update zitat_des_tages content on assigned domains'] = array(
    'name' => 'update zitat_des_tages content on assigned domains',
    'roles' => array(
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
    ),
    'module' => 'domain',
  );

  // Exported permission: upload media.
  $permissions['upload media'] = array(
    'name' => 'upload media',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'media_browser_plus',
  );

  // Exported permission: use PHP for service visibility.
  $permissions['use PHP for service visibility'] = array(
    'name' => 'use PHP for service visibility',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'service_links',
  );

  // Exported permission: use PHP for settings.
  $permissions['use PHP for settings'] = array(
    'name' => 'use PHP for settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'php',
  );

  // Exported permission: use PHP for title patterns.
  $permissions['use PHP for title patterns'] = array(
    'name' => 'use PHP for title patterns',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'auto_nodetitle',
  );

  // Exported permission: use advanced search.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'search',
  );

  // Exported permission: use all enabled languages.
  $permissions['use all enabled languages'] = array(
    'name' => 'use all enabled languages',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'admin_language',
  );

  // Exported permission: use page manager.
  $permissions['use page manager'] = array(
    'name' => 'use page manager',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: use text format filter_chefredaktion.
  $permissions['use text format filter_chefredaktion'] = array(
    'name' => 'use text format filter_chefredaktion',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format filter_php.
  $permissions['use text format filter_php'] = array(
    'name' => 'use text format filter_php',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format filter_redaktion.
  $permissions['use text format filter_redaktion'] = array(
    'name' => 'use text format filter_redaktion',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format filtered_html.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format full_html.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'administrator' => 'administrator',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format teaser_title_break.
  $permissions['use text format teaser_title_break'] = array(
    'name' => 'use text format teaser_title_break',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'preview' => 'preview',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'filter',
  );

  // Exported permission: view any unpublished allgemeine_seite content.
  $permissions['view any unpublished allgemeine_seite content'] = array(
    'name' => 'view any unpublished allgemeine_seite content',
    'roles' => array(),
    'module' => 'view_unpublished',
  );

  // Exported permission: view any unpublished artikel content.
  $permissions['view any unpublished artikel content'] = array(
    'name' => 'view any unpublished artikel content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: view any unpublished bildergalerie content.
  $permissions['view any unpublished bildergalerie content'] = array(
    'name' => 'view any unpublished bildergalerie content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: view any unpublished biografie content.
  $permissions['view any unpublished biografie content'] = array(
    'name' => 'view any unpublished biografie content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: view any unpublished book content.
  $permissions['view any unpublished book content'] = array(
    'name' => 'view any unpublished book content',
    'roles' => array(),
    'module' => 'view_unpublished',
  );

  // Exported permission: view any unpublished centerpage content.
  $permissions['view any unpublished centerpage content'] = array(
    'name' => 'view any unpublished centerpage content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: view any unpublished content.
  $permissions['view any unpublished content'] = array(
    'name' => 'view any unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
      'preview' => 'preview',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: view any unpublished listenseite content.
  $permissions['view any unpublished listenseite content'] = array(
    'name' => 'view any unpublished listenseite content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: view any unpublished newsletter_anmeldung content.
  $permissions['view any unpublished newsletter_anmeldung content'] = array(
    'name' => 'view any unpublished newsletter_anmeldung content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: view any unpublished page content.
  $permissions['view any unpublished page content'] = array(
    'name' => 'view any unpublished page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: view any unpublished pressemitteilung content.
  $permissions['view any unpublished pressemitteilung content'] = array(
    'name' => 'view any unpublished pressemitteilung content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: view any unpublished pressesprecher content.
  $permissions['view any unpublished pressesprecher content'] = array(
    'name' => 'view any unpublished pressesprecher content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: view any unpublished pressestelle content.
  $permissions['view any unpublished pressestelle content'] = array(
    'name' => 'view any unpublished pressestelle content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: view any unpublished simplenews content.
  $permissions['view any unpublished simplenews content'] = array(
    'name' => 'view any unpublished simplenews content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: view any unpublished socialmediaitem content.
  $permissions['view any unpublished socialmediaitem content'] = array(
    'name' => 'view any unpublished socialmediaitem content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: view any unpublished socialmediateaser content.
  $permissions['view any unpublished socialmediateaser content'] = array(
    'name' => 'view any unpublished socialmediateaser content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: view any unpublished termin content.
  $permissions['view any unpublished termin content'] = array(
    'name' => 'view any unpublished termin content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: view any unpublished universal content.
  $permissions['view any unpublished universal content'] = array(
    'name' => 'view any unpublished universal content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: view any unpublished veranstalter content.
  $permissions['view any unpublished veranstalter content'] = array(
    'name' => 'view any unpublished veranstalter content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: view any unpublished veranstaltungsort content.
  $permissions['view any unpublished veranstaltungsort content'] = array(
    'name' => 'view any unpublished veranstaltungsort content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: view any unpublished video content.
  $permissions['view any unpublished video content'] = array(
    'name' => 'view any unpublished video content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: view any unpublished webform content.
  $permissions['view any unpublished webform content'] = array(
    'name' => 'view any unpublished webform content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: view any unpublished zitat_des_tages content.
  $permissions['view any unpublished zitat_des_tages content'] = array(
    'name' => 'view any unpublished zitat_des_tages content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: view files.
  $permissions['view files'] = array(
    'name' => 'view files',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: view hidden content.
  $permissions['view hidden content'] = array(
    'name' => 'view hidden content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'preview' => 'preview',
      'redaktion' => 'redaktion',
    ),
    'module' => 'hidden_nodes',
  );

  // Exported permission: view own files.
  $permissions['view own files'] = array(
    'name' => 'view own files',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: view own private files.
  $permissions['view own private files'] = array(
    'name' => 'view own private files',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: view own unpublished content.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: view post access counter.
  $permissions['view post access counter'] = array(
    'name' => 'view post access counter',
    'roles' => array(),
    'module' => 'statistics',
  );

  // Exported permission: view revisions.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'node',
  );

  // Exported permission: view style guides.
  $permissions['view style guides'] = array(
    'name' => 'view style guides',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
    ),
    'module' => 'styleguide',
  );

  // Exported permission: view the administration theme.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'system',
  );

  // Exported permission: view unpublished domain content.
  $permissions['view unpublished domain content'] = array(
    'name' => 'view unpublished domain content',
    'roles' => array(
      'administrator' => 'administrator',
      'chefredaktion' => 'chefredaktion',
      'redaktion' => 'redaktion',
      'sitearchitekt' => 'sitearchitekt',
    ),
    'module' => 'domain',
  );

  return $permissions;
}
