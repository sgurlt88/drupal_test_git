<?php
	$current_page = 'overview';
	include "header.inc.php";		
?>	
	<h2>Overview</h2>
	<form class="nss-admin-form" method="post">
		<input type="hidden" name="action" value="update_base_url">
		
		<div class="row">
			<label>Software</label>
			<span class="info"><?php echo $license_name; ?></span>
		</div>
		<div class="row">
			<label>Version</label>
			<span class="info"><?php echo $nss->get('version'); ?></span>
		</div>
		<div class='row hl'>
			<label>Current theme</label>
			<div class="field-area">
				<span class="info">
					<a href="theme-preview.php?theme=<?php echo $theme; ?>" class="theme-preview">
						<img src="../nss-content/themes/<?php echo $theme; ?>/preview.jpg" width="240" height="240" alt="<?php echo $theme; ?>" />
					</a>
				</span>
			</div>
		</div>
		<?php if($channel_count>0){ ?>
			<div class="row hl">
				<label>Last cache refresh</label><span class="info"><?php echo $nss->getLastUpdate(); ?></span>
			</div>
			<div class="row ">
				<label>Channels</label>
				<div class="field-area">
					<table cellpadding="0" cellspacing="0" class="inline-table" width="100%">
						<tr>
							<th>Username (ID)</th>
							<th>Status</th>
							<th>Access token expires in</th>
						</tr>
						<?php foreach ($nss->get('channel_list') as $channelArray => $channel){
								$type = $channel['type'];
						?>
							<tr>
								<td class="channel-<?php echo $type; ?>">
									<?php echo $channel['id']; ?>
								</td>
								<td><?php echo getChannelStatus($type,$channel['id']); ?></td>
								<td width="270"><?php if($type=='facebook'){ ?>
									<input type="hidden" value="<?php echo $channel['access_token_expires']; ?>" name="access_token_expires">
									<input type="hidden" value="<?php echo $channel['access_token']; ?>" name="access_token">
									<span class="expires_in_real_time"></span>
									<?php } else { ?>
									<i style="color:#999;font-style:italic;">Access token is not required</i>
									<?php } ?>
								</td>
							</tr>
						<?php } ?>
					</table>
				</div>
			</div>
			
		<?php } ?>

		
		<div class="row hl">
			<label>Current site</label>
			<div class="field-area"><span class="info"><?php echo $_SERVER['HTTP_HOST'];  ?></span></div>
		</div>
		<div class='row'>
			<label>Software url</label>
			<div class="field-area">
				<?php if($nss_root==''){ ?>
					<span class="error">Software url is missing! <input type="submit" class="submit" value="Auto-Fill"></span>
				<?php } elseif($nss_root!=getNssRoot()){ 
				
					echo $nss_root.' <br>CUT<br>';
					echo getNssRoot();
				?>
					<span class="error">URL conflict! <input type="submit" class="submit" value="Fix that issue"></span>
				<?php } else { ?>
					<span class="info"><?php echo $nss_root; ?></span>
				<?php } ?>
			</div>
		</div>
		
		
	</form>
<?php
	include "footer.inc.php";
?>