<?php
/**
 * @file
 * Views include file with views hooks.
 */

/**
 * Implementation of hook_views_plugins().
 */
function views_scribus_views_plugins() {
  return array(
    'style' => array(
      'views_scribus' => array(
        'title' => t('SCRIBUS file'),
        'theme' => 'views_view_scribus',
        'help' => t('Display the view as a Scribus html file.'),
        'handler' => 'views_scribus_style_plugin',
        'export headers' => array('Content-Type' => 'text/xml'),
        'export feed type' => 'scribus',
        'export feed text' => 'SCRIBUS',
        'export feed file' => 'view-%view.scribus',
        'parent' => 'views_scribus',
        'uses row plugin' => FALSE,
        'uses fields' => TRUE,
        'uses options' => TRUE,
        'type' => 'data_export',
      ),
    ),
  );
}

?>
