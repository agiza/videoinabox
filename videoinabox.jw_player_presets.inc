<?php
/**
 * @file
 * videoinabox.jw_player_presets.inc
 */

/**
 * Implements hook_default_jw_player_presets().
 */
function videoinabox_default_jw_player_presets() {
  $export = array();

  $jw_player_preset = new stdClass();
  $jw_player_preset->disabled = FALSE; /* Edit this to true to make a default jw_player_preset disabled initially */
  $jw_player_preset->api_version = 1;
  $jw_player_preset->preset_name = 'videoinabox_default';
  $jw_player_preset->machine_name = 'videoinabox_default';
  $jw_player_preset->description = '';
  $jw_player_preset->settings = array(
    'mode' => 'html5',
    'width' => '640',
    'height' => '480',
    'controlbar' => 'none',
    'skin' => '',
    'autoplay' => 0,
  );
  $export['videoinabox_default'] = $jw_player_preset;

  return $export;
}
