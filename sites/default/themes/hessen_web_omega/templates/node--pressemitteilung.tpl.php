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
      hide($content['field_file_attachments']);
      hide($content['field_linklist']);
      hide($content['group_fragen']);
      hide($content['secureshare']);
      hide($content['links']);
      print render($content);
	  print views_embed_view('bildergalerie_teaser', 'block_1');
      print render($content['field_file_attachments']);
      print render($content['field_linklist']);
      print render($content['group_fragen']);
    ?>
  </div>
  
  <?php if ($view_mode != 'teaser'): ?>
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
	print render($content['secureshare']); ?>
	
	  </nav>
    <?php endif; ?>


  </div>
      <?php endif; ?>
</article>