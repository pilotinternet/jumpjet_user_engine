<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function jumpjet_user_engine_user_default_permissions() {
  $permissions = array();


  // Exported permission: access administration pages
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      '0' => 'web developer',
    ),
  );

  // Exported permission: access all views
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      '0' => 'web developer',
    ),
  );

  // Exported permission: access comments
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      '0' => 'web developer',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: access content
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      '0' => 'web developer',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: access site-wide contact form
  $permissions['access site-wide contact form'] = array(
    'name' => 'access site-wide contact form',
    'roles' => array(
      '0' => 'web developer',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: access user profiles
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      '0' => 'web developer',
      '1' => 'community moderator',
      '2' => 'community manager',
      '2' => 'site manager',
    ),
  );

  // Exported permission: administer CAPTCHA settings
  $permissions['administer CAPTCHA settings'] = array(
    'name' => 'administer CAPTCHA settings',
    'roles' => array(
      '0' => 'web developer',
    ),
  );

  // Exported permission: administer actions
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      '0' => 'web developer',
    ),
  );

  // Exported permission: administer blocks
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      '0' => 'web developer',
    ),
  );


  // Exported permission: administer content types
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      '0' => 'web developer',
    ),
  );

  // Exported permission: administer features
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      '0' => 'web developer',
    ),
  );

  // Exported permission: administer files
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      '0' => 'web developer',
    ),
  );

  // Exported permission: administer nodes
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      '0' => 'web developer',
    ),
  );

  // Exported permission: administer pathauto
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      '0' => 'web developer',
    ),
  );

  // Exported permission: administer permissions
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      '0' => 'web developer',
    ),
  );

  // Exported permission: administer search
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      '0' => 'web developer',
    ),
  );

  // Exported permission: administer site configuration
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      '0' => 'web developer',
    ),
  );

  // Exported permission: administer site-wide contact form
  $permissions['administer site-wide contact form'] = array(
    'name' => 'administer site-wide contact form',
    'roles' => array(
      '0' => 'web developer',
      '1' => 'site manager',
    ),
  );

  // Exported permission: administer url aliases
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      '0' => 'web developer',
    ),
  );

  // Exported permission: administer users
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      '0' => 'web developer',
    ),
  );

  // Exported permission: administer views
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      '0' => 'web developer',
    ),
  );

  // Exported permission: assign web developer role
  $permissions['assign web developer role'] = array(
    'name' => 'assign web developer role',
    'roles' => array(
      '0' => 'web developer',
    ),
  );

  // Exported permission: assign all roles
  $permissions['assign all roles'] = array(
    'name' => 'assign all roles',
    'roles' => array(
      '0' => 'web developer',
    ),
  );

  // Exported permission: assign applicant user role
  $permissions['assign applicant user role'] = array(
    'name' => 'assign applicant user role',
    'roles' => array(
      '0' => 'web developer',
    ),
  );

  // Exported permission: assign content author role
  $permissions['assign content author role'] = array(
    'name' => 'assign content author role',
    'roles' => array(
      '0' => 'web developer',
      '1' => 'content editor',
      '2' => 'community moderator',
      '3' => 'community manager',
      '4' => 'site manager',
    ),
  );

  // Exported permission: assign content editor role
  $permissions['assign content editor role'] = array(
    'name' => 'assign content editor role',
    'roles' => array(
      '0' => 'web developer',
      '1' => 'content editor',
      '2' => 'site manager',
    ),
  );

  // Exported permission: assign community moderator role
  $permissions['assign community moderator role'] = array(
    'name' => 'assign community moderator role',
    'roles' => array(
      '0' => 'web developer',
      '1' => 'site manager',
      '2' => 'community manager',
    ),
  );

  // Exported permission: assign site manager role
  $permissions['assign site manager role'] = array(
    'name' => 'assign site manager role',
    'roles' => array(
      '0' => 'web developer',
      '1' => 'site manager',
    ),
  );

  // Exported permission: assign user roles
  $permissions['assign user roles'] = array(
    'name' => 'assign user roles',
    'roles' => array(
      '0' => 'web developer',
    ),
  );

  // Exported permission: block users
  $permissions['block users'] = array(
    'name' => 'block users',
    'roles' => array(
      '0' => 'web developer',
      '1' => 'community manager',
      '2' => 'site manager',
    ),
  );

  // Exported permission: change own username
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      '0' => 'web developer',
    ),
  );

 // Exported permission: create profile content
  $permissions['create profile content'] = array(
    'name' => 'create profile content',
    'roles' => array(
      '0' => 'web developer',
    ),
  );

  // Exported permission: create url aliases
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      '0' => 'web developer',
    ),
  );

  // Exported permission: create users
  $permissions['create users'] = array(
    'name' => 'create users',
    'roles' => array(
      '0' => 'web developer',
      '1' => 'content editor',
      '2' => 'community moderator',
      '3' => 'community manager',
      '4' => 'site manager',
    ),
  );

  // Exported permission: delete any profile content
  $permissions['delete any profile content'] = array(
    'name' => 'delete any profile content',
    'roles' => array(
      '0' => 'web developer',
    ),
  );


  // Exported permission: delete own profile content
  $permissions['delete own profile content'] = array(
    'name' => 'delete own profile content',
    'roles' => array(
      '0' => 'web developer',
    ),
  );

  // Exported permission: delete revisions
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      '0' => 'web developer',
    ),
  );

  // Exported permission: delete users with role web developer
  $permissions['delete users with role web developer'] = array(
    'name' => 'delete users with role web developer',
    'roles' => array(
      '0' => 'web developer',
    ),
  );

  // Exported permission: delete users with role applicant user
  $permissions['delete users with role applicant user'] = array(
    'name' => 'delete users with role applicant user',
    'roles' => array(
      '0' => 'web developer',
      '1' => 'site manager',
    ),
  );

  // Exported permission: delete users with role content author
  $permissions['delete users with role content author'] = array(
    'name' => 'delete users with role content author',
    'roles' => array(
      '0' => 'web developer',
      '1' => 'site manager',
    ),
  );

  // Exported permission: delete users with role content editor
  $permissions['delete users with role content editor'] = array(
    'name' => 'delete users with role content editor',
    'roles' => array(
      '0' => 'web developer',
      '1' => 'site manager',
    ),
  );

  // Exported permission: delete users with role community moderator
  $permissions['delete users with role community moderator'] = array(
    'name' => 'delete users with role community moderator',
    'roles' => array(
      '0' => 'web developer',
      '1' => 'site manager',
    ),
  );

  // Exported permission: delete users with role site manager
  $permissions['delete users with role site manager'] = array(
    'name' => 'delete users with role site manager',
    'roles' => array(
      '0' => 'web developer',
      '1' => 'site manager',
    ),
  );

  // Exported permission: edit any profile content
  $permissions['edit any profile content'] = array(
    'name' => 'edit any profile content',
    'roles' => array(
      '0' => 'web developer',
    ),
  );

  // Exported permission: edit own profile content
  $permissions['edit own profile content'] = array(
    'name' => 'edit own profile content',
    'roles' => array(
      '0' => 'web developer',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: edit users with role web developer
  $permissions['edit users with role web developer'] = array(
    'name' => 'edit users with role web developer',
    'roles' => array(
      '0' => 'web developer',
    ),
  );

  // Exported permission: edit users with role applicant user
  $permissions['edit users with role applicant user'] = array(
    'name' => 'edit users with role applicant user',
    'roles' => array(
      '0' => 'web developer',
      '1' => 'community moderator',
      '2' => 'community manager',
      '3' => 'site manager',
    ),
  );

  // Exported permission: edit users with role content author
  $permissions['edit users with role content author'] = array(
    'name' => 'edit users with role content author',
    'roles' => array(
      '0' => 'web developer',
      '1' => 'community manager',
      '2' => 'site manager',
    ),
  );

  // Exported permission: edit users with role content editor
  $permissions['edit users with role content editor'] = array(
    'name' => 'edit users with role content editor',
    'roles' => array(
      '0' => 'web developer',
      '1' => 'site manager',
    ),
  );

  // Exported permission: edit users with role community moderator
  $permissions['edit users with role community moderator'] = array(
    'name' => 'edit users with role community moderator',
    'roles' => array(
      '0' => 'web developer',
      '1' => 'site manager',
    ),
  );

  // Exported permission: edit users with role site manager
  $permissions['edit users with role site manager'] = array(
    'name' => 'edit users with role site manager',
    'roles' => array(
      '0' => 'web developer',
      '1' => 'site manager',
    ),
  );

  // Exported permission: manage features
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      '0' => 'web developer',
    ),
  );

  // Exported permission: notify of path changes
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      '0' => 'web developer',
    ),
  );

  // Exported permission: post comments
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      '0' => 'web developer',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: post comments without approval
  $permissions['post comments without approval'] = array(
    'name' => 'post comments without approval',
    'roles' => array(
      '0' => 'web developer',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: revert revisions
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      '0' => 'web developer',
      '1' => 'content author',
      '2' => 'content editor',
      '3' => 'community moderator',
      '4' => 'community manager',
      '5' => 'site manager',
    ),
  );

  // Exported permission: search content
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      '0' => 'web developer',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: select different theme
  $permissions['select different theme'] = array(
    'name' => 'select different theme',
    'roles' => array(
      '0' => 'web developer',
    ),
  );


  // Exported permission: skip CAPTCHA
  $permissions['skip CAPTCHA'] = array(
    'name' => 'skip CAPTCHA',
    'roles' => array(
      '0' => 'web developer',
    ),
  );

  // Exported permission: use PHP for block visibility
  $permissions['use PHP for block visibility'] = array(
    'name' => 'use PHP for block visibility',
    'roles' => array(
      '0' => 'web developer',
    ),
  );

  // Exported permission: use advanced search
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      '0' => 'web developer',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: view revisions
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      '0' => 'web developer',
      '1' => 'content author',
      '2' => 'content editor',
      '3' => 'community moderator',
      '4' => 'community manager',
      '5' => 'site manager',
    ),
  );


  return $permissions;
}
