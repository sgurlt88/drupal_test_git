$(document).ready(function() {


/* Browserzoom by Marcus (http://jsfiddle.net/GaPYe/) */

    var currFFZoom = 1;
    var currIEZoom = 100;

    $('#plusBtn').on('click',function(){
        if ($.browser.mozilla){
            var step = 0.10;
            currFFZoom += step; 
            $('body').css('MozTransform','scale(' + currFFZoom + ')');
        } else {
            var step = 10;
            currIEZoom += step;
			
            $('body').css('zoom', ' ' + currIEZoom + '%');
        }
    });
	
	$('#resetBtn').on('click', function () {
        if ($.browser.mozilla){           
            $('body').css('MozTransform','scale(1)');
			currFFZoom = 1;
        } else {
            $('body').css('zoom', '100%');
			
			currIEZoom = 100;
        }
    });
	
    $('#minusBtn').on('click',function(){
        if ($.browser.mozilla){
            var step = 0.10;
            currFFZoom -= step;                 
            $('body').css('MozTransform','scale(' + currFFZoom + ')');

        } else {
            var step = 10;
            currIEZoom -= step;
			
            $('body').css('zoom', ' ' + currIEZoom + '%');
        }
    });



/* //initalisierung des Main Menü Designs */
$('#zone-menu div.menu-block-wrapper.menu-block-3').append('<div class="dropdown-background"></div>');
$('#zone-menu li.menu-depth-1 a').addClass('menu-depth-1');
$('#zone-menu li.menu-depth-2 a').removeClass('menu-depth-1');
$('#zone-menu li.menu-depth-2 a').addClass('menu-depth-2');

var i= 0;
$('.front #zone-menu li.menu-depth-1 a.menu-depth-1').each(function(){
		i++;
		$(this).addClass('main-link-'+i);
       var text = $(this).attr("title");
	   var w = $(this).width() + 12;
	   if(!text){ text = 'Description text noch nicht bekannt.'}
	   $(this).after('<div class="discription-a-deth-1">'+text+'</div>');
      });
var max_heightA = 0;
$('#zone-menu li.menu-depth-1 a.menu-depth-1').each(function(e) {
  h = $(this).height();
  if(typeof(h) != "undefined") {
        if(h > max_heightA) {
                max_heightA = h+12;
        }
  }
});
if(max_heightA > 0) {
 $('#zone-menu li.menu-depth-1 a.menu-depth-1').height(max_heightA);
}
var q = 0;
$('#zone-menu li.menu-depth-1.expanded').each(function(){
q = 0;
var thisOne = $(this).children('ul');
var max = thisOne.children('li').length;
thisOne.children('li').each(function(max){
		q++;
		$(this).addClass('submenu-link-'+q);
		
      });
thisOne.prepend('<ul class="spalte-1"></ul><ul class="spalte-2"></ul><ul class="spalte-3"></ul>');
var thisULone =thisOne.children('ul.spalte-1');
var thisULtwo =thisOne.children('ul.spalte-2');
var thisULthree =thisOne.children('ul.spalte-3');
thisOne.children('.submenu-link-1').remove().appendTo(thisULone);
thisOne.children('.submenu-link-2').remove().appendTo(thisULone);
thisOne.children('.submenu-link-3').remove().appendTo(thisULone);
thisOne.children('.submenu-link-4').remove().appendTo(thisULone);
thisOne.children('.submenu-link-5').remove().appendTo(thisULtwo);
thisOne.children('.submenu-link-6').remove().appendTo(thisULtwo);
thisOne.children('.submenu-link-7').remove().appendTo(thisULtwo);
thisOne.children('.submenu-link-8').remove().appendTo(thisULtwo);
thisOne.children('.submenu-link-9').remove().appendTo(thisULthree);
thisOne.children('.submenu-link-10').remove().appendTo(thisULthree);
thisOne.children('.submenu-link-11').remove().appendTo(thisULthree);
thisOne.children('.submenu-link-12').remove().appendTo(thisULthree);
	  });
/* 
// Dropdown fürs Main Menü */


	
	function showThis(){
	$(this).removeClass('entered');
	$('#zone-menu .menu-block-wrapper.menu-block-3 .menu-depth-1 ul.main-menu').css('display', 'none');
	var Child = $(this).children('ul#main-menu');
	if($('.dropdown-background').hasClass('open')){
	Child.css('display', 'block');
	 }
	 else{
	 
	 setTimeout(function(){ Child.css('display', 'block');}, 400);
	 }
	$('.dropdown-background').addClass('open');
	$('.dropdown-background').slideDown("slow");	
	
	$(this).addClass('entered');
	$(this).bind('mouseleave', function(){$(this).removeClass('entered');$('#zone-menu .menu-block-wrapper.menu-block-3 .menu-depth-1 ul.main-menu').css('display', 'none');});
	$('#zone-menu .menu-block-wrapper.menu-block-3').bind('mouseleave', function(){
	$(this).removeClass('entered');
	
	$('.dropdown-background').removeClass('open');
	setTimeout(function(){ $('#zone-menu .menu-block-wrapper.menu-block-3 .menu-depth-1 ul.main-menu').css('display', 'none');}, 400);
    $('.dropdown-background').slideUp("slow");
});

	}
	
	function hideThis(){
	$(this).removeClass('entered');

	
	}
$('#zone-menu li.menu-depth-1').bind('mouseenter', function(){$(this).children('.discription-a-deth-1').addClass('hoverThis');});
$('#zone-menu li.menu-depth-1').bind('mouseleave', function(){$(this).children('.discription-a-deth-1').removeClass('hoverThis');});
	


  var config = {    
     over: showThis,/*  // function = onMouseOver callback (REQUIRED)     */
     timeout:400,/* // number = milliseconds delay before onMouseOut     */
    out: hideThis /* // function = onMouseOut callback (REQUIRED)     */
};
$('#zone-menu li.menu-depth-1.expanded').hoverIntent( config );

var textKlick = 0;
$('#kontaktblocktext').bind('click', function(){
if(textKlick == 0){
$('#kontaktblocktext').html('');

}
textKlick++;
});

	  
	  
});