$(document).ready(function() {
	function megaHoverOver(){
		//$(this).find(".sub").stop().fadeTo('fast', 1).show();
		$(".dropdown_menu").hide();
		//$(".heading-container-inner").hide();
		// Set the focus on anchor tag so the it is correctly highlighted with text and background.
		$(this).find("a").first().focus();
		$(this).find(".dropdown_menu").stop().slideDown('600');
		$(".heading-container-inner").removeClass("heading-container-inner").addClass("heading-container-inner-show");
		//$(".heading-container-inner").children()css('background-color', 'red');
	}
	
	function megaHoverOut(){
	 	/*$(this).find(".sub").stop().fadeTo('fast', 0, function() { //Fade to 0 opactiy
      		$(this).hide();  //after fading, hide it
 	 	});*/
		// When the mouse is out of the dropdown menu remove the focus on anchor tag so 
		// the highlighted is cleared.
		$(this).find("a").first().blur();
		$(this).find(".dropdown_menu").hide();
		//$(".heading-container-inner-show").removeClass("heading-container-inner-show").addClass("heading-container-inner");
	}
	
	var config = {
     sensitivity: 2, /* // number = sensitivity threshold (must be 1 or higher) */
     interval: 100,/*  // number = milliseconds for onMouseOver polling interval */
     over: megaHoverOver, /* // function = onMouseOver callback (REQUIRED) */
     timeout: 500, /* // number = milliseconds delay before onMouseOut */
     out: megaHoverOut /* // function = onMouseOut callback (REQUIRED) */
	};
	
/* 	//$(".sub").css({'opacity':'0'}); //Fade sub nav to 0 opacity on default */
	$(".mainmenu").hoverIntent(config); /* //Trigger Hover intent with custom configurations */



/* // Function for Teaser Flyout menu (Homepage) */
	
	function teaserOver(){
/* 		//$(this).find(".sub").stop().fadeTo('fast', 1).show(); */
		$(".dropdown_teaser").hide();
/* 		// Set the focus on anchor tag so the it is correctly highlighted with text and background. */
		$(this).find("a").first().focus();
		$(this).find(".dropdown_teaser").stop().slideDown('600');
	}
	
	function teaserOut(){
/* 	 	/*$(this).find(".sub").stop().fadeTo('fast', 0, function() { //Fade to 0 opactiy
      		$(this).hide();  //after fading, hide it
 	 	});*/
		// When the mouse is out of the dropdown menu remove the focus on anchor tag so 
		// the highlighted is cleared. */
		$(this).find("a").first().blur();
		$(this).find(".dropdown_teaser").hide();
	}
	
	var config = {
     sensitivity: 2, /* // number = sensitivity threshold (must be 1 or higher) */
     interval: 100,/*  // number = milliseconds for onMouseOver polling interval */
     over: teaserOver,/*  // function = onMouseOver callback (REQUIRED) */
     timeout: 500, /* // number = milliseconds delay before onMouseOut */
     out: teaserOut /* // function = onMouseOut callback (REQUIRED) */
	};
	
/* 	//$(".sub").css({'opacity':'0'}); //Fade sub nav to 0 opacity on default */
	$(".views-slideshow-cycle-main-frame-row-item").hoverIntent(config); /* //Trigger Hover intent with custom configurations
 */
});