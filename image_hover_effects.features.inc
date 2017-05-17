<?php
/**
 * @file
 * image_hover_effects.features.inc
 */

/**
 * Implements hook_node_info().
 */
function image_hover_effects_node_info() {
  $items = array(
    'hover_effect_image' => array(
      'name' => t('Hover Effect Image'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
