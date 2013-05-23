$(document).ready(function() {

/* Pager Title Tags */

	$('li.pager-first').attr('title', 'Erste');
	$('li.pager-previous').attr('title', 'Zurück');
	$('li.pager-next').attr('title', 'Weiter');
	$('li.pager-last').attr('title', 'Letzte');
	
/* Empfehlung der Redaktion */

/* Hauptseite */	
	$('#views_slideshow_controls_text_previous_frontpage_empfehlung-block').html('');
	$('#views_slideshow_controls_text_previous_frontpage_empfehlung-block').css('background', 'url("/sites/default/themes/hessen_web_omega/css/images/leftarrow.png")');
	$('#views_slideshow_controls_text_previous_frontpage_empfehlung-block').css('width', '35px');
	$('#views_slideshow_controls_text_previous_frontpage_empfehlung-block').css('height', '35px');
	$('#views_slideshow_controls_text_pause_frontpage_empfehlung-block').html('');
	$('#views_slideshow_controls_text_next_frontpage_empfehlung-block').html('');
	$('#views_slideshow_controls_text_next_frontpage_empfehlung-block').css('background', 'url("/sites/default/themes/hessen_web_omega/css/images/rightarrow.png")');
	$('#views_slideshow_controls_text_next_frontpage_empfehlung-block').css('width', '35px');
	$('#views_slideshow_controls_text_next_frontpage_empfehlung-block').css('height', '35px');

/* Centerpage */	
	$('#views_slideshow_controls_text_previous_frontpage_empfehlung-block_2').html('');
	$('#views_slideshow_controls_text_previous_frontpage_empfehlung-block_2').css('background', 'url("/sites/default/themes/hessen_web_omega/css/images/leftarrow.png")');
	$('#views_slideshow_controls_text_previous_frontpage_empfehlung-block_2').css('width', '35px');
	$('#views_slideshow_controls_text_previous_frontpage_empfehlung-block_2').css('height', '35px');
	$('#views_slideshow_controls_text_pause_frontpage_empfehlung-block_2').html('');
	$('#views_slideshow_controls_text_next_frontpage_empfehlung-block_2').html('');
	$('#views_slideshow_controls_text_next_frontpage_empfehlung-block_2').css('background', 'url("/sites/default/themes/hessen_web_omega/css/images/rightarrow.png")');
	$('#views_slideshow_controls_text_next_frontpage_empfehlung-block_2').css('width', '35px');
	$('#views_slideshow_controls_text_next_frontpage_empfehlung-block_2').css('height', '35px');

/* Social Media Seite */
	$('#views_slideshow_controls_text_previous_frontpage_empfehlung-block_1').html('');
	$('#views_slideshow_controls_text_previous_frontpage_empfehlung-block_1').css('background', 'url("/sites/default/themes/hessen_web_omega/css/images/leftarrow.png")');
	$('#views_slideshow_controls_text_previous_frontpage_empfehlung-block_1').css('width', '35px');
	$('#views_slideshow_controls_text_previous_frontpage_empfehlung-block_1').css('height', '35px');
	$('#views_slideshow_controls_text_pause_frontpage_empfehlung-block_1').html('');
	$('#views_slideshow_controls_text_next_frontpage_empfehlung-block_1').html('');
	$('#views_slideshow_controls_text_next_frontpage_empfehlung-block_1').css('background', 'url("/sites/default/themes/hessen_web_omega/css/images/rightarrow.png")');
	$('#views_slideshow_controls_text_next_frontpage_empfehlung-block_1').css('width', '35px');
	$('#views_slideshow_controls_text_next_frontpage_empfehlung-block_1').css('height', '35px');

/* Views Edit Button */
if($.browser.msie && $.browser.version == "7.0" || $.browser.msie && $.browser.version == "8.0" ) {
	/* Do Nothing */
}
else{
	$('.view-edit').mouseenter(function() {
		$(this).animate({
				opacity: 1
			}, 200, function() {
		});
	});
	
	$('.view-edit').mouseleave(function() {
		$(this).animate({
				opacity: 0.5
			}, 200, function() {
		});
	});
}


/* Bildergalerie */	
	
	/* Pager Oben */
	
	$('#views_slideshow_controls_text_bildergalerie-block #views_slideshow_controls_text_pause_bildergalerie-block').html('');
	$('.view-bildergalerie .views-slideshow-controls-top #views_slideshow_controls_text_previous_bildergalerie-block a').html('<< Vorheriges');
	$('.view-bildergalerie .views-slideshow-controls-top #views_slideshow_controls_text_next_bildergalerie-block a').html('N&auml;chstes >>');
	
	/* Pager im Bild */
	
	$('.view-bildergalerie .views-slideshow-controls-bottom #views_slideshow_controls_text_previous_bildergalerie-block').html('');
	$('.view-bildergalerie .views-slideshow-controls-bottom #views_slideshow_controls_text_previous_bildergalerie-block').css('background', 'url("/sites/default/themes/hessen_web_omega/css/images/leftarrow.png")');
	$('.view-bildergalerie .views-slideshow-controls-bottom #views_slideshow_controls_text_previous_bildergalerie-block').css('width', '35px');
	$('.view-bildergalerie .views-slideshow-controls-bottom #views_slideshow_controls_text_previous_bildergalerie-block').css('height', '35px');	
	
	$('.view-bildergalerie .views-slideshow-controls-bottom #views_slideshow_controls_text_next_bildergalerie-block').html('');
	$('.view-bildergalerie .views-slideshow-controls-bottom #views_slideshow_controls_text_next_bildergalerie-block').css('background', 'url("/sites/default/themes/hessen_web_omega/css/images/rightarrow.png")');
	$('.view-bildergalerie .views-slideshow-controls-bottom #views_slideshow_controls_text_next_bildergalerie-block').css('width', '35px');
	$('.view-bildergalerie .views-slideshow-controls-bottom #views_slideshow_controls_text_next_bildergalerie-block').css('height', '35px');

/* Bildergalerie Pfeile Hover */

	$('.view-bildergalerie .views-slideshow-controls-bottom #views_slideshow_controls_text_previous_bildergalerie-block').mouseenter(function() {
		$(this).animate({
		opacity: 1
		}, 300, function() {
/* Animation complete. */
		});
	});
	
	$('.view-bildergalerie .views-slideshow-controls-bottom #views_slideshow_controls_text_previous_bildergalerie-block').mouseleave(function() {
		$(this).animate({
		opacity: 0.7
		}, 300, function() {
/* Animation complete. */
		});
	});	
	
	
	
	
	$('.view-bildergalerie .views-slideshow-controls-bottom #views_slideshow_controls_text_next_bildergalerie-block').mouseenter(function() {
		$(this).animate({
		opacity: 1
		}, 300, function() {
/* Animation complete. */
		});
	});
	
	$('.view-bildergalerie .views-slideshow-controls-bottom #views_slideshow_controls_text_next_bildergalerie-block').mouseleave(function() {
		$(this).animate({
		opacity: 0.7
		}, 300, function() {
/* Animation complete. */
		});
	});	
	
/* Bildergalerie Teaser Alt-Tag */

	var galerieNAME = $('.view-bildergalerie-teaser .views-row-1 .views-field-field-titel div.field-content').html();

	$('.view-bildergalerie-teaser .field-slideshow a').attr('title',galerieNAME);
	$('.view-bildergalerie-teaser .field-slideshow a').attr('alt',galerieNAME);


/* Bildergalerie Thumbnails Hover */
	
	$('.view-bildergalerie #widget_pager_bottom_bildergalerie-block img').mouseenter(thumbhoverON);
	$('.view-bildergalerie #widget_pager_bottom_bildergalerie-block img').mouseleave(thumbhoverOFF);
	
	$('#widget_pager_bottom_bildergalerie-block .jcarousel-next').click(function() {
	 setTimeout(function() {
         $('.view-bildergalerie #widget_pager_bottom_bildergalerie-block img').unbind('mouseenter',thumbhoverON);
         $('.view-bildergalerie #widget_pager_bottom_bildergalerie-block img').bind('mouseenter',thumbhoverON);
         $('.view-bildergalerie #widget_pager_bottom_bildergalerie-block img').unbind('mouseleave',thumbhoverOFF);
         $('.view-bildergalerie #widget_pager_bottom_bildergalerie-block img').bind('mouseleave',thumbhoverOFF);
    }, 200);
	
});

	$('#widget_pager_bottom_bildergalerie-block .jcarousel-prev').click(function() {
	 setTimeout(function() {
         $('.view-bildergalerie #widget_pager_bottom_bildergalerie-block img').unbind('mouseenter',thumbhoverON);
         $('.view-bildergalerie #widget_pager_bottom_bildergalerie-block img').bind('mouseenter',thumbhoverON);
         $('.view-bildergalerie #widget_pager_bottom_bildergalerie-block img').unbind('mouseleave',thumbhoverOFF);
         $('.view-bildergalerie #widget_pager_bottom_bildergalerie-block img').bind('mouseleave',thumbhoverOFF);
    }, 200);

});
	
	function thumbhoverON () {
		$(this).animate({
		opacity: 1
		}, 300, function() {
/* Animation complete. */
		});
}

	function thumbhoverOFF () {
		$(this).animate({
		opacity: 0.7
		}, 300, function() {
/* Animation complete. */
		});
}
	

	
	
/* Sliderbühne Pfeile */

	$('#views_slideshow_controls_text_previous_frontpage_sliderbuehne_und_header-viewsblock_headerslider').html('<img src="/sites/default/themes/hessen_web_omega/css/images/teaser_leftarrow.png">');
	$('#views_slideshow_controls_text_pause_frontpage_sliderbuehne_und_header-viewsblock_headerslider').html('');
	$('#views_slideshow_controls_text_next_frontpage_sliderbuehne_und_header-viewsblock_headerslider').html('<img src="/sites/default/themes/hessen_web_omega/css/images/teaser_rightarrow.png">');
	

/* Themenslider */

	$('#slidorion').slidorion({
		effect: 'fade',
		sliderCount: 3,
		autoPlay: false,
		hoverPause: true,
			speed: 200
	});
		
	$(window).scroll(function(){
		$el = $('#download-box');
		if ($(this).scrollTop() > 540 && $el.css('position') != 'fixed'){
			$('#download-box').css({'position': 'fixed', 'bottom': '10px'});
		}else if($(this).scrollTop() < 540 && $el.css('position') == 'fixed'){
			$('#download-box').css({'position': 'absolute', 'bottom': '10px'});
		}
	});

	
/* Sliderbühne */ 

$('.animatebox').attr('isopen', 'no');
$('.animatebox').click(close);
$('.jcarousel-prev-horizontal').click(function(){
 setTimeout(function() {
 
 
         $('.animatebox').unbind('click',close);
         $('.animatebox').bind('click',close);
    }, 200);

});
$('.jcarousel-next-horizontal').click(function(){
 setTimeout(function() {
 
         $('.animatebox').unbind('click',close);
         $('.animatebox').bind('click',close);
    }, 200);

});

function close() {
 var thisONE = $(this);
 var darfIch = false;
 
 if($(this).attr('isopen') == 'yes'){
										darfIch = false;
									}
 
 else{
		darfIch = true;
	}
 
 $('.animatebox').attr('isopen', 'yes').each(function (){
 

							$(this).children('.hiddenstuff').slideUp(); 
							$(this).attr('isopen', 'no');
							$(this).children('.arrow_up').removeClass('active');
							$(this).children('.arrow_up').addClass('inactive');
							
 });
 
 if(darfIch){
				open(thisONE);
			}
}


function open(thisONE) {


				thisONE.children('.hiddenstuff').slideDown();
				thisONE.attr('isopen', 'yes');
				$(this).children('.arrow_up').removeClass('inactive');
				thisONE.children('.arrow_up').addClass('active');
				
}


/* Socialmedia Favicon */

		$('.social_media_kopf,.socal_media_block_sprecher').each(function(){
			var social = $(this).find("a").attr('social');
			
			switch (social) {
				case "Facebook":
					$(this).find('img.social_media_favicon,img.social_media_favicon_block').attr("src",'/sites/default/themes/hessen_web_omega/css/images/buttons/facebook.png');
					break;
				case "Twitter":
					$(this).find('img.social_media_favicon,img.social_media_favicon_block').attr("src",'/sites/default/themes/hessen_web_omega/css/images/buttons/twitter.png');
					break;
				case "Youtube":
					$(this).find('img.social_media_favicon,img.social_media_favicon_block').attr("src",'/sites/default/themes/hessen_web_omega/css/images/buttons/youtube.gif');
					break;
				case "Vimeo":
					$(this).find('img.social_media_favicon,img.social_media_favicon_block').attr("src",'/sites/default/themes/hessen_web_omega/css/images/buttons/vimeo.gif');
					break;
				default:
					break;
				}
		});

		
/* Weiterlesen - Facebook / Twitter ...  */
 $(function () { 
        $('.node-artikel,.node-pressemitteilung,.node-bildergalerie,.node-termin,.node-listenseite,.node-video').each(function () {
            var distance = 10;
            var time = 250;
            var hideDelay = 500;

            var hideDelayTimer = null;

            var beingShown = false;
            var shown = false;
            var trigger = $('.trigger', this);
            var info = $('#secureshare', this).css('opacity', 0);


            $([trigger.get(0), info.get(0)]).mouseover(function () {
                if (hideDelayTimer) clearTimeout(hideDelayTimer);
                if (beingShown || shown) {
                    /* don't trigger the animation again */
                    return;
                } else {
                    /* reset position of info box */
                    beingShown = true;

                    info.css({
                        bottom: -65,
                        left: 0,
                        display: 'block'
                    }).animate({
                        bottom: '-=' + distance + 'px',
                        opacity: 1
                    }, time, 'swing', function() {
                        beingShown = false;
                        shown = true;
                    });
                }

                return false;
            }).mouseleave(function () {
                if (hideDelayTimer) clearTimeout(hideDelayTimer);
                hideDelayTimer = setTimeout(function () {
                    hideDelayTimer = null;
                    info.animate({
                        bottom: '-=' + distance + 'px',
                        opacity: 0
                    }, time, 'swing', function () {
                        shown = false;
                        info.css('display', 'none');
                    });

                }, hideDelay);

                return false;
            });
        });
     });
    

/* Scrolltop */


$("#block-menu-menu-footer-menu ul.menu li.first").click(function() {

if($.browser.safari) bodyelem = $("body")
else bodyelem = $("html,body")

  bodyelem.animate({ scrollTop: 0 }, "slow");
  return false;
});


/* Suche Textfeld */



var textKlick = 0;
$('#suchfeld').bind('click', function(){
if(textKlick == 0){
$('#suchfeld').attr({value: ""});

}
textKlick++;
});


/* Webform/Newsletter Checkbox + Mailfield validation */
	
	var mailCheckbox = $('#webform-component-e-mail #edit-submitted-e-mail-newsletter-selection div').size();
	var copyCheckbox = $('.webform-client-form input#edit-submitted-email-abmeldung-1, .webform-client-form #webform-component-datenschutzbestimmungen input#edit-submitted-datenschutzbestimmungen-1').size();
	$('body.node-type-newsletter-anmeldung #edit-submit').attr('value', 'Bestellen');
	$('body.node-type-webform #edit-submit').attr('value', 'Absenden');
	$('.webform-client-form #edit-actions input').addClass('button_active');
	$('body.node-type-newsletter-anmeldung .webform-client-form #edit-actions').prepend('<div class="error"></div>')
	$('body.node-type-newsletter-anmeldung .webform-client-form #edit-actions').append('<div class="button_inactive"><div class="not-enough">Bestellen</div></div>')
	$('body.node-type-webform .webform-client-form #edit-actions').prepend('<div class="error" ></div>')
	$('body.node-type-webform .webform-client-form #edit-actions').append('<div class="button_inactive"><div class="not-enough">Absenden</div></div>')
	
	if(mailCheckbox > 1) {
			var submitButton = $('.webform-client-form #edit-actions').html();
				$('.webform-client-form #edit-actions .button_active').css('display','none');
				$('body').mousemove(function() {
			if ($('#edit-submitted-e-mail-newsletter-selection .form-checkbox').is(':checked') && $('#webform-component-email-abmeldung .form-checkbox').is(':checked') && $('#webform-component-e-mail #edit-submitted-e-mail-newsletter-email-address').val() != "" ) {

				$('.node-webform .webform-client-form #edit-actions .button_active').css('display', 'block')
				$('.node-webform .webform-client-form #edit-actions .button_inactive').css('display', 'none')
				$('.node-newsletter-anmeldung .webform-client-form #edit-actions .button_active').css('display', 'block')
				$('.node-newsletter-anmeldung .webform-client-form #edit-actions .button_inactive').css('display', 'none')
			}
			else {
				$('.node-webform .webform-client-form #edit-actions .button_active').css('display','none');
				$('.node-webform .webform-client-form #edit-actions .button_inactive').css('display','block');
				$('.node-newsletter-anmeldung .webform-client-form #edit-actions .button_active').css('display','none');
				$('.node-newsletter-anmeldung .webform-client-form #edit-actions .button_inactive').css('display','block');
			}
			});
	}
	else {
			var submitButton = $('.webform-client-form #edit-actions').html();
				$('.webform-client-form #edit-actions .button_active').css('display','none');
				$('body').mousemove(function() {
			if ($('#webform-component-email-abmeldung .form-checkbox, #webform-component-datenschutzbestimmungen .form-checkbox').is(':checked') && $('#webform-component-e-mail #edit-submitted-e-mail-newsletter-email-address, #webform-component-webform-kontakt-email #edit-submitted-webform-kontakt-email').val() != "" && $('#edit-submitted-webform-formular-themenkomplex option:selected').val() != "" ) {
				$('.hello').remove();
				$('.node-webform .webform-client-form #edit-actions .button_active').css('display', 'block')
				$('.node-webform .webform-client-form #edit-actions .button_inactive').css('display', 'none')
				$('.node-newsletter-anmeldung .webform-client-form #edit-actions .button_active').css('display', 'block')
				$('.node-newsletter-anmeldung .webform-client-form #edit-actions .button_inactive').css('display', 'none')
			}
			else {
				$('.node-webform .webform-client-form #edit-actions .button_active').css('display','none');
				$('.node-webform .webform-client-form #edit-actions .button_inactive').css('display','block');
				$('.node-newsletter-anmeldung .webform-client-form #edit-actions .button_active').css('display','none');
				$('.node-newsletter-anmeldung .webform-client-form #edit-actions .button_inactive').css('display','block');
			}
			});
	}

	

	$('.button_inactive .not-enough').click(function() {
	var i = 0;
	$('.error').html('');
	var errorMessage = '<div class="titel-error"><b>Ihre Angaben sind unvollst&auml;ndig:</b></div>';
		if($('#webform-component-e-mail #edit-submitted-e-mail-newsletter-email-address').val() == "" ||$('#webform-component-webform-kontakt-email #edit-submitted-webform-kontakt-email').val() == "") {
		errorMessage +=('<div class="email">Bitte tragen Sie ihre E-Mail-Adresse ein.</div>')
		i++
		}
		if(!$('#edit-submitted-webform-formular-themenkomplex option:selected').val() != "") {
		errorMessage +=('<div class="newsletter">Bitte w&auml;hlen Sie einen Themenkomplex aus.</div>')
		i++}
		if($("#edit-submitted-e-mail-newsletter-selection .form-checkbox").length > 0 && !$('#edit-submitted-e-mail-newsletter-selection .form-checkbox').is(':checked')) {
		errorMessage +=('<div class="newsletter">Bitte w&auml;hlen Sie einen oder mehrere Informationsdienste aus.</div>')
		i++}
		if(!$('#webform-component-email-abmeldung .form-checkbox, #webform-component-datenschutzbestimmungen .form-checkbox').is(':checked')) {
		errorMessage +=('<div class="newsletter">Bitte stimmen Sie den Datenschutzbestimmungen zu.</div>')
		i++}
		if(i > 0){
		
		$('.error').css('border', '2px solid #C7C8C8');
		$('.error').css('padding', '5px');
		$('.error').css('margin-bottom', '15px');
		
		
		
		$('.error').append(errorMessage);}
	});


	
	
/* Video Artikel und Pressemitteilung - Overlay */

	$('.view-views-videodetailseite .views-field-field-teaser-bild .video_preview_overlay').mouseenter(function() {
		$(this).animate({
		opacity: 1
		}, 300, function() {
/* Animation complete. */
		});
	});
	
	$('.view-views-videodetailseite .views-field-field-teaser-bild .video_preview_overlay').mouseleave(function() {
		$(this).animate({
		opacity: 0.7
		}, 300, function() {
/* Animation complete. */
		});
	});

/* Empfehlung der Redaktions */


$('.ic_caption').attr('isopen', 'no');
$('.ic_caption').mouseenter(closeThis);
$('.ic_caption').mouseleave(closeThis);
$('.jcarousel-prev-horizontal').click(function(){
 setTimeout(function() {
         $('.ic_caption').unbind('mouseenter',closeThis);
         $('.ic_caption').bind('mouseenter',closeThis);
         $('.ic_caption').unbind('mouseleave',closeThis);
         $('.ic_caption').bind('mouseleave',closeThis);
    }, 200);

});
$('.jcarousel-next-horizontal').click(function(){
 setTimeout(function() {
         $('.ic_caption').unbind('mouseenter',closeThis);
         $('.ic_caption').bind('mouseenter',closeThis);
         $('.ic_caption').unbind('mouseleave',closeThis);
         $('.ic_caption').bind('mouseleave',closeThis);
    }, 200);

});

function closeThis() {
 var thisTWO = $(this);
 var darfIch = false;
 
 if($(this).attr('isopen') == 'yes'){
										darfIch = false;
									}
 
 else{
		darfIch = true;
	}
 
 $('.ic_caption').attr('isopen', 'yes').each(function (){
							$(this).children('.ic_text').slideUp(); 
							$(this).attr('isopen', 'no');
							
 });
 
 if(darfIch){
				openThis(thisTWO);
			}
}


function openThis(thisTWO) {
				thisTWO.children('.ic_text').slideDown();
				thisTWO.attr('isopen', 'yes');
				
}



/** Add Class für Unpublished-Vorschau-Startseite **/

$('.block-frontpage-themendossier-block-2').parent('.region-inner').parent('.region-content').parent('.zone-content').parent('.zone-content-wrapper').parent('.section-content').parent('.page').parent('.site-wrapper').parent('.not-front.domain-hessen').addClass('unpublished_front');
$('.block-frontpage-themendossier-block-2').parent('.region-inner').parent('.region-content').parent('.zone-content').parent('.zone-content-wrapper').parent('.section-content').parent('.page').parent('.site-wrapper').parent('.not-front').addClass('unpublished_front_ressorts');




/* 2 Click */


if( $('div').hasClass('block-views-videouebersicht-block-4')) {

/* Gebärdensprache 2 Click */

	$('.blockVideouebersicht .view-id-videouebersicht .gebaerdensprache_2click .gebaerdensprache-2click-button').click(function() {

	if(	$(this).parent('.gebaerdensprache-2click-detail').find('div.content').is(":contains('you')")) {
		
		/*alert('youtube');*/
		var gebaerdenURL = $(this).parent('.gebaerdensprache-2click-detail').find('div.content').html().replace(/.*\=/, '').replace(/\s+/g,''); 
		$(this).parent('.gebaerdensprache-2click-detail').parent('.gebaerdensprache_2click').css('display', 'none');
		$(this).parent('.gebaerdensprache-2click-detail').parent('.gebaerdensprache_2click').parent('.field-content').append('<iframe width="660" height="375" frameborder="0" allowfullscreen="" src="https://www.youtube-nocookie.com/embed/'+gebaerdenURL+'?wmode=opaque&rel=0&showinfo=0" class="media-youtube-player"></iframe>'); 
		}		
	
	else if( $(this).parent('.gebaerdensprache-2click-detail').find('div.content').is(":contains('vimeo')")) {
		/*alert('vimeo');*/
		var gebaerdenURL = $(this).parent('.gebaerdensprache-2click-detail').find('div.content').html().replace('http://vimeo.com/', '').replace(/\s+/g,''); 
		$(this).parent('.gebaerdensprache-2click-detail').parent('.gebaerdensprache_2click').css('display', 'none');
		$(this).parent('.gebaerdensprache-2click-detail').parent('.gebaerdensprache_2click').parent('.field-content').append('<iframe src="http://player.vimeo.com/video/'+gebaerdenURL+'" width="660" height="375" frameborder="0" webkitAllowFullScreen mozallowfullscreen allowFullScreen></iframe>'); 	
		}
	else {
		/* Do nothing */
	}
	});
}

else {
/* Youtube Vimeo 2 Click */
	
	
	if( $('.node-type-video article .view-views-videodetailseite .views-field-field-hauptvideo .youtube_2click_url .file-video div.content').is(":contains('you')")) {
		/*alert('youtube');*/
		var videoURL = $('.node-type-video article .view-views-videodetailseite .views-field-field-hauptvideo .youtube_2click_url .file-video div.content').html().replace(/.*\=/, '').replace(/\s+/g,'');
		$('.node-type-video article .view-views-videodetailseite .views-field-field-hauptvideo .youtube-2click-button').click(function() {
			$('.node-type-video article .view-views-videodetailseite .youtube_2click').css('display', 'none');
			$('.node-type-video article .view-views-videodetailseite .views-field-field-hauptvideo').append('<iframe width="750" height="427" frameborder="0" allowfullscreen="" src="https://www.youtube-nocookie.com/embed/'+videoURL+'?wmode=opaque&rel=0&showinfo=0" class="media-youtube-player"></iframe>');
		});
	}
	
	else if( $('.node-type-video article .view-views-videodetailseite .views-field-field-hauptvideo .youtube_2click_url .file-video div.content').is(":contains('vimeo')")) {
		/*alert('vimeo');*/
		var videoURL = $('.node-type-video article .view-views-videodetailseite .views-field-field-hauptvideo .youtube_2click_url .file-video div.content').html().replace('http://vimeo.com/', '').replace(/\s+/g,'');
		$('.node-type-video article .view-views-videodetailseite .views-field-field-hauptvideo .youtube-2click-button').click(function() {
			$('.node-type-video article .view-views-videodetailseite .youtube_2click').css('display', 'none');
			$('.node-type-video article .view-views-videodetailseite .views-field-field-hauptvideo').append('<iframe src="http://player.vimeo.com/video/'+videoURL+'" width="750" height="427" frameborder="0" webkitAllowFullScreen mozallowfullscreen allowFullScreen></iframe>');
		});
	}
	else {
		/* Do nothing */
	}
}


/** Hessennavigator */
eval(function(p,a,c,k,e,r){e=function(c){return(c<a?'':e(parseInt(c/a)))+((c=c%a)>35?String.fromCharCode(c+29):c.toString(36))};if(!''.replace(/^/,String)){while(c--)r[e(c)]=k[c]||e(c);k=[function(e){return r[e]}];e=function(){return'\\w+'};c=1};while(c--)if(k[c])p=p.replace(new RegExp('\\b'+e(c)+'\\b','g'),k[c]);return p}(';(5($){$.r={Q:"G",1f:"1.0.2",M:{z:"H",9:"",D:"X",E:O}};$.8.K({r:5(d,e){6(d&&S(d)!="T"){e=d;d=U}3 f=$.K({},$.r.M,e);3 g={};4.v(5(i){3 a=(!d||d=="")?$(4):$(4).V(d);3 b=f.z=="Z"?""+I.15():(f.9==""?a.P():a.9(f.9));3 c=$(4).L();6(!g[c])g[c]={s:[],n:[]};6(a.7>0)g[c].s.q({s:b,e:$(4),n:i});W g[c].n.q({e:$(4),n:i})});w(3 h J g){3 j=g[h];j.s.16(5 18(a,b){3 x=a.s.t?a.s.t():a.s;3 y=b.s.t?b.s.t():b.s;6(B(a.s)&&B(b.s)){x=F(a.s);y=F(b.s)}u(f.z=="H"?1:-1)*(x<y?-1:(x>y?1:0))})}3 k=[];w(3 h J g){3 j=g[h];3 l=[];3 m=$(4).7;Y(f.D){A"10":$.v(j.s,5(i,a){m=I.11(m,a.n)});C;A"12":$.v(j.s,5(i,a){l.q(a.n)});C;A"13":m=j.n.7;C;14:m=0}3 n=[0,0];w(3 i=0;i<$(4).7;i++){3 o=i>=m&&i<m+j.s.7;6(N(l,i))o=17;3 p=(o?j.s:j.n)[n[o?0:1]].e;p.L().19(p);6(o||!f.E)k.q(p.1a(0));n[o?0:1]++}}u 4.1b(k)}});5 B(n){u/^[\\+-]?\\d*\\.?\\d*$/.1c(n)};5 N(a,n){3 b=O;$.v(a,5(i,m){6(!b)b=m==n});u b};$.8.G=$.8.1d=$.8.1e=$.8.r})(R);',62,78,'|||var|this|function|if|length|fn|attr|||||||||||||||||push|tinysort||toLowerCase|return|each|for|||order|case|isNum|break|place|returns|parseFloat|TinySort|asc|Math|in|extend|parent|defaults|contains|false|text|id|jQuery|typeof|string|null|find|else|start|switch|rand|first|min|org|end|default|random|sort|true|zeSort|append|get|setArray|exec|Tinysort|tsort|version'.split('|'),0,{}))

/** Chaosteam Infoportal 2012/2013 - Andy - Mori - Naddel - Sebbel - **/

});