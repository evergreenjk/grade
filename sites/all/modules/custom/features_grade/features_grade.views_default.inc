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
    'field_sub_section_staff' => 'field_sub_section_staff',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_subject_code' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_branch' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sub_section_staff' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'Select';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 0;
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
        'url' => 'admin/mark-entry/',
      ),
    ),
    'action::ers_bulk_upload_action' => array(
      'selected' => 1,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'View Subject Wise Report',
      'settings' => array(
        'url' => 'admin/reports/marks/',
      ),
    ),
  );
  /* Field: Content: Subject Code */
  $handler->display->display_options['fields']['field_subject_code']['id'] = 'field_subject_code';
  $handler->display->display_options['fields']['field_subject_code']['table'] = 'field_data_field_subject_code';
  $handler->display->display_options['fields']['field_subject_code']['field'] = 'field_subject_code';
  $handler->display->display_options['fields']['field_subject_code']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Subject Code - Subject Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Select Branch */
  $handler->display->display_options['fields']['field_branch']['id'] = 'field_branch';
  $handler->display->display_options['fields']['field_branch']['table'] = 'field_data_field_branch';
  $handler->display->display_options['fields']['field_branch']['field'] = 'field_branch';
  $handler->display->display_options['fields']['field_branch']['label'] = 'Degree';
  $handler->display->display_options['fields']['field_branch']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_branch']['type'] = 'cshs_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_branch']['settings'] = array(
    'separator' => ' » ',
  );
  /* Field: Content: Select Section/Staff */
  $handler->display->display_options['fields']['field_sub_section_staff']['id'] = 'field_sub_section_staff';
  $handler->display->display_options['fields']['field_sub_section_staff']['table'] = 'field_data_field_sub_section_staff';
  $handler->display->display_options['fields']['field_sub_section_staff']['field'] = 'field_sub_section_staff';
  $handler->display->display_options['fields']['field_sub_section_staff']['label'] = 'Section';
  $handler->display->display_options['fields']['field_sub_section_staff']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_sub_section_staff']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_sub_section_staff']['delta_offset'] = '0';
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
  $handler->display->display_options['filters']['field_branch_tid']['expose']['operator'] = 'field_branch_tid_op';
  $handler->display->display_options['filters']['field_branch_tid']['expose']['identifier'] = 'field_branch_tid';
  $handler->display->display_options['filters']['field_branch_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_branch_tid']['vocabulary'] = 'branch';
  $handler->display->display_options['filters']['field_branch_tid']['level_labels'] = 'Select Degree,Select Branch,Select Semester,Select Section';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['path'] = 'admin/subject/list';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Subject List';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['bulk_operation'] = $view;

  $view = new view();
  $view->name = 'overall_examination_reports';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Overall Examination Reports';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Overall Report';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_student_name',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_stu_roll_no' => 'field_stu_roll_no',
    'field_stu_reg_no' => 'field_stu_reg_no',
    'field_student_name' => 'field_student_name',
    'field_section' => 'field_section',
    'field_subject_name' => 'field_subject_name',
    'field_mark_score_editable' => 'field_mark_score_editable',
    'field_mark_score2_editable' => 'field_mark_score2_editable',
    'field_mark_score3_editable' => 'field_mark_score3_editable',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = 'field_stu_roll_no';
  $handler->display->display_options['style_options']['info'] = array(
    'field_stu_roll_no' => array(
      'sortable' => 1,
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
    'nothing' => array(
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
$subject_nids = array();
$data_set = array();
$mark1 = \'\';
foreach($results as $result){
	$subject_nids[] = $result->node_field_data_field_mark_subject_nid;
	$student_nids[] = $result->node_field_data_field_mark_student_nid;
	$student_names[] = $result->field_field_student_name[0][\'raw\'][\'value\'];
        $data_sets[$result->node_field_data_field_mark_student_nid][] = array(
          \'snid\'=> $result->node_field_data_field_mark_student_nid,
          \'studname\' => $result->field_field_student_name[0][\'raw\'][\'value\'],
        	\'sname\' =>  $result->field_field_subject_name[0][\'raw\'][\'value\'],
          \'mark1\' => $result-> field_field_mark_score_editable[0][\'raw\'][\'value\']
  );
}

$subject_count = count(array_unique($subject_nids));
$student_count = count(array_unique($student_nids));

$overall_passed = 0;
$overall_failed = 0;
$overall_attempt = 0;
$overall_attended = 0;
foreach($data_sets as $key => $data_set){
$passed = 0;
$failed = 0;
$attempt = 0;
 $subject_name = $data_set[0][\'sname\'];
 $student_name = $data_set[0][\'studname\'];
 
foreach($data_set as $mark_data){
  $mark1 = $mark_data[\'mark1\'];
  if($mark1 >= 50){
    $passed =  $passed + 1;
    
  }
  if($mark1 != -1 && $mark1 < 50){
   $failed =  $failed + 1;
   $overall_failed =  $overall_failed + 1;
  }
  if($mark1 == -1){
    $attempt =  $attempt + 1;
    $overall_attempt =  $overall_attempt + 1;
  }
  if($passed == $subject_count ){
  	$overall_passed =  $overall_passed + 1;
  }
 }
 $attended =  $passed+$failed;
 if($attended == $subject_count){
 	$overall_attended = $overall_attended + 1;
 }
}

print \'<table style="width:100%">\';
print \'<tr>
	<th>Number of Students Passed</th>
	<th>Number of Students Appeared in all subjects</th>
    <th>Overall Pass Percentage</th>
  </tr>\';
print \'<tr>\';
print \'<td>\'. $overall_passed.\'</td>\';
print \'<td>\'. $overall_attended.\'</td>\';
print \'<td>\'. round($overall_passed/$overall_attended*100, 2).\'%</td>\';
print \'</tr>\';
print \'</table>\';
?>';
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
  $handler->display->display_options['fields']['field_stu_roll_no']['label'] = '';
  $handler->display->display_options['fields']['field_stu_roll_no']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_stu_roll_no']['element_label_colon'] = FALSE;
  /* Field: Content: Registration No */
  $handler->display->display_options['fields']['field_stu_reg_no']['id'] = 'field_stu_reg_no';
  $handler->display->display_options['fields']['field_stu_reg_no']['table'] = 'field_data_field_stu_reg_no';
  $handler->display->display_options['fields']['field_stu_reg_no']['field'] = 'field_stu_reg_no';
  $handler->display->display_options['fields']['field_stu_reg_no']['relationship'] = 'field_mark_student_nid';
  $handler->display->display_options['fields']['field_stu_reg_no']['label'] = '';
  $handler->display->display_options['fields']['field_stu_reg_no']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_stu_reg_no']['element_label_colon'] = FALSE;
  /* Field: Content: Student Name */
  $handler->display->display_options['fields']['field_student_name']['id'] = 'field_student_name';
  $handler->display->display_options['fields']['field_student_name']['table'] = 'field_data_field_student_name';
  $handler->display->display_options['fields']['field_student_name']['field'] = 'field_student_name';
  $handler->display->display_options['fields']['field_student_name']['relationship'] = 'field_mark_student_nid';
  $handler->display->display_options['fields']['field_student_name']['exclude'] = TRUE;
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
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
  /* Contextual filter: Content: Select Branch (field_branch) */
  $handler->display->display_options['arguments']['field_branch_tid']['id'] = 'field_branch_tid';
  $handler->display->display_options['arguments']['field_branch_tid']['table'] = 'field_data_field_branch';
  $handler->display->display_options['arguments']['field_branch_tid']['field'] = 'field_branch_tid';
  $handler->display->display_options['arguments']['field_branch_tid']['relationship'] = 'field_mark_student_nid';
  $handler->display->display_options['arguments']['field_branch_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_branch_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_branch_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_branch_tid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Select Section (field_section) */
  $handler->display->display_options['arguments']['field_section_tid']['id'] = 'field_section_tid';
  $handler->display->display_options['arguments']['field_section_tid']['table'] = 'field_data_field_section';
  $handler->display->display_options['arguments']['field_section_tid']['field'] = 'field_section_tid';
  $handler->display->display_options['arguments']['field_section_tid']['relationship'] = 'field_mark_student_nid';
  $handler->display->display_options['arguments']['field_section_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_section_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_section_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_section_tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/reports/overall/%';
  $export['overall_examination_reports'] = $view;

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
  $handler->display->display_options['title'] = 'Examination Report for %1';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
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
$subject_nid = $result->node_field_data_field_mark_subject_nid;
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
$node = node_load($subject_nid);
$items = field_get_items(\'node\', $node, \'field_sub_section_staff\');
foreach ($items as $item) {
 $fc = field_collection_field_get_entity($item);
$section = !empty($fc->field_fc_sub_section[\'und\']) ? $fc->field_fc_sub_section[\'und\'][0][\'taxonomy_term\']->name:\'\';
$staff_handled = !empty($fc->field_fc_sub_staff[\'und\'][0]) ? $fc->field_fc_sub_staff[\'und\'][0][\'taxonomy_term\']->name : \'\';
}
?>
<table style="width:100%">
<caption>Staff Handled : <?php print $staff_handled; ?> || Section : <?php print $section; ?> </caption>
  <tr>
    <th>Number of Students Attended</th>
    <th>Number of Students Passed</th>
    <th>Number of Students Failed</th>
    <th>Absent</th>
    <th>Pass Percentage</th>
  </tr>
  <tr>
    <td><?php print $attended; ?></td>
    <td><?php print $passed; ?></td>
    <td><?php print $failed; ?></td>
    <td><?php print $attempt; ?> </td>
    <td><?php print round($passed/$attended*100, 2); ?>%</td>
  </tr>
</table>';
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
  $handler->display->display_options['fields']['field_stu_roll_no']['exclude'] = TRUE;
  /* Field: Content: Registration No */
  $handler->display->display_options['fields']['field_stu_reg_no']['id'] = 'field_stu_reg_no';
  $handler->display->display_options['fields']['field_stu_reg_no']['table'] = 'field_data_field_stu_reg_no';
  $handler->display->display_options['fields']['field_stu_reg_no']['field'] = 'field_stu_reg_no';
  $handler->display->display_options['fields']['field_stu_reg_no']['relationship'] = 'field_mark_student_nid';
  $handler->display->display_options['fields']['field_stu_reg_no']['exclude'] = TRUE;
  /* Field: Content: Student Name */
  $handler->display->display_options['fields']['field_student_name']['id'] = 'field_student_name';
  $handler->display->display_options['fields']['field_student_name']['table'] = 'field_data_field_student_name';
  $handler->display->display_options['fields']['field_student_name']['field'] = 'field_student_name';
  $handler->display->display_options['fields']['field_student_name']['relationship'] = 'field_mark_student_nid';
  $handler->display->display_options['fields']['field_student_name']['exclude'] = TRUE;
  /* Field: Content: Select Section */
  $handler->display->display_options['fields']['field_section']['id'] = 'field_section';
  $handler->display->display_options['fields']['field_section']['table'] = 'field_data_field_section';
  $handler->display->display_options['fields']['field_section']['field'] = 'field_section';
  $handler->display->display_options['fields']['field_section']['relationship'] = 'field_mark_student_nid';
  $handler->display->display_options['fields']['field_section']['label'] = 'Section';
  $handler->display->display_options['fields']['field_section']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_section']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Select Section/Staff */
  $handler->display->display_options['fields']['field_sub_section_staff']['id'] = 'field_sub_section_staff';
  $handler->display->display_options['fields']['field_sub_section_staff']['table'] = 'field_data_field_sub_section_staff';
  $handler->display->display_options['fields']['field_sub_section_staff']['field'] = 'field_sub_section_staff';
  $handler->display->display_options['fields']['field_sub_section_staff']['relationship'] = 'field_mark_subject_nid';
  $handler->display->display_options['fields']['field_sub_section_staff']['label'] = '';
  $handler->display->display_options['fields']['field_sub_section_staff']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sub_section_staff']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sub_section_staff']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_sub_section_staff']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_sub_section_staff']['delta_offset'] = '0';
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
  $handler->display->display_options['fields']['field_mark_score_editable']['exclude'] = TRUE;
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
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = ' ';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
  /* Contextual filter: Content: Select Section (field_section) */
  $handler->display->display_options['arguments']['field_section_tid']['id'] = 'field_section_tid';
  $handler->display->display_options['arguments']['field_section_tid']['table'] = 'field_data_field_section';
  $handler->display->display_options['arguments']['field_section_tid']['field'] = 'field_section_tid';
  $handler->display->display_options['arguments']['field_section_tid']['relationship'] = 'field_mark_student_nid';
  $handler->display->display_options['arguments']['field_section_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_section_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_section_tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['field_section_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_section_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_section_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_section_tid']['specify_validation'] = TRUE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/reports/marks/%/%';
  $export['reports'] = $view;

  $view = new view();
  $view->name = 'semster_examination_reports';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Semster Examination Reports';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Semester Report';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_subject_name',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_stu_roll_no' => 'field_stu_roll_no',
    'field_stu_reg_no' => 'field_stu_reg_no',
    'field_student_name' => 'field_student_name',
    'field_section' => 'field_section',
    'field_subject_name' => 'field_subject_name',
    'field_mark_score_editable' => 'field_mark_score_editable',
    'field_mark_score2_editable' => 'field_mark_score2_editable',
    'field_mark_score3_editable' => 'field_mark_score3_editable',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = 'field_stu_roll_no';
  $handler->display->display_options['style_options']['info'] = array(
    'field_stu_roll_no' => array(
      'sortable' => 1,
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
    'nothing' => array(
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
$subject_nids = array();
$data_set = array();
$mark1 = \'\';
foreach($results as $result){
	$subject_nids[] = $result->node_field_data_field_mark_subject_nid;
	$subject_names[] = $result->field_field_subject_name[0][\'raw\'][\'value\'];
        $data_sets[$result->node_field_data_field_mark_subject_nid][] = array(
          \'snid\'=> $result->node_field_data_field_mark_subject_nid,
          \'sname\' =>  $result->field_field_subject_name[0][\'raw\'][\'value\'],
          \'mark1\' => $result-> field_field_mark_score_editable[0][\'raw\'][\'value\']
);
}
//$snids = array_unique($subject_names);

foreach($data_sets as $key => $data_set){
$passed = 0;
$failed = 0;
$attempt = 0;
//print \'<pre>\'. print_r($data_set, 1) .\'</pre>\';
 $subject_name = $data_set[0][\'sname\'];
foreach($data_set as $mark_data){
  $mark1 = $mark_data[\'mark1\'];
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
print \'<table style="width:100%">\';
print \'<caption>\'.$subject_name.\'</caption>\';
print \'<tr>
	<th>Number of Students Attended</th>
    <th>Number of Students Passed</th>
    <th>Number of Students Failed</th>
	<th>Absent</th>
    <th>Pass Percentage</th>
  </tr>\';
print \'<tr>\';
print \'<td>\'. $attended.\'</td>\';
print \'<td>\'. $passed.\'</td>\';
print \'<td>\'. $failed.\'</td>\';
print \'<td>\'. $attempt.\'</td>\';
print \'<td>\'. round($passed/$attended*100, 2).\'%</td>\';
print \'</tr>\';
print \'</table>\';
}
?>';
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
  $handler->display->display_options['fields']['field_stu_roll_no']['label'] = '';
  $handler->display->display_options['fields']['field_stu_roll_no']['element_label_colon'] = FALSE;
  /* Field: Content: Registration No */
  $handler->display->display_options['fields']['field_stu_reg_no']['id'] = 'field_stu_reg_no';
  $handler->display->display_options['fields']['field_stu_reg_no']['table'] = 'field_data_field_stu_reg_no';
  $handler->display->display_options['fields']['field_stu_reg_no']['field'] = 'field_stu_reg_no';
  $handler->display->display_options['fields']['field_stu_reg_no']['relationship'] = 'field_mark_student_nid';
  $handler->display->display_options['fields']['field_stu_reg_no']['label'] = '';
  $handler->display->display_options['fields']['field_stu_reg_no']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_stu_reg_no']['element_label_colon'] = FALSE;
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
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
  /* Contextual filter: Content: Select Branch (field_branch) */
  $handler->display->display_options['arguments']['field_branch_tid']['id'] = 'field_branch_tid';
  $handler->display->display_options['arguments']['field_branch_tid']['table'] = 'field_data_field_branch';
  $handler->display->display_options['arguments']['field_branch_tid']['field'] = 'field_branch_tid';
  $handler->display->display_options['arguments']['field_branch_tid']['relationship'] = 'field_mark_student_nid';
  $handler->display->display_options['arguments']['field_branch_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_branch_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_branch_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_branch_tid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Select Section (field_section) */
  $handler->display->display_options['arguments']['field_section_tid']['id'] = 'field_section_tid';
  $handler->display->display_options['arguments']['field_section_tid']['table'] = 'field_data_field_section';
  $handler->display->display_options['arguments']['field_section_tid']['field'] = 'field_section_tid';
  $handler->display->display_options['arguments']['field_section_tid']['relationship'] = 'field_mark_student_nid';
  $handler->display->display_options['arguments']['field_section_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_section_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_section_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_section_tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/reports/sem/%';
  $export['semster_examination_reports'] = $view;

  $view = new view();
  $view->name = 'semster_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'semster_list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Semester Wise Report';
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
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: PHP */
  $handler->display->display_options['footer']['php']['id'] = 'php';
  $handler->display->display_options['footer']['php']['table'] = 'views';
  $handler->display->display_options['footer']['php']['field'] = 'php';
  $handler->display->display_options['footer']['php']['php_output'] = '<?php
$subject_nids = \'\';
$prefix = \'\';
foreach($results as $result){
$branch_tid = !empty($result->field_field_branch[0]) ? $result->field_field_branch[0][\'raw\'][\'tid\']: \'\';
	$count_section = count($result->field_field_sub_section_staff);

$subject_nids .= $prefix.$result->nid;
$prefix = \',\';
}
$sem_url = \'admin/reports/sem/\'.$subject_nids.\'/\'.$branch_tid;
$overall_url =  \'admin/reports/overall/\'.$subject_nids.\'/\'.$branch_tid;

$sem_link =  l(\'Semester Report\',$sem_url);
$overall_link =  l(\'Overall Report\',  $overall_url);
print \'<table style="width:100%">\';
print \'<tr>
	<th>Semester Wise Report</th>
	<th>Overall Report</th>
  </tr>\';
print \'<tr>\';
print \'<td>\';
if($count_section == 2){
	print \'<table>\';
	print \'<tr>
	<th>A</th>
	<th>B</th>
  </tr>\';
	print \'<tr>\';
	print \'<td>\' . l(\'A - Section\', $sem_url.\'/3\').\'</td>\';
	print \'<td>\' . l(\'B - Section\', $sem_url.\'/4\').\'</td>\';
	print \'</tr></table>\';
}
else{
		print \'<table>\';
	print \'<tr>
	<th>A</th>
  </tr>\';
	print \'<tr>\';
	print \'<td>\' . l(\'A - Section\', $sem_url.\'/3\').\'</td>\';
	print \'</tr></table>\';
	
}
print \'</td>\';
print \'<td>\';
if($count_section == 2){
	print \'<table>\';
	print \'<tr>
	<th>A</th>
	<th>B</th>
  </tr>\';
	print \'<tr>\';
	print \'<td>\' . l(\'A - Section\', $overall_url.\'/3\').\'</td>\';
	print \'<td>\' . l(\'B - Section\', $overall_url.\'/4\').\'</td>\';
	print \'</tr></table>\';
}
else{
	print \'<table>\';
	print \'<tr>
	<th>A</th>
  </tr>\';
	print \'<tr>\';
	print \'<td>\' . l(\'A - Section\', $overall_url.\'/3\').\'</td>\';
	print \'</tr></table>\';

}
print \'</td>\';
print \'</tr>\';
print \'</table>\';
?>';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '&nbsp;';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Select Section/Staff */
  $handler->display->display_options['fields']['field_sub_section_staff']['id'] = 'field_sub_section_staff';
  $handler->display->display_options['fields']['field_sub_section_staff']['table'] = 'field_data_field_sub_section_staff';
  $handler->display->display_options['fields']['field_sub_section_staff']['field'] = 'field_sub_section_staff';
  $handler->display->display_options['fields']['field_sub_section_staff']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sub_section_staff']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_sub_section_staff']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_sub_section_staff']['delta_offset'] = '0';
  /* Field: Content: Select Branch */
  $handler->display->display_options['fields']['field_branch']['id'] = 'field_branch';
  $handler->display->display_options['fields']['field_branch']['table'] = 'field_data_field_branch';
  $handler->display->display_options['fields']['field_branch']['field'] = 'field_branch';
  $handler->display->display_options['fields']['field_branch']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_branch']['type'] = 'taxonomy_term_reference_plain';
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
  $handler->display->display_options['filters']['field_branch_tid']['expose']['operator'] = 'field_branch_tid_op';
  $handler->display->display_options['filters']['field_branch_tid']['expose']['identifier'] = 'field_branch_tid';
  $handler->display->display_options['filters']['field_branch_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_branch_tid']['vocabulary'] = 'branch';
  $handler->display->display_options['filters']['field_branch_tid']['level_labels'] = 'Select Degree,Select Branch,Select Semester,Select Section';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/reports/semester';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Semester Wise Report';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['semster_list'] = $view;

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
  $view->name = 'subject_list_all';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Subject List Enter Marks';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Enter Marks';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'field_subject_code' => 'field_subject_code',
    'title' => 'title',
    'field_branch' => 'field_branch',
    'field_sub_section_staff' => 'field_sub_section_staff',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_subject_code' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_branch' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sub_section_staff' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Subject Code */
  $handler->display->display_options['fields']['field_subject_code']['id'] = 'field_subject_code';
  $handler->display->display_options['fields']['field_subject_code']['table'] = 'field_data_field_subject_code';
  $handler->display->display_options['fields']['field_subject_code']['field'] = 'field_subject_code';
  $handler->display->display_options['fields']['field_subject_code']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Subject Code - Subject Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Select Branch */
  $handler->display->display_options['fields']['field_branch']['id'] = 'field_branch';
  $handler->display->display_options['fields']['field_branch']['table'] = 'field_data_field_branch';
  $handler->display->display_options['fields']['field_branch']['field'] = 'field_branch';
  $handler->display->display_options['fields']['field_branch']['label'] = 'Degree';
  $handler->display->display_options['fields']['field_branch']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_branch']['type'] = 'cshs_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_branch']['settings'] = array(
    'separator' => ' » ',
  );
  /* Field: Content: Select Section/Staff */
  $handler->display->display_options['fields']['field_sub_section_staff']['id'] = 'field_sub_section_staff';
  $handler->display->display_options['fields']['field_sub_section_staff']['table'] = 'field_data_field_sub_section_staff';
  $handler->display->display_options['fields']['field_sub_section_staff']['field'] = 'field_sub_section_staff';
  $handler->display->display_options['fields']['field_sub_section_staff']['label'] = 'Section';
  $handler->display->display_options['fields']['field_sub_section_staff']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sub_section_staff']['settings'] = array(
    'edit' => 'Edit',
    'delete' => 'Delete',
    'add' => 'Add',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_sub_section_staff']['delta_offset'] = '0';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Section';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = 'return $data->nid;';
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$sections_count = count($data->field_field_sub_section_staff);
if($sections_count == 2){
print \'<table>\';
print \'<tr>
	<th>A</th>
	<th>B</th>
  </tr>\';
print \'<tr>\';
print \'<td>\' . l(\'Enter Marks for A Section\', \'admin/mark-entry/\'.$data->nid.\'/3\').\'</td>\';
print \'<td>\' . l(\'Enter Marks for B Section\', \'admin/mark-entry/\'.$data->nid.\'/4\').\'</td>\';
print \'</tr></table>\';
}else{
print \'<table>\';
print \'<tr>
	<th>A</th>
  </tr>\';
print \'<tr>\';
print \'<td>\' . l(\'Enter Marks for A Section\', \'admin/mark-entry/\'.$data->nid.\'/3\').\'</td>\';
print \'</tr></table>\';
}

?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = 'View Semester Wise Report';
  $handler->display->display_options['fields']['php_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_value'] = 'return $data->nid;';
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
print l(\'Click here! to View Subject Wise Report\',\'admin/reports/marks/\'.$data->nid);
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
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
  $handler->display->display_options['filters']['field_branch_tid']['expose']['operator'] = 'field_branch_tid_op';
  $handler->display->display_options['filters']['field_branch_tid']['expose']['identifier'] = 'field_branch_tid';
  $handler->display->display_options['filters']['field_branch_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_branch_tid']['vocabulary'] = 'branch';
  $handler->display->display_options['filters']['field_branch_tid']['level_labels'] = 'Select Degree,Select Branch,Select Semester,Select Section';

  /* Display: Enter Marks */
  $handler = $view->new_display('page', 'Enter Marks', 'page');
  $handler->display->display_options['path'] = 'admin/subject/list';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Subject List';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['subject_list_all'] = $view;

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
  $view->name = 'subject_wise_report';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Subject Wise Report';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Subject Wise Report';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'field_subject_code' => 'field_subject_code',
    'title' => 'title',
    'field_branch' => 'field_branch',
    'field_sub_section_staff' => 'field_sub_section_staff',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_subject_code' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_branch' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sub_section_staff' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Subject Code */
  $handler->display->display_options['fields']['field_subject_code']['id'] = 'field_subject_code';
  $handler->display->display_options['fields']['field_subject_code']['table'] = 'field_data_field_subject_code';
  $handler->display->display_options['fields']['field_subject_code']['field'] = 'field_subject_code';
  $handler->display->display_options['fields']['field_subject_code']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Subject Code - Subject Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Select Branch */
  $handler->display->display_options['fields']['field_branch']['id'] = 'field_branch';
  $handler->display->display_options['fields']['field_branch']['table'] = 'field_data_field_branch';
  $handler->display->display_options['fields']['field_branch']['field'] = 'field_branch';
  $handler->display->display_options['fields']['field_branch']['label'] = 'Degree';
  $handler->display->display_options['fields']['field_branch']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_branch']['type'] = 'cshs_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_branch']['settings'] = array(
    'separator' => ' » ',
  );
  /* Field: Content: Select Section/Staff */
  $handler->display->display_options['fields']['field_sub_section_staff']['id'] = 'field_sub_section_staff';
  $handler->display->display_options['fields']['field_sub_section_staff']['table'] = 'field_data_field_sub_section_staff';
  $handler->display->display_options['fields']['field_sub_section_staff']['field'] = 'field_sub_section_staff';
  $handler->display->display_options['fields']['field_sub_section_staff']['label'] = 'Section';
  $handler->display->display_options['fields']['field_sub_section_staff']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sub_section_staff']['settings'] = array(
    'edit' => 'Edit',
    'delete' => 'Delete',
    'add' => 'Add',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_sub_section_staff']['delta_offset'] = '0';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Select Section';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = 'return $data->nid;';
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$sections_count = count($data->field_field_sub_section_staff);
if($sections_count == 2){
print \'<table>\';
print \'<caption>\'.t(\'Enter marks\').\'</caption>\';
print \'<tr>
	<th>A</th>
	<th>B</th>
  </tr>\';
print \'<tr>\';
print \'<td>\' . l(\'Enter Marks for A Section\', \'admin/mark-entry/\'.$data->nid.\'/3\').\'</td>\';
print \'<td>\' . l(\'Enter Marks for B Section\', \'admin/mark-entry/\'.$data->nid.\'/4\').\'</td>\';
print \'</tr></table>\';
}else{
print \'<table>\';
print \'<caption>\'.t(\'Enter marks\').\'</caption>\';
print \'<tr>
	<th>A</th>
  </tr>\';
print \'<tr>\';
print \'<td>\' . l(\'Enter Marks for A Section\', \'admin/mark-entry/\'.$data->nid.\'/3\').\'</td>\';
print \'</tr></table>\';
}

?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = 'View Subject Wise Report';
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_value'] = 'return $data->nid;';
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
$sections_count = count($data->field_field_sub_section_staff);
if($sections_count == 2){
print \'<table>\';
print \'<tr>
	<th>A</th>
	<th>B</th>
  </tr>\';
print \'<tr>\';
print \'<td>\' . l(\'A - Section\', \'admin/reports/marks/\'.$data->nid.\'/3\').\'</td>\';
print \'<td>\' . l(\'B - Section\', \'admin/reports/marks/\'.$data->nid.\'/4\').\'</td>\';
print \'</tr></table>\';
}else{
print \'<table>\';
print \'<tr>
	<th>A</th>
  </tr>\';
print \'<tr>\';
print \'<td>\' . l(\'A - Section\', \'admin/reports/marks/\'.$data->nid.\'/3\').\'</td>\';
print \'</tr></table>\';
}

?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
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
  $handler->display->display_options['filters']['field_branch_tid']['expose']['operator'] = 'field_branch_tid_op';
  $handler->display->display_options['filters']['field_branch_tid']['expose']['identifier'] = 'field_branch_tid';
  $handler->display->display_options['filters']['field_branch_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_branch_tid']['vocabulary'] = 'branch';
  $handler->display->display_options['filters']['field_branch_tid']['level_labels'] = 'Select Degree,Select Branch,Select Semester,Select Section';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/reports/subjects';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Subject Wise Report';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['subject_wise_report'] = $view;

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
  $handler->display->display_options['style_options']['default'] = 'field_stu_roll_no';
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
  $handler->display->display_options['fields']['field_mark_score_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mark_score_editable']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_mark_score_editable']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_mark_score_editable']['widget_type'] = 'number';
  $handler->display->display_options['fields']['field_mark_score_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_mark_score_editable']['suppress_description'] = 1;
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
  /* Contextual filter: Content: Select Section (field_section) */
  $handler->display->display_options['arguments']['field_section_tid']['id'] = 'field_section_tid';
  $handler->display->display_options['arguments']['field_section_tid']['table'] = 'field_data_field_section';
  $handler->display->display_options['arguments']['field_section_tid']['field'] = 'field_section_tid';
  $handler->display->display_options['arguments']['field_section_tid']['relationship'] = 'field_mark_student_nid';
  $handler->display->display_options['arguments']['field_section_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_section_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_section_tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['field_section_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_section_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_section_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_section_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_section_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_section_tid']['validate_options']['vocabularies'] = array(
    'section' => 'section',
  );
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/mark-entry/%';
  $export['tt'] = $view;

  return $export;
}
