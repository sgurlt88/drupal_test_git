<?php

function admin_pmautofill(){
 $options1 = array('0' => '--none--'); 
 $optionsPS1 = array('0' => '--none--'); 
 $options2 = array('0' => '--none--'); 
 $optionsPS2 = array('0' => '--none--'); 
 $options3 = array('0' => '--none--'); 
 $optionsPS3 = array('0' => '--none--'); 
 $options4 = array('0' => '--none--'); 
 $optionsPS4 = array('0' => '--none--'); 
 $options5 = array('0' => '--none--'); 
 $optionsPS5 = array('0' => '--none--'); 
 $options6 = array('0' => '--none--'); 
 $optionsPS6 = array('0' => '--none--'); 
 $options7 = array('0' => '--none--'); 
 $optionsPS7 = array('0' => '--none--'); 
 $options8 = array('0' => '--none--'); 
 $optionsPS8 = array('0' => '--none--'); 
 $options9 = array('0' => '--none--'); 
 $optionsPS9 = array('0' => '--none--'); 
 $options10 = array('0' => '--none--'); 
 $optionsPS10 = array('0' => '--none--'); 
 
 $hessen = variable_get('pressestelle_hessen_de');
 $stkhessen = variable_get('pressestelle_stk_hessen_de');
 $wirtschafthessen = variable_get('pressestelle_wirtschaft_hessen_de');
 $kultusministeriumhessen = variable_get('pressestelle_kultusministerium_hessen_de');
 $hsmhessen = variable_get('pressestelle_hsm_hessen_de');
 $hmwkhessen = variable_get('pressestelle_hmwk_hessen_de');
 $hmuelvhessen = variable_get('pressestelle_hmuelv_hessen_de');
 $hmdjhessen = variable_get('pressestelle_hmdj_hessen_de');
 $hmdishessen = variable_get('pressestelle_hmdis_hessen_de');
 $hmdfhessen = variable_get('pressestelle_hmdf_hessen_de');
 
 
 
 if(!$hessen){
 variable_set('pressestelle_hessen_de', '0');
 }
 if(!$stkhessen){
 variable_set('pressestelle_stk_hessen_de', '0');
 }
 if(!$wirtschafthessen){
 variable_set('pressestelle_wirtschaft_hessen_de', '0');
 }
 if(!$kultusministeriumhessen){
 variable_set('pressestelle_kultusministerium_hessen_de', '0');
 }
 if(!$hsmhessen){
 variable_set('pressestelle_hsm_hessen_de', '0');
 }
 if(!$hmwkhessen){
 variable_set('pressestelle_hmwk_hessen_de', '0');
 }
 if(!$hmuelvhessen){
 variable_set('pressestelle_hmuelv_hessen_de', '0');
 }
 if(!$hmdjhessen){
 variable_set('pressestelle_hmdj_hessen_de', '0');
 }
 if(!$hmdishessen){
 variable_set('pressestelle_hmdis_hessen_de', '0');
 }
 if(!$hmdfhessen){
 variable_set('pressestelle_hmdf_hessen_de', '0');
 }
 
$query = db_select('node', 'n');
$db_or = db_or();
$db_or->condition('type', 'pressestelle');
$db_or->condition('type', 'pressesprecher');

$query->condition($db_or);
   
$query->join('node_access', 'na', 'n.nid = na.nid');
$query->join('domain', 'd', 'na.gid = d.domain_id'); //JOIN node with users

   
$query->groupBy('na.nid');//GROUP BY user ID

   
$query->fields('n',array('title','nid','type'))//SELECT the fields from node
    ->fields('d',array('subdomain'))//SELECT the fields from user
    ->orderBy('subdomain', 'DESC');//ORDER BY created//LIMIT to 2 records

   
$result = $query->execute();

    while(
$record = $result->fetchAssoc()) {  
 if($record['subdomain'] == 'www.hessen.de'){

	if($record['type'] == 'pressestelle'){
	  $options1[$record['nid']] = $record['title']. '  (' .$record['subdomain']. ') ' ; 
	}
	else{
	
	  $optionsPS1[$record['nid']] = $record['title']. '  (' .$record['subdomain']. ') ' ; 
	}
	}
if($record['subdomain'] == 'stk.hessen.de'){

	if($record['type'] == 'pressestelle'){
	  $options2[$record['nid']] = $record['title']. '  (' .$record['subdomain']. ') ' ; 
	}
	else{
	
	  $optionsPS2[$record['nid']] = $record['title']. '  (' .$record['subdomain']. ') ' ; 
	}
	}
if($record['subdomain'] == 'wirtschaft.hessen.de'){

	if($record['type'] == 'pressestelle'){
	  $options3[$record['nid']] = $record['title']. '  (' .$record['subdomain']. ') ' ; 
	}
	else{
	
	  $optionsPS3[$record['nid']] = $record['title']. '  (' .$record['subdomain']. ') ' ; 
	}
	}
if($record['subdomain'] == 'kultusministerium.hessen.de'){

	if($record['type'] == 'pressestelle'){
	  $options4[$record['nid']] = $record['title']. '  (' .$record['subdomain']. ') ' ; 
	}
	else{
	
	  $optionsPS4[$record['nid']] = $record['title']. '  (' .$record['subdomain']. ') ' ; 
	}
	}
if($record['subdomain'] == 'hsm.hessen.de'){
	
	if($record['type'] == 'pressestelle'){
	  $options5[$record['nid']] = $record['title']. '  (' .$record['subdomain']. ') ' ; 
	}
	else{
	
	  $optionsPS5[$record['nid']] = $record['title']. '  (' .$record['subdomain']. ') ' ; 
	}
	}
if($record['subdomain'] == 'hmwk.hessen.de'){
	
	if($record['type'] == 'pressestelle'){
	  $options6[$record['nid']] = $record['title']. '  (' .$record['subdomain']. ') ' ; 
	}
	else{
	
	  $optionsPS6[$record['nid']] = $record['title']. '  (' .$record['subdomain']. ') ' ; 
	}
	}
if($record['subdomain'] == 'hmuelv.hessen.de'){
	
	if($record['type'] == 'pressestelle'){
	  $options7[$record['nid']] = $record['title']. '  (' .$record['subdomain']. ') ' ; 
	}
	else{
	
	  $optionsPS7[$record['nid']] = $record['title']. '  (' .$record['subdomain']. ') ' ; 
	}
	}
if($record['subdomain'] == 'hmdj.hessen.de'){
	
	if($record['type'] == 'pressestelle'){
	  $options8[$record['nid']] = $record['title']. '  (' .$record['subdomain']. ') ' ; 
	}
	else{
	
	  $optionsPS8[$record['nid']] = $record['title']. '  (' .$record['subdomain']. ') ' ; 
	}
	}
if($record['subdomain'] == 'hmdis.hessen.de'){
	
	if($record['type'] == 'pressestelle'){
	  $options9[$record['nid']] = $record['title']. '  (' .$record['subdomain']. ') ' ; 
	}
	else{
	
	  $optionsPS9[$record['nid']] = $record['title']. '  (' .$record['subdomain']. ') ' ; 
	}
	}
if($record['subdomain'] == 'hmdf.hessen.de'){

	if($record['type'] == 'pressestelle'){
	  $options10[$record['nid']] = $record['title']. '  (' .$record['subdomain']. ') ' ; 
	}
	else{
	
	  $optionsPS10[$record['nid']] = $record['title']. '  (' .$record['subdomain']. ') ' ; 
	}
	}
    }
$form['pmautofill_hessen'] = array(
'#type' => 'fieldset',
'#title' => 'Hessen.de',
'#collapsible' => TRUE, 
'#collapsed' => TRUE,
);
$form['pmautofill_hessen']['pressestelle_hessen_de'] = array(
'#type' => 'select',
'#title' => 'Default Pressestelle hessen.de',
'#options' => $options1,
'#default_value' => variable_get('pressestelle_hessen_de')
);
$form['pmautofill_hessen']['pressesprecher_hessen_de'] = array(
'#type' => 'select',
'#title' => 'Default Pressesprecher hessen.de',
'#options' => $optionsPS1,
'#default_value' => variable_get('pressesprecher_hessen_de')
);
$form['pmautofill_stk'] = array(
'#type' => 'fieldset',
'#title' => 'STK.Hessen.de',
'#collapsible' => TRUE, 
'#collapsed' => TRUE,
);
$form['pmautofill_stk']['pressestelle_stk_hessen_de'] = array(
'#type' => 'select',
'#title' => 'Default Pressestelle stk.hessen.de',
'#options' => $options2,
'#default_value' => variable_get('pressestelle_stk_hessen_de')
);
$form['pmautofill_stk']['pressesprecher_stk_hessen_de'] = array(
'#type' => 'select',
'#title' => 'Default Pressesprecher stk.hessen.de',
'#options' => $optionsPS2,
'#default_value' => variable_get('pressesprecher_stk_hessen_de')
);
$form['pmautofill_hmwvl'] = array(
'#type' => 'fieldset',
'#title' => 'HMWVL.Hessen.de',
'#collapsible' => TRUE, 
'#collapsed' => TRUE,
);
$form['pmautofill_hmwvl']['pressestelle_wirtschaft_hessen_de'] = array(
'#type' => 'select',
'#title' => 'Default Pressestelle wirtschaft.hessen.de',
'#options' => $options3,
'#default_value' => variable_get('pressestelle_wirtschaft_hessen_de')
);
$form['pmautofill_hmwvl']['pressesprecher_wirtschaft_hessen_de'] = array(
'#type' => 'select',
'#title' => 'Default Pressesprecher wirtschaft.hessen.de',
'#options' => $optionsPS3,
'#default_value' => variable_get('pressesprecher_wirtschaft_hessen_de')
);
$form['pmautofill_hkm'] = array(
'#type' => 'fieldset',
'#title' => 'HKM.hessen.de',
'#collapsible' => TRUE, 
'#collapsed' => TRUE,
);
$form['pmautofill_hkm']['pressestelle_kultusministerium_hessen_de'] = array(
'#type' => 'select',
'#title' => 'Default Pressestelle kultusministerium.hessen.de',
'#options' => $options4,
'#default_value' => variable_get('pressestelle_kultusministerium_hessen_de')
);
$form['pmautofill_hkm']['pressesprecher_kultusministerium_hessen_de'] = array(
'#type' => 'select',
'#title' => 'Default Pressesprecher wirtschaft.hessen.de',
'#options' => $optionsPS4,
'#default_value' => variable_get('pressesprecher_kultusministerium_hessen_de')
);
$form['pmautofill_hsm'] = array(
'#type' => 'fieldset',
'#title' => 'HSM.hessen.de',
'#collapsible' => TRUE, 
'#collapsed' => TRUE,
);
$form['pmautofill_hsm']['pressestelle_hsm_hessen_de'] = array(
'#type' => 'select',
'#title' => 'Default Pressestelle hsm.hessen.de',
'#options' => $options5,
'#default_value' => variable_get('pressestelle_hsm_hessen_de')
);
$form['pmautofill_hsm']['pressesprecher_hsm_hessen_de'] = array(
'#type' => 'select',
'#title' => 'Default Pressesprecher wirtschaft.hessen.de',
'#options' => $optionsPS5,
'#default_value' => variable_get('pressesprecher_hsm_hessen_de')
);
$form['pmautofill_hmwk'] = array(
'#type' => 'fieldset',
'#title' => 'HMWK.hessen.de',
'#collapsible' => TRUE, 
'#collapsed' => TRUE,
);
$form['pmautofill_hmwk']['pressestelle_hmwk_hessen_de'] = array(
'#type' => 'select',
'#title' => 'Default Pressestelle hmwk.hessen.de',
'#options' => $options6,
'#default_value' => variable_get('pressestelle_hmwk_hessen_de')
);
$form['pmautofill_hmwk']['pressesprecher_hmwk_hessen_de'] = array(
'#type' => 'select',
'#title' => 'Default Pressesprecher wirtschaft.hessen.de',
'#options' => $optionsPS6,
'#default_value' => variable_get('pressesprecher_hmwk_hessen_de')
);
$form['pmautofill_hmuelv'] = array(
'#type' => 'fieldset',
'#title' => 'HMUELV.hessen.de',
'#collapsible' => TRUE, 
'#collapsed' => TRUE,
);
$form['pmautofill_hmuelv']['pressestelle_hmuelv_hessen_de'] = array(
'#type' => 'select',
'#title' => 'Default Pressestelle  hmuelv.hessen.de',
'#options' => $options7,
'#default_value' => variable_get('pressestelle_hmuelv_hessen_de')
);
$form['pmautofill_hmuelv']['pressesprecher_hmuelv_hessen_de'] = array(
'#type' => 'select',
'#title' => 'Default Pressesprecher wirtschaft.hessen.de',
'#options' => $optionsPS7,
'#default_value' => variable_get('pressesprecher_hmuelv_hessen_de')
);
$form['pmautofill_hmdj'] = array(
'#type' => 'fieldset',
'#title' => 'HMDJ.hessen.de',
'#collapsible' => TRUE, 
'#collapsed' => TRUE,
);
$form['pmautofill_hmdj']['pressestelle_hmdj_hessen_de'] = array(
'#type' => 'select',
'#title' => 'Default Pressestelle hmdj.hessen.de',
'#options' => $options8,
'#default_value' => variable_get('pressestelle_hmdj_hessen_de')
);
$form['pmautofill_hmdj']['pressesprecher_hmdj_hessen_de'] = array(
'#type' => 'select',
'#title' => 'Default Pressesprecher wirtschaft.hessen.de',
'#options' => $optionsPS8,
'#default_value' => variable_get('pressesprecher_hmdj_hessen_de')
);
$form['pmautofill_hmdis'] = array(
'#type' => 'fieldset',
'#title' => 'HMDIS.hessen.de',
'#collapsible' => TRUE, 
'#collapsed' => TRUE,
);
$form['pmautofill_hmdis']['pressestelle_hmdis_hessen_de'] = array(
'#type' => 'select',
'#title' => 'Default Pressestelle hmdis.hessen.de',
'#options' => $options9,
'#default_value' => variable_get('pressestelle_hmdis_hessen_de')
);
$form['pmautofill_hmdis']['pressesprecher_hmdis_hessen_de'] = array(
'#type' => 'select',
'#title' => 'Default Pressesprecher wirtschaft.hessen.de',
'#options' => $optionsPS9,
'#default_value' => variable_get('pressesprecher_hmdis_hessen_de')
);
$form['pmautofill_hmdf'] = array(
'#type' => 'fieldset',
'#title' => 'HMDF.hessen.de',
'#collapsible' => TRUE, 
'#collapsed' => TRUE,
);
$form['pmautofill_hmdf']['pressestelle_hmdf_hessen_de'] = array(
'#type' => 'select',
'#title' => 'Default Pressestelle hmdf.hessen.de',
'#options' => $options10,
'#default_value' => variable_get('pressestelle_hmdf_hessen_de')
);
$form['pmautofill_hmdf']['pressesprecher_hmdf_hessen_de'] = array(
'#type' => 'select',
'#title' => 'Default Pressesprecher wirtschaft.hessen.de',
'#options' => $optionsPS10,
'#default_value' => variable_get('pressesprecher_hmdf_hessen_de')
);

$form['pmautofill']['submit'] = array(
'#type' => 'submit',
'#value' => 'Speichern'
);

return $form;
}


function admin_pmautofill_submit($form){
 variable_set('pressestelle_hessen_de', $form['pmautofill_hessen']['pressestelle_hessen_de']['#value']);
 variable_set('pressesprecher_hessen_de', $form['pmautofill_hessen']['pressesprecher_hessen_de']['#value']);
 variable_set('pressestelle_stk_hessen_de', $form['pmautofill_stk']['pressestelle_stk_hessen_de']['#value']);
 variable_set('pressesprecher_stk_hessen_de', $form['pmautofill_stk']['pressesprecher_stk_hessen_de']['#value']);
 variable_set('pressestelle_wirtschaft_hessen_de', $form['pmautofill_hmwvl']['pressestelle_wirtschaft_hessen_de']['#value']);
 variable_set('pressesprecher_wirtschaft_hessen_de', $form['pmautofill_hmwvl']['pressesprecher_wirtschaft_hessen_de']['#value']);
 variable_set('pressestelle_kultusministerium_hessen_de', $form['pmautofill_hkm']['pressestelle_kultusministerium_hessen_de']['#value']);
 variable_set('pressesprecher_kultusministerium_hessen_de', $form['pmautofill_hkm']['pressesprecher_kultusministerium_hessen_de']['#value']);
 variable_set('pressestelle_hsm_hessen_de', $form['pmautofill_hsm']['pressestelle_hsm_hessen_de']['#value']);
 variable_set('pressesprecher_hsm_hessen_de', $form['pmautofill_hsm']['pressesprecher_hsm_hessen_de']['#value']);
 variable_set('pressestelle_hmwk_hessen_de', $form['pmautofill_hmwk']['pressestelle_hmwk_hessen_de']['#value']);
 variable_set('pressesprecher_hmwk_hessen_de', $form['pmautofill_hmwk']['pressesprecher_hmwk_hessen_de']['#value']);
 variable_set('pressestelle_hmuelv_hessen_de', $form['pmautofill_hmuelv']['pressestelle_hmuelv_hessen_de']['#value']);
 variable_set('pressesprecher_hmuelv_hessen_de', $form['pmautofill_hmuelv']['pressesprecher_hmuelv_hessen_de']['#value']);
 variable_set('pressestelle_hmdj_hessen_de', $form['pmautofill_hmdj']['pressestelle_hmdj_hessen_de']['#value']);
 variable_set('pressesprecher_hmdj_hessen_de', $form['pmautofill_hmdj']['pressesprecher_hmdj_hessen_de']['#value']);
 variable_set('pressestelle_hmdis_hessen_de', $form['pmautofill_hmdis']['pressestelle_hmdis_hessen_de']['#value']);
 variable_set('pressesprecher_hmdis_hessen_de', $form['pmautofill_hmdis']['pressesprecher_hmdis_hessen_de']['#value']);
 variable_set('pressestelle_hmdf_hessen_de', $form['pmautofill_hmdf']['pressestelle_hmdf_hessen_de']['#value']);
 variable_set('pressesprecher_hmdf_hessen_de', $form['pmautofill_hmdf']['pressesprecher_hmdf_hessen_de']['#value']);
 drupal_set_message('Einstellungen wurden &uuml;bernommen.'); 
}