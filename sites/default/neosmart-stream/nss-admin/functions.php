<?php

/*****************************************************************************************
 * Installation
 *****************************************************************************************/
 
	function getLastFolder(){
		$url 	= $_SERVER['SCRIPT_NAME'];
		$pos 	= strrpos($url,'/index.php');
		$path 	= substr($url,0,$pos);
		$sPos	= strrpos($path,'/')+1;
		$folder = substr($path,$sPos);
		return $folder;
	}
	
/****************************************************************************
* Dateizugriffsrechte überprüfen
*****************************************************************************/

	function testFilePermissions(){
		
		$errors = array();
		
		if(!is_dir(NSS_ABSPATH.NSS_CONFIG)){ 	mkdir(NSS_ABSPATH.NSS_CONFIG, 0775);}
		if(!is_dir(NSS_CONTENT_CACHE)){ 		mkdir(NSS_CONTENT_CACHE, 0775);}
		
		if(!is_writable(NSS_ABSPATH.NSS_CONFIG)){
			array_push($errors,
				array(	'<b>'.NSS_ABSPATH.NSS_CONFIG.'</b> is not writeable',
						'Set permission for <b>nss-config</b> to <b>0755</b> (chmod)'
				)
			);
		}
		
		if(!is_writable(NSS_CONTENT_CACHE)){
			array_push($errors,
				array(	'<b>'.NSS_CONTENT_CACHE.'</b> is not writeable',
						'Set permission for <b>cache</b> to <b>0755</b> (chmod)'
				)
			);
		}
		
		if(count($errors)) return $errors;
		
		$files = array(
			NSS_CONFIG_BASE_URL,
			NSS_CONFIG_CHANNELS,
			NSS_CONFIG_CONFIG,
			NSS_CONFIG_THEME,
			NSS_CONFIG_LICENSE,
			NSS_CONFIG_PASSWORD,
			NSS_CONFIG_TRANSLATE,
			NSS_CONFIG_FEEDBACK
		);

		foreach($files as $f){
			if(!file_exists($f)){
				$fh = fopen($f, 'w');
				if($fh){
					fwrite($fh, '');
					fclose($fh);
					chmod($f, 0775);
				}else{
					//Error
				}
			}
			$perm = substr(sprintf('%o', fileperms($f)), -4);
			if($perm!='0777'&&$perm!='0775'&&$perm!='0755'){
				chmod($f,0755);
			}
		}
		return false;
	}
	

/****************************************************************************
* Dateizugriffsrechte überprüfen
*****************************************************************************/

	function testServerSettings(){
		if(ini_get('allow_url_fopen')!=1)
			return array('allow_url_fopen is disabled','Enable <b>allow_url_fopen</b> in your <b>php.ini</b>');
		//if(ini_get('openssl')!=1)
			//return array('openssl is disabled','Enable <b>openssl</b> in your <b>php.ini</b>');
		return false;
	}

 
 
/*****************************************************************************************
 * Functions
 *****************************************************************************************/
 	
	function saveBaseURL(){
		$root = getNssRoot();
		if($root===false) return 'error';
		
		$fh = @fopen(NSS_CONFIG_BASE_URL, 'w');
		$data = '<?php ';
		$data .= "if(!isset($"."nss))die;";
		$data .= "\n$"."nss->set('nss_root','".$root."');";
		$data .= "\n?>";
		if($fh){
			fwrite($fh, $data);
			fclose($fh);
			reload();
		}else{
			reload('?error=file_permissions');
		}
	}
	
	function activatePluginMode($plugin){
		$fh = fopen(NSS_CONFIG_PLUGIN, 'w');
		$data = '<?php ';
		$data .= "if(!isset($"."nss))die;";
		$data .= "\n$"."nss->set('plugin_mode','".$plugin."');";
		$data .= "\n?>";
		fwrite($fh, $data);
		fclose($fh);
	}
	

	function getNssRoot($type=false){
		$https = array_key_exists("HTTPS",$_SERVER) && $_SERVER['HTTPS']!='off';
		$protocol = $https ? "https://" : "http://";
		$host = $_SERVER['HTTP_HOST'];
		$pos = strrpos($_SERVER['SCRIPT_NAME'],'/neosmart-stream/');
		$path = substr($_SERVER['SCRIPT_NAME'],0,$pos+17);
		if($pos===false) return false;
		if($type=='host') return $host;
		else return $protocol.$host.$path;
	}
	
	
	function removeLicenseKey(){
		global $nss;
		@unlink(NSS_CONFIG_LICENSE);
		@unlink(NSS_CONFIG_ERROR);
		@unlink(NSS_CONFIG_CODE);
		$nss->cleanDir(NSS_CONTENT_CACHE);
		//unset($_SESSION['nss_admin_password']);
		redirectTo('?error=3');
	}
	
	function redirectTo($path){
		global $nss;
		header('Location: '.$nss->getBaseURL().$path);
		die;
	}
	
	function saveBoolean($key){
		if(empty($_POST[$key])) return 'false';
		if(trim($_POST[$key])=='') return 'false';
		else return 'true';
	}

	function updateConfig(){
		$config_file = NSS_ABSPATH."nss-config/nss-config.php";
		$fadein = intval($_POST['intro_fadein']);
		$facebook_internal_limit = max(intval($_POST['facebook_internal_limit']),3);
		$fh = fopen($config_file, 'w');
		$data = '<?php ';
		$data .= "if(!isset($"."nss)) die;";
		$data .= "\n$"."nss->set('debug_mode',".saveBoolean('debug_mode').");";
		$data .= "\n$"."nss->set('show_admin_link',".saveBoolean('show_admin_link').");";
		$data .= "\n$"."nss->set('cache_time','".trim($_POST['cache_time'])."');";
		$data .= "\n$"."nss->set('cache_time_profile','".trim($_POST['cache_time_profile'])."');";
		$data .= "\n$"."nss->set('date_time_format','".trim($_POST['date_time_format'])."');";
		$data .= "\n$"."nss->set('intro_fadein','".$fadein."');";
		$data .= "\n$"."nss->set('facebook_blacklist',\"".trim(str_replace('"',"'",$_POST['facebook_blacklist']))."\");";
		$data .= "\n$"."nss->set('facebook_internal_limit','".$facebook_internal_limit."');";
		$data .= "\n?>";
		fwrite($fh, $data);
		fclose($fh);
		reload('?saved=1');
	}
	
	function updateFeedback(){
		$file = NSS_ABSPATH."nss-config/nss-feedback.php";	
		$fh = fopen($file, 'w');
		$data = '<?php ';
		$data .= "if(!isset($"."nss)) die;";
		$data .= "\n$"."nss->set('fb_api_lang','".trim($_POST['fb_api_lang'])."');";
		$data .= "\n$"."nss->set('feedback_header',".saveBoolean('feedback_header').");";
		$data .= "\n$"."nss->set('feedback_header_fb_like',".saveBoolean('feedback_header_fb_like').");";
		$data .= "\n$"."nss->set('feedback_header_fb_send',".saveBoolean('feedback_header_fb_send').");";
		$data .= "\n$"."nss->set('feedback_header_fb_post',".saveBoolean('feedback_header_fb_post').");";
		$data .= "\n$"."nss->set('feedback_item',".saveBoolean('feedback_item').");";
		$data .= "\n$"."nss->set('feedback_item_fb_like',".saveBoolean('feedback_item_fb_like').");";
		$data .= "\n$"."nss->set('feedback_item_fb_comment',".saveBoolean('feedback_item_fb_comment').");";
		$data .= "\n$"."nss->set('feedback_header_twitter_follow',".trim($_POST['feedback_header_twitter_follow']).");";
		$data .= "\n$"."nss->set('feedback_item_retweet',".trim($_POST['feedback_item_retweet']).");";
		$data .= "\n?>";
		fwrite($fh, $data);
		fclose($fh);
		reload('?saved=1');
	}
	
	function updateTheme(){
		$file = NSS_ABSPATH."nss-config/nss-theme.php";
		$fh = fopen($file, 'w');
		$data = '<?php ';
		$data .= "if(!isset($"."nss)) die;";
		$data .= "\n$"."nss->set('theme','".trim($_POST['theme'])."');";
		$data .= "\n?>";
		fwrite($fh, $data);
		fclose($fh);
		reload();
	}
	
	function updatePassword($password,$reload=true,$md5=true){
		
		$password = trim($password);
		if(strlen($password)<3){
			return 'Unsafe password';
		}
		if($md5) $password = md5($password);
		
		$config_file = NSS_ABSPATH."nss-config/nss-password.php";
		$fh = fopen($config_file, 'w');
		$data = '<?php ';
		$data .= "if(!isset($"."nss)) die;";
		$data .= "\n//DON'T EDIT THIS FILE";
		$data .= "\n$"."nss->set('admin_password','".$password."');";
		$data .= "\n?>";
		fwrite($fh, $data);
		fclose($fh);
		$_SESSION['nss_admin_password'] = $password;
		
		if($reload) reload('?saved=1');
	}
	
	function updateChannels(){
		$config_file = NSS_ABSPATH."nss-config/nss-channels.php";
		$fh = fopen($config_file, 'w');
		$data = "<?php \n";
		$data .= "if(!isset($"."nss)) die;";
		$data .= stripslashes($_POST['channels']);
		$data .= "?>";
		fwrite($fh, $data);
		fclose($fh);
		//die($_POST['channels']);
		die('CHANNELS_SAVED');
	}
	
	function updateTranslation(){
		$file = NSS_ABSPATH."nss-config/nss-translate.php";
		$fh = fopen($file, 'w');
		$data = '<?php ';
		$data .= "if(!isset($"."nss)) die;";
		$data .= "\n$"."nss->set('error_no_data','".trim($_POST['error_no_data'])."');";
		$data .= "\n?>";
		fwrite($fh, $data);
		fclose($fh);
		reload('?saved=1');
	}
	
	function is_logged_in($nss,$allow_default=true){
		if(is_default_password($nss->get('admin_password')) && $allow_default){
			$_SESSION['nss_admin_password'] = md5('admin');			
		}
		elseif(empty($_SESSION['nss_admin_password'])){
			return false;	
		} 
		$state = $_SESSION['nss_admin_password'] == $nss->get('admin_password');
		return $state;
	}
	
	function is_default_password($admin_password){
		return $admin_password == '21232f297a57a5a743894a0e4a801fc3';	//md5 Hash of 'admin'
	}
	
	function reload($params=''){
		header('Location: '.$_SERVER['PHP_SELF'].$params);
		die;
	}
	
	function cl($nss){
		if(!$nss->testNSS()){
			$nss->apiRequest('file_conflict');
			header('Location: '.getNssRoot().'?error=2');
			die;
		}else{
			return false;	
		}
	}
	
	function afl(){
		if(filemtime(NSS_ABSPATH."nss-config/nss-license.php")	== intval(file_get_contents(NSS_CONFIG_CODE))) return true;
		else false;
	}

/****************************************************************************
* Check for Updates once a day
*****************************************************************************/
	
	function is_update_available($nss){
		if(!$nss->checkForUpdate()) return false;
		
		$file = NSS_ABSPATH."nss-content/cache/latest_version.txt";
		$latest_version = @file_get_contents($file);
		$current_version = $nss->get('version');		
		$output = '(Version '.$current_version.')';
		
		$v = explode('.',$latest_version);
		$sv = array(intval($v[0]),intval($v[1]),intval($v[2])); 
		$cv = array($nss->get('version_major'),$nss->get('version_minor'),$nss->get('version_revision'));		
		
		if(isset($latest_version) && 
		(
			$sv[0]>$cv[0] 
			|| ($sv[0]==$cv[0] && $sv[1]>$cv[1])
			|| ($sv[0]==$cv[0] && $sv[1]==$cv[1] && $sv[2]>$cv[2])
		)){
			return '<b>Update Info:</b> <a target="_blank" href="'.$nss->get('nss_website').'downloads/">neosmart STREAM '.$latest_version.'</a> is available!';	
		}
		return false;
	}
	
/****************************************************************************
* Get Channel Status
*****************************************************************************/
	
	function getChannelStatus($type,$id){
		$status = @file_get_contents(NSS_ABSPATH."nss-content/cache/".$type.'_'.$id.'_status.xml');
		if(!$status) return '<span class="warning status">untested</span>';
		return $status;
	}

/****************************************************************************
* Admin Login
*****************************************************************************/
	
	function adminLogin($nss){
		$_SESSION['nss_admin_password'] = md5($_POST['admin_password']);
		if(is_logged_in($nss)){
			header('Location: nss-admin/');
			die;
		}else{
			return 'Wrong Password';	
		}
	}
	
	function dynAdminLogin(){
		if(isset($_GET['dynpw'])){
			$_SESSION['nss_admin_password'] = $_GET['dynpw'];
			return true;
		}
		return false;
	}
	
/****************************************************************************
* Add Licence Key
*****************************************************************************/
	
	function addLicenseKey($key){
		global $nss;
		$key = trim($key);
		
		if(strlen($key)!=19){
			return 'Error: This license key is invalid';
		}

		$license = $nss->apiRequest('validate_key',$key);	
	
		//Success
		if(!empty($license) && $license->type=='license'){
			
			$file = NSS_ABSPATH."nss-config/nss-license.php";
			$fh = fopen($file, 'w');
			
			$data = '<?php ';
			$data .= "if(!isset($"."nss))die;";
			$data .= "\n//DON'T EDIT THIS FILE";
			$data .= "\n$"."nss->set('license_status','".$license->status."');";
			$data .= "\n$"."nss->set('license_name','".$license->name."');";
			$data .= "\n$"."nss->set('license_owner','".$license->owner."');";
			$data .= "\n$"."nss->set('license_key','".$license->key."');";
			$data .= "\n$"."nss->set('license_limit','".$license->limit."');";
			$data .= "\n$"."nss->set('license_sites','".$license->sites."');";
			$data .= "\n$"."nss->set('license_code','".$license->code."');";
			$data .= "\n$"."nss->set('license_message','".$license->message."');";
			$data .= "\n$"."nss->set('license_version','".$license->version."');";
			$data .= "\n?>";
			
			fwrite($fh, $data);
			fclose($fh);
			
			$fh = fopen(NSS_CONFIG_CODE, 'w');
			fwrite($fh, $license->code);
			fclose($fh);
			
			@unlink(NSS_CONFIG_ERROR);
			
			reload();
		}
		
		//Error
		if(!empty($license) && $license->type=='error'){
			return 'Error: '.$license->message;
		}
		
		//No Connection
		return 'Error: The API is not available yet or the settings on your server are wrong. Please read the documentation or try again later.';
		
	}


/****************************************************************************
* Total Reset
*****************************************************************************/

	function totalReset(){
		global $nss;
		$nss->cleanDir();
		$nss->cleanDir(NSS_ABSPATH.NSS_CONFIG);
		removeLicenseKey();
	}
	
?>