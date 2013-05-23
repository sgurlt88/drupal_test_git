<?php

/**
 * @file
 * Default print module template
 *
 * @ingroup print
 */
?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" lang="<?php print $print['language']; ?>" xml:lang="<?php print $print['language']; ?>">
  <head>
    <?php print $print['head']; ?>
    <?php print $print['base_href']; ?>
    <title><?php print $print['title']; ?></title>
    <?php print $print['scripts']; ?>
    <?php print $print['sendtoprinter']; ?>
    <?php print $print['robots_meta']; ?>
    <?php print $print['favicon']; ?>
    <?php print $print['css']; ?>
  </head>
  <body>
    <?php if (!empty($print['message'])) {
      print '<div class="message">'. $print['message'] .'</div><p />';
    } ?>
	<hr class="print-hr" />
	<div class="print-content"><strong>Der Link zum Artikel</strong><?php print $print['content']; ?></div>
    
    <div class="print-source_url"><strong>lautet</strong><?php  print preg_replace("/(Source|URL|Quell)/i","",$print['source_url']); ?></div>
	<br>
	<hr class="print-hr" />
	<p>Wir weisen darauf hin, dass diese Absenderangabe nicht gepr&uuml;ft oder verifiziert ist. Sollten Sie Zweifel an der Authentizit&auml;t des Absenders haben, ignorieren Sie diese E-Mail bitte. Der Betreiber von <?php print $GLOBALS['base_url']; ?> &uuml;bernimmt keine Verantwortung f&uuml;r den Inhalt der Nachricht. </p>
    <?php print $print['footer_scripts']; ?>
  </body>
</html>
