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
  $variables['rows'] = islandora_xml_metadata_view($object);
}

/**
 * Implements hook_preprocess().
 */
function islandora_xml_metadata_preprocess_islandora_xml_metadata_rows(array &$variables) {

}