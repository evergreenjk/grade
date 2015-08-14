<?php
/**
 * @file
 * features_grade.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function features_grade_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'bulk_operation';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'subject_list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Subject List';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'field_subject_code' => 'field_subject_code',
    'title' => 'title',
    'field_branch' => 'field_branch',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_subject_code' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_branch' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '25';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 1,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Enter marks',
      'settings' => array(
        'url' => 'mark-entry/',
      ),
    ),
  );
  /* Field: Content: Subject Code */
  $handler->display->display_options['fields']['field_subject_code']['id'] = 'field_subject_code';
  $handler->display->display_options['fields']['field_subject_code']['table'] = 'field_data_field_subject_code';
  $handler->display->display_options['fields']['field_subject_code']['field'] = 'field_subject_code';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Subject Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Select Branch */
  $handler->display->display_options['fields']['field_branch']['id'] = 'field_branch';
  $handler->display->display_options['fields']['field_branch']['table'] = 'field_data_field_branch';
  $handler->display->display_options['fields']['field_branch']['field'] = 'field_branch';
  $handler->display->display_options['fields']['field_branch']['label'] = 'Semester';
  $handler->display->display_options['fields']['field_branch']['type'] = 'cshs_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_branch']['settings'] = array(
    'separator' => ' » ',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'subject' => 'subject',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Subject Code (field_subject_code) */
  $handler->display->display_options['filters']['field_subject_code_value']['id'] = 'field_subject_code_value';
  $handler->display->display_options['filters']['field_subject_code_value']['table'] = 'field_data_field_subject_code';
  $handler->display->display_options['filters']['field_subject_code_value']['field'] = 'field_subject_code_value';
  $handler->display->display_options['filters']['field_subject_code_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_subject_code_value']['group'] = 2;
  $handler->display->display_options['filters']['field_subject_code_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_subject_code_value']['expose']['operator_id'] = 'field_subject_code_value_op';
  $handler->display->display_options['filters']['field_subject_code_value']['expose']['label'] = 'Subject Code';
  $handler->display->display_options['filters']['field_subject_code_value']['expose']['operator'] = 'field_subject_code_value_op';
  $handler->display->display_options['filters']['field_subject_code_value']['expose']['identifier'] = 'field_subject_code_value';
  $handler->display->display_options['filters']['field_subject_code_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Subject Name (field_subject_name) */
  $handler->display->display_options['filters']['field_subject_name_value']['id'] = 'field_subject_name_value';
  $handler->display->display_options['filters']['field_subject_name_value']['table'] = 'field_data_field_subject_name';
  $handler->display->display_options['filters']['field_subject_name_value']['field'] = 'field_subject_name_value';
  $handler->display->display_options['filters']['field_subject_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_subject_name_value']['group'] = 2;
  $handler->display->display_options['filters']['field_subject_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_subject_name_value']['expose']['operator_id'] = 'field_subject_name_value_op';
  $handler->display->display_options['filters']['field_subject_name_value']['expose']['label'] = 'Subject Name';
  $handler->display->display_options['filters']['field_subject_name_value']['expose']['operator'] = 'field_subject_name_value_op';
  $handler->display->display_options['filters']['field_subject_name_value']['expose']['identifier'] = 'field_subject_name_value';
  $handler->display->display_options['filters']['field_subject_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Select Branch (field_branch) */
  $handler->display->display_options['filters']['field_branch_tid']['id'] = 'field_branch_tid';
  $handler->display->display_options['filters']['field_branch_tid']['table'] = 'field_data_field_branch';
  $handler->display->display_options['filters']['field_branch_tid']['field'] = 'field_branch_tid';
  $handler->display->display_options['filters']['field_branch_tid']['value'] = array(
    0 => '_none',
  );
  $handler->display->display_options['filters']['field_branch_tid']['group'] = 2;
  $handler->display->display_options['filters']['field_branch_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_branch_tid']['expose']['operator_id'] = 'field_branch_tid_op';
  $handler->display->display_options['filters']['field_branch_tid']['expose']['label'] = 'Select Semester';
  $handler->display->display_options['filters']['field_branch_tid']['expose']['operator'] = 'field_branch_tid_op';
  $handler->display->display_options['filters']['field_branch_tid']['expose']['identifier'] = 'field_branch_tid';
  $handler->display->display_options['filters']['field_branch_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_branch_tid']['vocabulary'] = 'branch';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'subject/list';
  $export['bulk_operation'] = $view;

  $view = new view();
  $view->name = 'reports';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Examination Reports';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Marks for %1';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_stu_roll_no' => 'field_stu_roll_no',
    'field_stu_reg_no' => 'field_stu_reg_no',
    'field_student_name' => 'field_student_name',
    'field_section' => 'field_section',
    'field_subject_name' => 'field_subject_name',
    'field_mark_score_editable' => 'field_mark_score_editable',
    'field_mark_score2_editable' => 'field_mark_score2_editable',
    'field_mark_score3_editable' => 'field_mark_score3_editable',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_stu_roll_no' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_stu_reg_no' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_student_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_section' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_subject_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mark_score_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mark_score2_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mark_score3_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<?php
 $entity_detail  = \'\';
$mark1 = \'\';
$passed = 0;
$failed = 0;
$attempt = 0;
foreach($results as $result){ 
 $entity_detail = $result->_field_data[\'nid\'][\'entity\'];
 $mark1 = $entity_detail->field_mark_score[\'und\'][0][\'value\'];

 if($mark1 >= 50){
   $passed =  $passed + 1;
 }
 if($mark1 != -1 && $mark1 < 50){
   $failed =  $failed + 1;
 }
 if($mark1 == -1){
   $attempt =  $attempt + 1;
 }
}
$attended =  $passed+$failed;
?>
<h5>Number of Students Attended: <?php print $attended; ?> </h5>
<h5>Number of Students Passed: <?php print $passed; ?> </h5>
<h5>Number of Students Failed: <?php print $failed; ?> </h5>
<h5>Absent: <?php print $attempt; ?> </h5>
<h3>Pass Percentage: <?php print round($passed/$attended*100, 2); ?>% </h3>';
  /* Footer: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No students are imported for the subject %1
<a href=\'/admin/import-data\'>Click here to import students for selected subject </a>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  /* Relationship: Content: Student (field_mark_student) */
  $handler->display->display_options['relationships']['field_mark_student_nid']['id'] = 'field_mark_student_nid';
  $handler->display->display_options['relationships']['field_mark_student_nid']['table'] = 'field_data_field_mark_student';
  $handler->display->display_options['relationships']['field_mark_student_nid']['field'] = 'field_mark_student_nid';
  $handler->display->display_options['relationships']['field_mark_student_nid']['delta'] = '-1';
  /* Relationship: Content: Subject (field_mark_subject) */
  $handler->display->display_options['relationships']['field_mark_subject_nid']['id'] = 'field_mark_subject_nid';
  $handler->display->display_options['relationships']['field_mark_subject_nid']['table'] = 'field_data_field_mark_subject';
  $handler->display->display_options['relationships']['field_mark_subject_nid']['field'] = 'field_mark_subject_nid';
  $handler->display->display_options['relationships']['field_mark_subject_nid']['delta'] = '-1';
  /* Field: Content: Roll No */
  $handler->display->display_options['fields']['field_stu_roll_no']['id'] = 'field_stu_roll_no';
  $handler->display->display_options['fields']['field_stu_roll_no']['table'] = 'field_data_field_stu_roll_no';
  $handler->display->display_options['fields']['field_stu_roll_no']['field'] = 'field_stu_roll_no';
  $handler->display->display_options['fields']['field_stu_roll_no']['relationship'] = 'field_mark_student_nid';
  /* Field: Content: Registration No */
  $handler->display->display_options['fields']['field_stu_reg_no']['id'] = 'field_stu_reg_no';
  $handler->display->display_options['fields']['field_stu_reg_no']['table'] = 'field_data_field_stu_reg_no';
  $handler->display->display_options['fields']['field_stu_reg_no']['field'] = 'field_stu_reg_no';
  $handler->display->display_options['fields']['field_stu_reg_no']['relationship'] = 'field_mark_student_nid';
  /* Field: Content: Student Name */
  $handler->display->display_options['fields']['field_student_name']['id'] = 'field_student_name';
  $handler->display->display_options['fields']['field_student_name']['table'] = 'field_data_field_student_name';
  $handler->display->display_options['fields']['field_student_name']['field'] = 'field_student_name';
  $handler->display->display_options['fields']['field_student_name']['relationship'] = 'field_mark_student_nid';
  /* Field: Content: Select Section */
  $handler->display->display_options['fields']['field_section']['id'] = 'field_section';
  $handler->display->display_options['fields']['field_section']['table'] = 'field_data_field_section';
  $handler->display->display_options['fields']['field_section']['field'] = 'field_section';
  $handler->display->display_options['fields']['field_section']['relationship'] = 'field_mark_student_nid';
  $handler->display->display_options['fields']['field_section']['label'] = 'Section';
  $handler->display->display_options['fields']['field_section']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_section']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Subject Name */
  $handler->display->display_options['fields']['field_subject_name']['id'] = 'field_subject_name';
  $handler->display->display_options['fields']['field_subject_name']['table'] = 'field_data_field_subject_name';
  $handler->display->display_options['fields']['field_subject_name']['field'] = 'field_subject_name';
  $handler->display->display_options['fields']['field_subject_name']['relationship'] = 'field_mark_subject_nid';
  $handler->display->display_options['fields']['field_subject_name']['exclude'] = TRUE;
  /* Field: Content: Test Mark1 (editable) */
  $handler->display->display_options['fields']['field_mark_score_editable']['id'] = 'field_mark_score_editable';
  $handler->display->display_options['fields']['field_mark_score_editable']['table'] = 'field_data_field_mark_score';
  $handler->display->display_options['fields']['field_mark_score_editable']['field'] = 'field_mark_score_editable';
  $handler->display->display_options['fields']['field_mark_score_editable']['label'] = 'Test Mark1';
  $handler->display->display_options['fields']['field_mark_score_editable']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_mark_score_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_mark_score_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_mark_score_editable']['suppress_description'] = 0;
  /* Field: Content: Test Mark2 (editable) */
  $handler->display->display_options['fields']['field_mark_score2_editable']['id'] = 'field_mark_score2_editable';
  $handler->display->display_options['fields']['field_mark_score2_editable']['table'] = 'field_data_field_mark_score2';
  $handler->display->display_options['fields']['field_mark_score2_editable']['field'] = 'field_mark_score2_editable';
  $handler->display->display_options['fields']['field_mark_score2_editable']['label'] = 'Test Mark2';
  $handler->display->display_options['fields']['field_mark_score2_editable']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_mark_score2_editable']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_mark_score2_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_mark_score2_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_mark_score2_editable']['suppress_description'] = 0;
  /* Field: Content: Test Mark3 (editable) */
  $handler->display->display_options['fields']['field_mark_score3_editable']['id'] = 'field_mark_score3_editable';
  $handler->display->display_options['fields']['field_mark_score3_editable']['table'] = 'field_data_field_mark_score3';
  $handler->display->display_options['fields']['field_mark_score3_editable']['field'] = 'field_mark_score3_editable';
  $handler->display->display_options['fields']['field_mark_score3_editable']['label'] = 'Test Mark3';
  $handler->display->display_options['fields']['field_mark_score3_editable']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_mark_score3_editable']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_mark_score3_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_mark_score3_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_mark_score3_editable']['suppress_description'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Subject (field_mark_subject) */
  $handler->display->display_options['arguments']['field_mark_subject_nid']['id'] = 'field_mark_subject_nid';
  $handler->display->display_options['arguments']['field_mark_subject_nid']['table'] = 'field_data_field_mark_subject';
  $handler->display->display_options['arguments']['field_mark_subject_nid']['field'] = 'field_mark_subject_nid';
  $handler->display->display_options['arguments']['field_mark_subject_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_mark_subject_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_mark_subject_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_mark_subject_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_mark_subject_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_mark_subject_nid']['break_phrase'] = TRUE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/reports/marks/%';
  $export['reports'] = $view;

  $view = new view();
  $view->name = 'student_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'student list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'student list';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_stu_roll_no' => 'field_stu_roll_no',
    'field_stu_reg_no_editable' => 'field_stu_reg_no_editable',
    'field_student_name' => 'field_student_name',
    'field_branch' => 'field_branch',
    'field_section' => 'field_section',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_stu_roll_no' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_stu_reg_no_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_student_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_branch' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_section' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Roll No */
  $handler->display->display_options['fields']['field_stu_roll_no']['id'] = 'field_stu_roll_no';
  $handler->display->display_options['fields']['field_stu_roll_no']['table'] = 'field_data_field_stu_roll_no';
  $handler->display->display_options['fields']['field_stu_roll_no']['field'] = 'field_stu_roll_no';
  /* Field: Content: Registration No (editable) */
  $handler->display->display_options['fields']['field_stu_reg_no_editable']['id'] = 'field_stu_reg_no_editable';
  $handler->display->display_options['fields']['field_stu_reg_no_editable']['table'] = 'field_data_field_stu_reg_no';
  $handler->display->display_options['fields']['field_stu_reg_no_editable']['field'] = 'field_stu_reg_no_editable';
  $handler->display->display_options['fields']['field_stu_reg_no_editable']['label'] = 'Registration No';
  $handler->display->display_options['fields']['field_stu_reg_no_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_stu_reg_no_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_stu_reg_no_editable']['suppress_description'] = 0;
  /* Field: Content: Student Name */
  $handler->display->display_options['fields']['field_student_name']['id'] = 'field_student_name';
  $handler->display->display_options['fields']['field_student_name']['table'] = 'field_data_field_student_name';
  $handler->display->display_options['fields']['field_student_name']['field'] = 'field_student_name';
  /* Field: Content: Select Branch */
  $handler->display->display_options['fields']['field_branch']['id'] = 'field_branch';
  $handler->display->display_options['fields']['field_branch']['table'] = 'field_data_field_branch';
  $handler->display->display_options['fields']['field_branch']['field'] = 'field_branch';
  $handler->display->display_options['fields']['field_branch']['label'] = 'Semester';
  $handler->display->display_options['fields']['field_branch']['type'] = 'cshs_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_branch']['settings'] = array(
    'separator' => ' » ',
  );
  /* Field: Content: Select Section */
  $handler->display->display_options['fields']['field_section']['id'] = 'field_section';
  $handler->display->display_options['fields']['field_section']['table'] = 'field_data_field_section';
  $handler->display->display_options['fields']['field_section']['field'] = 'field_section';
  $handler->display->display_options['fields']['field_section']['label'] = 'Section';
  $handler->display->display_options['fields']['field_section']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '2';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'student' => 'student',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Roll No (field_stu_roll_no) */
  $handler->display->display_options['filters']['field_stu_roll_no_value']['id'] = 'field_stu_roll_no_value';
  $handler->display->display_options['filters']['field_stu_roll_no_value']['table'] = 'field_data_field_stu_roll_no';
  $handler->display->display_options['filters']['field_stu_roll_no_value']['field'] = 'field_stu_roll_no_value';
  $handler->display->display_options['filters']['field_stu_roll_no_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_stu_roll_no_value']['group'] = 2;
  $handler->display->display_options['filters']['field_stu_roll_no_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_stu_roll_no_value']['expose']['operator_id'] = 'field_stu_roll_no_value_op';
  $handler->display->display_options['filters']['field_stu_roll_no_value']['expose']['label'] = 'Roll No';
  $handler->display->display_options['filters']['field_stu_roll_no_value']['expose']['operator'] = 'field_stu_roll_no_value_op';
  $handler->display->display_options['filters']['field_stu_roll_no_value']['expose']['identifier'] = 'field_stu_roll_no_value';
  $handler->display->display_options['filters']['field_stu_roll_no_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Registration No (field_stu_reg_no) */
  $handler->display->display_options['filters']['field_stu_reg_no_value']['id'] = 'field_stu_reg_no_value';
  $handler->display->display_options['filters']['field_stu_reg_no_value']['table'] = 'field_data_field_stu_reg_no';
  $handler->display->display_options['filters']['field_stu_reg_no_value']['field'] = 'field_stu_reg_no_value';
  $handler->display->display_options['filters']['field_stu_reg_no_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_stu_reg_no_value']['group'] = 2;
  $handler->display->display_options['filters']['field_stu_reg_no_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_stu_reg_no_value']['expose']['operator_id'] = 'field_stu_reg_no_value_op';
  $handler->display->display_options['filters']['field_stu_reg_no_value']['expose']['label'] = 'Registration No';
  $handler->display->display_options['filters']['field_stu_reg_no_value']['expose']['operator'] = 'field_stu_reg_no_value_op';
  $handler->display->display_options['filters']['field_stu_reg_no_value']['expose']['identifier'] = 'field_stu_reg_no_value';
  $handler->display->display_options['filters']['field_stu_reg_no_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Student Name (field_student_name) */
  $handler->display->display_options['filters']['field_student_name_value']['id'] = 'field_student_name_value';
  $handler->display->display_options['filters']['field_student_name_value']['table'] = 'field_data_field_student_name';
  $handler->display->display_options['filters']['field_student_name_value']['field'] = 'field_student_name_value';
  $handler->display->display_options['filters']['field_student_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_student_name_value']['group'] = 2;
  $handler->display->display_options['filters']['field_student_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_student_name_value']['expose']['operator_id'] = 'field_student_name_value_op';
  $handler->display->display_options['filters']['field_student_name_value']['expose']['label'] = 'Student Name';
  $handler->display->display_options['filters']['field_student_name_value']['expose']['operator'] = 'field_student_name_value_op';
  $handler->display->display_options['filters']['field_student_name_value']['expose']['identifier'] = 'field_student_name_value';
  $handler->display->display_options['filters']['field_student_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Select Section (field_section) */
  $handler->display->display_options['filters']['field_section_tid']['id'] = 'field_section_tid';
  $handler->display->display_options['filters']['field_section_tid']['table'] = 'field_data_field_section';
  $handler->display->display_options['filters']['field_section_tid']['field'] = 'field_section_tid';
  $handler->display->display_options['filters']['field_section_tid']['group'] = 2;
  $handler->display->display_options['filters']['field_section_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_section_tid']['expose']['operator_id'] = 'field_section_tid_op';
  $handler->display->display_options['filters']['field_section_tid']['expose']['label'] = 'Select Section';
  $handler->display->display_options['filters']['field_section_tid']['expose']['operator'] = 'field_section_tid_op';
  $handler->display->display_options['filters']['field_section_tid']['expose']['identifier'] = 'field_section_tid';
  $handler->display->display_options['filters']['field_section_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_section_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_section_tid']['vocabulary'] = 'section';
  $handler->display->display_options['filters']['field_section_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Select Branch (field_branch) */
  $handler->display->display_options['filters']['field_branch_tid']['id'] = 'field_branch_tid';
  $handler->display->display_options['filters']['field_branch_tid']['table'] = 'field_data_field_branch';
  $handler->display->display_options['filters']['field_branch_tid']['field'] = 'field_branch_tid';
  $handler->display->display_options['filters']['field_branch_tid']['value'] = array(
    0 => '_none',
  );
  $handler->display->display_options['filters']['field_branch_tid']['group'] = 2;
  $handler->display->display_options['filters']['field_branch_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_branch_tid']['expose']['operator_id'] = 'field_branch_tid_op';
  $handler->display->display_options['filters']['field_branch_tid']['expose']['label'] = 'Select Semester';
  $handler->display->display_options['filters']['field_branch_tid']['expose']['operator'] = 'field_branch_tid_op';
  $handler->display->display_options['filters']['field_branch_tid']['expose']['identifier'] = 'field_branch_tid';
  $handler->display->display_options['filters']['field_branch_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_branch_tid']['vocabulary'] = 'branch';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'student-list';
  $export['student_list'] = $view;

  $view = new view();
  $view->name = 'subject_reference_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Subject Reference View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Subject Code */
  $handler->display->display_options['fields']['field_subject_code']['id'] = 'field_subject_code';
  $handler->display->display_options['fields']['field_subject_code']['table'] = 'field_data_field_subject_code';
  $handler->display->display_options['fields']['field_subject_code']['field'] = 'field_subject_code';
  $handler->display->display_options['fields']['field_subject_code']['label'] = '';
  $handler->display->display_options['fields']['field_subject_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_subject_code']['element_label_colon'] = FALSE;
  /* Field: Content: Subject Name */
  $handler->display->display_options['fields']['field_subject_name']['id'] = 'field_subject_name';
  $handler->display->display_options['fields']['field_subject_name']['table'] = 'field_data_field_subject_name';
  $handler->display->display_options['fields']['field_subject_name']['field'] = 'field_subject_name';
  $handler->display->display_options['fields']['field_subject_name']['label'] = '';
  $handler->display->display_options['fields']['field_subject_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_subject_name']['alter']['text'] = '[field_subject_code] - [field_subject_name]';
  $handler->display->display_options['fields']['field_subject_name']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'subject' => 'subject',
  );

  /* Display: References */
  $handler = $view->new_display('references', 'References', 'references_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'references_style';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'references_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['subject_reference_view'] = $view;

  $view = new view();
  $view->name = 'tt';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Enter marks';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Enter Marks for %1';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_stu_roll_no' => 'field_stu_roll_no',
    'field_stu_reg_no' => 'field_stu_reg_no',
    'field_student_name' => 'field_student_name',
    'field_section' => 'field_section',
    'field_subject_name' => 'field_subject_name',
    'field_mark_score_editable' => 'field_mark_score_editable',
    'field_mark_score2_editable' => 'field_mark_score2_editable',
    'field_mark_score3_editable' => 'field_mark_score3_editable',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_stu_roll_no' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_stu_reg_no' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_student_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_section' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_subject_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mark_score_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mark_score2_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mark_score3_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No students are imported for the subject %1
<a href=\'/admin/import-data\'>Click here to import students for selected subject </a>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  /* Relationship: Content: Student (field_mark_student) */
  $handler->display->display_options['relationships']['field_mark_student_nid']['id'] = 'field_mark_student_nid';
  $handler->display->display_options['relationships']['field_mark_student_nid']['table'] = 'field_data_field_mark_student';
  $handler->display->display_options['relationships']['field_mark_student_nid']['field'] = 'field_mark_student_nid';
  $handler->display->display_options['relationships']['field_mark_student_nid']['delta'] = '-1';
  /* Relationship: Content: Subject (field_mark_subject) */
  $handler->display->display_options['relationships']['field_mark_subject_nid']['id'] = 'field_mark_subject_nid';
  $handler->display->display_options['relationships']['field_mark_subject_nid']['table'] = 'field_data_field_mark_subject';
  $handler->display->display_options['relationships']['field_mark_subject_nid']['field'] = 'field_mark_subject_nid';
  $handler->display->display_options['relationships']['field_mark_subject_nid']['delta'] = '-1';
  /* Field: Content: Roll No */
  $handler->display->display_options['fields']['field_stu_roll_no']['id'] = 'field_stu_roll_no';
  $handler->display->display_options['fields']['field_stu_roll_no']['table'] = 'field_data_field_stu_roll_no';
  $handler->display->display_options['fields']['field_stu_roll_no']['field'] = 'field_stu_roll_no';
  $handler->display->display_options['fields']['field_stu_roll_no']['relationship'] = 'field_mark_student_nid';
  /* Field: Content: Registration No */
  $handler->display->display_options['fields']['field_stu_reg_no']['id'] = 'field_stu_reg_no';
  $handler->display->display_options['fields']['field_stu_reg_no']['table'] = 'field_data_field_stu_reg_no';
  $handler->display->display_options['fields']['field_stu_reg_no']['field'] = 'field_stu_reg_no';
  $handler->display->display_options['fields']['field_stu_reg_no']['relationship'] = 'field_mark_student_nid';
  /* Field: Content: Student Name */
  $handler->display->display_options['fields']['field_student_name']['id'] = 'field_student_name';
  $handler->display->display_options['fields']['field_student_name']['table'] = 'field_data_field_student_name';
  $handler->display->display_options['fields']['field_student_name']['field'] = 'field_student_name';
  $handler->display->display_options['fields']['field_student_name']['relationship'] = 'field_mark_student_nid';
  /* Field: Content: Select Section */
  $handler->display->display_options['fields']['field_section']['id'] = 'field_section';
  $handler->display->display_options['fields']['field_section']['table'] = 'field_data_field_section';
  $handler->display->display_options['fields']['field_section']['field'] = 'field_section';
  $handler->display->display_options['fields']['field_section']['relationship'] = 'field_mark_student_nid';
  $handler->display->display_options['fields']['field_section']['label'] = 'Section';
  $handler->display->display_options['fields']['field_section']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_section']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Subject Name */
  $handler->display->display_options['fields']['field_subject_name']['id'] = 'field_subject_name';
  $handler->display->display_options['fields']['field_subject_name']['table'] = 'field_data_field_subject_name';
  $handler->display->display_options['fields']['field_subject_name']['field'] = 'field_subject_name';
  $handler->display->display_options['fields']['field_subject_name']['relationship'] = 'field_mark_subject_nid';
  $handler->display->display_options['fields']['field_subject_name']['exclude'] = TRUE;
  /* Field: Content: Test Mark1 (editable) */
  $handler->display->display_options['fields']['field_mark_score_editable']['id'] = 'field_mark_score_editable';
  $handler->display->display_options['fields']['field_mark_score_editable']['table'] = 'field_data_field_mark_score';
  $handler->display->display_options['fields']['field_mark_score_editable']['field'] = 'field_mark_score_editable';
  $handler->display->display_options['fields']['field_mark_score_editable']['label'] = 'Test Mark1';
  $handler->display->display_options['fields']['field_mark_score_editable']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_mark_score_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_mark_score_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_mark_score_editable']['suppress_description'] = 0;
  /* Field: Content: Test Mark2 (editable) */
  $handler->display->display_options['fields']['field_mark_score2_editable']['id'] = 'field_mark_score2_editable';
  $handler->display->display_options['fields']['field_mark_score2_editable']['table'] = 'field_data_field_mark_score2';
  $handler->display->display_options['fields']['field_mark_score2_editable']['field'] = 'field_mark_score2_editable';
  $handler->display->display_options['fields']['field_mark_score2_editable']['label'] = 'Test Mark2';
  $handler->display->display_options['fields']['field_mark_score2_editable']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_mark_score2_editable']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_mark_score2_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_mark_score2_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_mark_score2_editable']['suppress_description'] = 0;
  /* Field: Content: Test Mark3 (editable) */
  $handler->display->display_options['fields']['field_mark_score3_editable']['id'] = 'field_mark_score3_editable';
  $handler->display->display_options['fields']['field_mark_score3_editable']['table'] = 'field_data_field_mark_score3';
  $handler->display->display_options['fields']['field_mark_score3_editable']['field'] = 'field_mark_score3_editable';
  $handler->display->display_options['fields']['field_mark_score3_editable']['label'] = 'Test Mark3';
  $handler->display->display_options['fields']['field_mark_score3_editable']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_mark_score3_editable']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_mark_score3_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_mark_score3_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_mark_score3_editable']['suppress_description'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Subject (field_mark_subject) */
  $handler->display->display_options['arguments']['field_mark_subject_nid']['id'] = 'field_mark_subject_nid';
  $handler->display->display_options['arguments']['field_mark_subject_nid']['table'] = 'field_data_field_mark_subject';
  $handler->display->display_options['arguments']['field_mark_subject_nid']['field'] = 'field_mark_subject_nid';
  $handler->display->display_options['arguments']['field_mark_subject_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_mark_subject_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_mark_subject_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_mark_subject_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_mark_subject_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_mark_subject_nid']['break_phrase'] = TRUE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Roll No (field_stu_roll_no) */
  $handler->display->display_options['filters']['field_stu_roll_no_value']['id'] = 'field_stu_roll_no_value';
  $handler->display->display_options['filters']['field_stu_roll_no_value']['table'] = 'field_data_field_stu_roll_no';
  $handler->display->display_options['filters']['field_stu_roll_no_value']['field'] = 'field_stu_roll_no_value';
  $handler->display->display_options['filters']['field_stu_roll_no_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_stu_roll_no_value']['group'] = 2;
  $handler->display->display_options['filters']['field_stu_roll_no_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_stu_roll_no_value']['expose']['operator_id'] = 'field_stu_roll_no_value_op';
  $handler->display->display_options['filters']['field_stu_roll_no_value']['expose']['label'] = 'Roll No';
  $handler->display->display_options['filters']['field_stu_roll_no_value']['expose']['operator'] = 'field_stu_roll_no_value_op';
  $handler->display->display_options['filters']['field_stu_roll_no_value']['expose']['identifier'] = 'field_stu_roll_no_value';
  $handler->display->display_options['filters']['field_stu_roll_no_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Student Name (field_student_name) */
  $handler->display->display_options['filters']['field_student_name_value']['id'] = 'field_student_name_value';
  $handler->display->display_options['filters']['field_student_name_value']['table'] = 'field_data_field_student_name';
  $handler->display->display_options['filters']['field_student_name_value']['field'] = 'field_student_name_value';
  $handler->display->display_options['filters']['field_student_name_value']['relationship'] = 'field_mark_student_nid';
  $handler->display->display_options['filters']['field_student_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_student_name_value']['group'] = 2;
  $handler->display->display_options['filters']['field_student_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_student_name_value']['expose']['operator_id'] = 'field_student_name_value_op';
  $handler->display->display_options['filters']['field_student_name_value']['expose']['label'] = 'Student Name';
  $handler->display->display_options['filters']['field_student_name_value']['expose']['operator'] = 'field_student_name_value_op';
  $handler->display->display_options['filters']['field_student_name_value']['expose']['identifier'] = 'field_student_name_value';
  $handler->display->display_options['filters']['field_student_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'mark-entry/%';
  $export['tt'] = $view;

  return $export;
}
