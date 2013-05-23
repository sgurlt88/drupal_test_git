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
	  hide($content['field_link_zum_artikel']);
      print render($content);
    ?>
  </div>
  
  <?php if ($view_mode != 'teaser'): ?>
  <div class="clearfix">
    <?php if (!empty($content['links'])): ?>
      <nav class="<?php print $view_mode; ?> links node-links clearfix">
		<div class="video_link_artikel links"><li><?php print render($content['field_link_zum_artikel']); ?></li></div>
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