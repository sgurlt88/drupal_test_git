<article<?php print $attributes; ?>>
  <?php print $user_picture; ?>
  <?php print render($title_prefix); ?>
  <?php if (!$page && $title): ?>
  <header>
    <h2<?php print $title_attributes; ?>><a href="<?php print $node_url ?>" title="<?php print $title ?>"><?php print $title ?></a></h2>
  </header>
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
      print render($content);
    ?>
  </div>
  
  <div class="clearfix">
    <?php if (!empty($content['links'])): ?>
      <nav class="links node-links clearfix"><?php print render($content['links']); ?>
			
			
	<?php 
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
	?>
	
	  </nav>
    <?php endif; ?>


  </div>
</article>