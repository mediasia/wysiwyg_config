<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function wysiwyg_config_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer filters
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(),
  );

  return $permissions;
}
