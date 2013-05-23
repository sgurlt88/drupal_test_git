<html>
<head><meta http-equiv=Content-Type content="text/html; charset=utf-8 Content-Transfer-Encoding: 8bit">
<style>



</style>

</head>
<body>
<table style="width: 600px">
    <tr>
        <td style="vertical-align: top; width: 70px;" rowspan="10"><img src="http://<?php print $_SERVER['HTTP_HOST']; ?>/sites/default/themes/hessen_web_omega/css/images/NL/NL_dots.png"></td>
        <td style="vertical-align: top; width: 350px; height:70px;"><img src="http://<?php print $_SERVER['HTTP_HOST']; ?>/sites/default/themes/hessen_web_omega/css/images/NL/NL_Logo_hkm.gif"></td>
        <td align="right" style="vertical-align: top; width: 68px; height:86px;"><img src="http://<?php print $_SERVER['HTTP_HOST']; ?>/sites/default/themes/hessen_web_omega/css/images/NL/NL_Hessenmarke.png"></td>
    </tr>
    <tr>
    <td colspan="2">
		<img src="http://<?php print $_SERVER['HTTP_HOST']; ?>/sites/default/themes/hessen_web_omega/css/images/NL/NL_presseinformation.gif">
		<?php print render($build['field_newsletter_datum']) ?>
		<br>
		<h2><?php print $title; ?></h2>
		<?php print render($build['field_newsletter_bild']) ?><?php print render($build['field_hauptbild']) ?>
		<?php print render($build['body']) ?><?php print render($build['field_inhalt']) ?>
	</td>
    </tr>
	<br> 
	<p style="font-family:Times New Roman; font-size:16px;">Wenn Sie diesen E-Mail-Service nicht weiter in Anspruch nehmen wollen, <a href="[simplenews-subscriber:unsubscribe-url]">melden Sie sich bitte hier ab.</a></p>
	<hr color="blue">
    <tr>
        <td width="100%" name="andi" style="color:blue; font-size: 8.5pt"><?php 
			print render($build['field_nref_pressestelle'][0]['field_nref_pressesprecher']);
			print render($build['field_nref_pressestelle'][0]['field_adresse']);
			print render($build['field_nref_pressestelle'][0]['field_telefon_main']);
			print render($build['field_nref_pressestelle'][0]['field_telefon_fax']);
			print render($build['field_nref_pressestelle'][0]['field_email_main']);
			?></td>
    </tr>
	<tr>
        <td style="color: blue; font-size: 8.5pt" colspan="2">
		<br>
		F&uuml;r die Dauer des Newsletterabonnements wird Ihre E-Mail-Adresse gespeichert. Ihre E-Mail-Adresse wird entsprechend der datenschutzrechtlichen Bestimmungen vertraulich behandelt und nicht für andere Zwecke genutzt oder an Dritte weitergegeben.<br>
		
		</td>
    </tr>
	</div>
</table>
</body>
</html>