<?php
/**
 * @file
 * features_grade.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function features_grade_user_default_roles() {
  $roles = array();

  // Exported role: staff.
  $roles['staff'] = array(
    'name' => 'staff',
    'weight' => 3,
  );

  return $roles;
}
