<?php
	include "../setup.php";
	$theme = empty($_REQUEST['theme']) ? false : $_REQUEST['theme'];
	$update = $nss->updateRequired($theme) ? 'true' : 'false';
	echo '{"cache_time":'.$nss->get('cache_time').',"channel_count":'.$nss->get('channel_count').',"update":"'.$update.'"}';
?>