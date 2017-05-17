<?php
$images = [];
$imageLinks = [];
$fieldCollectionImageLinks = $element['#object']->field_collection_image_links['und'];
$imageWidth = $element['#object']->field_collection_image_width['und']['0']['value'];
$imageHeight = $element['#object']->field_collection_image_height['und']['0']['value'];
$newTab = $element['#object']->field_new_tab['und']['0']['value'];
$units = $element['#object']->field_units['und']['0']['value'];
$linkCount = count($fieldCollectionImageLinks);
$filepath = variable_get('file_public_path', conf_path() . '/files');


for ($j=0; $j < $linkCount; $j++) {
 array_push($imageLinks, $fieldCollectionImageLinks[$j]['url']);
}
foreach($items as $values => $item) {
  array_push($images, $item['#item']['filename']);
}

for ($i=0; $i < $linkCount; $i++) {
  echo '<a href="' . $imageLinks[$i] . '"' . $newTab . '><img class="collection-image-' . $i . '" src="../' . $filepath . '/' . $images[$i] . '" style="width:' . $imageWidth . $units . ';height:' . $imageHeight . $units . '"></a>';
}

?>
