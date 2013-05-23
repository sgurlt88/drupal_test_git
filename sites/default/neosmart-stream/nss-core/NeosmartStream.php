<?php
/************************************************************************************************************************************
 *	neosmart STREAM - core class
 *
 *	@copyright:			neosmart GmbH
 *	@licence:			https://neosmart-stream.de/legal/license-agreement/
 *	@documentation:		https://neosmart-stream.de/docs/
 *	@version:			1.4.1
 *	
 ************************************************************************************************************************************/

NSS_DEBUG ? error_reporting(E_ALL) : error_reporting(0);

class NeosmartStream{
	
	private $config = array(
		'version_major'					=> 1,
		'version_minor'					=> 4,
		'version_revision'				=> 1,
		'admin_password'				=> '21232f297a57a5a743894a0e4a801fc3',
		'admin_email'					=> '',
		'nss_root'						=> '',
		'debug_mode'					=> true,
		'cache_time'					=> 60,
		'cache_time_profile'			=> 86400,
		'date_time_format'				=> 'd F Y, G:i',
		'theme'							=> 'base',
		'error_no_data'					=> 'No data found. Please check your configuration.',
		'default_limit'					=> 5,
		'license_name'					=> false,
		'license_version'				=> '',
		'license_owner'					=> '',
		'license_key'					=> '',
		'license_sites'					=> '',
		'license_status'				=> '',
		'license_message'				=> '',
		'license_code'					=> false,
		'plugin_mode'					=> false,
		'error'							=> 0,
		'show_admin_link'				=> false,
		'fb_api_lang'					=> 'en_US',
		'feedback_header'				=> true,
		'feedback_header_fb_like'		=> true,
		'feedback_header_fb_send'		=> true,
		'feedback_header_fb_post'		=> true,
		'feedback_header_twitter_follow'=> 1,
		'feedback_item'					=> true,
		'feedback_item_fb_like'			=> true,
		'feedback_item_fb_comment'		=> true,
		'feedback_item_retweet'			=> 1,
		'intro_fadein'					=> 700,
		'facebook_blacklist'			=> 'on their own, likes their own photo,person who shared it may not have permission to share it with you',
		'facebook_internal_limit'		=> 30
	);
	private $channel_list 			= array();	

	
/****************************************************************************
 * IT IS EXPLICITLY FORBIDDEN TO EDIT THIS FILE.
 * It is explicitly forbidden to remove the branding. Any hiding or 
 * disguising of the branding, or using any other method to avoid the 
 * showing of the branding is a breach of the terms of the license agreement!
 ****************************************************************************/
 
	private $el = array(
		'a' 	=> "<div style='color:#888888!important; font-family:\"lucida grande\", tahoma, verdana, arial, sans-serif; font-size:11px!important;overflow:visible!important;display:block!important;visibility:visible!important;opacity:1!important' data-id='nss-ad'>",
		'_a' 	=> "</div>",
		'd' 	=> "<div style='display:block;width:auto;padding:5px 10px;overflow:hidden;'>",
		'_d' 	=> "</div>",
		'e'		=> "<div style='font-family:\"lucida grande\", tahoma, verdana, arial, sans-serif; font-size:11px!important;display:block;width:auto;padding:5px 10px;overflow:hidden;background-color:#c00;color:#fff;'>",
		'sp' 	=> "<a title='neosmart STREAM - Social Media Plugin - Facebook, Twitter, Wordpress Support' target='_blank' href='https://neosmart-stream.de/' style='text-decoration:none;color:#888888!important;'><span style='color:#ff7800!important;background:url(nss-root/nss-core/nss-icon.png) no-repeat 0 center!important;display:inline-block!important;padding:2px 2px 4px 22px!important'>neosmart STREAM</span> - Social Plugin</a>",
		'dmi'	=> "<div id='nss-debug-mode-info'></div>"
	);

/**************************************************************************
 * Construct
 **************************************************************************/
 
	function __construct() {
		$https = array_key_exists("HTTPS",$_SERVER) && $_SERVER['HTTPS']!='off';
		$this->set('https',$https);
	}
   
   
/**************************************************************************
 * Getter and Setter
 * @since 1.0
 **************************************************************************/
 
	function set($parameter,$value){
		$this->config[$parameter] = $value;
	}
	
	function get($parameter){
		if($parameter=='channel_count'){
			return count($this->channel_list);
		}
		elseif($parameter=='channel_list'){
			return $this->channel_list;
		}
		elseif($parameter=='version'){
			return $this->config['version_major'].'.'.$this->config['version_minor'].'.'.$this->config['version_revision'];
		}
		elseif($parameter=='nss_website'){
			return NSS_WEBSITE_URL;
		}
		return array_key_exists($parameter,$this->config)?$this->config[$parameter]:false;
	}
	
	function getPath(){
		return get_include_path();
	}
	
/**************************************************************************
 * Theme Meta auslesen
 * @since 1.0
 **************************************************************************/
 
	function getThemeMeta($meta,$theme){
		$data = false;
		$lines 	= explode("\n", implode('', file(NSS_CONTENT_THEMES.$theme."/style.css")));
		foreach ($lines as $line) {
			$pos = strpos($line, $meta);
			if($pos!==false) $data = trim(substr($line,$pos+strlen($meta)));
		}
		return $data;
	}

/**************************************************************************
 * Current Host is Part of Base-Url?
 * @since 1.0
 * @update 1.3.2
 **************************************************************************/
 	
	function hostIsPartOfBaseURL(){
		$protocol = (array_key_exists('HTTPS',$_SERVER) && $_SERVER['HTTPS']!='off') ? "https://" : "http://";
		$host = $_SERVER['HTTP_HOST'];
		//$site = $protocol.$host;
		$baseURL = parse_url($this->getBaseURL(),PHP_URL_HOST);
		//$baseURL = substr(getBaseURL(),0,strlen($site));
		return $host===$baseURL;
	}
	
/**************************************************************************
 * Syntax test for license
 * @since 1.0
 **************************************************************************/
 	
	function testLicenseSyntax(){
		$key = $this->get('license_key');
		if(empty($key)) return false;
		if(strlen($key)!=19) return false;
		if(count(explode('-',$key))!=4) return false;
		if($this->get('license_status')!='valid') return false;
		return true;
	}

	
	
/**************************************************************************
 * Add Channel
 * @since 1.0
 **************************************************************************/
 	
	function addChannel($a,$b,$c='',$d=3,$e='true',$f=0){
		$new_channel = array();
		switch(strtolower($a)){
			case 'facebook':
				$new_channel['type'] 					= 'facebook';
				$new_channel['id']			 			= $b;
				$new_channel['access_token'] 			= $c;
				$new_channel['limit'] 					= $d;
				$new_channel['show_all']			 	= $e;
				$new_channel['access_token_expires'] 	= $f;
				
			break;
			case 'twitter':
				$new_channel['type'] 			= 'twitter';
				$new_channel['id'] 				= $b;
				$new_channel['limit'] 			= $c;
			break;
			default: //nss
				$new_channel['type'] 			= 'nss';

				
				$tmp = substr($b,strrpos($b,"/")+1);
				$tmp = urlencode($tmp);
			
				$new_channel['id']				= $tmp;
				$new_channel['url'] 			= $b;
			break;
		}
		array_push($this->channel_list,$new_channel);
	}

/**************************************************************************
 * Init
 **************************************************************************/
 	
	function initStream(){
		return $this->updateRequired() ? $this->updateCache() : $this->show();
	}
 
 
/**************************************************************************
 * Update
 **************************************************************************/
 
	function updateRequired($theme='base'){
		$now = time();
		$update = false;
		$cache_file = NSS_ABSPATH."nss-content/cache/".$theme."-stream.html";
		
		if(!is_dir(NSS_ABSPATH."nss-content/cache/")){
			mkdir(NSS_ABSPATH."nss-content/cache/",0755);
			$update = true;
		}
		elseif(!file_exists($cache_file)){
			$update = true;
		}
		elseif($now-filemtime($cache_file) >= $this->get('cache_time')){
			$update = true;
		}
		elseif(filemtime(NSS_ABSPATH.'nss-config/nss-config.php')-filemtime($cache_file)>0
			|| filemtime(NSS_ABSPATH.'nss-config/nss-channels.php')-filemtime($cache_file)>0
			|| filemtime(NSS_ABSPATH.'nss-config/nss-feedback.php')-filemtime($cache_file)>0
			|| filemtime(NSS_CONFIG_BASE_URL)-filemtime($cache_file)>0
			|| filemtime(NSS_ABSPATH.'nss-config/nss-translate.php')-filemtime($cache_file)>0
		){
			$update = true;
		}
		
		return $update;
	}
	
	function isChannelUpToDate($file,$cache_time='cache_time'){
		$now = time();
		$ft = @filemtime($file);
		$channelConfig = @filemtime(NSS_ABSPATH.'nss-config/nss-channels.php');
		if(!$ft){
			//Datei nicht vorhanden
			return false;
		}
		elseif($now-$ft >= $this->get($cache_time)){
			//Datei älter als Cache Time
			return false;
		}
		elseif($channelConfig >= $ft){
			//Datei älter als Channel Config
			return false;
		}
		else{
			//Datei is aktuell
			return true;
		}
	}
	
/**************************************************************************
 * Update Info für den Anwender (wird im Backend angezeigt)
 **************************************************************************/
 	
	function getLastUpdate(){
		$cache_file = NSS_CONTENT_CACHE.$this->get('theme').'-stream.html';
		$ft = @filemtime($cache_file);
		if(!$ft) return "Never";
		return date($this->get('date_time_format'), $ft);
	}


/**************************************************************************
 * Read Cache
 **************************************************************************/
 
	function show($echo = true){
		$html = '';
		$cache_handle = '';
		$chancel = '';
		$admin_link = $this->htmlWrap('admin_link','Admin');
		//Error
		if($this->get('license_owner')=='' || $this->get('error')!==0){
			if($this->get('license_owner')=='') $message = 'add your license in the admin area!';
			elseif($this->get('error')==2) $message = '<b>File error:</b> a file has been manually adjusted and caused a serious error. Please provide your license key again.';
			else $message = '<b>File error:</b> one or more files are conflicted. <a href="'.NSS_WEBSITE_URL.'downloads/" style="color:#fff;" target="_blank">Download</a> the latest version.';
			$chancel .= $this->el['e']."neosmart STREAM - ".$message.$this->el['_d'];
			if($echo){
				echo $chancel;
				return;
			}
			else return $chancel;
		}
		if(!$this->hostIsPartOfBaseURL()){
			$chancel .= $this->el['d']."<span style='color:#fff;background-color:#c00;padding:10px;display:inline-block;'><strong>neosmart STREAM</strong> - URL conflict - Open your admin area and update your configuration!</span>".$this->el['_d'];
			if($echo){
				echo $chancel;
				return;
			}
			else return $chancel;
		}
		
		//Cache
		if($this->get('channel_count')!=0){
			$cache_handle .= @file_get_contents(NSS_CONTENT_CACHE.$this->get('theme').'-stream.html');
		}
		
		$html = $this->deb($html);
		
		$html .= $cache_handle;
		if($this->get('show_admin_link')) $html .= $admin_link;
		
		$class = $this->get('license_version')=='pro' ? 'nss-pro' : 'nss-lite';
		if($this->get('debug_mode')) $class .= ' nss-debug';
		$html = '<div id="nss" class="'.$class.'" data-fb-lang="'.$this->get('fb_api_lang').'">'.$this->el['dmi'].$html.'</div>';
		
		//Check for update
		$this->checkForUpdate();
		$html = '<style>.nss-pro,.nss-lite{display:none;}</style>'.$html;
		$html .= '<script>var nsstmp = document.getElementById("nss"); nsstmp.className = nsstmp.className+" nss-load";</script>';
		
		if($echo){
			echo $html;
			return;
		}
		else return $html;
	}
	
	private function deb($html){
		if($this->get('debug_mode')){
			if($this->get('channel_count')==0){
				$html = $this->htmlWrap('notice','No Channels to display. <a href="'.$this->getBaseURL().'">Login</a> and add a channel!');
				$this->cleanDir(NSS_CONTENT_CACHE);
			}else{
				if($this->updateRequired($this->get('theme'))){
					//Info wird über jQuery ausgegeben
				}
			}	
		}
		return $html;
	}
	
	public function getBaseURL(){
		$url = $this->get('nss_root');
		if($this->get('https')){
			$url = str_replace('http:','https:',$url);
		}else{
			$url = str_replace('https:','http:',$url);
		}
		return $url;
	}
	
	public function getSafeURL($url){
		if($this->get('https')){
			$url = str_replace('http:','https:',$url);
		}else{
			$url = str_replace('https:','http:',$url);
		}
		$url = str_replace('autoplay=1','autoplay=0',$url);
		return $url;
	}
	
	private function wrap($html){
		$feedback = '';
		$html = '<div class="nss-stream-wrap" style="position:relative!important;">'.$html.'</div>';
		if($this->get('license_version')!='pro'){
			$html = $this->el['a'].$this->el['d'].$this->el['sp'].$this->el['_d'].$this->el['_a'].$html;
			$html = preg_replace('/nss-root\//',$this->getBaseURL(),$html);
		}

		if($this->get('license_version')=='pro'){	
			 include "template-feedback.php";
		}
		$html = '<div class="nss-stream">'.$feedback.$html.'</div>';
		return $html;
	}
	
	
	function readFile($filename){
		$cache_handle = @file_get_contents(NSS_CONTENT_CACHE.$filename);
		return $cache_handle;
	}
	
/**************************************************************************
 * Clean Cache
 **************************************************************************/
 	 
function cleanDir($dir=false) {
    $mydir = @opendir($dir);
	if(!$mydir) return false;
	
	while(false !== ($file = readdir($mydir))) {
		if($file != "." && $file != "..") {
			chmod($dir.$file, 0777);
			if(is_dir($dir.$file)) {
				chdir('.');
				$this->cleanDir($dir.$file.'/');
				rmdir($dir.$file) or DIE("couldn't delete $dir$file<br />");
			}
			else
				unlink($dir.$file) or DIE("couldn't delete $dir$file<br />");
		}
	}
	closedir($mydir);
	return true;
}

	
/**************************************************************************
 * Wrap HTML
 **************************************************************************/
	
	function htmlWrap($type,$content){
		$notice="display:block;padding:5px;padding:5px 10px;font-size:13px;border-bottom:1px solid #d8d8a4;background-color:#ffffe0;color:#555;";
		$error="display:block;padding:5px;padding:5px 10px;font-size:13px;border-bottom:1px solid #d8d8a4;background-color:#c00;color:#FFFFFF;;";
		switch($type){
			case 'notice':
				$html = '<div style="'.$notice.'">'.$content.'</div>';
			break;
			case 'error':
				$html = '<div style="'.$error.'">'.$content.'</div>';
			break;
			case 'admin_link':
				$html = '<div class="nss-admin-link"><a href="'.$this->getBaseURL().'">'.$content.'</a></div>';
			break;
			default:
				$html = $content;
			break;
		}
		return $html;
	}
	
	
/**************************************************************************
 * Update Channel
 **************************************************************************/
 	
	function updateChannel($k){		
		
		switch($this->channel_list[$k]['type']){
			case 'facebook':
				$filename = NSS_CONTENT_CACHE.'facebook_'.$this->channel_list[$k]['id'].'.xml';
				if($this->isChannelUpToDate($filename)){
					$response = 'up-to-date';
				}
				else{
					$response = $this->readFacebookChannel($this->channel_list[$k]['id'],$this->channel_list[$k]['access_token'],$this->channel_list[$k]['limit'],$this->channel_list[$k]['show_all']);
				}
			break;
			case 'twitter':
				$filename = NSS_CONTENT_CACHE.'twitter_'.$this->channel_list[$k]['id'].'.xml';
				if($this->isChannelUpToDate($filename)){
					$response = 'up-to-date';
				}
				else{
					$response  = $this->readTwitterChannel($this->channel_list[$k]['id'],$this->channel_list[$k]['limit']);
				}
			break;
			default:
				$response = $this->readChannel($this->channel_list[$k]['url']);
			break;
		}
		
		//Profil Info
		$this->readChannelProfile($this->channel_list[$k]);
		
		return $response;
	}
	
	function readChannelProfile($channel){
		
		$error 			= false;
		$file 			= NSS_CONTENT_CACHE.$channel['type'].'_'.$channel['id'].'_profile.xml';
		$username 		= $channel['id'];
		$link			= '';
		$extras			= '';
		
		//Abbruch wenn Cache aktuell
		if($this->isChannelUpToDate($file,'cache_time_profile')){
			return true;	
		}
		
		
		switch($channel['type']){			
			case 'facebook':
				$url = "https://graph.facebook.com/".$channel['id']."?access_token=".$channel['access_token'];
				$data = $this->readData($url);
				$fbdata = json_decode($data);		
				if($data=='error' || isset($fbdata->{'error'})) $error = true;
				else{
					$username = $fbdata->username;
					$link = $fbdata->link;
					if(isset($fbdata->name)) $username = $fbdata->name;
					$fb_type = isset($fbdata->likes) ? 'page' : 'user';
					$extras .= "\n\t\t<type>".$fb_type."</type>";
					if($fb_type=='page') $extras .= "\n\t\t<likes>".$fbdata->likes."</likes>";
					$extras .= "\n\t";
				}
			break;
		}	

		
		if($error===false){
			$data = "<?xml version='1.0'?>";
			$data .= "<profile>";
			$data .= "\n\t<channel>".$channel['type']."</channel>";
			$data .= "\n\t<id>".$channel['id']."</id>";
			$data .= "\n\t<username>".$username."</username>";
			$data .= "\n\t<link>".$link."</link>";
			$data .= "\n\t<extras>".$extras."</extras>";
			$data .= "\n</profile>";
			$fh = fopen($file, 'w');
			fwrite($fh, $data);
			fclose($fh);
		}
	}


/**************************************************************************
 * Update Cache
 **************************************************************************/
 	
	function updateCache(){
		$data = '';
		for($k=0;$k<count($this->channel_list);$k++){
			switch($this->channel_list[$k]['type']){
				case 'facebook':
					$this->readFacebookChannel($this->channel_list[$k]['id'],$this->channel_list[$k]['access_token'],$this->channel_list[$k]['limit'],$this->channel_list[$k]['show_all']);
					if($response != 'error') $data .= $response;
				break;
				case 'twitter':
					$data .= $this->readTwitterChannel($this->channel_list[$k]['id']);
				break;
				default:
					$data .= $this->readChannel($this->channel_list[$k]['url']);
				break;
			}
		}
		return $data=='' ? $this->show(): $this->sortData($data);
	}

/**************************************************************************
 * Save Status of a Channel to local file
 **************************************************************************/
 	
	function saveChannelTestToFile($type,$id,$status){
		$file = NSS_ABSPATH."nss-content/cache/".$type.'_'.$id.'_status.xml';
		if($status=='success'){
			$data = 	'<span class="status active">active</span>';
			$return = 	'<span class="status active">active</span>';
		}
		else{
			$data = 	'<span class="status inactive">error</span>';
			$return = 	'<span class="status inactive">Error: '.$status.'</span>';
		}
		$fh = fopen($file, 'w');
		fwrite($fh, $data);
		fclose($fh);
		return $return;
	}
	
/**************************************************************************
 * Merge and Sort Data
 **************************************************************************/
	
	function mergeChannels($theme){
		if(!empty($theme)) $this->set('theme',$theme);
		$data = '';
		for($k=0;$k<count($this->channel_list);$k++){
			$file = $this->readFile($this->channel_list[$k]['type'].'_'.$this->channel_list[$k]['id'].'.xml');
			if($file){
				$file = preg_replace("/<\?xml version='1.0'\?>/","",$file);
				$start = strpos($file,"<nss>")+5;
				$end = strpos($file,"</nss>")-$start;
				$file = substr($file,$start,$end);
				$data .= $file;
			}
		}
		return $this->sortData($data);
	}
	
	function sortData($data){
		$el = '';
		function filter_xml($matches) { 
			return trim(htmlspecialchars($matches[1])); 
		} 
		$data = preg_replace_callback('/<!\[CDATA\[(.*)\]\]>/', 'filter_xml', $data);
		$xmlObj = simplexml_load_string("<?xml version='1.0'?><nss>".$data."</nss>");
		
		$arrXml = $this->changeObjectsToArrays($xmlObj);
		
		$item = $arrXml['item'];		
		if(isset($item['channel'])){$item = array($item);}
		
		foreach($this->el as $key => $value){ $el .= $value;}
		if(md5($el)!='55615d01702975a1a89183c68c825955'){
			$fh = fopen(NSS_CONFIG_ERROR, 'w');	
			fwrite($fh, "<?php $"."nss->set('error',3); ?>");
			fclose($fh);
			return false;	
		}
		
		//If more than one
		if(!@array_key_exists('created',$item)){
			foreach($item as $c=>$key) {
				$sort_created[] = $key['created'];
			}
		}
		
		array_multisort($sort_created, SORT_DESC,$item );
		return $this->insertDataIntoTemplate($item);
	}
	
	function changeObjectsToArrays($data, $skip = array()){
		$arrayData = array();
		
		if (is_object($data)) $data = get_object_vars($data);
		if (is_array($data)) {
			foreach ($data as $index => $value) {
				if (is_object($value) || is_array($value)) {
					$value = $this->changeObjectsToArrays($value, $skip);
				}
				if (in_array($index, $skip)) {
					continue;
				}
				$arrayData[$index] = $value;
			}
		}
		return $arrayData;
	}
	
	
/**************************************************************************
 * Insert data into template
 **************************************************************************/
 
	function insertDataIntoTemplate($item){
		$out = '';
		for($position=0;$position<count($item);$position++){
			$nss = $item[$position];
		
			$channel = $nss['channel'];
			$is_facebook = $channel=='facebook';
			$is_twitter = $channel=='twitter';
			$is_default = !$is_facebook && !$is_twitter;
			$item_class = '';
						
			$id = $nss['id'];
			$created = $this->transformDate($nss['created']);
			$updated = $this->transformDate($nss['updated']);
			$content = is_array($nss['content']) ? '' : $this->autoLink($nss['content']);
			
			$author = $nss['author'];
			$author_id = $nss['author']['id'];
			$author_name = $nss['author']['name'];
			$author_link = $nss['author']['link'];
			$author_avatar = $nss['author']['avatar'];
			
			$location_address = isset($nss['location']['address']) ? $nss['location']['address'] : '';
			$location_latitude = isset($nss['location']['latitude']) ? $nss['location']['latitude'] : '';
			$location_longitude = isset($nss['location']['longitude']) ? $nss['location']['longitude'] : '';
			
			//Facebook
			$extras_facebook_type = $is_facebook ? $nss['extras']['facebook']['type'] : '';
			$extras_facebook_source = !$is_facebook || is_array($nss['extras']['facebook']['source']) ? '' : $this->getSafeURL($nss['extras']['facebook']['source']);
			$extras_facebook_description = !$is_facebook || is_array($nss['extras']['facebook']['description']) ? '' : $this->autoLink($nss['extras']['facebook']['description']);
			$extras_facebook_caption = !$is_facebook || is_array($nss['extras']['facebook']['caption']) ? '' : $nss['extras']['facebook']['caption'];
			$extras_facebook_picture = !$is_facebook || is_array($nss['extras']['facebook']['picture']) ? '' : $nss['extras']['facebook']['picture'];
			
			//Facebook Images
			$extras_facebook_image_2048 = !$is_facebook || empty($nss['extras']['facebook']['images']['image_2048']) ? $extras_facebook_picture : $nss['extras']['facebook']['images']['image_2048'];
			$extras_facebook_image_960 = !$is_facebook || empty($nss['extras']['facebook']['images']['image_960']) ? $extras_facebook_picture : $nss['extras']['facebook']['images']['image_960'];
			$extras_facebook_image_720 = !$is_facebook || empty($nss['extras']['facebook']['images']['image_720']) ? $extras_facebook_picture : $nss['extras']['facebook']['images']['image_720'];
			$extras_facebook_image_600 = !$is_facebook || empty($nss['extras']['facebook']['images']['image_600']) ? $extras_facebook_picture : $nss['extras']['facebook']['images']['image_600'];
			$extras_facebook_image_480 = !$is_facebook || empty($nss['extras']['facebook']['images']['image_480']) ? $extras_facebook_picture : $nss['extras']['facebook']['images']['image_480'];
			$extras_facebook_image_320 = !$is_facebook || empty($nss['extras']['facebook']['images']['image_320']) ? $extras_facebook_picture : $nss['extras']['facebook']['images']['image_320'];
			$extras_facebook_image_130 = !$is_facebook || empty($nss['extras']['facebook']['images']['image_130']) ? $extras_facebook_picture : $nss['extras']['facebook']['images']['image_130'];
			
			//Facebook Events
			$extras_facebook_event_name = !$is_facebook || empty($nss['extras']['facebook']['event']['name']) ? '' : $nss['extras']['facebook']['event']['name'];
			$extras_facebook_event_description = !$is_facebook || empty($nss['extras']['facebook']['event']['description']) ? '' : $nss['extras']['facebook']['event']['description'];
			$extras_facebook_event_start_time = !$is_facebook || empty($nss['extras']['facebook']['event']['start_time']) ? '' : $this->transformDate($nss['extras']['facebook']['event']['start_time']);
			$extras_facebook_event_end_time = !$is_facebook || empty($nss['extras']['facebook']['event']['end_time']) ? '' : $this->transformDate($nss['extras']['facebook']['event']['end_time']);
			$extras_facebook_event_location = !$is_facebook || empty($nss['extras']['facebook']['event']['location']) ? '' : $nss['extras']['facebook']['event']['location'];
			
			//Rest			
			$extras_facebook_link = !$is_facebook || is_array($nss['extras']['facebook']['link']) ? '' : $nss['extras']['facebook']['link'];
			$extras_facebook_name = !$is_facebook || is_array($nss['extras']['facebook']['name']) ? '' : $nss['extras']['facebook']['name'];
			$extras_facebook_message = !$is_facebook || is_array($nss['extras']['facebook']['message']) ? '' : $this->autoLink($nss['extras']['facebook']['message']);
			
			$extras_facebook_privacy_description = !$is_facebook || is_array($nss['extras']['facebook']['privacy']['description']) ? '' : $nss['extras']['facebook']['privacy']['description'];
			$extras_facebook_privacy_value = !$is_facebook || is_array($nss['extras']['facebook']['privacy']['value']) ? '' : $nss['extras']['facebook']['privacy']['value'];
			
			$extras_facebook_count_comments =  !$is_facebook || is_array($nss['extras']['facebook']['count']['comments']) ? '' : $nss['extras']['facebook']['count']['comments'];
			$extras_facebook_count_likes = !$is_facebook || is_array($nss['extras']['facebook']['count']['likes']) ? '' : $nss['extras']['facebook']['count']['likes'];
			$extras_facebook_count_shares = !$is_facebook || is_array($nss['extras']['facebook']['count']['shares']) ? '' : $nss['extras']['facebook']['count']['shares'];
			
			$extras_facebook_story = !$is_facebook || is_array($nss['extras']['facebook']['story']) ? '' : $nss['extras']['facebook']['story'];
			$extras_facebook_icon = !$is_facebook || is_array($nss['extras']['facebook']['icon']) ? '' : $nss['extras']['facebook']['icon'];
			$extras_facebook_object_id = !$is_facebook || is_array($nss['extras']['facebook']['object_id']) ? '' : $nss['extras']['facebook']['object_id'];
			
			$extras_facebook_application_name = !$is_facebook || is_array($nss['extras']['facebook']['application']['name']) ? '' : $nss['extras']['facebook']['application']['name'];
			$extras_facebook_application_id = !$is_facebook || is_array($nss['extras']['facebook']['application']['id']) ? '' : $nss['extras']['facebook']['application']['id'];
			
			$extras_facebook_comments_datacount = !$is_facebook ? 0 : count($nss['extras']['facebook']['comments']);
			if($extras_facebook_comments_datacount>0){
				$tmp = $nss['extras']['facebook']['comments'];
				if(isset($tmp['comment'][0])) $extras_facebook_comments_datacount = count($tmp['comment']);				
			}
			
			//Comments
			if($extras_facebook_comments_datacount>1){
				$comment = '';
				for($d=0;$d<$extras_facebook_comments_datacount;$d++){
					$extras_facebook_comments_author_name = $tmp['comment'][$d]['author']['name'];
					$extras_facebook_comments_author_id = $tmp['comment'][$d]['author']['id'];
					$extras_facebook_comments_author_link = $tmp['comment'][$d]['author']['link'];
					$extras_facebook_comments_author_avatar = $tmp['comment'][$d]['author']['avatar'];
					$extras_facebook_comments_content = $tmp['comment'][$d]['content'];
					$extras_facebook_comments_created = $this->transformDate($tmp['comment'][$d]['created']);
					include '../nss-content/themes/'.$this->get('theme').'/template-comment.php';
				}
				$extras_facebook_comments = $comment;
			}else if($extras_facebook_comments_datacount==1){
				$comment = '';
				$extras_facebook_comments_author_name = $tmp['comment']['author']['name'];
				$extras_facebook_comments_author_id = $tmp['comment']['author']['id'];
				$extras_facebook_comments_author_link = $tmp['comment']['author']['link'];
				$extras_facebook_comments_author_avatar = $tmp['comment']['author']['avatar'];
				$extras_facebook_comments_content = $tmp['comment']['content'];
				$extras_facebook_comments_created = $this->transformDate($tmp['comment']['created']);
				 
				include '../nss-content/themes/'.$this->get('theme').'/template-comment.php';
				$extras_facebook_comments = $comment;
			}else{
				$extras_facebook_comments = '';
			}
			
			//Twitter Buttons
			$extras_twitter_button_tweet = '';
			if($this->get('feedback_item_retweet')>0){
				$twitter_data_count = $this->get('feedback_item_retweet')==2 ? 'horizontal' : 'none';
				$extras_twitter_button_tweet .= "<div class='nss-feedback' data-object-id='$id'>";
				$extras_twitter_button_tweet .= '<a href="https://twitter.com/share" class="twitter-share-button" target="_blank" data-via="'.$author_name.'" data-url="false" data-text="'.strip_tags($content).'" data-count="'.$twitter_data_count.'">Tweet</a>';
				$extras_twitter_button_tweet .= '</div>';
			}
			
			if($is_facebook) $item_class .= ' nss-facebook-type-'.$extras_facebook_type;
			$item_class = trim($item_class);
			$tmp = false;
			include '../nss-content/themes/'.$this->get('theme').'/template-post.php';
		}
		$out = $this->wrap($out);
		return $this->saveCache($out);
	}
	
/**************************************************************************
 * Save Cache
 **************************************************************************/
	
	function saveCache($out){
		$cache_file = NSS_CONTENT_CACHE.$this->get('theme').'-stream.html';
		$fh = fopen($cache_file, 'w');
		fwrite($fh, $out);
		fclose($fh);
		return $out;
	}
	
	function saveFile($filename,$content){
		$cache_file = NSS_CONTENT_CACHE.$filename;
		$fh = fopen($cache_file, 'w');
		fwrite($fh, $content);
		fclose($fh);
	}
	
/**************************************************************************
 * Read Data
 **************************************************************************/
 
 	function readData($url){
 		$parsedUrl = parse_url($url);
		$data = null;

		//CURL
		if  (in_array  ('curl', get_loaded_extensions())){
				
			$ch = curl_init();
			curl_setopt ($ch, CURLOPT_URL, $url);
			curl_setopt($ch, CURLOPT_RETURNTRANSFER, 1);
			curl_setopt($ch, CURLOPT_SSL_VERIFYPEER, false);
			$data = curl_exec ($ch);
			curl_close ($ch);
			//print_r($data);
			if($data) return $data;
		}

		//fsockopen
		$fp = @fsockopen ('ssl://'.$parsedUrl['host'] , 443, $errno, $errstr, 30);  
		if ($fp){
			fputs($fp, "GET /".$parsedUrl['path']."?".$parsedUrl['query']."/ HTTP/1.1\r\n"); 
			fputs($fp, "Host: ".$parsedUrl['host']."\r\n");
			fputs($fp, "Referer: ".$parsedUrl['host']."\r\n");
			fputs($fp, "Connection: close\r\n\r\n");
			while (!feof($fp)){
				$data = fgets($fp);
			}
			fclose($fp);
			if($data) return $data;	
		} 

		//file_get_contents
		$data = @file_get_contents($url);
		if($data) return $data;

		//Anymore alternatives?
		
		//Error
		return 'error';
		
	}
	 
	function readFacebookChannel($id,$access_token,$limit=false,$show_all='true'){
		if(!$limit) $limit = $this->get('default_limit');
		$binding = $show_all=='false' ? 'posts' : 'feed';
		$url = "https://graph.facebook.com/".$id."/".$binding."?limit=".$this->get('facebook_internal_limit')."&access_token=".$access_token;
		$data = $this->readData($url);
		$error = false;
		
		if($data == 'error') $error = true;
		$fbdata = json_decode($data);
		
		if(isset($fbdata->{'error'})) $error = true;
		
		if($error){
			$cached_data = $this->readFile('facebook_'.$id.'.xml');
			if($cached_data){
				$this->saveChannelTestToFile('facebook',$id,'error');
				return 'cache';
			}
			else{
				$this->saveChannelTestToFile('facebook',$id,'error');
				return 'error';
			}
		}else{		
			return $this->convertFacebookChannel($id,$fbdata,$access_token,$limit);
		}
	}	
	
	function convertFacebookChannel($id,$fbdata,$access_token,$limit){ 
	
		$posts = $fbdata->{'data'};
		$output = "";
		$counter = 0;
		
		for($k=0;$k< count($posts);$k++){
			$p 				= $posts[$k];
			$object_json 	= false;
			$event_json 	= false;
			$type 			= isset($p->type) ? $p->type : '';
			$tmp_id 		= explode('_',$p->id);
			$page_id 		= $tmp_id[0];
			$object_id 		= $tmp_id[1];
			
			//Bilder über Object ID lesen
			if($type=='photo'&&isset($p->object_id)){
				$url = "https://graph.facebook.com/".$p->object_id."?access_token=".$access_token;
				$object_data = $this->readData($url);
				$object_json = json_decode($object_data);
			}
			
			//Event über Object ID lesen
			if($type=='link'){//&&isset($p->object_id)&&isset($p->story)&&strpos($p->story,'created an event')
				$type = 'event';
				$url = "https://graph.facebook.com/".$object_id."?access_token=".$access_token;
				$event_data = $this->readData($url);
				$event_json = json_decode($event_data);
			}
			
			//Break bei bestimmten Schlüsselwörtern
			if($type=='status'){
				$blacklist = explode(',',$this->get('facebook_blacklist'));
				$continue_loop = false;
				foreach($blacklist as $break_on){
					if(isset($p->story) && strpos(trim($p->story),trim($break_on))) $continue_loop = true;
					if(isset($p->message) && strpos(trim($p->message),trim($break_on))) $continue_loop = true;
					if(isset($p->description) && strpos(trim($p->description),trim($break_on))) $continue_loop = true;
					if(isset($p->caption) && strpos(trim($p->caption),trim($break_on))) $continue_loop = true;
				}
				if($continue_loop) continue;
			}
			
			//Abbruch wenn Limit erreicht wurde
			if($counter>=$limit) break;
			$counter++;
			
			$output .= "<item>";
			$output .= "\n\t<channel>facebook</channel>";	
			$output .= "\n\t<id>"; if(isset($p->id)) $output .= $p->id; $output .= '</id>';
			$output .= "\n\t<created>".$p->created_time.'</created>';
			$output .= "\n\t<updated>"; if(isset($p->updated_time)) $output .= $p->updated_time; $output .='</updated>';
			$output .= "\n\t<content></content>";
			$output .= "\n\t<author>";
				$output .= "\n\t\t<id>"; if(isset($p->from->id)) $output .= $p->from->id; $output .='</id>';
				$output .= "\n\t\t<name>"; if(isset($p->from->name)) $output .= $this->cdata($p->from->name); $output .='</name>';
				$output .= "\n\t\t<link>"; if(isset($p->from->id)) $output .= "http://www.facebook.com/".$p->from->id; $output .='</link>';
				$output .= "\n\t\t<avatar>"; if(isset($p->from->id)) $output .= "https://graph.facebook.com/".$p->from->id.'/picture'; $output .='</avatar>';		 			
			$output .= "\n\t</author>";
			$output .= "\n\t<location></location>";
			$output .= "\n\t<extras>";
				$output .= "\n\t\t<facebook>";
					$output .= "\n\t\t\t<type>"; $output .= $type; $output .= '</type>';	
					$output .= "\n\t\t\t<source>"; if(isset($p->source)) $output .= $this->cdata($p->source); $output .= '</source>';	
					$output .= "\n\t\t\t<caption>"; if(isset($p->caption)) $output .= $this->cdata($p->caption); $output .= '</caption>';	
					$output .= "\n\t\t\t<description>"; if(isset($p->description)) $output .= $this->cdata($p->description); $output .= '</description>';
					$output .= "\n\t\t\t<picture>"; if(isset($p->picture)) $output .= $this->cdata($p->picture); $output .= '</picture>';
					$output .= "\n\t\t\t<link>"; if(isset($p->link)) $output .= $this->cdata($p->link); $output .= '</link>';
					$output .= "\n\t\t\t<name>"; if(isset($p->name)) $output .= $this->cdata($p->name); $output .= '</name>';	
					$output .= "\n\t\t\t<message>"; if(isset($p->message)) $output .= $this->cdata($p->message); $output .= '</message>';						
					$output .= "\n\t\t\t<privacy>";
						$output .= "\n\t\t\t\t<description>"; if(isset($p->privacy->description)) $output .= $this->cdata($p->privacy->description); $output .='</description>';
						$output .= "\n\t\t\t\t<value>"; if(isset($p->privacy->value)) $output .= $p->privacy->value; $output .='</value>';
					$output .= "\n\t\t\t</privacy>";
					$output .= "\n\t\t\t<count>";
						$output .= "\n\t\t\t\t<comments>"; $output .= isset($p->comments->count) ? $p->comments->count : '0'; $output .='</comments>';
						$output .= "\n\t\t\t\t<likes>"; $output .= isset($p->likes->count) ? $p->likes->count : '0'; $output .='</likes>';
						$output .= "\n\t\t\t\t<shares>"; $output .= isset($p->shares->count) ? $p->shares->count : '0'; $output .='</shares>';
					$output .= "\n\t\t\t</count>";
					$output .= "\n\t\t\t<story>"; if(isset($p->story)) $output .= $this->cdata($p->story); $output .= '</story>';			
					$output .= "\n\t\t\t<icon>"; if(isset($p->icon)) $output .= $p->icon; $output .='</icon>';
					$output .= "\n\t\t\t<object_id>"; if(isset($p->object_id)) $output .= $p->object_id; $output .='</object_id>';
					
					$output .= "\n\t\t\t<images>";
						 if(isset($object_json->images[0]->source)) $output .= "\n\t\t\t\t<image_2048>".$object_json->images[0]->source."</image_2048>";
						 if(isset($object_json->images[1]->source)) $output .= "\n\t\t\t\t<image_960>".$object_json->images[1]->source."</image_960>";
						 if(isset($object_json->images[2]->source)) $output .= "\n\t\t\t\t<image_720>".$object_json->images[2]->source."</image_720>";
						 if(isset($object_json->images[3]->source)) $output .= "\n\t\t\t\t<image_600>".$object_json->images[3]->source."</image_600>";
						 if(isset($object_json->images[4]->source)) $output .= "\n\t\t\t\t<image_480>".$object_json->images[4]->source."</image_480>";
						 if(isset($object_json->images[5]->source)) $output .= "\n\t\t\t\t<image_320>".$object_json->images[5]->source."</image_320>";
						 if(isset($object_json->images[8]->source)) $output .= "\n\t\t\t\t<image_130>".$object_json->images[8]->source."</image_130>";
					$output .= "\n\t\t\t</images>";
					
					$output .= "\n\t\t\t<event>";
						if($type=='event'){
							if(isset($event_json->name)){
								$output .= "\n\t\t\t\t<name>".$this->cdata($event_json->name)."</name>";
								if(isset($event_json->description)) $output .= "\n\t\t\t\t<description>".$this->cdata($event_json->description)."</description>";
								if(isset($event_json->start_time)) $output .= "\n\t\t\t\t<start_time>".$event_json->start_time."</start_time>";
								if(isset($event_json->end_time)) $output .= "\n\t\t\t\t<end_time>".$event_json->end_time."</end_time>";
								if(isset($event_json->location)) $output .= "\n\t\t\t\t<location>".$this->cdata($event_json->location)."</location>";
							}else{
								if(isset($p->name)) $output .= "\n\t\t\t\t<name>".$this->cdata($p->name)."</name>";
								if(isset($p->description)) $output .= "\n\t\t\t\t<description>".$this->cdata($p->description)."</description>";
							}
						}
						
						// if(isset($event_json->privacy)) $output .= "\n\t\t\t\t<privacy>".$event_json->privacy."</privacy>";
					$output .= "\n\t\t\t</event>";
					
					
					$output .= "\n\t\t\t<application>";
						$output .= "\n\t\t\t\t<name>"; if(isset($p->application->name)) $output .= $this->cdata($p->application->name); $output .='</name>';
						$output .= "\n\t\t\t\t<id>"; if(isset($p->application->id)) $output .= $p->application->id; $output .='</id>';
					$output .= "\n\t\t\t</application>";
					$output .= "\n\t\t\t<comments>";
					
						if(isset($p->comments->count) && intval($p->comments->count)>0){
							for($c=0;$c<count($p->comments->data);$c++){
								$output .= "\n\t\t\t\t<comment>";
								$output .= "\n\t\t\t\t\t<author>";
									$output .= "\n\t\t\t\t\t\t<id>".$p->comments->data[$c]->from->id."</id>";
									$output .= "\n\t\t\t\t\t\t<name>".$this->cdata($p->comments->data[$c]->from->name)."</name>";
									$output .= "\n\t\t\t\t\t\t<link>http://www.facebook.com/profile.php?id=".$p->comments->data[$c]->from->id."</link>";
									$output .= "\n\t\t\t\t\t\t<avatar>https://graph.facebook.com/".$p->comments->data[$c]->from->id."/picture</avatar>";
								$output .= "\n\t\t\t\t\t</author>";
								$output .= "\n\t\t\t\t\t<content>".$this->cdata($p->comments->data[$c]->message)."</content>";
								$output .= "\n\t\t\t\t\t<created>".$p->comments->data[$c]->created_time."</created>";
								$output .= "\n\t\t\t\t</comment>";
							}
						}
					
					$output .= "\n\t\t\t</comments>";
				$output .= "\n\t\t</facebook>";
			$output .= "\n\t</extras>";
			$output .= "\n</item>\n";	
			

		}

		$output = "<?xml version='1.0'?>\n<nss>\n".$output."</nss>";
		
		$this->saveFile('facebook_'.$id.'.xml',$output);
		$this->saveChannelTestToFile('facebook',$id,'success');
		return 'success';
	}
	
	
/**************************************************************************
 * Read Twitter Channel
 * TODO: ID hinzufügen
 **************************************************************************/
 
 	function readTwitterChannel($id,$limit=false){
		
		if(!$limit) $limit = $this->get('default_limit');
		$tweet = @simplexml_load_file("http://api.twitter.com/1/statuses/user_timeline.xml?include_rts=true&screen_name=".$id."&count=".$limit);
		
		if(!isset($tweet[0]->status)){
			$tweet = @simplexml_load_file("http://api.twitter.com/1/statuses/user_timeline.xml?include_rts=true&id=".$id."&count=".$limit);
		}
		
		if(!isset($tweet[0]->status)){
			return 'error';
		}
		
		$output = '';
		
		foreach($tweet as $t){	
			if($this->get('https')){	$avatar = $this->cdata("https://api.twitter.com/1/users/profile_image?screen_name=".strtolower($t->user->screen_name)."&size=normal");}
			else{						$avatar = $this->cdata($t->user->profile_image_url);}		
			$output .= "\t<item>
			<channel>twitter</channel>
			<id>".$t->id."</id>
			<created>".$this->transformDate($t->created_at,'c')."</created>
			<updated>false</updated>
			<content>".$this->cdata($t->text)."</content>
			<author>
				<id>".$t->user->id."</id>
				<name>".$t->user->name."</name>
				<link>".$this->cdata("https://twitter.com/".$t->user->screen_name)."</link>
				<avatar>".$avatar."</avatar>
			<location>
				<adress></adress>
				<latitude></latitude>
				<longitude></longitude>
			</location>
			</author>
			<extra>
				<twitter>
					<retweeted>".$t->retweeted."</retweeted>
					<count>
						<retweet_count>".$t->retweet_count."</retweet_count>
						<friends_count>".$t->user->friends_count."</friends_count>
						<followers_count>".$t->user->followers_count."</followers_count>
						<statuses_count>".$t->user->statuses_count."</statuses_count>
					</count>
					<lang>".$t->user->lang."</lang>
				</twitter>
			</extra>
		</item>";
		}
				
		$output = "<?xml version='1.0'?>\n<nss>\n".$output."</nss>";
	
		$this->saveFile('twitter_'.$id.'.xml',$output);
		$this->saveChannelTestToFile('twitter',$id,'success');
		return 'success';
			
	}
	
/**************************************************************************
 * Read NSS Channel
 * @since 1.0
 **************************************************************************/
 
 	function readChannel($url){
		$xml = @file_get_contents($url);
		if(!$xml) return 'error';
		$name = substr($url,strrpos($url,"/")+1);
		$name = urlencode($name);
		$this->saveFile('nss_'.$name.'.xml',$xml);
		$this->saveChannelTestToFile('nss',$name,'success');
		return 'success';
	}
	
	
/**************************************************************************
 * Test NSS
 * @since 1.1
 **************************************************************************/
 
 	function testNSS(){
		$l = @file_get_contents(NSS_CONFIG_CODE);
		if($l!=md5('nss'.$this->get('license_key').$this->get('license_version').$this->get('license_status'))){
			@unlink(NSS_CONFIG_LICENSE);
			@unlink(NSS_CONFIG_CODE);
			$fh = fopen(NSS_CONFIG_ERROR, 'w');	
			fwrite($fh, "<?php $"."nss->set('error',2); ?>");
			fclose($fh);
			return false;
		}else{
			return true;	
		}
	}

	
 /**************************************************************************
 * Template Output: Optionale Ausgabe JS oder CSS
 * @since 1.1
 **************************************************************************/
 
 	function includeFile($file){
		$ext = substr($file,strrpos($file,'.')+1);
		switch($ext){
			case 'js':
				echo "<script type='text/javascript' src='".$this->getBaseURL().NSS_INCLUDES.$file."'></script>\n";
			break;
			case 'css':
				echo "<link href='".$this->getBaseURL().NSS_INCLUDES.$file."' type='text/css' rel='stylesheet' />\n";
			break;
		}	
	}

/**************************************************************************
 * Template Output: Ausgabe aller Theme-Files
 * @since 1.1
 **************************************************************************/
 
	function theme($theme=false){
		if(empty($theme)) $theme = $this->get('theme');
		else $this->set('theme',$theme);
		
		$plugins = $this->getThemeMeta('Plugins:',$theme);
		$masonry = strpos($plugins,'masonry') ? 'true' : 'false';
		$fb_app_id = $this->get('fb_app_id');
		$intro_fadein = $this->get('intro_fadein');
		
		echo "<script type='text/javascript' src='".$this->getBaseURL().NSS_CORE."jquery.neosmart.stream.js'></script>\n";
		echo "<link href='".$this->getBaseURL().NSS_CONTENT.'themes/'.$theme."/style.css' type='text/css' rel='stylesheet' />\n";
		echo "<script type='text/javascript'>(function(window){window.onload=function(){jQuery(function(){jQuery('#nss').neosmartStream({introFadeIn:".$intro_fadein.",masonry:".$masonry.",cache_time:".$this->get('cache_time').",theme:'".$theme."',path:'".$this->getBaseURL()."'})})}})(window);</script>\n";
	}
	
	function themeWordPress($theme=false){
		if(empty($theme)) $theme = $this->get('theme');
		else $this->set('theme',$theme);
		
		$plugins = $this->getThemeMeta('Plugins:',$theme);
		$masonry = strpos($plugins,'masonry') ? 'true' : 'false';		

		wp_enqueue_style('neosmart-stream',NSS_WP_URL.'nss-content/themes/'.$theme.'/style.css',array(),false,'screen');
		wp_enqueue_script('jquery');
		if($masonry) wp_enqueue_script('jquery-masonry',NSS_WP_URL.'nss-includes/jquery-masonry.js',array('jquery'),'2.1.6');
		wp_enqueue_script('neosmart-stream',NSS_WP_URL.'nss-core/jquery.neosmart.stream.js',array('jquery'),'1.1');
		
		
		return "<script type='text/javascript'>(function(window){window.onload=function(){jQuery(function(){jQuery('#nss').neosmartStream({masonry:".$masonry.",cache_time:".$this->get('cache_time').",theme:'".$theme."',path:'".$this->getBaseURL()."'})})}})(window);</script>\n";
	}

	
/**************************************************************************
 * Überprüfung auf Updates
 * @since 1.2
 **************************************************************************/
 	
	public function checkForUpdate(){

		$file = NSS_ABSPATH."nss-content/cache/latest_version.txt";
		$ft = @filemtime($file);
		$day = 60*60*24*1;
		
		if(!$ft || $ft+$day<time()){
			$license = $this->apiRequest('latest_version');
			
			if($license->type=='latest_version'){
				$version = $license[0]->message;
				$fh = fopen($file, 'w');
				fwrite($fh, $version);
				fclose($fh);
				return true;
			}elseif($license->type=='error' && $license->status==5){
				$this->logError(5);
				return false;
			}else{
				//Server error	
				return false;
			}
		}
		return true;
	}

/**************************************************************************
 * API-Kommunikation
 * @since 1.2
 * @update 1.3.1: readData verwenden
 **************************************************************************/
 
	public function apiRequest($action,$key=false){
		if(!$key) $key = $this->get('license_key');
		$query = NSS_API_URL.'index.php?key='.$key
			.'&site='.$_SERVER['HTTP_HOST'].'&action='.$action.'&https='.$this->get('https')
			.'&return_url='.urlencode($this->getBaseURL()).'&request_url='.urlencode($_SERVER['REQUEST_URI']);
		$response = $this->readData($query);
		if(!$response||$response=='error'){
			$response = "<data><type>error</type><status>33</status><message>PHP cURL does not work properly (empty response). Please check your server configuration.</message></data>";
		}
		$response = new SimpleXMLElement($response);
		return $response;
	}

/**************************************************************************
 * Error Log
 * @since 1.2
 **************************************************************************/
 
	public function logError($errorCode){
		$fh = fopen(NSS_CONFIG_ERROR, 'w');	
		fwrite($fh, "<?php $"."nss->set('error',".$errorCode."); ?>");
		fclose($fh);
		switch($errorCode){
			case 5:
				@unlink(NSS_CONFIG_LICENSE);
				@unlink(NSS_CONFIG_CODE);	
			break;	
		}
	}
	
/**************************************************************************
 * Include JS and CSS
 * @since 1.0
 * @deprecated 1.1 (new functions: includeFile + theme)
 **************************************************************************/
 
 	function getHead($echo=true,$jquery=true){
		$data = "\n<link href='".$this->getBaseURL()."nss-content/themes/".$this->get('theme')."/style.css' type='text/css' rel='stylesheet' />";
		if($jquery) $data .= "\n<script type='text/javascript' src='".$this->getBaseURL()."nss-includes/jquery.js'></script>";
		$data .= "\n<script type='text/javascript' src='".$this->getBaseURL()."nss-core/jquery.neosmart.stream.js'></script>";
		$data .= "\n<script type='text/javascript'>\$(function(){\$('#nss').neosmartStream({path:'".$this->getBaseURL()."'});});</script>\n";
		
		if($echo) echo $data;
		else return $data;
	}


/**************************************************************************
 * Little Helpers ...
 * @since 1.0
 **************************************************************************/
 
	function transformDate($date,$format='auto') {
		$time = strtotime($date);
		if($format=='auto') $format = $this->get('date_time_format');
		if($format=='iso'){
			return $date;
		}else{
			return date($format, $time);
		}
	}
	
	function autoLink($string) {
		$pattern = "/((((http[s]?:\/\/)|(ftp[s]?:\/\/)|(www\.))([a-z][-a-z0-9]*\.)?)[-a-z0-9]+\.[a-z]+(\/[a-z0-9._\/~#&=;%+?-]*)*)/is";
		$string = preg_replace($pattern, " <a href='$1' target='_blank'>$1</a>", $string);
		$string = preg_replace("/href='www/", "href='http://www", $string);
		return $string;
	}
	
	function escapeString($str){
		return htmlspecialchars($str);
	}
	
	function cdata($string){
		if(strlen($string)==0) return '';
		$string = $this->escapeString($string);
		$nl = array('/\r\n/',"/\n/", "/\r/");
		$re = '<br/>';
		return "<![CDATA[".preg_replace($nl,$re,$string)."]]>";
	}
 
}
?>