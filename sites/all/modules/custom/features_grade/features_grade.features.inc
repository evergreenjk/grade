<?php
/**
 * @file
 * features_grade.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_grade_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function features_grade_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function features_grade_node_info() {
  $items = array(
    'mark' => array(
      'name' => t('Mark'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Mark'),
      'help' => '',
    ),
    'student' => array(
      'name' => t('Student'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Student Title'),
      'help' => '',
    ),
    'subject' => array(
      'name' => t('Subject'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Subject Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
