
(function($) {
  $(document).ready(function(){
    $("a.ts_increase").attr({ href: "#" });
    $("a.ts_decrease").attr({ href: "#" });
    $("a.ts_normal").attr({ href: "#" });
    var tsCurrent = textsizeNormal;
    if ($.cookie("textsize")) {
      var tsCurrent = $.cookie("textsize");
    }
    // add element styles for animation
    if (textsizeAnimate == 1 && tsCurrent != textsizeNormal) {
      $(textsizeElement + textsizeElementClass).css({ fontSize: tsCurrent + "%" });
    }

    // functions
    // calculate the size for display
    function textsize_calc_display(ts_v) {
      if (textsizeDisplay == 1) {
        ts_c = (100 * ts_v / textsizeNormal);
        return Math.round(ts_c*100)/100;
      }
      else {
        return ts_v;
      }
    }
    // calculate the next size
    function textsize_calc_next(mode, value) {
      if (mode == "increase") {
        if (value == textsizeMaximum) {
          return value;
        }
        else {
          return 1*value + 1*textsizeIncrement;
        }
      }
      else if (mode == "decrease") {
        if (value == textsizeMinimum) {
          return value;
        }
        else {
          return 1*value - 1*textsizeIncrement;
        }
      }
    }
    // remove body classes
    function textsize_remove_bc(){
      var tsElement = $(textsizeElement + textsizeElementClass);
      var tsClasses = tsElement.attr('class').split(' ');
      for( var i in tsClasses ){
        if( tsClasses[i].substring(0,8) == 'textsize' ){
          tsElement.removeClass( tsClasses[i] );
          break;
        }
      }
    }
    // add body class
    function textsize_add_bc(ts_bc) {
      var ts_c = Math.round(ts_c*100)/100
      var ts_bc_s = ts_bc + '';
      var ts_bc_s_class = ts_bc_s.replace(".", "-");
        textsize_remove_bc();
        $(textsizeElement + textsizeElementClass).addClass('textsize-' + ts_bc_s_class);
      return false;
    };
    // change and save the text size
    function textsize_change(mode){
      var tsCurrent = textsizeNormal;
      var tsCompare = textsizeNormal;
      var tsChange = false;
      var tsNext = textsize_calc_next(mode, textsizeNormal);
      var tsTextAbbr = "";
      if ($.cookie("textsize")) {
        var tsCurrent = $.cookie("textsize");
      }
      if (textsizeLinkeType == "variable") {
        var tsCompare = textsizeMaximum;
      }
      else if (textsizeLinkeType == "fix") {
        var tsCurrent = textsizeNormal;
        var tsCompare = tsCurrent;
      }
      if (mode == "increase") {
        if (tsCurrent == textsizeMaximum && textsizeReset == 0) {
          var tsNext = tsCurrent;
          var tsText = Drupal.t('Maximum');
          var tsTextAbbr = Drupal.t('Max.');
        }
        else if (tsCurrent < textsizeMaximum) {
          var tsChange = true;
          var tsNext = textsize_calc_next(mode, tsCurrent);
        }
      }
      else if (mode == "decrease") {
        if (tsCurrent == textsizeMinimum && textsizeReset == 0) {
          var tsNext = textsizeMinimum;
          var tsText = Drupal.t('Mainimum');
          var tsTextAbbr = Drupal.t('Min.');
        }
        else if (tsCurrent > textsizeMinimum) {
          var tsChange = true;
          var tsNext = textsize_calc_next(mode, tsCurrent);
        }
      }
      else if (mode == "normal") {
        var tsChange = true;
        var tsCurrent = textsizeNormal;
        var tsNext = textsizeNormal;
      }
      else if (mode == "form") {
        var tsChange = true;
        var tsNext = $("#edit-textsize-select").val();;
      }
      if (tsChange == false) {
        if (textsizeReset == 1) {
          var tsNext = textsizeNormal;
        }
        else if ((textsizeReset == 0) && (tsCurrent == tsCompare)) {
          var tsTextAbbr = '<abbr title="' + tsText + '" class="textsize">' + tsTextAbbr + '</abbr> ';
          $("#textsize_current").addClass('error');
        }
      }
      else if (tsChange == true) {
          $("#textsize_current").removeClass('error');
      }
      // change and save the text size
      $.cookie('textsize', tsNext, { expires: textsizeCookieExpires, path: textsizeCookieDomain});
      textsize_add_bc(ts_bc = tsNext);
      $("#textsize_current").attr({ title: textsizeCurrentText + ": " + textsize_calc_display(tsNext) + "%"});
      if (textsizeAnimate == 0) {
        $(textsizeElement + textsizeElementClass).css("font-size", tsNext + "%");
        $("#textsize_current").empty().append( tsTextAbbr + textsize_calc_display(tsNext) + '%');
      }
      else if (textsizeAnimate == 1) {
        $(textsizeElement + textsizeElementClass).animate({ fontSize: tsNext + "%" }, textsizeAnimateDuration);
        $("#textsize_current").fadeOut(textsizeAnimateDuration, function() {
          $("#textsize_current").empty().append(tsTextAbbr + textsize_calc_display(tsNext) + "%").fadeIn(textsizeAnimateDuration);
        });
      }
     return false;
    }
    // form
    function textsize_form() {
      textsize_change(mode = "form");
    }
    
    // jQuery code
    $("a.textsize_increase[href=#]").click(
      function (){
        textsize_change(mode = "increase");
      }
    );
    $("a.textsize_decrease[href=#]").click(
      function (){
        textsize_change(mode = "decrease");
      }
    );
    $("a.textsize_normal[href=#]").click(
      function (){
        textsize_change(mode = "normal");
      }
    );
    $("img.ts_rollover").hover(
      function(){
        if($(this).attr("src").indexOf("16_hover") == -1) {
          var newSrc = $(this).attr("src").replace("16.gif","16_hover.gif#hover");
          $(this).attr("src",newSrc);
        }
      },
      function(){
        if($(this).attr("src").indexOf("16_hover.gif#hover") != -1) {
          var oldSrc = $(this).attr("src").replace("16_hover.gif#hover","16.gif");
          $(this).attr("src",oldSrc);
        }
        else if($(this).attr("src").indexOf("16_focus.gif#focus") != -1) {
          var oldSrc = $(this).attr("src").replace("16_focus.gif#focus","16.gif");
          $(this).attr("src",oldSrc);
        }
      }
    );
    $("a.ts_rollover").focus(
      function(){
        var tsIMG = $(this).children("img");
        if($(tsIMG).attr("src").indexOf("16_hover.gif#hover") != -1) {
          var newSrc = $(tsIMG).attr("src").replace("16_hover.gif#hover","16_focus.gif#focus");
          $(tsIMG).attr("src",newSrc);
        }
      }
    );
    $("#edit-textsize-select").change(textsize_form);
    $("#edit-textsize-submit").hide();
  });
})(jQuery);
