<?php
	include "../setup.php";
	$theme = empty($_REQUEST['theme']) ? false : $_REQUEST['theme'];
	echo $nss->mergeChannels($theme);
?>