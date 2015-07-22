/**
 * @file
 * Event date form custom behaviors.
 */

(function ($) {
  'use strict';

  Drupal.behaviors.slacIpEventDate = {
    attach: function(context, settings) {

      function showTempMessage (msg, speed, duration) {
        msg.slideDown(speed, function () {
          setTimeout(function () {
            msg.slideUp('slow');
          }, duration);
        });
      }

      var $form = $('.node-form', context);
      var $singleDay = $form.find('input.form-checkbox[id^="edit-field-event-date"]');
      var $value = $form.find('input[id^="edit-field-event-date-"][id*="value-"]');
      var $value2 = $form.find('input[id^="edit-field-event-date-"][id*="value2-"]');
      var msgs = {};

      // The field controlling 'Single Day' is really the 'All Day' toggle.
      // Set the checked value back to what it should be for submission.
      $form.submit(function () {
        var checked = $singleDay.prop('checked');
        $singleDay.prop('checked', !checked);
      });

      // If 'Single Day' is checked, set the "to" date to match the start date.
      $singleDay.change(function (e) {
        var firstVal = $value.first().val();
        var secondVal = $value2.first().val();

        if (e.target.checked) {
          if (firstVal !== secondVal) {
            $value2.first().val(firstVal);

            showTempMessage(msgs.to_date_reset, 'fast', 2000);
          }

          // Disable the "to" date.
          $value2.first().parent().hide();

          // Hide the "Single Day" help message.
          msgs.all_day.slideUp();
        }
        else {
          $value2.first().parent().show();
          msgs.all_day.slideDown();
        }
      });

      // If the "to" date is changed to a different date from the start date
      // while 'Single Day' is checked, un-check it.
      $value2.change(function () {
        if ($value2.val() !== $value.val() && $singleDay.prop('checked')) {
          $singleDay.prop('checked', false).change();

          showTempMessage(msgs.single_day, 'fast', 5000);
        }
      });

      // Add status/help messages to show/hide if 'Single Day' is changed.
      msgs.all_day = $('<div class="messages status">' +
          Drupal.t('Only "Single Day" dates may have a start/end time. This entry will be considered "All Day" in each calendar item.') +
          '</div>').hide();
      msgs.single_day = $('<div class="messages warning">' +
          Drupal.t('You changed a "Single Day" entry to span multiple days, if you need a multi-day entry with start/end times, please enter as "Single Day" and then clone the entry.') +
          '</div>').hide();
      msgs.to_date_reset = $('<div class="messages warning">' +
          Drupal.t('The "to" date has been reset to match the start date since "Single Day" was checked.') +
          '</div>').hide();
      $.each(msgs, function (name, $el) {
        $singleDay.parent().before($el);
      });

      // Re-label the 'All Day' checkbox to 'Single Day' and reverse its value.
      $singleDay.parent().find('label').text(Drupal.t('Single Day'));
      $singleDay.prop('checked', !$singleDay.prop('checked')).change();

      // After running on-attach, if "Single Day", show the appropriate message immediately.
      if (!$singleDay.prop('checked')) {
        msgs.all_day.show();
      }

    }
  };

}(jQuery));
