<article<?php print $attributes; ?>>
<?php if ($view_mode != 'teaser'): ?>
<?php print render($content['field_amt']); ?>

<div class="biografie_name">
<?php print render($content['field_person_name']); ?>
</div>

<div class="biografie_head">
<div class="biografie_portraitbild">
<?php print render($content['field_hauptbild']); ?>
</div>  

<div class="biografie_daten">
<span class="float_left">Geboren am&nbsp </span><?php print render($content['field_geburtsdatum']); ?>
<span class="float_left">in &nbsp </span><?php print render($content['field_geburtsort']); ?>
<?php print render($content['field_konfession']); ?>
<?php print render($content['field_familienstand']); ?>
<?php print render($content['field_kinder']); ?>
</div>
</div>


<div class="biografie_beschreibung">
	<?php print render($content['field_inhalt']); ?>
</div>

<div id="biografie_table" class="biografie_lebenslauf">
<h5>Lebenslauf</h5>
	<?php print render($content['field_lebenslauf']); ?>
</div>

<?php if (!empty($content['field_linklist']) || !empty($content['field_file_attachments'])	): ?>
<div class="biografie_anhang">

	<div id="biografie_links" class="biografie_link listLinks">
		<?php print render($content['field_linklist']); ?>
	</div>

	<div id="biografie_downloads" class="biografie_downloads listDownloads">
		<?php print render($content['field_file_attachments']); ?>
	</div>

	<div class="clear"></div>

</div>
<?php endif; ?>

  
  <div class="clearfix">
    <?php if (!empty($content['links'])): ?>
      <nav class="links node-links clearfix"><?php print render($content['links']); ?>
			
			
	
	
	  </nav>
    <?php endif; ?>


  </div>
      <?php endif; ?>
	  
<?php if ($view_mode == 'teaser'): ?>
<h2><?php print $title ?></h2
<?php endif; ?>
</article>