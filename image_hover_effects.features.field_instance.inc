<?php
/**
 * @file
 * image_hover_effects.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function image_hover_effects_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-hover_effect_image-field_background_color'.
  $field_instances['node-hover_effect_image-field_background_color'] = array(
    'bundle' => 'hover_effect_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The hover effect you wish to use. Visit <a href="https://tympanus.net/Development/HoverEffectIdeas/" target="_blank">https://tympanus.net/Development/HoverEffectIdeas/</a> for examples.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'field_formatter_css_class',
        'settings' => array(
          'depth' => 0,
          'hidden' => 1,
          'target' => 'node',
        ),
        'type' => 'cssclass_formatter',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_background_color',
    'label' => 'Figure Class',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'node-hover_effect_image-field_collection_image_height'.
  $field_instances['node-hover_effect_image-field_collection_image_height'] = array(
    'bundle' => 'hover_effect_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Height of Single Collection Image images',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_collection_image_height',
    'label' => 'Collection Image Height',
    'required' => 0,
    'settings' => array(
      'max' => 2400,
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'node-hover_effect_image-field_collection_image_links'.
  $field_instances['node-hover_effect_image-field_collection_image_links'] = array(
    'bundle' => 'hover_effect_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Links for Single Collection Image images. 1 to 1 relationship with Single Collection Images (1st link -> 1st Single Collection Image, 2nd link -> 2nd Single Collection Image, etc)',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_collection_image_links',
    'label' => 'Collection Image Links',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'user',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'node-hover_effect_image-field_collection_image_margin'.
  $field_instances['node-hover_effect_image-field_collection_image_margin'] = array(
    'bundle' => 'hover_effect_image',
    'default_value' => array(
      0 => array(
        'value' => '0px 0px 0px 0px',
      ),
    ),
    'deleted' => 0,
    'description' => 'Space between Single Collection Image images. Defaults to "0px 0px 0px 0px". <br>
Key: "Top Right Bottom Left". <br>
See <a href="https://www.w3schools.com/css/css_margin.asp" target="_blank">https://www.w3schools.com/css/css_margin.asp</a> for documentation.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_collection_image_margin',
    'label' => 'Collection Image Margin',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'node-hover_effect_image-field_collection_image_width'.
  $field_instances['node-hover_effect_image-field_collection_image_width'] = array(
    'bundle' => 'hover_effect_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Width of Single Collection Image images',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_collection_image_width',
    'label' => 'Collection Image Width',
    'required' => 0,
    'settings' => array(
      'max' => 2400,
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-hover_effect_image-field_description'.
  $field_instances['node-hover_effect_image-field_description'] = array(
    'bundle' => 'hover_effect_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Optional description text',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-hover_effect_image-field_description_color'.
  $field_instances['node-hover_effect_image-field_description_color'] = array(
    'bundle' => 'hover_effect_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Font color of description',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_description_color',
    'label' => 'Description Color',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-hover_effect_image-field_featured_image'.
  $field_instances['node-hover_effect_image-field_featured_image'] = array(
    'bundle' => 'hover_effect_image',
    'deleted' => 0,
    'description' => 'This is your main image',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_featured_image',
    'label' => 'Featured Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-hover_effect_image-field_link_color'.
  $field_instances['node-hover_effect_image-field_link_color'] = array(
    'bundle' => 'hover_effect_image',
    'default_value' => array(
      0 => array(
        'value' => '#000000',
      ),
    ),
    'deleted' => 0,
    'description' => 'Title text color.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_link_color',
    'label' => 'Title Color',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-hover_effect_image-field_new_tab'.
  $field_instances['node-hover_effect_image-field_new_tab'] = array(
    'bundle' => 'hover_effect_image',
    'default_value' => array(
      0 => array(
        'value' => 'target=""',
      ),
    ),
    'deleted' => 0,
    'description' => 'Optional target="_blank"',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_new_tab',
    'label' => 'Open sublinks in new tab?',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 12,
    ),
  );

  // Exported field_instance:
  // 'node-hover_effect_image-field_single_collection_image'.
  $field_instances['node-hover_effect_image-field_single_collection_image'] = array(
    'bundle' => 'hover_effect_image',
    'deleted' => 0,
    'description' => 'Images for links you want hovering over the Main Image. 1 to 1 relationship with Collection Image Links',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'medium',
        ),
        'type' => 'image',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_single_collection_image',
    'label' => 'Single Collection Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-hover_effect_image-field_title_margin'.
  $field_instances['node-hover_effect_image-field_title_margin'] = array(
    'bundle' => 'hover_effect_image',
    'default_value' => array(
      0 => array(
        'value' => '0px 0px 0px 0px',
      ),
    ),
    'deleted' => 0,
    'description' => 'Optional margin on title. Defaults to 0px 0px 0px 0px. See <a href="https://www.w3schools.com/css/css_margin.asp" target="_blank">https://www.w3schools.com/css/css_margin.asp</a> for documentation.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_title_margin',
    'label' => 'Title Margin',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-hover_effect_image-field_units'.
  $field_instances['node-hover_effect_image-field_units'] = array(
    'bundle' => 'hover_effect_image',
    'default_value' => array(
      0 => array(
        'value' => 'px',
      ),
    ),
    'deleted' => 0,
    'description' => 'Units for Single Collection Image widths and heights. Available options: px, em, %',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_units',
    'label' => 'Units',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 9,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Collection Image Height');
  t('Collection Image Links');
  t('Collection Image Margin');
  t('Collection Image Width');
  t('Description');
  t('Description Color');
  t('Featured Image');
  t('Figure Class');
  t('Font color of description');
  t('Height of Single Collection Image images');
  t('Images for links you want hovering over the Main Image. 1 to 1 relationship with Collection Image Links');
  t('Links for Single Collection Image images. 1 to 1 relationship with Single Collection Images (1st link -> 1st Single Collection Image, 2nd link -> 2nd Single Collection Image, etc)');
  t('Open sublinks in new tab?');
  t('Optional description text');
  t('Optional margin on title. Defaults to 0px 0px 0px 0px. See <a href="https://www.w3schools.com/css/css_margin.asp" target="_blank">https://www.w3schools.com/css/css_margin.asp</a> for documentation.');
  t('Optional target="_blank"');
  t('Single Collection Image');
  t('Space between Single Collection Image images. Defaults to "0px 0px 0px 0px". <br>
Key: "Top Right Bottom Left". <br>
See <a href="https://www.w3schools.com/css/css_margin.asp" target="_blank">https://www.w3schools.com/css/css_margin.asp</a> for documentation.');
  t('The hover effect you wish to use. Visit <a href="https://tympanus.net/Development/HoverEffectIdeas/" target="_blank">https://tympanus.net/Development/HoverEffectIdeas/</a> for examples.');
  t('This is your main image');
  t('Title Color');
  t('Title Margin');
  t('Title text color.');
  t('Units');
  t('Units for Single Collection Image widths and heights. Available options: px, em, %');
  t('Width of Single Collection Image images');

  return $field_instances;
}
