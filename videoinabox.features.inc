<?php
/**
 * @file
 * videoinabox.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function videoinabox_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "jw_player" && $api == "jw_player_presets") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function videoinabox_node_info() {
  $items = array(
    'videoinabox' => array(
      'name' => t('Video-In-A-Box'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
