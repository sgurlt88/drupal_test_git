<article<?php print $attributes; ?>>
  <?php print $user_picture; ?>
  <?php print render($title_prefix); ?>
  <?php if (!$page && $title): ?>
  
  <?php if ($view_mode != 'teaser'): ?>
  <header>
    <h2<?php print $title_attributes; ?>><a href="<?php print $node_url ?>" title="<?php print $title ?>"><?php print $title ?></a></h2>
  </header>
  <?php endif; ?>
  <?php endif; ?>
  <?php print render($title_suffix); ?>
  <?php if ($display_submitted): ?>
  <footer class="submitted"><?php print $date; ?> -- <?php print $name; ?></footer>
  <?php endif; ?>  
  
  <div<?php print $content_attributes; ?>>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      hide($content['secureshare']);
      print render($content);
    ?>
  </div>
  <div class="blockVideodatenschutz caption">Bei den auf dieser Website eingebetteten YouTube-Videos ist der sogenannte "erweiterte Datenschutzmodus" aktiviert. Mit diesem Modus wird verhindert, dass YouTube-Cookies (kleine Textdateien mit Nutzer-Informationen, die durch Ihren Browser auf Ihrem Rechner gespeichert werden) f&uuml;r einen nicht bei YouTube angemeldeten Nutzer speichert, der eine Website mit einem eingebetteten YouTube-Videoplayer mit erweitertem Datenschutz anzeigt, jedoch nicht auf das Video klickt, um die Wiedergabe zu starten. Zwar speichert YouTube unter Umst&auml;nden Cookies auf dem Computer des Nutzers, nachdem er auf den YouTube-Videoplayer geklickt hat, es werden jedoch keine personenbezogenen Cookie-Informationen f&uuml;r Wiedergaben von eingebetteten Videos mit erweitertem Datenschutz gespeichert. <br><br>Weitere Informationen finden Sie auf der Webseite von <a target="_blank" href="http://support.google.com/youtube/bin/answer.py?hl=de&answer=141046">YouTube</a>.</div>
  
  <?php if ($view_mode != 'teaser'): ?>
  <div class="clearfix">
    <?php if (!empty($content['links'])): ?>
      <nav class="<?php print $view_mode; ?> links node-links clearfix">
		<?php print render($content['links']); ?>
	
			
			
	<?php if($view_mode != 'teaser'){
		$i = $node->type;
			switch ($i) {
				case "artikel":
					echo "<div class='trigger'><p>Weiterempfehlen</p></div>";
					break;
				case "pressemitteilung":
					echo "<div class='trigger'><p>Weiterempfehlen</p></div>";
					break;
				case "bildergalerie":
					echo "<div class='trigger'><p>Weiterempfehlen</p></div>";
					break;
				case "biografie":
					echo "<div class='trigger'><p>Weiterempfehlen</p></div>";
					break;
				case "termin":
					echo "<div class='trigger'><p>Weiterempfehlen</p></div>";
					break;
				case "listenseite":
					echo "<div class='trigger'><p>Weiterempfehlen</p></div>";
					break;
				case "video":
					echo "<div class='trigger'><p>Weiterempfehlen</p></div>";
					break;
				default:
					break;
				}
	print render($content['secureshare']); }?>
	
	  </nav>
    <?php endif; ?>


  </div>
  <?php endif; ?>
</article>