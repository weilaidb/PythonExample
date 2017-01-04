extern "C"
#define my_db_create db_create
#define my_db_env_create db_env_create
#if PHP_MAJOR_VERSION <= 4
unsigned char second_arg_force_ref[] = ;
unsigned char third_arg_force_ref[] = ;
static int le_db;
static int le_dbc;
static int le_db_txn;
static int le_dbenv;
struct php_DB_TXN ;
struct php_DBC ;
struct php_DB ;
struct php_DB_ENV ;
static void _free_php_db_txn(zend_rsrc_list_entry *rsrc TSRMLS_DC)
static void _free_php_dbc(zend_rsrc_list_entry *rsrc TSRMLS_DC)
static void _free_php_db(zend_rsrc_list_entry *rsrc TSRMLS_DC)
static void _free_php_dbenv(zend_rsrc_list_entry *rsrc TSRMLS_DC)
static zend_class_entry *db_txn_ce;
static zend_class_entry *dbc_ce;
static zend_class_entry *db_ce;
static zend_class_entry *db_env_ce;
struct my_llist ;
static struct my_llist *my_llist_add(struct my_llist *list, void *data)
static struct my_llist *my_llist_del(struct my_llist *list, void *data)
zend_function_entry db4_functions[] = ;
PHP_MINIT_FUNCTION(db4);
PHP_MSHUTDOWN_FUNCTION(db4);
PHP_RINIT_FUNCTION(db4);
PHP_RSHUTDOWN_FUNCTION(db4);
PHP_MINFO_FUNCTION(db4);
zend_module_entry db4_module_entry = ;
zend_class_entry *db_txn_ce_get(void)
ZEND_NAMED_FUNCTION(_wrap_db_txn_abort);
ZEND_NAMED_FUNCTION(_wrap_db_txn_commit);
ZEND_NAMED_FUNCTION(_wrap_db_txn_discard);
ZEND_NAMED_FUNCTION(_wrap_db_txn_id);
ZEND_NAMED_FUNCTION(_wrap_db_txn_set_timeout);
ZEND_NAMED_FUNCTION(_wrap_db_txn_set_name);
ZEND_NAMED_FUNCTION(_wrap_db_txn_get_name);
ZEND_NAMED_FUNCTION(_wrap_new_DbTxn);
static zend_function_entry DbTxn_functions[] = ;
zend_class_entry *dbc_ce_get(void)
ZEND_NAMED_FUNCTION(_wrap_dbc_close);
ZEND_NAMED_FUNCTION(_wrap_dbc_count);
ZEND_NAMED_FUNCTION(_wrap_dbc_del);
ZEND_NAMED_FUNCTION(_wrap_dbc_dup);
ZEND_NAMED_FUNCTION(_wrap_dbc_get);
ZEND_NAMED_FUNCTION(_wrap_dbc_put);
ZEND_NAMED_FUNCTION(_wrap_dbc_pget);
ZEND_BEGIN_ARG_INFO(first_and_second_args_force_ref, 0)
ZEND_ARG_PASS_INFO(1)
ZEND_ARG_PASS_INFO(1)
ZEND_END_ARG_INFO();
ZEND_BEGIN_ARG_INFO(first_and_second_and_third_args_force_ref, 0)
ZEND_ARG_PASS_INFO(1)
ZEND_ARG_PASS_INFO(1)
ZEND_END_ARG_INFO();
static unsigned char first_and_second_args_force_ref[] = ;
static unsigned char first_and_second_and_third_args_force_ref[] = ;
static zend_function_entry Dbc_functions[] = ;
zend_class_entry *db_env_ce_get(void)
ZEND_NAMED_FUNCTION(_wrap_new_DbEnv);
ZEND_NAMED_FUNCTION(_wrap_db_env_close);
ZEND_NAMED_FUNCTION(_wrap_db_env_dbremove);
ZEND_NAMED_FUNCTION(_wrap_db_env_dbrename);
ZEND_NAMED_FUNCTION(_wrap_db_env_get_encrypt_flags);
ZEND_NAMED_FUNCTION(_wrap_db_env_open);
ZEND_NAMED_FUNCTION(_wrap_db_env_remove);
ZEND_NAMED_FUNCTION(_wrap_db_env_set_data_dir);
ZEND_NAMED_FUNCTION(_wrap_db_env_set_encrypt);
ZEND_NAMED_FUNCTION(_wrap_db_env_txn_begin);
ZEND_NAMED_FUNCTION(_wrap_db_env_txn_checkpoint);
static zend_function_entry DbEnv_functions[] = ;
zend_class_entry *db_ce_get(void)
ZEND_NAMED_FUNCTION(_wrap_new_db4);
ZEND_NAMED_FUNCTION(_wrap_db_open);
ZEND_NAMED_FUNCTION(_wrap_db_close);
ZEND_NAMED_FUNCTION(_wrap_db_del);
ZEND_NAMED_FUNCTION(_wrap_db_get);
ZEND_NAMED_FUNCTION(_wrap_db_get_encrypt_flags);
ZEND_NAMED_FUNCTION(_wrap_db_pget);
ZEND_NAMED_FUNCTION(_wrap_db_get_type);
ZEND_NAMED_FUNCTION(_wrap_db_join);
ZEND_NAMED_FUNCTION(_wrap_db_put);
ZEND_NAMED_FUNCTION(_wrap_db_set_encrypt);
ZEND_NAMED_FUNCTION(_wrap_db_stat);
ZEND_NAMED_FUNCTION(_wrap_db_sync);
ZEND_NAMED_FUNCTION(_wrap_db_truncate);
ZEND_NAMED_FUNCTION(_wrap_db_cursor);
static zend_function_entry Db4_functions[] = ;
#if !(PHP_MAJOR_VERSION >= 5 && PHP_MINOR_VERSION >= 3)
BEGIN_EXTERN_C()
ZEND_GET_MODULE(db4)
END_EXTERN_C()
PHP_MINIT_FUNCTION(db4)
PHP_MSHUTDOWN_FUNCTION(db4)
PHP_MINFO_FUNCTION(db4)
void setDbEnv(zval *z, DB_ENV *dbenv TSRMLS_DC)
DB_ENV *php_db4_getDbEnvFromObj(zval *z TSRMLS_DC)
struct php_DB_ENV *php_db4_getPhpDbEnvFromObj(zval *z TSRMLS_DC)
#define getDbEnvFromThis(a)        \
do  while(0)
void setDb(zval *z, DB *db TSRMLS_DC)
struct php_DB *getPhpDbFromObj(zval *z TSRMLS_DC)
DB *php_db4_getDbFromObj(zval *z TSRMLS_DC)
#define getDbFromThis(a)        \
do  while(0)
#define getPhpDbFromThis(a)        \
do  while(0)
void setDbTxn(zval *z, DB_TXN *dbtxn TSRMLS_DC)
DB_TXN *php_db4_getDbTxnFromObj(zval *z TSRMLS_DC)
struct php_DB_TXN *getPhpDbTxnFromObj(zval *z TSRMLS_DC)
#define getDbTxnFromThis(a)        \
do  while(0)
#define getPhpDbTxnFromThis(a)        \
do  while(0)
void closeDbTxnDependencies(zval *obj TSRMLS_DC)
void setDbc(zval *z, DBC *dbc, struct php_DB_TXN *txn TSRMLS_DC)
DBC *php_db4_getDbcFromObj(zval *z TSRMLS_DC)
struct php_DBC *getPhpDbcFromObj(zval *z TSRMLS_DC)
#define getDbcFromThis(a)        \
do  while(0)
int closeDbc(zval *obj TSRMLS_DC)
ZEND_NAMED_FUNCTION(_wrap_db_txn_abort)
ZEND_NAMED_FUNCTION(_wrap_db_txn_commit)
ZEND_NAMED_FUNCTION(_wrap_db_txn_discard)
ZEND_NAMED_FUNCTION(_wrap_db_txn_id)
ZEND_NAMED_FUNCTION(_wrap_db_txn_set_timeout)
ZEND_NAMED_FUNCTION(_wrap_db_txn_set_name)
ZEND_NAMED_FUNCTION(_wrap_db_txn_get_name)
ZEND_NAMED_FUNCTION(_wrap_new_DbTxn)
ZEND_NAMED_FUNCTION(_wrap_new_db4)
ZEND_NAMED_FUNCTION(_wrap_db_open)
ZEND_NAMED_FUNCTION(_wrap_db_close)
ZEND_NAMED_FUNCTION(_wrap_db_del)
ZEND_NAMED_FUNCTION(_wrap_db_get)
ZEND_NAMED_FUNCTION(_wrap_db_pget)
ZEND_NAMED_FUNCTION(_wrap_db_get_type)
ZEND_NAMED_FUNCTION(_wrap_db_set_encrypt)
ZEND_NAMED_FUNCTION(_wrap_db_get_encrypt_flags)
ZEND_NAMED_FUNCTION(_wrap_db_stat)
ZEND_NAMED_FUNCTION(_wrap_db_join)
ZEND_NAMED_FUNCTION(_wrap_db_put)
ZEND_NAMED_FUNCTION(_wrap_db_sync)
ZEND_NAMED_FUNCTION(_wrap_db_truncate)
ZEND_NAMED_FUNCTION(_wrap_db_cursor)
ZEND_NAMED_FUNCTION(_wrap_dbc_close)
ZEND_NAMED_FUNCTION(_wrap_dbc_count)
ZEND_NAMED_FUNCTION(_wrap_dbc_del)
ZEND_NAMED_FUNCTION(_wrap_dbc_dup)
ZEND_NAMED_FUNCTION(_wrap_dbc_get)
ZEND_NAMED_FUNCTION(_wrap_dbc_pget)
ZEND_NAMED_FUNCTION(_wrap_dbc_put)
void php_db4_error(const DB_ENV *dp, const char *errpfx, const char *msg)
ZEND_NAMED_FUNCTION(_wrap_new_DbEnv)
ZEND_NAMED_FUNCTION(_wrap_db_env_close)
ZEND_NAMED_FUNCTION(_wrap_db_env_dbremove)
ZEND_NAMED_FUNCTION(_wrap_db_env_dbrename)
ZEND_NAMED_FUNCTION(_wrap_db_env_open)
ZEND_NAMED_FUNCTION(_wrap_db_env_remove)
ZEND_NAMED_FUNCTION(_wrap_db_env_set_data_dir)
ZEND_NAMED_FUNCTION(_wrap_db_env_set_encrypt)
ZEND_NAMED_FUNCTION(_wrap_db_env_get_encrypt_flags)
ZEND_NAMED_FUNCTION(_wrap_db_env_txn_begin)
ZEND_NAMED_FUNCTION(_wrap_db_env_txn_checkpoint)
