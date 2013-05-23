<?php 
	function autoLink($string) {
		$pattern = "/(((http[s]?:\/\/)|(ftp[s]?:\/\/)|(www\.))(([a-z][-a-z0-9]+\.)?[-a-z0-9]+\.[a-z]+(\.[a-z]{2,2})?)\/?[a-z0-9._\/~#&=;%+?-]+[a-z0-9\/#=?]{1,1})/is";
		
		$pattern = "/((((http[s]?:\/\/)|(ftp[s]?:\/\/)|(www\.))([a-z][-a-z0-9]*\.)?)[-a-z0-9]+\.[a-z]+(\/[a-z0-9._\/~#&=;%+?-]*)*)/is";
		
//		            |                 https                    |Subdomain           |Domain            |Pfad
		
		//$pattern = "/(((http[s]?:\/\/)|(ftp[s]?:\/\/)|(www\.))(([a-z][-a-z0-9]+\.)?[-a-z0-9]+\.[a-z]+(\.[a-z]{2,2})?)(\/?[a-z0-9._\/~#&=;%+?-]+[a-z0-9\/#=?]{1,1})*?)/is";
		
		//$pattern = "/(((http[s]?:\/\/)|(www\.))(([a-z][-a-z0-9]+\.)?[a-z][-a-z0-9]+\.[a-z]+(\.[a-z]{2,2})?)\/?[a-z0-9._\/~#&=;%+?-]+[a-z0-9\/#=?]{1,1})/is";
		
		//$pattern = "/(((http[s]?:\/\/)|(ftp[s]?:\/\/)|(www\.))(([a-z][-a-z0-9]+\.)+?([-a-z0-9]+\.)+?[a-z]+(\.[a-z]{2,2})?)\/?[a-z0-9._\/~#&=;%+?-]+[a-z0-9\/#=?]{1,1})/is";
		
		$string = preg_replace($pattern, " <a href='$1' target='_blank'>$1</a>", $string);
		$string = preg_replace("/href='www/", "href='http://www", $string);
		return $string;
	}
	$str = "is 24. Dezember gibt es jeden Tag ein kleines Geschenk, ftps://w.wichtel-werden.de eine http://w.wichtel-werden.de nserem digitalen Adventskalender auf:
	<br> http://wichtel-werden.de http://wichtel-werden.de/pfade/unter-ordner/indx.php#anker=22&substring=77~ 
	<br> http://wichtel-werden.dsdfdfdsfdfe http://wichtel-werden.e/ 
	<br> http://t.co/ZP4CVW4r";
	echo autoLink($str);
?>