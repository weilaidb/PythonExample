#define PHP_DB4_H
extern zend_module_entry db4_module_entry;
#define phpext_db4_ptr &db4_module_entry
#define PHP_DB4_API __declspec(dllexport)
#define PHP_DB4_API
PHP_DB4_API zend_class_entry *db_txn_ce_get(void);
PHP_DB4_API zend_class_entry *dbc_ce_get(void);
PHP_DB4_API zend_class_entry *db_env_ce_get(void);
PHP_DB4_API zend_class_entry *db_ce_get(void);
PHP_DB4_API DB_ENV *php_db4_getDbEnvFromObj(zval *z TSRMLS_DC);
PHP_DB4_API DB *php_db4_getDbFromObj(zval *z TSRMLS_DC);
PHP_DB4_API DB_TXN *php_db4_getDbTxnFromObj(zval *z TSRMLS_DC);
PHP_DB4_API DBC *php_db4_getDbcFromObj(zval *z TSRMLS_DC);
#define DB4_G(v) TSRMG(db4_globals_id, zend_db4_globals *, v)
#define DB4_G(v) (db4_globals.v)
