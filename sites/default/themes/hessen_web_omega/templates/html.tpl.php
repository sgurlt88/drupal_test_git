<?php 
/**
 * @file
 * Alpha's theme implementation to display the basic html structure of a single
 * Drupal page.
 */
?><!DOCTYPE html PUBLIC "-//W3C//DTD XHTML+RDFa 1.0//EN"
  "http://www.w3.org/MarkUp/DTD/xhtml-rdfa-1.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="<?php print $language->language; ?>" version="XHTML+RDFa 1.0" dir="<?php print $language->dir; ?>"<?php print $rdf_namespaces; ?>>
<head profile="<?php print $grddl_profile; ?>">
  <?php print $head; ?>
  <title><?php print $head_title; ?></title> 
  <meta http-equiv="X-UA-Compatible" content="IE=edge" />
  <?php print $styles; ?>
  <?php print $scripts; ?>

<!--[if IE 7 ]>

    <script>

    $(function() {

        var zIndexFix = 1000;

        $('div').each(function() {

            $(this).css('zIndex', zIndexFix);

            zIndexFix -= 10;

        });

    });

    </script>
<![endif]-->


</head><?php 
$menuParent = menu_get_active_trail();
$arrayURI = explode("/",$_SERVER['REQUEST_URI']);
$noOne = true;
if($arrayURI[1] == 'printmail'){$noOne = false;}


?>
<body id="bodyid" class="<?php if($noOne){$menuParent = menu_get_active_trail(); $menuParent = $menuParent[1]['mlid']; print 'menu-'.$menuParent.' '; }print $classes; ?>"  >

<div class="site-wrapper"> 
  <div id="skip-link">
    <a href="#main-content" class="element-invisible element-focusable"><?php print t('Skip to main content'); ?></a>
  </div>
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>
</div>
  </body>
</html>