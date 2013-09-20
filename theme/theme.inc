<?php
/**
 * @file
 * Theme functions for the islandora_xml_metadata module.
 */



/**
 * Implements hook_preprocess().
 */
function islandora_xml_metadata_preprocess_islandora_xml_metadata_display(array &$variables) {
  $object = $variables['islandora_object'];
  $rows = islandora_xml_metadata_view($object);
  $variables['rows'] = theme('islandora_xml_metadata_rows', array('rows' => $rows));

  //
  //$variables['rows'] = islandora_xml_metadata_view($object);
}

/**
 * Implements hook_preprocess().
 */
function islandora_xml_metadata_preprocess_islandora_xml_metadata_rows(array &$variables) {
  $rows = $variables['rows'];//?
}