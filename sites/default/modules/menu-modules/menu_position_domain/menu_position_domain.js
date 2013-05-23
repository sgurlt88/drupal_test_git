(function ($) {

/**
 * Provide the summary information for the content type plugin's vertical tab.
 */
Drupal.behaviors.menuPositionDomainSettingsSummary = {
  attach: function (context) {
    $('fieldset#edit-domain', context).drupalSetSummary(function (context) {
      var vals = [];
      $('input[type="checkbox"]:checked', context).each(function () {
        vals.push($.trim($(this).next('label').text()));
      });
      if (!vals.length) {
        vals.push(Drupal.t('Any domain'));
      }
      return vals.join(', ');
    });
  }
};

})(jQuery);