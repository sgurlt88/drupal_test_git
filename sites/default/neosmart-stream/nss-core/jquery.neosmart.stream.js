/************************************************************************************************************************************
 *	neosmart STREAM - js core
 *
 *	@copyright:			neosmart GmbH
 *	@licence:			https://neosmart-stream.de/legal/license-agreement/
 *	@documentation:		https://neosmart-stream.de/docs/
 *	@last update:		2013-05-16
 *	
 ************************************************************************************************************************************/
(function(b,a){b.fn.neosmartStream=function(r){var c=b.extend({},b.fn.neosmartStream.defaults,r);var i=this;c.uid=false;c.uat=false;c.dev=false;c.fbLang=i.attr("data-fb-lang");if(i.find("#nss").length){i.prepend('<div class="nss-error">You have used id="nss" in your HTML template - This ID is created by neosmart STREAM and can not be used twice.</div>');return false}c.debugMode=i.hasClass("nss-debug");i.find(".nss-stream").hide().fadeIn(c.introFadeIn);i.removeClass("nss-load");p();f();function p(){if(i.hasClass("nss-lite")&&i.find(".nss-stream").length){var o=i.find('[data-id="nss-ad"]');if(o.length<1||o.is(":hidden")||o.css("opacity")!=1){i.remove();return}}if(c.masonry){q()}if(c.debugMode){$debugInfo=b("#nss-debug-mode-info")}b.ajax({url:c.path+"nss-core/ajax-config.php",data:{theme:c.theme},complete:function(u,s){var t=b.parseJSON(u.responseText);c.cache_time=parseInt(t.cache_time);c.channel_count=parseInt(t.channel_count);if(t.update=="true"){n()}else{j("Global cache is up-to-date",true,"nss-success");if(c.dev){return false}if(!c.auto_update){return}setTimeout(n,c.cache_time*1000)}}})}function q(){b(".nss-stream-wrap").masonry({itemSelector:".nss-item",animationOptions:{duration:300},containerStyle:"relative"})}function j(t,o,s){if(!c.debugMode){return false}if(o){$debugInfo.html("")}$debugInfo.append('<div class="nss-info '+s+'">'+t+"</div>")}function n(){c.updated_count=0;i.addClass("nss-update");j("Cache is being rebuilt ...",true,"nss-loading");for(var o=0;o<c.channel_count;o++){m(o)}}function m(o){b.ajax({url:c.path+"nss-core/ajax-update-channel.php?channel="+o,complete:function(u,s){var t=b.parseJSON(u.responseText);if(t){g(t.channel,t.status)}else{g(o,"error")}}})}function g(s,o){c.updated_count++;if(o=="error"){className="nss-error"}else{if(o=="success"||o=="up-to-date"){className="nss-success"}else{className=""}}j("Try to update channel "+s+": "+o,false,className);if(c.updated_count==c.channel_count){e()}}function e(){b.ajax({url:c.path+"nss-core/ajax-merge-channels.php",data:{theme:c.theme},complete:function(s,o){j("Global cache is up-to-date",false,"nss-success");l(s.responseText)}})}function l(o){if(c.dev||!c.auto_update){return false}setTimeout(n,c.cache_time*1000)}function f(){var s=i.find(".nss-feedback-root");if(!s.length||i.hasClass("nss-lite")){b(".nss-feedback").remove();return false}var o={};i.find(".nss-feedback-open").click(d);i.find(".nss-feedback-link").click(k);b(".nss-feedback").slideDown()}function d(t){var o=b(t.currentTarget);var u=o.parent();var s='<iframe width="100%" height="300" src="https://api.neosmart-stream.com/feedback/index.php?fblang='+c.fbLang+"&uid="+u.parent().attr("data-id")+'"></iframe>';if(o.hasClass("nss-active")){b(".nss-feedback-root-container").html("");o.removeClass("nss-active")}else{b(".nss-feedback-root-container").html(s).insertAfter(u);b(".nss-feedback-open").removeClass("nss-active");o.addClass("nss-active")}}function k(t){var o=b(t.currentTarget);var u=o.parent();var s='<iframe width="100%" height="200" src="https://api.neosmart-stream.com/feedback/index.php?fblang='+c.fbLang+"&oid="+u.attr("data-object-id")+'"></iframe>';if(o.hasClass("nss-active")){u.find(".nss-feedback-container").html("");o.removeClass("nss-active")}else{u.find(".nss-feedback-container").html(s);o.addClass("nss-active")}}function h(o){b(o.currentTarget).parent().submit();this.blur();return false}return i};b.fn.neosmartStream.defaults={cache_time:60,channel_count:0,updated_count:0,auto_update:false,dev:false,path:"neosmart-stream/",theme:"base",masonry:false,debugMode:false,fbLang:"en_US",introFadeIn:700}})(jQuery,window);