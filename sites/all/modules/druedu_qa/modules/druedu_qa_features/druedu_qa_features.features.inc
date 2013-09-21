<?php
/**
 * @file
 * druedu_qa_features.features.inc
 */

/**
 * Implements hook_views_api().
 */
function druedu_qa_features_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function druedu_qa_features_flag_default_flags() {
  $flags = array();
  // Exported flag: "Accept".
  $flags['accepted'] = array(
    'content_type' => 'node',
    'title' => 'Accept',
    'global' => '0',
    'types' => array(
      0 => 'answer',
    ),
    'flag_short' => 'Accept',
    'flag_long' => 'Accept this answer.',
    'flag_message' => 'Accepted.',
    'unflag_short' => 'Unaccept',
    'unflag_long' => 'Unaccept this answer.',
    'unflag_message' => 'Unaccepted.',
    'unflag_denied_text' => '',
    'link_type' => 'normal',
    'roles' => array(
      'flag' => array(
        0 => '2',
      ),
      'unflag' => array(
        0 => '2',
      ),
    ),
    'weight' => '-7',
    'show_on_form' => 0,
    'access_author' => '',
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_contextual_link' => 0,
    'i18n' => 0,
    'api_version' => 2,
    'module' => 'druedu_qa_features',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}

/**
 * Implements hook_image_default_styles().
 */
function druedu_qa_features_image_default_styles() {
  $styles = array();

  // Exported image style: profile_small.
  $styles['profile_small'] = array(
    'name' => 'profile_small',
    'effects' => array(
      14 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '30',
          'height' => '30',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function druedu_qa_features_node_info() {
  $items = array(
    'answer' => array(
      'name' => t('Answer'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Answer'),
      'help' => '',
    ),
    'question' => array(
      'name' => t('Question'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Question'),
      'help' => '',
    ),
  );
  return $items;
}
