<?php
/**
 * @file
 * content_and_bean_types.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function content_and_bean_types_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'background_slide';
  $bean_type->label = 'Background Slide';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['background_slide'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'open_html';
  $bean_type->label = 'Open HTML';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['open_html'] = $bean_type;

  return $export;
}
