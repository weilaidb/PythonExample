#define COMPILING_BSDDB_C
#undef COMPILING_BSDDB_C
static char *rcs_id = ;
#if (PY_VERSION_HEX < 0x02050000)
typedef int Py_ssize_t;
#if (PY_VERSION_HEX < 0x02060000)
#define PyBytes_FromStringAndSize PyString_FromStringAndSize
#define PyBytes_FromString PyString_FromString
#define PyBytes_AsStringAndSize PyString_AsStringAndSize
#define PyBytes_Check PyString_Check
#define PyBytes_GET_SIZE PyString_GET_SIZE
#define PyBytes_AS_STRING PyString_AS_STRING
#if (PY_VERSION_HEX >= 0x03000000)
#define NUMBER_Check    PyLong_Check
#define NUMBER_AsLong   PyLong_AsLong
#define NUMBER_FromLong PyLong_FromLong
#define NUMBER_Check    PyInt_Check
#define NUMBER_AsLong   PyInt_AsLong
#define NUMBER_FromLong PyInt_FromLong
#define MYDB_BEGIN_ALLOW_THREADS Py_BEGIN_ALLOW_THREADS;
#define MYDB_END_ALLOW_THREADS Py_END_ALLOW_THREADS;
#define MYDB_BEGIN_BLOCK_THREADS \
PyGILState_STATE __savestate = PyGILState_Ensure();
#define MYDB_END_BLOCK_THREADS \
PyGILState_Release(__savestate);
#define MYDB_BEGIN_ALLOW_THREADS
#define MYDB_END_ALLOW_THREADS
#define MYDB_BEGIN_BLOCK_THREADS
#define MYDB_END_BLOCK_THREADS
static PyObject* DBError;
static PyObject* DBCursorClosedError;
static PyObject* DBKeyEmptyError;
static PyObject* DBKeyExistError;
static PyObject* DBLockDeadlockError;
static PyObject* DBLockNotGrantedError;
static PyObject* DBNotFoundError;
static PyObject* DBOldVersionError;
static PyObject* DBRunRecoveryError;
static PyObject* DBVerifyBadError;
static PyObject* DBNoServerError;
#if (DBVER < 52)
static PyObject* DBNoServerHomeError;
static PyObject* DBNoServerIDError;
static PyObject* DBPageNotFoundError;
static PyObject* DBSecondaryBadError;
static PyObject* DBInvalidArgError;
static PyObject* DBAccessError;
static PyObject* DBNoSpaceError;
static PyObject* DBNoMemoryError;
static PyObject* DBAgainError;
static PyObject* DBBusyError;
static PyObject* DBFileExistsError;
static PyObject* DBNoSuchFileError;
static PyObject* DBPermissionsError;
static PyObject* DBRepHandleDeadError;
#if (DBVER >= 44)
static PyObject* DBRepLockoutError;
#if (DBVER >= 46)
static PyObject* DBRepLeaseExpiredError;
#if (DBVER >= 47)
static PyObject* DBForeignConflictError;
static PyObject* DBRepUnavailError;
#if (DBVER < 48)
#define DB_GID_SIZE DB_XIDDATASIZE
#if PYTHON_API_VERSION < 1010
#error
#define DEFAULT_GET_RETURNS_NONE                1
#define DEFAULT_CURSOR_SET_RETURNS_NONE         1
#define staticforward static
#define statichere static
staticforward PyTypeObject DB_Type, DBCursor_Type, DBEnv_Type, DBTxn_Type,
DBLock_Type, DBLogCursor_Type;
staticforward PyTypeObject DBSequence_Type;
#if (DBVER >= 52)
staticforward PyTypeObject DBSite_Type;
#define Py_TYPE(ob)              (((PyObject*)(ob))->ob_type)
#define DBObject_Check(v)           (Py_TYPE(v) == &DB_Type)
#define DBCursorObject_Check(v)     (Py_TYPE(v) == &DBCursor_Type)
#define DBLogCursorObject_Check(v)  (Py_TYPE(v) == &DBLogCursor_Type)
#define DBEnvObject_Check(v)        (Py_TYPE(v) == &DBEnv_Type)
#define DBTxnObject_Check(v)        (Py_TYPE(v) == &DBTxn_Type)
#define DBLockObject_Check(v)       (Py_TYPE(v) == &DBLock_Type)
#define DBSequenceObject_Check(v)   (Py_TYPE(v) == &DBSequence_Type)
#if (DBVER >= 52)
#define DBSiteObject_Check(v)       (Py_TYPE(v) == &DBSite_Type)
#if (DBVER < 46)
#define _DBC_close(dbc)           dbc->c_close(dbc)
#define _DBC_count(dbc,a,b)       dbc->c_count(dbc,a,b)
#define _DBC_del(dbc,a)           dbc->c_del(dbc,a)
#define _DBC_dup(dbc,a,b)         dbc->c_dup(dbc,a,b)
#define _DBC_get(dbc,a,b,c)       dbc->c_get(dbc,a,b,c)
#define _DBC_pget(dbc,a,b,c,d)    dbc->c_pget(dbc,a,b,c,d)
#define _DBC_put(dbc,a,b,c)       dbc->c_put(dbc,a,b,c)
#define _DBC_close(dbc)           dbc->close(dbc)
#define _DBC_count(dbc,a,b)       dbc->count(dbc,a,b)
#define _DBC_del(dbc,a)           dbc->del(dbc,a)
#define _DBC_dup(dbc,a,b)         dbc->dup(dbc,a,b)
#define _DBC_get(dbc,a,b,c)       dbc->get(dbc,a,b,c)
#define _DBC_pget(dbc,a,b,c,d)    dbc->pget(dbc,a,b,c,d)
#define _DBC_put(dbc,a,b,c)       dbc->put(dbc,a,b,c)
#define INSERT_IN_DOUBLE_LINKED_LIST(backlink,object)                   \
#define EXTRACT_FROM_DOUBLE_LINKED_LIST(object)                          \
#define EXTRACT_FROM_DOUBLE_LINKED_LIST_MAYBE_NULL(object)               \
#define INSERT_IN_DOUBLE_LINKED_LIST_TXN(backlink,object)  \
#define EXTRACT_FROM_DOUBLE_LINKED_LIST_TXN(object)             \
#define RETURN_IF_ERR()          \
if (makeDBError(err))
#define RETURN_NONE()  Py_INCREF(Py_None); return Py_None;
#define _CHECK_OBJECT_NOT_CLOSED(nonNull, pyErrObj, name) \
if ((nonNull) == NULL)
#define CHECK_DB_NOT_CLOSED(dbobj) \
_CHECK_OBJECT_NOT_CLOSED(dbobj->db, DBError, DB)
#define CHECK_ENV_NOT_CLOSED(env) \
_CHECK_OBJECT_NOT_CLOSED(env->db_env, DBError, DBEnv)
#define CHECK_CURSOR_NOT_CLOSED(curs) \
_CHECK_OBJECT_NOT_CLOSED(curs->dbc, DBCursorClosedError, DBCursor)
#define CHECK_LOGCURSOR_NOT_CLOSED(logcurs) \
_CHECK_OBJECT_NOT_CLOSED(logcurs->logc, DBCursorClosedError, DBLogCursor)
#define CHECK_SEQUENCE_NOT_CLOSED(curs) \
_CHECK_OBJECT_NOT_CLOSED(curs->sequence, DBError, DBSequence)
#if (DBVER >= 52)
#define CHECK_SITE_NOT_CLOSED(db_site) \
_CHECK_OBJECT_NOT_CLOSED(db_site->site, DBError, DBSite)
#define CHECK_DBFLAG(mydb, flag)    (((mydb)->flags & (flag)) || \
(((mydb)->myenvobj != NULL) && ((mydb)->myenvobj->flags & (flag))))
#define CLEAR_DBT(dbt)              (memset(&(dbt), 0, sizeof(dbt)))
#define FREE_DBT(dbt)               if ((dbt.flags & (DB_DBT_MALLOC|DB_DBT_REALLOC)) && \
dbt.data != NULL)
static int makeDBError(int err);
static int _DB_get_type(DBObject* self)
static int make_dbt(PyObject* obj, DBT* dbt)
static int
make_key_dbt(DBObject* self, PyObject* keyobj, DBT* key, int* pflags)
static int add_partial_dbt(DBT* d, int dlen, int doff)
unsigned int our_strlcpy(char* dest, const char* src, unsigned int n)
static char _db_errmsg[1024];
static void _db_errorCallback(const DB_ENV *db_env,
const char* prefix, const char* msg)
static const char *DummyString = ;
static PyObject *Build_PyString(const char *p,int s)
static PyObject *BuildValue_S(const void *p,int s)
static PyObject *BuildValue_SS(const void *p1,int s1,const void *p2,int s2)
static PyObject *BuildValue_IS(int i,const void *p,int s)
static PyObject *BuildValue_LS(long l,const void *p,int s)
static int makeDBError(int err)
static void makeTypeError(char* expected, PyObject* found)
static int checkTxnObj(PyObject* txnobj, DB_TXN** txn)
static int _DB_delete(DBObject* self, DB_TXN *txn, DBT *key, int flags)
static int _DB_put(DBObject* self, DB_TXN *txn, DBT *key, DBT *data, int flags)
static PyObject* _DBCursor_get(DBCursorObject* self, int extra_flags,
PyObject *args, PyObject *kwargs, char *format)
static void _addIntToDict(PyObject* dict, char *name, int value)
static void _addTimeTToDict(PyObject* dict, char *name, time_t value)
static void _addDb_seq_tToDict(PyObject* dict, char *name, db_seq_t value)
static void _addDB_lsnToDict(PyObject* dict, char *name, DB_LSN value)
static DBObject*
newDBObject(DBEnvObject* arg, int flags)
static PyObject *DB_close_internal(DBObject* self, int flags, int do_not_close);
static void
DB_dealloc(DBObject* self)
static DBCursorObject*
newDBCursorObject(DBC* dbc, DBTxnObject *txn, DBObject* db)
static PyObject *DBC_close_internal(DBCursorObject* self);
static void
DBCursor_dealloc(DBCursorObject* self)
static DBLogCursorObject*
newDBLogCursorObject(DB_LOGC* dblogc, DBEnvObject* env)
static PyObject *DBLogCursor_close_internal(DBLogCursorObject* self);
static void
DBLogCursor_dealloc(DBLogCursorObject* self)
static DBEnvObject*
newDBEnvObject(int flags)
static PyObject *DBEnv_close_internal(DBEnvObject* self, int flags);
static void
DBEnv_dealloc(DBEnvObject* self)
static DBTxnObject*
newDBTxnObject(DBEnvObject* myenv, DBTxnObject *parent, DB_TXN *txn, int flags)
static PyObject *
DBTxn_abort_discard_internal(DBTxnObject* self, int discard);
static void
DBTxn_dealloc(DBTxnObject* self)
static DBLockObject*
newDBLockObject(DBEnvObject* myenv, u_int32_t locker, DBT* obj,
db_lockmode_t lock_mode, int flags)
static void
DBLock_dealloc(DBLockObject* self)
static DBSequenceObject*
newDBSequenceObject(DBObject* mydb,  int flags)
static PyObject
*DBSequence_close_internal(DBSequenceObject* self, int flags, int do_not_close);
static void
DBSequence_dealloc(DBSequenceObject* self)
#if (DBVER >= 52)
static DBSiteObject*
newDBSiteObject(DB_SITE* sitep, DBEnvObject* env)
static PyObject *DBSite_close_internal(DBSiteObject* self);
static void
DBSite_dealloc(DBSiteObject* self)
static PyObject*
DB_append(DBObject* self, PyObject* args, PyObject* kwargs)
static int
_db_associateCallback(DB* db, const DBT* priKey, const DBT* priData,
DBT* secKey)
static PyObject*
DB_associate(DBObject* self, PyObject* args, PyObject* kwargs)
static PyObject*
DB_close_internal(DBObject* self, int flags, int do_not_close)
static PyObject*
DB_close(DBObject* self, PyObject* args)
static PyObject*
_DB_consume(DBObject* self, PyObject* args, PyObject* kwargs, int consume_flag)
static PyObject*
DB_consume(DBObject* self, PyObject* args, PyObject* kwargs, int consume_flag)
static PyObject*
DB_consume_wait(DBObject* self, PyObject* args, PyObject* kwargs,
int consume_flag)
static PyObject*
DB_cursor(DBObject* self, PyObject* args, PyObject* kwargs)
static PyObject*
DB_delete(DBObject* self, PyObject* args, PyObject* kwargs)
#if (DBVER >= 47)
static PyObject*
DB_compact(DBObject* self, PyObject* args, PyObject* kwargs)
static PyObject*
DB_fd(DBObject* self)
#if (DBVER >= 46)
static PyObject*
DB_exists(DBObject* self, PyObject* args, PyObject* kwargs)
static PyObject*
DB_get(DBObject* self, PyObject* args, PyObject* kwargs)
static PyObject*
DB_pget(DBObject* self, PyObject* args, PyObject* kwargs)
static PyObject*
DB_get_size(DBObject* self, PyObject* args, PyObject* kwargs)
static PyObject*
DB_get_both(DBObject* self, PyObject* args, PyObject* kwargs)
static PyObject*
DB_get_byteswapped(DBObject* self)
static PyObject*
DB_get_type(DBObject* self)
static PyObject*
DB_join(DBObject* self, PyObject* args)
static PyObject*
DB_key_range(DBObject* self, PyObject* args, PyObject* kwargs)
static PyObject*
DB_open(DBObject* self, PyObject* args, PyObject* kwargs)
static PyObject*
DB_put(DBObject* self, PyObject* args, PyObject* kwargs)
static PyObject*
DB_remove(DBObject* self, PyObject* args, PyObject* kwargs)
static PyObject*
DB_rename(DBObject* self, PyObject* args)
static PyObject*
DB_get_private(DBObject* self)
static PyObject*
DB_set_private(DBObject* self, PyObject* private_obj)
#if (DBVER >= 46)
static PyObject*
DB_set_priority(DBObject* self, PyObject* args)
static PyObject*
DB_get_priority(DBObject* self)
static PyObject*
DB_get_dbname(DBObject* self)
static PyObject*
DB_get_open_flags(DBObject* self)
static PyObject*
DB_set_q_extentsize(DBObject* self, PyObject* args)
static PyObject*
DB_get_q_extentsize(DBObject* self)
static PyObject*
DB_set_bt_minkey(DBObject* self, PyObject* args)
static PyObject*
DB_get_bt_minkey(DBObject* self)
static int
_default_cmp(const DBT *leftKey,
const DBT *rightKey)
static int
_db_compareCallback(DB* db,
const DBT *leftKey,
const DBT *rightKey)
static PyObject*
DB_set_bt_compare(DBObject* self, PyObject* comparator)
static int
_db_dupCompareCallback(DB* db,
const DBT *leftKey,
const DBT *rightKey)
static PyObject*
DB_set_dup_compare(DBObject* self, PyObject* comparator)
static PyObject*
DB_set_cachesize(DBObject* self, PyObject* args)
static PyObject*
DB_get_cachesize(DBObject* self)
static PyObject*
DB_set_flags(DBObject* self, PyObject* args)
static PyObject*
DB_get_flags(DBObject* self)
static PyObject*
DB_get_transactional(DBObject* self)
static PyObject*
DB_set_h_ffactor(DBObject* self, PyObject* args)
static PyObject*
DB_get_h_ffactor(DBObject* self)
static PyObject*
DB_set_h_nelem(DBObject* self, PyObject* args)
static PyObject*
DB_get_h_nelem(DBObject* self)
static PyObject*
DB_set_lorder(DBObject* self, PyObject* args)
static PyObject*
DB_get_lorder(DBObject* self)
static PyObject*
DB_set_pagesize(DBObject* self, PyObject* args)
static PyObject*
DB_get_pagesize(DBObject* self)
static PyObject*
DB_set_re_delim(DBObject* self, PyObject* args)
static PyObject*
DB_get_re_delim(DBObject* self)
static PyObject*
DB_set_re_len(DBObject* self, PyObject* args)
static PyObject*
DB_get_re_len(DBObject* self)
static PyObject*
DB_set_re_pad(DBObject* self, PyObject* args)
static PyObject*
DB_get_re_pad(DBObject* self)
static PyObject*
DB_set_re_source(DBObject* self, PyObject* args)
static PyObject*
DB_get_re_source(DBObject* self)
static PyObject*
DB_stat(DBObject* self, PyObject* args, PyObject* kwargs)
static PyObject*
DB_stat_print(DBObject* self, PyObject* args, PyObject *kwargs)
static PyObject*
DB_sync(DBObject* self, PyObject* args)
static PyObject*
DB_truncate(DBObject* self, PyObject* args, PyObject* kwargs)
static PyObject*
DB_upgrade(DBObject* self, PyObject* args)
static PyObject*
DB_verify(DBObject* self, PyObject* args, PyObject* kwargs)
static PyObject*
DB_set_get_returns_none(DBObject* self, PyObject* args)
static PyObject*
DB_set_encrypt(DBObject* self, PyObject* args, PyObject* kwargs)
static PyObject*
DB_get_encrypt_flags(DBObject* self)
Py_ssize_t DB_length(PyObject* _self)
PyObject* DB_subscript(DBObject* self, PyObject* keyobj)
static int
DB_ass_sub(DBObject* self, PyObject* keyobj, PyObject* dataobj)
static PyObject*
_DB_has_key(DBObject* self, PyObject* keyobj, PyObject* txnobj)
static PyObject*
DB_has_key(DBObject* self, PyObject* args, PyObject* kwargs)
static int DB_contains(DBObject* self, PyObject* keyobj)
#define _KEYS_LIST      1
#define _VALUES_LIST    2
#define _ITEMS_LIST     3
static PyObject*
_DB_make_list(DBObject* self, DB_TXN* txn, int type)
static PyObject*
DB_keys(DBObject* self, PyObject* args)
static PyObject*
DB_items(DBObject* self, PyObject* args)
static PyObject*
DB_values(DBObject* self, PyObject* args)
static PyObject*
DBLogCursor_close_internal(DBLogCursorObject* self)
static PyObject*
DBLogCursor_close(DBLogCursorObject* self)
static PyObject*
_DBLogCursor_get(DBLogCursorObject* self, int flag, DB_LSN *lsn2)
static PyObject*
DBLogCursor_current(DBLogCursorObject* self)
static PyObject*
DBLogCursor_first(DBLogCursorObject* self)
static PyObject*
DBLogCursor_last(DBLogCursorObject* self)
static PyObject*
DBLogCursor_next(DBLogCursorObject* self)
static PyObject*
DBLogCursor_prev(DBLogCursorObject* self)
static PyObject*
DBLogCursor_set(DBLogCursorObject* self, PyObject* args)
#if (DBVER >= 52)
static PyObject*
DBSite_close_internal(DBSiteObject* self)
static PyObject*
DBSite_close(DBSiteObject* self)
static PyObject*
DBSite_remove(DBSiteObject* self)
static PyObject*
DBSite_get_eid(DBSiteObject* self)
static PyObject*
DBSite_get_address(DBSiteObject* self)
static PyObject*
DBSite_get_config(DBSiteObject* self, PyObject* args, PyObject* kwargs)
static PyObject*
DBSite_set_config(DBSiteObject* self, PyObject* args, PyObject* kwargs)
static PyObject*
DBC_close_internal(DBCursorObject* self)
static PyObject*
DBC_close(DBCursorObject* self)
static PyObject*
DBC_count(DBCursorObject* self, PyObject* args)
static PyObject*
DBC_current(DBCursorObject* self, PyObject* args, PyObject *kwargs)
static PyObject*
DBC_delete(DBCursorObject* self, PyObject* args)
static PyObject*
DBC_dup(DBCursorObject* self, PyObject* args)
static PyObject*
DBC_first(DBCursorObject* self, PyObject* args, PyObject* kwargs)
static PyObject*
DBC_get(DBCursorObject* self, PyObject* args, PyObject *kwargs)
static PyObject*
DBC_pget(DBCursorObject* self, PyObject* args, PyObject *kwargs)
static PyObject*
DBC_get_recno(DBCursorObject* self)
static PyObject*
DBC_last(DBCursorObject* self, PyObject* args, PyObject *kwargs)
static PyObject*
DBC_next(DBCursorObject* self, PyObject* args, PyObject *kwargs)
static PyObject*
DBC_prev(DBCursorObject* self, PyObject* args, PyObject *kwargs)
static PyObject*
DBC_put(DBCursorObject* self, PyObject* args, PyObject* kwargs)
static PyObject*
DBC_set(DBCursorObject* self, PyObject* args, PyObject *kwargs)
static PyObject*
DBC_set_range(DBCursorObject* self, PyObject* args, PyObject* kwargs)
static PyObject*
_DBC_get_set_both(DBCursorObject* self, PyObject* keyobj, PyObject* dataobj,
int flags, unsigned int returnsNone)
static PyObject*
DBC_get_both(DBCursorObject* self, PyObject* args)
static PyObject*
DBC_get_current_size(DBCursorObject* self)
static PyObject*
DBC_set_both(DBCursorObject* self, PyObject* args)
static PyObject*
DBC_set_recno(DBCursorObject* self, PyObject* args, PyObject *kwargs)
static PyObject*
DBC_consume(DBCursorObject* self, PyObject* args, PyObject *kwargs)
static PyObject*
DBC_next_dup(DBCursorObject* self, PyObject* args, PyObject *kwargs)
static PyObject*
DBC_next_nodup(DBCursorObject* self, PyObject* args, PyObject *kwargs)
#if (DBVER >= 46)
static PyObject*
DBC_prev_dup(DBCursorObject* self, PyObject* args, PyObject *kwargs)
static PyObject*
DBC_prev_nodup(DBCursorObject* self, PyObject* args, PyObject *kwargs)
static PyObject*
DBC_join_item(DBCursorObject* self, PyObject* args)
#if (DBVER >= 46)
static PyObject*
DBC_set_priority(DBCursorObject* self, PyObject* args, PyObject* kwargs)
static PyObject*
DBC_get_priority(DBCursorObject* self)
static PyObject*
DBEnv_close_internal(DBEnvObject* self, int flags)
static PyObject*
DBEnv_close(DBEnvObject* self, PyObject* args)
static PyObject*
DBEnv_open(DBEnvObject* self, PyObject* args)
static PyObject*
DBEnv_memp_stat(DBEnvObject* self, PyObject* args, PyObject *kwargs)
static PyObject*
DBEnv_memp_stat_print(DBEnvObject* self, PyObject* args, PyObject *kwargs)
static PyObject*
DBEnv_memp_trickle(DBEnvObject* self, PyObject* args)
static PyObject*
DBEnv_memp_sync(DBEnvObject* self, PyObject* args)
static PyObject*
DBEnv_remove(DBEnvObject* self, PyObject* args)
static PyObject*
DBEnv_dbremove(DBEnvObject* self, PyObject* args, PyObject* kwargs)
static PyObject*
DBEnv_dbrename(DBEnvObject* self, PyObject* args, PyObject* kwargs)
static PyObject*
DBEnv_set_encrypt(DBEnvObject* self, PyObject* args, PyObject* kwargs)
static PyObject*
DBEnv_get_encrypt_flags(DBEnvObject* self)
static PyObject*
DBEnv_get_timeout(DBEnvObject* self, PyObject* args, PyObject* kwargs)
static PyObject*
DBEnv_set_timeout(DBEnvObject* self, PyObject* args, PyObject* kwargs)
static PyObject*
DBEnv_set_shm_key(DBEnvObject* self, PyObject* args)
static PyObject*
DBEnv_get_shm_key(DBEnvObject* self)
#if (DBVER >= 46)
static PyObject*
DBEnv_set_cache_max(DBEnvObject* self, PyObject* args)
static PyObject*
DBEnv_get_cache_max(DBEnvObject* self)
#if (DBVER >= 46)
static PyObject*
DBEnv_set_thread_count(DBEnvObject* self, PyObject* args)
static PyObject*
DBEnv_get_thread_count(DBEnvObject* self)
static PyObject*
DBEnv_set_cachesize(DBEnvObject* self, PyObject* args)
static PyObject*
DBEnv_get_cachesize(DBEnvObject* self)
static PyObject*
DBEnv_set_flags(DBEnvObject* self, PyObject* args)
static PyObject*
DBEnv_get_flags(DBEnvObject* self)
#if (DBVER >= 47)
static PyObject*
DBEnv_log_set_config(DBEnvObject* self, PyObject* args)
static PyObject*
DBEnv_log_get_config(DBEnvObject* self, PyObject* args)
#if (DBVER >= 44)
static PyObject*
DBEnv_mutex_set_max(DBEnvObject* self, PyObject* args)
static PyObject*
DBEnv_mutex_get_max(DBEnvObject* self)
static PyObject*
DBEnv_mutex_set_align(DBEnvObject* self, PyObject* args)
static PyObject*
DBEnv_mutex_get_align(DBEnvObject* self)
static PyObject*
DBEnv_mutex_set_increment(DBEnvObject* self, PyObject* args)
static PyObject*
DBEnv_mutex_get_increment(DBEnvObject* self)
static PyObject*
DBEnv_mutex_set_tas_spins(DBEnvObject* self, PyObject* args)
static PyObject*
DBEnv_mutex_get_tas_spins(DBEnvObject* self)
static PyObject*
DBEnv_set_data_dir(DBEnvObject* self, PyObject* args)
static PyObject*
DBEnv_get_data_dirs(DBEnvObject* self)
#if (DBVER >= 44)
static PyObject*
DBEnv_set_lg_filemode(DBEnvObject* self, PyObject* args)
static PyObject*
DBEnv_get_lg_filemode(DBEnvObject* self)
static PyObject*
DBEnv_set_lg_bsize(DBEnvObject* self, PyObject* args)
static PyObject*
DBEnv_get_lg_bsize(DBEnvObject* self)
static PyObject*
DBEnv_set_lg_dir(DBEnvObject* self, PyObject* args)
static PyObject*
DBEnv_get_lg_dir(DBEnvObject* self)
static PyObject*
DBEnv_set_lg_max(DBEnvObject* self, PyObject* args)
static PyObject*
DBEnv_get_lg_max(DBEnvObject* self)
static PyObject*
DBEnv_set_lg_regionmax(DBEnvObject* self, PyObject* args)
static PyObject*
DBEnv_get_lg_regionmax(DBEnvObject* self)
#if (DBVER >= 47)
static PyObject*
DBEnv_set_lk_partitions(DBEnvObject* self, PyObject* args)
static PyObject*
DBEnv_get_lk_partitions(DBEnvObject* self)
static PyObject*
DBEnv_set_lk_detect(DBEnvObject* self, PyObject* args)
static PyObject*
DBEnv_get_lk_detect(DBEnvObject* self)
#if (DBVER < 45)
static PyObject*
DBEnv_set_lk_max(DBEnvObject* self, PyObject* args)
static PyObject*
DBEnv_set_lk_max_locks(DBEnvObject* self, PyObject* args)
static PyObject*
DBEnv_get_lk_max_locks(DBEnvObject* self)
static PyObject*
DBEnv_set_lk_max_lockers(DBEnvObject* self, PyObject* args)
static PyObject*
DBEnv_get_lk_max_lockers(DBEnvObject* self)
static PyObject*
DBEnv_set_lk_max_objects(DBEnvObject* self, PyObject* args)
static PyObject*
DBEnv_get_lk_max_objects(DBEnvObject* self)
static PyObject*
DBEnv_get_mp_mmapsize(DBEnvObject* self)
static PyObject*
DBEnv_set_mp_mmapsize(DBEnvObject* self, PyObject* args)
static PyObject*
DBEnv_set_tmp_dir(DBEnvObject* self, PyObject* args)
static PyObject*
DBEnv_get_tmp_dir(DBEnvObject* self)
static PyObject*
DBEnv_txn_recover(DBEnvObject* self)
static PyObject*
DBEnv_txn_begin(DBEnvObject* self, PyObject* args, PyObject* kwargs)
static PyObject*
DBEnv_txn_checkpoint(DBEnvObject* self, PyObject* args)
static PyObject*
DBEnv_get_tx_max(DBEnvObject* self)
static PyObject*
DBEnv_set_tx_max(DBEnvObject* self, PyObject* args)
static PyObject*
DBEnv_get_tx_timestamp(DBEnvObject* self)
static PyObject*
DBEnv_set_tx_timestamp(DBEnvObject* self, PyObject* args)
static PyObject*
DBEnv_lock_detect(DBEnvObject* self, PyObject* args)
static PyObject*
DBEnv_lock_get(DBEnvObject* self, PyObject* args)
static PyObject*
DBEnv_lock_id(DBEnvObject* self)
static PyObject*
DBEnv_lock_id_free(DBEnvObject* self, PyObject* args)
static PyObject*
DBEnv_lock_put(DBEnvObject* self, PyObject* args)
#if (DBVER >= 44)
static PyObject*
DBEnv_fileid_reset(DBEnvObject* self, PyObject* args, PyObject* kwargs)
static PyObject*
DBEnv_lsn_reset(DBEnvObject* self, PyObject* args, PyObject* kwargs)
static PyObject*
DBEnv_stat_print(DBEnvObject* self, PyObject* args, PyObject *kwargs)
static PyObject*
DBEnv_log_stat(DBEnvObject* self, PyObject* args)
static PyObject*
DBEnv_log_stat_print(DBEnvObject* self, PyObject* args, PyObject *kwargs)
static PyObject*
DBEnv_lock_stat(DBEnvObject* self, PyObject* args)
static PyObject*
DBEnv_lock_stat_print(DBEnvObject* self, PyObject* args, PyObject *kwargs)
static PyObject*
DBEnv_log_cursor(DBEnvObject* self)
static PyObject*
DBEnv_log_flush(DBEnvObject* self)
static PyObject*
DBEnv_log_file(DBEnvObject* self, PyObject* args)
#if (DBVER >= 44)
static PyObject*
DBEnv_log_printf(DBEnvObject* self, PyObject* args, PyObject *kwargs)
static PyObject*
DBEnv_log_archive(DBEnvObject* self, PyObject* args)
#if (DBVER >= 52)
static PyObject*
DBEnv_repmgr_site(DBEnvObject* self, PyObject* args, PyObject *kwargs)
static PyObject*
DBEnv_repmgr_site_by_eid(DBEnvObject* self, PyObject* args, PyObject *kwargs)
#if (DBVER >= 44)
static PyObject*
DBEnv_mutex_stat(DBEnvObject* self, PyObject* args)
#if (DBVER >= 44)
static PyObject*
DBEnv_mutex_stat_print(DBEnvObject* self, PyObject* args, PyObject *kwargs)
static PyObject*
DBEnv_txn_stat_print(DBEnvObject* self, PyObject* args, PyObject *kwargs)
static PyObject*
DBEnv_txn_stat(DBEnvObject* self, PyObject* args)
static PyObject*
DBEnv_set_get_returns_none(DBEnvObject* self, PyObject* args)
static PyObject*
DBEnv_get_private(DBEnvObject* self)
static PyObject*
DBEnv_set_private(DBEnvObject* self, PyObject* private_obj)
#if (DBVER >= 47)
static PyObject*
DBEnv_set_intermediate_dir_mode(DBEnvObject* self, PyObject* args)
static PyObject*
DBEnv_get_intermediate_dir_mode(DBEnvObject* self)
#if (DBVER < 47)
static PyObject*
DBEnv_set_intermediate_dir(DBEnvObject* self, PyObject* args)
static PyObject*
DBEnv_get_open_flags(DBEnvObject* self)
#if (DBVER < 48)
static PyObject*
DBEnv_set_rpc_server(DBEnvObject* self, PyObject* args, PyObject* kwargs)
static PyObject*
DBEnv_set_mp_max_openfd(DBEnvObject* self, PyObject* args)
static PyObject*
DBEnv_get_mp_max_openfd(DBEnvObject* self)
static PyObject*
DBEnv_set_mp_max_write(DBEnvObject* self, PyObject* args)
static PyObject*
DBEnv_get_mp_max_write(DBEnvObject* self)
static PyObject*
DBEnv_set_verbose(DBEnvObject* self, PyObject* args)
static PyObject*
DBEnv_get_verbose(DBEnvObject* self, PyObject* args)
#if (DBVER >= 45)
static void
_dbenv_event_notifyCallback(DB_ENV* db_env, u_int32_t event, void *event_info)
#if (DBVER >= 45)
static PyObject*
DBEnv_set_event_notify(DBEnvObject* self, PyObject* notifyFunc)
static PyObject*
DBEnv_rep_process_message(DBEnvObject* self, PyObject* args)
static int
_DBEnv_rep_transportCallback(DB_ENV* db_env, const DBT* control, const DBT* rec,
const DB_LSN *lsn, int envid, u_int32_t flags)
static PyObject*
DBEnv_rep_set_transport(DBEnvObject* self, PyObject* args)
#if (DBVER >= 47)
static PyObject*
DBEnv_rep_set_request(DBEnvObject* self, PyObject* args)
static PyObject*
DBEnv_rep_get_request(DBEnvObject* self)
#if (DBVER >= 45)
static PyObject*
DBEnv_rep_set_limit(DBEnvObject* self, PyObject* args)
static PyObject*
DBEnv_rep_get_limit(DBEnvObject* self)
#if (DBVER >= 44)
static PyObject*
DBEnv_rep_set_config(DBEnvObject* self, PyObject* args)
static PyObject*
DBEnv_rep_get_config(DBEnvObject* self, PyObject* args)
#if (DBVER >= 46)
static PyObject*
DBEnv_rep_elect(DBEnvObject* self, PyObject* args)
static PyObject*
DBEnv_rep_start(DBEnvObject* self, PyObject* args, PyObject* kwargs)
#if (DBVER >= 44)
static PyObject*
DBEnv_rep_sync(DBEnvObject* self)
#if (DBVER >= 45)
static PyObject*
DBEnv_rep_set_nsites(DBEnvObject* self, PyObject* args)
static PyObject*
DBEnv_rep_get_nsites(DBEnvObject* self)
static PyObject*
DBEnv_rep_set_priority(DBEnvObject* self, PyObject* args)
static PyObject*
DBEnv_rep_get_priority(DBEnvObject* self)
static PyObject*
DBEnv_rep_set_timeout(DBEnvObject* self, PyObject* args)
static PyObject*
DBEnv_rep_get_timeout(DBEnvObject* self, PyObject* args)
#if (DBVER >= 47)
static PyObject*
DBEnv_rep_set_clockskew(DBEnvObject* self, PyObject* args)
static PyObject*
DBEnv_rep_get_clockskew(DBEnvObject* self)
static PyObject*
DBEnv_rep_stat_print(DBEnvObject* self, PyObject* args, PyObject *kwargs)
static PyObject*
DBEnv_rep_stat(DBEnvObject* self, PyObject* args, PyObject *kwargs)
#if (DBVER >= 45)
static PyObject*
DBEnv_repmgr_start(DBEnvObject* self, PyObject* args, PyObject*
kwargs)
#if (DBVER < 52)
static PyObject*
DBEnv_repmgr_set_local_site(DBEnvObject* self, PyObject* args, PyObject*
kwargs)
static PyObject*
DBEnv_repmgr_add_remote_site(DBEnvObject* self, PyObject* args, PyObject*
kwargs)
static PyObject*
DBEnv_repmgr_set_ack_policy(DBEnvObject* self, PyObject* args)
static PyObject*
DBEnv_repmgr_get_ack_policy(DBEnvObject* self)
static PyObject*
DBEnv_repmgr_site_list(DBEnvObject* self)
#if (DBVER >= 46)
static PyObject*
DBEnv_repmgr_stat_print(DBEnvObject* self, PyObject* args, PyObject *kwargs)
static PyObject*
DBEnv_repmgr_stat(DBEnvObject* self, PyObject* args, PyObject *kwargs)
static void _close_transaction_cursors(DBTxnObject* txn)
static void _promote_transaction_dbs_and_sequences(DBTxnObject *txn)
static PyObject*
DBTxn_commit(DBTxnObject* self, PyObject* args)
static PyObject*
DBTxn_prepare(DBTxnObject* self, PyObject* args)
static PyObject*
DBTxn_abort_discard_internal(DBTxnObject* self, int discard)
static PyObject*
DBTxn_abort(DBTxnObject* self)
static PyObject*
DBTxn_discard(DBTxnObject* self)
static PyObject*
DBTxn_id(DBTxnObject* self)
static PyObject*
DBTxn_set_timeout(DBTxnObject* self, PyObject* args, PyObject* kwargs)
#if (DBVER >= 44)
static PyObject*
DBTxn_set_name(DBTxnObject* self, PyObject* args)
#if (DBVER >= 44)
static PyObject*
DBTxn_get_name(DBTxnObject* self)
static PyObject*
DBSequence_close_internal(DBSequenceObject* self, int flags, int do_not_close)
static PyObject*
DBSequence_close(DBSequenceObject* self, PyObject* args)
static PyObject*
DBSequence_get(DBSequenceObject* self, PyObject* args, PyObject* kwargs)
static PyObject*
DBSequence_get_dbp(DBSequenceObject* self)
static PyObject*
DBSequence_get_key(DBSequenceObject* self)
static PyObject*
DBSequence_initial_value(DBSequenceObject* self, PyObject* args)
static PyObject*
DBSequence_open(DBSequenceObject* self, PyObject* args, PyObject* kwargs)
static PyObject*
DBSequence_remove(DBSequenceObject* self, PyObject* args, PyObject* kwargs)
static PyObject*
DBSequence_set_cachesize(DBSequenceObject* self, PyObject* args)
static PyObject*
DBSequence_get_cachesize(DBSequenceObject* self)
static PyObject*
DBSequence_set_flags(DBSequenceObject* self, PyObject* args)
static PyObject*
DBSequence_get_flags(DBSequenceObject* self)
static PyObject*
DBSequence_set_range(DBSequenceObject* self, PyObject* args)
static PyObject*
DBSequence_get_range(DBSequenceObject* self)
static PyObject*
DBSequence_stat_print(DBSequenceObject* self, PyObject* args, PyObject *kwargs)
static PyObject*
DBSequence_stat(DBSequenceObject* self, PyObject* args, PyObject* kwargs)
static PyMethodDef DB_methods[] = ;
static PySequenceMethods DB_sequence = ;
static PyMappingMethods DB_mapping = ;
static PyMethodDef DBCursor_methods[] = ;
static PyMethodDef DBLogCursor_methods[] = ;
#if (DBVER >= 52)
static PyMethodDef DBSite_methods[] = ;
static PyMethodDef DBEnv_methods[] = ;
static PyMethodDef DBTxn_methods[] = ;
static PyMethodDef DBSequence_methods[] = ;
static PyObject*
DBEnv_db_home_get(DBEnvObject* self)
static PyGetSetDef DBEnv_getsets[] = ;
statichere PyTypeObject DB_Type = ;
statichere PyTypeObject DBCursor_Type = ;
statichere PyTypeObject DBLogCursor_Type = ;
#if (DBVER >= 52)
statichere PyTypeObject DBSite_Type = ;
statichere PyTypeObject DBEnv_Type = ;
statichere PyTypeObject DBTxn_Type = ;
statichere PyTypeObject DBLock_Type = ;
statichere PyTypeObject DBSequence_Type = ;
static PyObject*
DB_construct(PyObject* self, PyObject* args, PyObject* kwargs)
static PyObject*
DBEnv_construct(PyObject* self, PyObject* args)
static PyObject*
DBSequence_construct(PyObject* self, PyObject* args, PyObject* kwargs)
static char bsddb_version_doc[] =
"Returns a tuple of major, minor, and patch release numbers of the\n\
underlying DB library.";
static PyObject*
bsddb_version(PyObject* self)
#if (DBVER >= 50)
static PyObject*
bsddb_version_full(PyObject* self)
static PyMethodDef bsddb_methods[] = ;
static BSDDB_api bsddb_api;
#define ADD_INT(dict, NAME)         _addIntToDict(dict, #NAME, NAME)
#define MODULE_NAME_MAX_LEN     11
static char _bsddbModuleName[MODULE_NAME_MAX_LEN+1] = ;
#if (PY_VERSION_HEX >= 0x03000000)
static struct PyModuleDef bsddbmodule = ;
#if (PY_VERSION_HEX < 0x03000000)
DL_EXPORT(void) init_bsddb(void)
PyMODINIT_FUNC  PyInit__bsddb(void)
#if (PY_VERSION_HEX < 0x03000000)
DL_EXPORT(void) init_pybsddb(void)
PyMODINIT_FUNC PyInit__pybsddb(void)
