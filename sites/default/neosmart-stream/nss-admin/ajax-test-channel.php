<?php
	
	include "../setup.php";
	include "functions.php";
	
	if(!is_logged_in($nss)){ die('error logged_out');}

	$channel = array_key_exists('channel',$_REQUEST) ? $_REQUEST['channel'] : '';
	$url = array_key_exists('url',$_REQUEST) ? $_REQUEST['url'] : '';
	$id = array_key_exists('id',$_REQUEST) ? $_REQUEST['id'] : '';
	$token = array_key_exists('token',$_REQUEST) ? $_REQUEST['token'] : '';
	$show_all = array_key_exists('show_all',$_REQUEST) && $_REQUEST['show_all']=='true';
	$limit = array_key_exists('limit',$_REQUEST) ? $_REQUEST['limit'] : 1;

	switch($channel){
		case 'facebook': /*****************************************************************************/
			$binding = $show_all ? 'feed' : 'posts';
			$graph = "https://graph.facebook.com/".$id."/".$binding."?limit=".$limit."&access_token=".$token;
			//echo $graph;
			$data = $nss->readData($graph);
			
			if($data == 'error') saveChannelTestToFile('facebook',$id,'<a href="'.$graph.'" target="_blank">API response</a>');
			$fbdata = @json_decode($data);
			if(isset($fbdata->{'error'})) saveChannelTestToFile('facebook',$id,'<a href="'.$graph.'" target="_blank">API response</a>');
			//Keine Einträge
			if(count($fbdata->data)===0) saveChannelTestToFile('facebook',$id,'No data - <a href="'.$graph.'" target="_blank">API response</a> - Try to increase limit!');
			saveChannelTestToFile('facebook',$id,'success');
			
		break;
		case 'twitter': /*****************************************************************************/
			$tweet = @simplexml_load_file("http://api.twitter.com/1/statuses/user_timeline.xml?include_rts=true&screen_name=".$id."&count=1");
			if($tweet!==false && count($tweet)>0 && isset($tweet->status) && $tweet->status->user->screen_name == $id){
				saveChannelTestToFile('twitter',$id,'success');
			}

			$tweet = @simplexml_load_file("http://api.twitter.com/1/statuses/user_timeline.xml?include_rts=true&id=".$id."&count=1");
			if($tweet!==false && count($tweet)>0 && isset($tweet->status) && $tweet->status->user->screen_name == $id){
				saveChannelTestToFile('twitter',$id,'success');
			}
			saveChannelTestToFile('twitter',$id,'<a href="http://api.twitter.com/1/statuses/user_timeline.xml?include_rts=true&id='.$id.'&count=1" target="_blank">API response</a>');
			
		break;
		case 'nss': /*****************************************************************************/
			
			$nss_file = @simplexml_load_file($url);
			$id = substr($url,strrpos($url,"/")+1);
			$id = urlencode($id);
			if(isset($nss_file[0]->item[0]->channel)){
				saveChannelTestToFile('nss',$id ,'success');
			}else{
				saveChannelTestToFile('nss',$id ,'error');
			}
			
		break;	
	}
	
	function saveChannelTestToFile($type,$id,$status){
		global $nss;
		$data = $nss->saveChannelTestToFile($type,$id,$status);
		
		die($data);
	}
	
?>