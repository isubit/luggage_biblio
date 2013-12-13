<?php

// Fail-safe configurations if an environment variable is not matched
$update_free_access = FALSE;
$conf['apachesolr_read_only'] = "1";
$conf['file_directory_path'] = "files";
$conf['file_directory_temp'] = "/tmp";

if (getenv('ISU_ENVIRONMENT')) {
  switch (getenv('ISU_ENVIRONMENT')) {
    case 'DEVELOPMENT':
      //do things specific for Development
      $conf['environment_indicator_overwrite'] = TRUE;
      $conf['environment_indicator_overwritten_name'] = 'DEVELOPMENT SERVER';
      $conf['environment_indicator_overwritten_color'] = '#396c95';
      $conf['environment_indicator_overwritten_text_color'] = '#FFFFFF';
      $conf['environment_indicator_overwritten_position'] = 'TOP';
      $conf['environment_indicator_overwritten_fixed'] = TRUE;
      $conf['error_level'] = "2";

      // Disable preprocessing of CSS and JS.
      $conf['preprocess_css'] = 0;
      $conf['preprocess_js'] = 0;

      // Devel settings

      // Enable xhprof profiling of each page request.

      break;
    case 'TESTING':
      // Do things specific for Testing
      $conf['environment_indicator_overwrite'] = TRUE;
      $conf['environment_indicator_overwritten_name'] = 'TESTING SERVER';
      $conf['environment_indicator_overwritten_color'] = '#bfa728';
      $conf['environment_indicator_overwritten_text_color'] = '#FFFFFF';
      $conf['environment_indicator_overwritten_position'] = 'TOP';
      $conf['environment_indicator_overwritten_fixed'] = TRUE;
      $conf['error_level'] = "2";
      break;
    case 'PREVIEW':
      // Do things specific for Preview
      $conf['environment_indicator_overwrite'] = TRUE;
      $conf['environment_indicator_overwritten_name'] = 'PREVIEW SERVER';
      $conf['environment_indicator_overwritten_color'] = '#c2750b';
      $conf['environment_indicator_overwritten_text_color'] = '#FFFFFF';
      $conf['environment_indicator_overwritten_position'] = 'TOP';
      $conf['environment_indicator_overwritten_fixed'] = TRUE;
      $conf['error_level'] = "2";
      break;
    case 'PRODUCTION':
      // Do things specific for Production
      $conf['environment_indicator_overwrite'] = TRUE;
      $conf['environment_indicator_overwritten_name'] = 'PRODUCTION SERVER';
      $conf['environment_indicator_overwritten_color'] = '#A33';
      $conf['environment_indicator_overwritten_text_color'] = '#FFFFFF';
      $conf['environment_indicator_overwritten_position'] = 'TOP';
      $conf['environment_indicator_overwritten_fixed'] = TRUE;
      $conf['error_level'] = "0";
      $conf['apachesolr_read_only'] = "0";
      break;
  }
} else {
  // This is an unknown environment!!
  $conf['environment_indicator_overwrite'] = TRUE;
  $conf['environment_indicator_overwritten_name'] = 'UNKNOWN SERVER';
  $conf['environment_indicator_overwritten_color'] = '#A33';
  $conf['environment_indicator_overwritten_text_color'] = '#FFFFFF';
  $conf['environment_indicator_overwritten_position'] = 'TOP';
  $conf['environment_indicator_overwritten_fixed'] = TRUE;
  $conf['error_level'] = "0";
  $conf['apachesolr_read_only'] = "0";
}