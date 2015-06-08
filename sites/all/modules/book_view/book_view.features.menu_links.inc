<?php
/**
 * @file
 * book_view.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function book_view_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_book-reviews:book-reviews
  $menu_links['main-menu_book-reviews:book-reviews'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'book-reviews',
    'router_path' => 'book-reviews',
    'link_title' => 'Book Reviews',
    'options' => array(
      'identifier' => 'main-menu_book-reviews:book-reviews',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: navigation_book-review:node/add/book-review
  $menu_links['navigation_book-review:node/add/book-review'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/book-review',
    'router_path' => 'node/add/book-review',
    'link_title' => 'Book Review',
    'options' => array(
      'attributes' => array(
        'title' => 'Form for creating a book review',
      ),
      'identifier' => 'navigation_book-review:node/add/book-review',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Book Review');
  t('Book Reviews');


  return $menu_links;
}
