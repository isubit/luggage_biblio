<?php
/**
 * @file
 * luggage_biblio.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function luggage_biblio_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_authors:publications/authors
  $menu_links['main-menu_authors:publications/authors'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'publications/authors',
    'router_path' => 'publications/authors',
    'link_title' => 'Authors',
    'options' => array(
      'identifier' => 'main-menu_authors:publications/authors',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 0,
    'parent_identifier' => 'main-menu_publications:publications',
  );
  // Exported menu link: main-menu_import:publications/import
  $menu_links['main-menu_import:publications/import'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'publications/import',
    'router_path' => 'publications/import',
    'link_title' => 'Import',
    'options' => array(
      'identifier' => 'main-menu_import:publications/import',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 0,
    'parent_identifier' => 'main-menu_publications:publications',
  );
  // Exported menu link: main-menu_keywords:publications/keywords
  $menu_links['main-menu_keywords:publications/keywords'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'publications/keywords',
    'router_path' => 'publications/keywords',
    'link_title' => 'Keywords',
    'options' => array(
      'identifier' => 'main-menu_keywords:publications/keywords',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 0,
    'parent_identifier' => 'main-menu_publications:publications',
  );
  // Exported menu link: main-menu_publications:publications
  $menu_links['main-menu_publications:publications'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'publications',
    'router_path' => 'publications',
    'link_title' => 'Publications',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_publications:publications',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Authors');
  t('Import');
  t('Keywords');
  t('Publications');

  return $menu_links;
}
