<?php

/**
 * Implementation of hook_user_default_roles().
 */
function jumpjet_user_engine_user_default_roles() {
  $roles = array();

  // Exported role: applicant user
  $roles['applicant user'] = array(
    'name' => 'applicant user',
  );

  // Exported role: content author
  $roles['content author'] = array(
    'name' => 'content author',
  );

  // Exported role: content editor
  $roles['content editor'] = array(
    'name' => 'content editor',
  );

  // Exported role: community moderator
  $roles['community moderator'] = array(
    'name' => 'community moderator',
  );
  
    // Exported role: community manager
  $roles['community manager'] = array(
    'name' => 'community manager',
  );

  // Exported role: site manager
  $roles['site manager'] = array(
    'name' => 'site manager',
  );

  return $roles;
}
