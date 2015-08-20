<?php
/**
 * @file
 * features_grade.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function features_grade_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_mark-entry:admin/subject/list
  $menu_links['main-menu_mark-entry:admin/subject/list'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/subject/list',
    'router_path' => 'admin/subject/list',
    'link_title' => 'Mark Entry',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_mark-entry:admin/subject/list',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_semester-list:admin/semester/list
  $menu_links['main-menu_semester-list:admin/semester/list'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/semester/list',
    'router_path' => 'admin/semester/list',
    'link_title' => 'Semester List',
    'options' => array(
      'identifier' => 'main-menu_semester-list:admin/semester/list',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_subject-list:admin/subject/list
  $menu_links['main-menu_subject-list:admin/subject/list'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/subject/list',
    'router_path' => 'admin/subject/list',
    'link_title' => 'Subject List',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_subject-list:admin/subject/list',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: user-menu_log-out:user/logout
  $menu_links['user-menu_log-out:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(
      'identifier' => 'user-menu_log-out:user/logout',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 0,
  );
  // Exported menu link: user-menu_user-account:user
  $menu_links['user-menu_user-account:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'User account',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'user-menu_user-account:user',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Home');
  t('Log out');
  t('Mark Entry');
  t('Semester List');
  t('Subject List');
  t('User account');

  return $menu_links;
}
