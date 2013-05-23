jQuery(function($) {
var i = 0;
$('#edit-field-file-image-alt-text input').bind('keyup', function() {
if (i == 0) {
$('#edit-field-file-image-title-text input').val($(this).val());
}});
$('#edit-field-file-image-title-text input').bind('keyup', function() {
i++;
});





	
});