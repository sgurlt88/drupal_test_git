<html>
<head>
<meta http-equiv=Content-Type content="text/html; charset=utf-8 Content-Transfer-Encoding: 8bit">
<style>
p, span, h1, h2 , h3, h4, h5, div, table, tr, td, a{
font-family:"Arial","sans-serif";
 font-size: 9.5pt;}

h2.element-invisible {
display:none;
}
.img img{
width:600px;
height:100%;
}
.anhang a,.anhang,.anhang span,.anhang div{
font-size: 9.5pt;
}
.headline{
color:#cd2a32;
font-size: 30pt;
}
</style>

</head>
<body >
<div >
<table width="738">
    <tr>
        <td style="vertical-align: top; width: 70px;" rowspan="10"><img src="http://<?php print $_SERVER['HTTP_HOST']; ?>/sites/default/themes/hessen_web_omega/css/images/NL/NL_dots.png"></td>
        <td style="vertical-align: top; width: 600px; height:70px;"><img src="http://<?php print $_SERVER['HTTP_HOST']; ?>/sites/default/themes/hessen_web_omega/css/images/NL/NL_Logo_HMdF.gif"></td>
        <td align="right" style="vertical-align: top; width: 68px; height:86px;"><img src="http://<?php print $_SERVER['HTTP_HOST']; ?>/sites/default/themes/hessen_web_omega/css/images/NL/NL_Hessenmarke.png"></td>
    </tr>
    <tr>
		 <td>
			<div class="headline">Presseinformation</div><br>
			<?php print render($build['field_newsletter_datum']) ?>
			<?php print render($build['field_datum_default']) ?>
			<br>
			<br>
			<div style="font-size:9.5pt; text-transform: uppercase;"><?php print render($build['field_spitzmarke']) ?></div>
			<h2 style="font-size:12pt; font-weight:bold;"><?php print $title; ?></h2>
			<div style="font-size:9.5pt; font-weight:bold;float:left;"><?php print render($build['field_abstract']) ?></div>
			<?php if($build['field_newsletter_bild'] || $build['field_hauptbild']): ?><br><br><div class="img" style="font-size:7.5pt;"><?php print render($build['field_newsletter_bild']) ?><?php print render($build['field_hauptbild']) ?></div><br><br><?php endif; ?>
			<div style="font-size:9.5pt;"><?php print render($build['body']) ?><?php print render($build['field_inhalt']) ?></div><br>
			
						<?php if($build['field_newsletter_anhang']): ?><div style=""><p style="font-size:9.5pt;font-weight:bold;">Weiterf&uuml;hrende Informationen finden Sie in der PDF-Datei, die Sie &uuml;ber den folgenden Link aufrufen k&ouml;nnen:
			<div class="anhang"><?php print render($build['field_newsletter_anhang']) ?></div></p></div>
			<?php endif; ?>	

			<p style="font-size:9pt">Wenn Sie diesen E-Mail-Service nicht weiter in Anspruch nehmen wollen, <a style="font-size:9pt" href="[simplenews-subscriber:unsubscribe-url]">melden Sie sich bitte hier ab.</a></p>
			
			<hr color="blue">
		</td>
		<td>
		</td>
	</tr>
	
	<?php if($build['field_nref_pressestelle'][0]['field_nref_pressesprecher']): ?>
	<tr>
		<td style="color:blue; font-size: 7.5pt" ><span style="float:left;">Pressesprecher/-in:&nbsp;</span><span style="float:left;"><?php print render($build['field_nref_pressestelle'][0]['field_nref_pressesprecher']); ?></span></td><td></td>
	</tr>
	<tr>
		<td  style="color:blue; font-size: 8.5pt" ><div style="float:left;">Adresse:&nbsp;</div><div style="float:left;margin-left:60px;"><?php print render($build['field_nref_pressestelle'][0]['field_adresse']); ?></div></td><td></td>
	</tr>
	<tr>
		<td style="color:blue; font-size: 7.5pt" ><span style="float:left;">Telefon:&nbsp;</span><span style="float:left;"><?php print render($build['field_nref_pressestelle'][0]['field_telefon_main']); ?></span></td><td></td>
	</tr>
	<tr>
		<td style="color:blue; font-size: 7.5pt" ><span style="float:left;">Telefax:&nbsp;</span><span style="float:left;"><?php print render($build['field_nref_pressestelle'][0]['field_telefon_fax']); ?></span></td><td></td>
	</tr>
	<tr>
		<td style="color:blue; font-size: 7.5pt" ><span style="float:left;">Email:&nbsp;</span><span style="float:left;"><?php print render($build['field_nref_pressestelle'][0]['field_email_main']); ?></span></td><td></td>
	</tr>			
   <?php endif; ?>	

	<tr>
        <td style="color: blue; font-size: 8.5pt">
		<br>
		F&uuml;r die Dauer des Newsletterabonnements wird Ihre E-Mail-Adresse gespeichert. Ihre E-Mail-Adresse wird entsprechend der datenschutzrechtlichen Bestimmungen vertraulich behandelt und nicht f&uuml;r andere Zwecke genutzt oder an Dritte weitergegeben.<br>
		
		</td><td></td>
    </tr>
</table>
</div>
</body>
</html>