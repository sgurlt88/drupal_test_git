<?php
	if(!isset($_SESSION)) session_start();

	include 'define.php';		
	include NSS_ABSPATH."nss-core/NeosmartStream.php";
	
	$nss = new NeosmartStream();
	
	@include NSS_CONFIG_CONFIG;
	@include NSS_CONFIG_THEME;
	@include NSS_CONFIG_CHANNELS;
	@include NSS_CONFIG_TRANSLATE;
	@include NSS_CONFIG_LICENSE;
	@include NSS_CONFIG_BASE_URL;
	@include NSS_CONFIG_PASSWORD;
	@include NSS_CONFIG_PLUGIN;
	@include NSS_CONFIG_ERROR;
	@include NSS_CONFIG_FEEDBACK;

?>