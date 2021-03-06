<?php
/**
 * @file
 * videoinabox.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function videoinabox_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_videoinabox';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_videoinabox'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_videoinabox';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_videoinabox'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_videoinabox';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_videoinabox'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_videoinabox';
  $strongarm->value = '1';
  $export['node_preview_videoinabox'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_videoinabox';
  $strongarm->value = 1;
  $export['node_submitted_videoinabox'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'videoinabox_field';
  $strongarm->value = 'field_videoinabox_preview_img';
  $export['videoinabox_field'] = $strongarm;

  return $export;
}
