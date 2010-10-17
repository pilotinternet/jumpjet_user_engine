<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function jumpjet_user_engine_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'current_user';
  $context->description = 'Active when on the User Profile of the currently logged-in user';
  $context->tag = 'User';
  $context->conditions = array(
    'user_page' => array(
      'values' => array(
        'view' => 'view',
      ),
      'options' => array(
        'mode' => 'current',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Active when on the User Profile of the currently logged-in user');
  t('User');

  $export['current_user'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'current_user_account';
  $context->description = 'Active when on the User Account Edit Form for the currently logged-in user';
  $context->tag = 'User';
  $context->conditions = array(
    'user_page' => array(
      'values' => array(
        'form' => 'form',
      ),
      'options' => array(
        'mode' => 'current',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Active when on the User Account Edit Form for the currently logged-in user');
  t('User');

  $export['current_user_account'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'other_users';
  $context->description = 'Active when on the User Profile of any user except the currently logged-in user';
  $context->tag = 'User';
  $context->conditions = array(
    'user_page' => array(
      'values' => array(
        'view' => 'view',
      ),
      'options' => array(
        'mode' => 'other',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Active when on the User Profile of any user except the currently logged-in user');
  t('User');

  $export['other_users'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'other_users_account';
  $context->description = 'Active when on the User Account Edit Form for any user except the currently logged-in user';
  $context->tag = 'User';
  $context->conditions = array(
    'user_page' => array(
      'values' => array(
        'form' => 'form',
      ),
      'options' => array(
        'mode' => 'other',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Active when on the User Account Edit Form for any user except the currently logged-in user');
  t('User');

  $export['other_users_account'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'role_anonymous';
  $context->description = 'Active when the current user has the \'Anonymous User\' role';
  $context->tag = 'Role';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'anonymous user' => 'anonymous user',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Active when the current user has the \'Anonymous User\' role');
  t('Role');

  $export['role_anonymous'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'role_applicant';
  $context->description = 'Active when the current user has the \'Applicant User\' role';
  $context->tag = 'Role';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'applicant user' => 'applicant user',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Active when the current user has the \'Applicant User\' role');
  t('Role');

  $export['role_applicant'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'role_authenticated';
  $context->description = 'Active when the current user has the \'Authenticated User\' role';
  $context->tag = 'Role';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'authenticated user' => 'authenticated user',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Active when the current user has the \'Authenticated User\' role');
  t('Role');

  $export['role_authenticated'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'role_content_author';
  $context->description = 'Active when the current user has the \'Content Author\' role';
  $context->tag = 'Role';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'content author' => 'content author',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Active when the current user has the \'Content Author\' role');
  t('Role');

  $export['role_content_author'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'role_content_editor';
  $context->description = 'Active when the current user has the \'Content Editor\' role';
  $context->tag = 'Role';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'content editor' => 'content editor',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Active when the current user has the \'Content Editor\' role');
  t('Role');

  $export['role_content_editor'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'role_content_team';
  $context->description = 'Active when the current user is a member of the Content Team - Content Author, Content Editor';
  $context->tag = 'Role';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'content author' => 'content author',
        'content editor' => 'content editor',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Active when the current user is a member of the Content Team - Content Author, Content Editor');
  t('Role');

  $export['role_content_team'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'role_moderator';
  $context->description = 'Active when the current user has the \'Moderator\' role';
  $context->tag = 'Role';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'moderator' => 'moderator',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Active when the current user has the \'Moderator\' role');
  t('Role');

  $export['role_moderator'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'role_site_manager';
  $context->description = 'Active when the current user has the \'Site Manager\' role';
  $context->tag = 'Role';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'site manager' => 'site manager',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Active when the current user has the \'Site Manager\' role');
  t('Role');

  $export['role_site_manager'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'role_site_team';
  $context->description = 'Active when the current user is a member of the Site Team - content author, content editor, moderator, site manager';
  $context->tag = 'Role';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'content author' => 'content author',
        'content editor' => 'content editor',
        'moderator' => 'moderator',
        'site manager' => 'site manager',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Active when the current user is a member of the Site Team - content author, content editor, moderator, site manager');
  t('Role');

  $export['role_site_team'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'role_user';
  $context->description = 'Active when the current user has one of the \'User\' roles - authenticated or anonymous or applicant';
  $context->tag = 'Role';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'anonymous user' => 'anonymous user',
        'applicant user' => 'applicant user',
        'authenticated user' => 'authenticated user',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Active when the current user has one of the \'User\' roles - authenticated or anonymous or applicant');
  t('Role');

  $export['role_user'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'role_website_developer';
  $context->description = 'Active when the current user has the \'Website Developer\' role';
  $context->tag = 'Role';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'website developer' => 'website developer',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Active when the current user has the \'Website Developer\' role');
  t('Role');

  $export['role_website_developer'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'user';
  $context->description = 'Active when on any User Profile';
  $context->tag = 'User';
  $context->conditions = array(
    'user_page' => array(
      'values' => array(
        'view' => 'view',
      ),
      'options' => array(
        'mode' => 'all',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Active when on any User Profile');
  t('User');

  $export['user'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'user_registration';
  $context->description = 'Active when on the User Registration page';
  $context->tag = 'User';
  $context->conditions = array(
    'user_page' => array(
      'values' => array(
        'register' => 'register',
      ),
      'options' => array(
        'mode' => 'all',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Active when on the User Registration page');
  t('User');

  $export['user_registration'] = $context;
  return $export;
}
