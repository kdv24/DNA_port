<?php
/**
 * @file
 * blog_articles.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function blog_articles_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_blog:node/56
  $menu_links['main-menu_blog:node/56'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/56',
    'router_path' => 'node/%',
    'link_title' => 'Blog',
    'options' => array(
      'identifier' => 'main-menu_blog:node/56',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Blog');


  return $menu_links;
}
