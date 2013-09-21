<?php
/**
 * @file
 * reservation_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function reservation_content_type_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function reservation_content_type_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function reservation_content_type_node_info() {
  $items = array(
    'reservation' => array(
      'name' => t('Booking'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'resource' => array(
      'name' => t('Resource'),
      'base' => 'node_content',
      'description' => t('Equipment or item for reservation'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
