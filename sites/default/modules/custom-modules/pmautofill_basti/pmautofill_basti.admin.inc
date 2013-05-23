<?php

function pmautofill_basti_admin_settings() {

$query = db_select('node', 'n');
$query->join('node_access', 'a', 'n.nid = a.nid');
$query->condition('n.type', 'pressesprecher');
$query->condition('a.gid', '2');
$query->fields('n',array('nid','title'));
$result_hessen_pressesprecher = $query->execute()->fetchAllKeyed();

// Query Hessen.de

$query = db_select('node', 'n');
$query->join('node_access', 'a', 'n.nid = a.nid');
$query->condition('n.type', 'pressestelle');
$query->condition('a.gid', '2');
$query->fields('n',array('nid','title'));
$result_hessen = $query->execute()->fetchAllKeyed();

// Query STK.Hessen.de

$query = db_select('node', 'n');
$query->join('node_access', 'a', 'n.nid = a.nid');
$query->condition('n.type', 'pressestelle');
$query->condition('a.gid', '5');
$query->fields('n',array('nid','title'));
$result_stk = $query->execute()->fetchAllKeyed();

// Query HMDI.Hessen.de

$query = db_select('node', 'n');
$query->join('node_access', 'a', 'n.nid = a.nid');
$query->condition('n.type', 'pressestelle');
$query->condition('a.gid', '6');
$query->fields('n',array('nid','title'));
$result_hmdi = $query->execute()->fetchAllKeyed();

// Query HMDF.Hessen.de

$query = db_select('node', 'n');
$query->join('node_access', 'a', 'n.nid = a.nid');
$query->condition('n.type', 'pressestelle');
$query->condition('a.gid', '7');
$query->fields('n',array('nid','title'));
$result_hmdf = $query->execute()->fetchAllKeyed();

// Query HMDJ.Hessen.de

$query = db_select('node', 'n');
$query->join('node_access', 'a', 'n.nid = a.nid');
$query->condition('n.type', 'pressestelle');
$query->condition('a.gid', '8');
$query->fields('n',array('nid','title'));
$result_hmdj = $query->execute()->fetchAllKeyed();

// Query HKM.Hessen.de

$query = db_select('node', 'n');
$query->join('node_access', 'a', 'n.nid = a.nid');
$query->condition('n.type', 'pressestelle');
$query->condition('a.gid', '9');
$query->fields('n',array('nid','title'));
$result_hkm = $query->execute()->fetchAllKeyed();

// Query HMWK.Hessen.de

$query = db_select('node', 'n');
$query->join('node_access', 'a', 'n.nid = a.nid');
$query->condition('n.type', 'pressestelle');
$query->condition('a.gid', '10');
$query->fields('n',array('nid','title'));
$result_hmwk = $query->execute()->fetchAllKeyed();

// Query HMWVL.Hessen.de

$query = db_select('node', 'n');
$query->join('node_access', 'a', 'n.nid = a.nid');
$query->condition('n.type', 'pressestelle');
$query->condition('a.gid', '11');
$query->fields('n',array('nid','title'));
$result_hmwvl = $query->execute()->fetchAllKeyed();
$result_hmwvl[0] = 'none';

// Query HMUELV.Hessen.de

$query = db_select('node', 'n');
$query->join('node_access', 'a', 'n.nid = a.nid');
$query->condition('n.type', 'pressestelle');
$query->condition('a.gid', '12');
$query->fields('n',array('nid','title'));
$result_hmuelv = $query->execute()->fetchAllKeyed();

// Query HSM.Hessen.de

$query = db_select('node', 'n');
$query->join('node_access', 'a', 'n.nid = a.nid');
$query->condition('n.type', 'pressestelle');
$query->condition('a.gid', '13');
$query->fields('n',array('nid','title'));
$result_hsm = $query->execute()->fetchAllKeyed();

	$form['pmautofill_basti'] = array(
		'#type' => 'fieldset',
		'#title' => 'Pressemitteilungen Vordefinitionen'
	);
	
	$form['pmautofill_basti']['auswahl_hessen_pressestelle'] = array(
		'#type' => 'select',
		'#title' => 'Pressestelle Hessen.de',
		'#default_value' => variable_get('hessen'),
		'#options' => $result_hessen
	);
	
	$form['pmautofill_basti']['auswahl_hessen_pressesprecher'] = array(
		'#type' => 'select',
		'#title' => 'Pressesprecher Hessen.de',
		'#default_value' => variable_get('hessen'),
		'#options' => $result_hessen_pressesprecher
	);

	$form['pmautofill_basti']['auswahl_stk'] = array(
		'#type' => 'select',
		'#title' => 'Pressestelle stk.hessen.de',
		'#default_value' => '',
		'#options' => $result_stk
	);	

	$form['pmautofill_basti']['auswahl_hmdi'] = array(
		'#type' => 'select',
		'#title' => 'Pressestelle HMDI.Hessen.de',
		'#default_value' => '',
		'#options' => $result_hmdi
	);	

	$form['pmautofill_basti']['auswahl_hmdf'] = array(
		'#type' => 'select',
		'#title' => 'Pressestelle HMDF.Hessen.de',
		'#default_value' => '',
		'#options' => $result_hmdf
	);	

	$form['pmautofill_basti']['auswahl_hmdj'] = array(
		'#type' => 'select',
		'#title' => 'Pressestelle HMDJ.Hessen.de',
		'#default_value' => '',
		'#options' => $result_hmdj
	);	

	$form['pmautofill_basti']['auswahl_hkm'] = array(
		'#type' => 'select',
		'#title' => 'Pressestelle HKM.Hessen.de',
		'#default_value' => '',
		'#options' => $result_hkm
	);	

	$form['pmautofill_basti']['auswahl_hmwk'] = array(
		'#type' => 'select',
		'#title' => 'Pressestelle HMWK.Hessen.de',
		'#default_value' => '',
		'#options' => $result_hmwk
	);	

	$form['pmautofill_basti']['auswahl_hmwvl'] = array(
		'#type' => 'select',
		'#title' => 'Pressestelle HMWVL.Hessen.de',
		'#default_value' => '',
		'#required' => TRUE,
		'#options' => $result_hmwvl
	);	

	$form['pmautofill_basti']['auswahl_hmuelv'] = array(
		'#type' => 'select',
		'#title' => 'Pressestelle HMUELV.Hessen.de',
		'#default_value' => '',
		'#options' => $result_hmuelv
	);	

	$form['pmautofill_basti']['auswahl_hsm'] = array(
		'#type' => 'select',
		'#title' => 'Pressestelle HSM.Hessen.de',
		'#default_value' => '',
		'#options' => $result_hsm
	);		

	
	$form['pmautofill_basti']['submit'] = array(
		'#type' => 'submit',
		'#value' => 'Speichern / Aktualisieren'
	);

	return $form;
}

function pmautofill_basti_admin_settings_submit($form) {
	variable_set('hessen', $form['pmautofill_basti']['auswahl_hessen']['#value']);
	variable_set('stk', $form['pmautofill_basti']['auswahl_stk']['#value']);
	variable_set('hmdi', $form['pmautofill_basti']['auswahl_hmdi']['#value']);
	variable_set('hmdj', $form['pmautofill_basti']['auswahl_hmdf']['#value']);
	variable_set('hmdf', $form['pmautofill_basti']['auswahl_hmdj']['#value']);
	variable_set('hmdj', $form['pmautofill_basti']['auswahl_hkm']['#value']);
	variable_set('hkm', $form['pmautofill_basti']['auswahl_hmwk']['#value']);
	variable_set('hmwvl', $form['pmautofill_basti']['auswahl_hmwvl']['#value']);
	variable_set('hmuelv', $form['pmautofill_basti']['auswahl_hmuelv']['#value']);
	variable_set('hsm', $form['pmautofill_basti']['auswahl_hsm']['#value']);
}
