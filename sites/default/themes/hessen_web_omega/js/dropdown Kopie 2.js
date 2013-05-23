$(document).ready(function() {
	function megaHoverOver(){
		//$(this).find(".sub").stop().fadeTo('fast', 1).show();
		$("ul.mainmenu > li > ul > li").hide();
		// Set the focus on anchor tag so the it is correctly highlighted with text and background.
		$(this).find("a").first().focus();
		$(this).find("ul.mainmenu > li").stop().slideDown('600');
	}
	
	function megaHoverOut(){
	 	/*$(this).find(".sub").stop().fadeTo('fast', 0, function() { //Fade to 0 opactiy
      		$(this).hide();  //after fading, hide it
 	 	});*/
		// When the mouse is out of the dropdown menu remove the focus on anchor tag so 
		// the highlighted is cleared.
		$(this).find("a").first().blur();
		$(this).find("ul.mainmenu > li").hide();
	}
	
	var config = {
     sensitivity: 2, // number = sensitivity threshold (must be 1 or higher)
     interval: 100, // number = milliseconds for onMouseOver polling interval
     over: megaHoverOver, // function = onMouseOver callback (REQUIRED)
     timeout: 500, // number = milliseconds delay before onMouseOut
     out: megaHoverOut // function = onMouseOut callback (REQUIRED)
	};
	
	//$(".sub").css({'opacity':'0'}); //Fade sub nav to 0 opacity on default
	$("ul.mainmenu > li").hoverIntent(config); //Trigger Hover intent with custom configurations

})(jQuery);