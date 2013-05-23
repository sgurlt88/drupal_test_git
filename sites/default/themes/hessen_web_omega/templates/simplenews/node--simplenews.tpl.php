<html>
<head>
<style>
.headline{
color:#cd2a32;
font-size: 30pt;
}
</style>
</head>
<body>
<table class="newsletter" style="width: 600px">
    <tr>
        <td style="vertical-align: top; width: 70px;" rowspan="11"><img src="http://<?php print $_SERVER['HTTP_HOST']; ?>/sites/default/themes/hessen_web_omega/css/images/NL/NL_dots.png"></td>
        <td style="vertical-align: top; width: 350px; height:70px;">
		
		<?php 
		
			$i = render($content['field_simplenews_term']['#items'][0]['tid']);
		
		switch ($i) {
			case "213":
				echo "<img src='/sites/default/themes/hessen_web_omega/css/images/NL/NL_Logo_hkm.gif'>";
				break;
			case "214":
				echo "<img src='/sites/default/themes/hessen_web_omega/css/images/NL/NL_Logo_hkm.gif'>";
				break;
			case "215":
				echo "<img src='/sites/default/themes/hessen_web_omega/css/images/NL/NL_Logo_HMdF.gif'";
				break;
			case "210":
				echo "<img src='/sites/default/themes/hessen_web_omega/css/images/NL/NL_Logo_newsletter_digitalfunk.gif'";
				break;
			case "205":
				echo "<img src='/sites/default/themes/hessen_web_omega/css/images/NL/NL_Logo_hmdi.gif'";
				break;
			case "200":
				echo "<img src='/sites/default/themes/hessen_web_omega/css/images/NL/NL_Logo_hmdj.gif'";
				break;
			case "216":
				echo "<img src='/sites/default/themes/hessen_web_omega/css/images/NL/NL_Logo_hmdj.gif'";
				break;
			case "217":
				echo "<img src='/sites/default/themes/hessen_web_omega/css/images/NL/NL_Logo_hmdj.gif'";
				break;
			case "218":
				echo "<img src='/sites/default/themes/hessen_web_omega/css/images/NL/NL_Logo_hmwk.gif'";
				break;
			case "219":
				echo "<img src='/sites/default/themes/hessen_web_omega/css/images/NL/NL_Logo_hmwk.gif'";
				break;
			case "221":
				echo "<img src='/sites/default/themes/hessen_web_omega/css/images/NL/NL_Logo_hsm.gif'";
				break;
			case "211":
				echo "";
				break;
			default:
				break;
			}
		?>
		</td>


        <td align="right" style="vertical-align: top; width: 68px; height:86px;"><img src="http://<?php print $_SERVER['HTTP_HOST']; ?>/sites/default/themes/hessen_web_omega/css/images/NL/NL_Hessenmarke.png"></td>
    </tr>
   <tr>
		 <td>
			<div class="headline"><?php 
		
			$i = render($content['field_simplenews_term']['#items'][0]['tid']);
		
		switch ($i) {
			case "216":
				echo "Der Intregrationsbrief";
				break;
			case "217":
				echo "eJustice-Newsletter";
				break;
			case "211":
				echo "Newsletter der Hessischen Landesregierung";
				break;
			default:
			echo "Presseinformation";
				break;
			}
		?></div><br>
			<?php print render($content['field_newsletter_datum']) ?>
			<?php print render($content['field_datum_default']) ?>
			<br>
			<h2 style="font-size:12pt; font-weight:bold;"><?php print $title; ?></h2>
			<div style="font-size:9.5pt; font-weight:bold;float:left;"><?php print render($content['field_abstract']) ?></div>
			<?php if($content['field_newsletter_bild'] || $content['field_hauptbild']): ?><br><br><div class="img" style="font-size:8.5pt;"><?php print render($content['field_newsletter_bild']) ?><?php print render($content['field_hauptbild']) ?></div><br><br><?php endif; ?>
			<div style="font-size:9.5pt;"><?php print render($content['body']) ?><?php print render($content['field_inhalt']) ?></div><br>
			<?php if($content['field_newsletter_anhang']): ?><br><div style=""><p style="font-size:9.5pt;font-weight:bold;">Weiterf&uuml;hrende Informationen finden Sie in der PDF-Datei, die Sie &uuml;ber den folgenden Link aufrufen k&ouml;nnen:</p>
			<div class="anhang"><?php print render($content['field_newsletter_anhang']) ?></div></div>
			<br>   <?php endif; ?>	

			<p>Wenn Sie diesen E-Mail-Service nicht weiter in Anspruch nehmen wollen, <a href="[simplenews-subscriber:unsubscribe-url]">melden Sie sich bitte hier ab.</a></p>
			
			<hr color="blue">
		</td>
		<td>
		</td>
	</tr>
	
	<?php if($content['field_nref_pressestelle'][0]['field_nref_pressesprecher']): ?>
	<tr>
		<td style="color:blue; font-size: 8.5pt" ><span style="float:left;">Pressesprecher:&nbsp;</span><span style="float:left;"><?php print render($content['field_nref_pressestelle'][0]['field_nref_pressesprecher']); ?></span></td><td></td>
	</tr>
	<tr>
		<td  style="color:blue; font-size: 8.5pt" ><div style="float:left;">Adresse:&nbsp;</div><div style="float:left;"><?php print render($content['field_nref_pressestelle'][0]['field_adresse']); ?></div></td><td></td>
	</tr>
	<tr>
		<td  style="color:blue; font-size: 8.5pt" ><span style="float:left;">Telefon:&nbsp;</span><span style="float:left;"><?php print render($content['field_nref_pressestelle'][0]['field_telefon_main']); ?></span></td><td></td>
	</tr>
	<tr>
		<td  style="color:blue; font-size: 8.5pt" ><span style="float:left;">Telefax:&nbsp;</span><span style="float:left;"><?php print render($content['field_nref_pressestelle'][0]['field_telefon_fax']); ?></span></td><td></td>
	</tr>
	<tr>
		<td style="color:blue; font-size: 8.5pt"><span style="float:left;">Email:&nbsp;</span><span style="float:left;"><?php print render($content['field_nref_pressestelle'][0]['field_email_main']); ?></span></td><td></td>
	</tr>		
   <?php endif; ?>
	<tr>
        <td style="color: blue; font-size: 8.5pt">
		<br>
		F&uuml;r die Dauer des Newsletterabonnements wird Ihre E-Mail-Adresse gespeichert. Ihre E-Mail-Adresse wird entsprechend der datenschutzrechtlichen Bestimmungen vertraulich behandelt und nicht f&uuml;r andere Zwecke genutzt oder an Dritte weitergegeben.<br>
		
		</td><td></td>
    </tr>
	</table>
</body>
</html>