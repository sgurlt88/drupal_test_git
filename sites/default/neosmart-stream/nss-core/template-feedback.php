<?php

$style = $this->get('feedback_header')==true ? 'display:block' : 'display:none';
$feedback .= '<div class="nss-feedback-root" style="'.$style.'">';

//Feedback Header anzeigen?
if($this->get('feedback_header')==true){	
	if($this->get('feedback_header_fb_post')) $fb_header_post = '  	<span class="nss-feedback-open nss-feedback-button"><span class="nss-normal-label">New Post</span><span class="nss-active-label">Close</span></span>';
	else $fb_header_post = '';
	
	
	for($k=0;$k<count($this->channel_list);$k++){
		$id 		= $this->channel_list[$k]['id'];
		$filename 	= NSS_CONTENT_CACHE.$this->channel_list[$k]['type'].'_'.$this->channel_list[$k]['id'].'_profile.xml';
		$profile 	= simplexml_load_file($filename);
		$fb_type	= 'user';
		if($profile===false){
			$username = $id;
		}else{
			$username = $profile->username;
			if(!empty($profile->extras->type)) $fb_type = $profile->extras->type;
		}
		
		switch($this->channel_list[$k]['type']){
			case 'facebook':
				$fb_send = $this->get('feedback_header_fb_send') ? 'true' : 'false';
				$feedback .= '<div class="nss-feedback-channel nss-feedback-facebook" data-id="'.$id.'">';
				$feedback .= '	<a class="nss-feedback-avatar-link" href="//www.facebook.com/'.$id.'" target="_blank" rel="nofollow"><img class="nss-feedback-avatar" src="https://graph.facebook.com/'.$id.'/picture" alt="'.$username.'" ></a>';	
				$feedback .= '	<span class="nss-feedback-channel-name"><a href="//www.facebook.com/'.$id.'" target="_blank" rel="nofollow">'.$username.'</a></span>';	
				$feedback .= '  <div class="nss-feedback-channel-buttons">';
				$feedback .= $fb_header_post;
				if($fb_type=='page'){
					$feedback .= '  	<div class="fb-like" data-href="http://www.facebook.com/'.$id.'" data-layout="button_count" data-send="'.$fb_send.'" data-width="400" data-show-faces="false"></div>';
				}
				$feedback .= '  </div>';		
				$feedback .= '</div>';
			break;
			case 'twitter':
				$feedback .= '<div class="nss-feedback-channel nss-feedback-twitter" data-id="'.$id.'">';
				$feedback .= '	<a class="nss-feedback-avatar-link" href="https://twitter.com/'.$id.'" target="_blank" rel="nofollow">';
				$feedback .= '		<img class="nss-feedback-avatar" src="https://api.twitter.com/1/users/profile_image?screen_name='.$id.'&size=normal" alt="" >';
				$feedback .= '	</a>';	
				$feedback .= '	<span class="nss-feedback-channel-name"><a href="https://twitter.com/'.$id.'" target="_blank" rel="nofollow">'.$id.'</a></span>';	
				$twitter_data_count = $this->get('feedback_header_twitter_follow')==2 ? 'true' : 'false';
				if($this->get('feedback_header_twitter_follow')>0){
					$feedback .= '  <div class="nss-feedback-channel-buttons">';
					$feedback .= '		<a href="https://twitter.com/'.$id.'" target="_blank" class="twitter-follow-button" data-show-count="'.$twitter_data_count.'" data-lang="en">Follow @'.$id.'</a>';
					$feedback .= '	</div>';		
				}
				$feedback .= '</div>';
			break;
		}
	}
}

$feedback .= "<div class='nss-feedback-root-container'></div>";

$fb_api_lang = $this->get('fb_api_lang');
$fbsdk = <<<EOD
<div id="fb-root"></div>
<script type="text/javascript">			
	(function(d){
     var js, id = 'facebook-jssdk', ref = d.getElementsByTagName('script')[0];
     if (d.getElementById(id)) {return;}
     js = d.createElement('script'); js.id = id; js.async = true;
     js.src = "//connect.facebook.net/$fb_api_lang/all.js#xfbml=1";
     ref.parentNode.insertBefore(js, ref);
   }(document));
</script>
EOD;
$twitter_sdk = '<script>!function(d,s,id){var js,fjs=d.getElementsByTagName(s)[0];if(!d.getElementById(id)){js=d.createElement(s);js.id=id;js.src="https://platform.twitter.com/widgets.js";fjs.parentNode.insertBefore(js,fjs);}}(document,"script","twitter-wjs");</script>';

if($this->get('feedback_header_fb_like')) $feedback .= $fbsdk;
if($this->get('feedback_item_retweet')>0||$this->get('feedback_header_twitter_follow')>0) $feedback .= $twitter_sdk;
$feedback .= "</div>";

?>