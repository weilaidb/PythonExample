using std::cerr;
#define	DBENV_METHOD_ERR(_name, _argspec, _arglist, _on_err)	  \
int DbEnv::_name _argspec					  \
#define	DBENV_METHOD(_name, _argspec, _arglist)			  \
DBENV_METHOD_ERR(_name, _argspec, _arglist,		  \
DB_ERROR(this, "DbEnv::" # _name, ret, error_policy()))
#define	DBENV_METHOD_QUIET(_name, _argspec, _arglist)		  \
int DbEnv::_name _argspec					  \
#define	DBENV_METHOD_VOID(_name, _argspec, _arglist)		  \
void DbEnv::_name _argspec					  \
static int last_known_error_policy = ON_ERROR_UNKNOWN;
extern "C"
void _feedback_intercept_c(DB_ENV *dbenv, int opcode, int pct)
extern "C"
void _paniccall_intercept_c(DB_ENV *dbenv, int errval)
extern "C"
int _partial_rep_intercept_c(DB_ENV *dbenv,
const char *name, int *result, u_int32_t flags)
extern "C"
void _event_func_intercept_c(DB_ENV *dbenv, u_int32_t event, void *event_info)
extern "C"
void _stream_error_function_c(const DB_ENV *dbenv,
const char *prefix, const char *message)
extern "C"
void _stream_message_function_c(const DB_ENV *dbenv,
const char *prefix, const char *message)
extern "C"
int _app_dispatch_intercept_c(DB_ENV *dbenv, DBT *dbt, DB_LSN *lsn, db_recops op)
extern "C"
int _rep_send_intercept_c(DB_ENV *dbenv, const DBT *cntrl, const DBT *data,
const DB_LSN *lsn, int id, u_int32_t flags)
extern "C"
int _repmgr_set_socket_intercept_c(DB_ENV *dbenv, DB_REPMGR_SOCKET socket,
int *result, u_int32_t flags)
extern "C"
void _message_dispatch_intercept_c(DB_ENV *dbenv, DB_CHANNEL *channel,
DBT *request, u_int32_t nrequest, u_int32_t cb_flags)
extern "C"
int _isalive_intercept_c(
DB_ENV *dbenv, pid_t pid, db_threadid_t thrid, u_int32_t flags)
extern "C"
void _thread_id_intercept_c(DB_ENV *dbenv, pid_t *pidp, db_threadid_t *thridp)
extern "C"
char *_thread_id_string_intercept_c(DB_ENV *dbenv, pid_t pid,
db_threadid_t thrid, char *buf)
extern "C"
int _backup_close_intercept_c(DB_ENV *dbenv, const char *dbname, void *handle)
extern "C"
int _backup_open_intercept_c(DB_ENV *dbenv,
const char *dbname, const char *target, void **handle)
extern "C"
int _backup_write_intercept_c(DB_ENV *dbenv, u_int32_t off_gbytes,
u_int32_t off_bytes, u_int32_t size, u_int8_t *buf, void *handle)
void DbEnv::_feedback_intercept(DB_ENV *dbenv, int opcode, int pct)
void DbEnv::_paniccall_intercept(DB_ENV *dbenv, int errval)
int DbEnv::_partial_rep_intercept(DB_ENV *dbenv,
const char *name, int *result, u_int32_t flags)
void DbEnv::_event_func_intercept(
DB_ENV *dbenv, u_int32_t event, void *event_info)
int DbEnv::_app_dispatch_intercept(DB_ENV *dbenv, DBT *dbt, DB_LSN *lsn,
db_recops op)
int DbEnv::_isalive_intercept(
DB_ENV *dbenv, pid_t pid, db_threadid_t thrid, u_int32_t flags)
int DbEnv::_repmgr_set_socket_intercept(DB_ENV *dbenv,
DB_REPMGR_SOCKET socket, int *result, u_int32_t flags)
void DbEnv::_message_dispatch_intercept(DB_ENV *dbenv, DB_CHANNEL *dbchannel,
DBT *request, u_int32_t nrequest, u_int32_t cb_flags)
int DbEnv::_rep_send_intercept(DB_ENV *dbenv, const DBT *cntrl, const DBT *data,
const DB_LSN *lsn, int id, u_int32_t flags)
void DbEnv::_thread_id_intercept(DB_ENV *dbenv,
pid_t *pidp, db_threadid_t *thridp)
char *DbEnv::_thread_id_string_intercept(DB_ENV *dbenv,
pid_t pid, db_threadid_t thrid, char *buf)
int DbEnv::_backup_close_intercept(
DB_ENV *dbenv, const char *dbname, void *handle)
int DbEnv::_backup_open_intercept(DB_ENV *dbenv,
const char *dbname, const char *target, void **handle)
int DbEnv::_backup_write_intercept(DB_ENV *dbenv, u_int32_t off_gbytes,
u_int32_t off_bytes, u_int32_t size, u_int8_t *buf, void *handle)
DbEnv::DbEnv(u_int32_t flags)
:	imp_(0)
,	slices_(0)
,	construct_error_(0)
,	construct_flags_(flags)
,	internally_managed_(false)
,	error_stream_(0)
,	message_stream_(0)
,	app_dispatch_callback_(0)
,	feedback_callback_(0)
,	paniccall_callback_(0)
,	partial_rep_callback_(0)
,	event_func_callback_(0)
,	rep_send_callback_(0)
,	message_dispatch_callback_(0)
DbEnv::DbEnv(DB_ENV *dbenv, u_int32_t flags)
:	imp_(0)
,	slices_(0)
,	construct_error_(0)
,	construct_flags_(flags)
,	internally_managed_(false)
,	error_stream_(0)
,	message_stream_(0)
,	app_dispatch_callback_(0)
,	feedback_callback_(0)
,	paniccall_callback_(0)
,	partial_rep_callback_(0)
,	event_func_callback_(0)
,	rep_send_callback_(0)
,	message_dispatch_callback_(0)
DbEnv::DbEnv(DB_ENV *dbenv)
:	imp_(0)
,	slices_(0)
,	construct_error_(0)
,	construct_flags_(0)
,	internally_managed_(true)
,	error_stream_(0)
,	message_stream_(0)
,	app_dispatch_callback_(0)
,	feedback_callback_(0)
,	paniccall_callback_(0)
,	partial_rep_callback_(0)
,	event_func_callback_(0)
,	rep_send_callback_(0)
,	message_dispatch_callback_(0)
DbEnv::~DbEnv()
void DbEnv::cleanup()
int DbEnv::close(u_int32_t flags)
DBENV_METHOD(dbremove,
(DbTxn *txn, const char *name, const char *subdb, u_int32_t flags),
(dbenv, unwrap(txn), name, subdb, flags))
DBENV_METHOD(dbrename, (DbTxn *txn, const char *name, const char *subdb,
const char *newname, u_int32_t flags),
(dbenv, unwrap(txn), name, subdb, newname, flags))
void DbEnv::err(int error, const char *format, ...)
int DbEnv::error_policy()
void DbEnv::errx(const char *format, ...)
void *DbEnv::get_app_private() const
DBENV_METHOD(failchk, (u_int32_t flags), (dbenv, flags))
DBENV_METHOD(fileid_reset, (const char *file, u_int32_t flags),
(dbenv, file, flags))
DBENV_METHOD(get_home, (const char **homep), (dbenv, homep))
DBENV_METHOD(get_open_flags, (u_int32_t *flagsp), (dbenv, flagsp))
DBENV_METHOD(get_data_dirs, (const char ***dirspp), (dbenv, dirspp))
bool DbEnv::is_bigendian()
DBENV_METHOD(get_thread_count, (u_int32_t *count), (dbenv, count))
DBENV_METHOD(set_thread_count, (u_int32_t count), (dbenv, count))
int DbEnv::initialize(DB_ENV *dbenv)
DBENV_METHOD(lock_detect, (u_int32_t flags, u_int32_t atype, int *aborted),
(dbenv, flags, atype, aborted))
DBENV_METHOD_ERR(lock_get,
(u_int32_t locker, u_int32_t flags, Dbt *obj,
db_lockmode_t lock_mode, DbLock *lock),
(dbenv, locker, flags, obj, lock_mode, &lock->lock_),
DbEnv::runtime_error_lock_get(this, "DbEnv::lock_get", ret,
DB_LOCK_GET, lock_mode, obj, *lock,
-1, error_policy()))
DBENV_METHOD(lock_id, (u_int32_t *idp), (dbenv, idp))
DBENV_METHOD(lock_id_free, (u_int32_t id), (dbenv, id))
DBENV_METHOD(lock_put, (DbLock *lock), (dbenv, &lock->lock_))
DBENV_METHOD(lock_stat, (DB_LOCK_STAT **statp, u_int32_t flags),
(dbenv, statp, flags))
DBENV_METHOD(lock_stat_print, (u_int32_t flags), (dbenv, flags))
DBENV_METHOD_ERR(lock_vec,
(u_int32_t locker, u_int32_t flags, DB_LOCKREQ list[],
int nlist, DB_LOCKREQ **elist_returned),
(dbenv, locker, flags, list, nlist, elist_returned),
DbEnv::runtime_error_lock_get(this, "DbEnv::lock_vec", ret,
(*elist_returned)->op, (*elist_returned)->mode,
Dbt::get_Dbt((*elist_returned)->obj), DbLock((*elist_returned)->lock),
(int)((*elist_returned) - list), error_policy()))
DBENV_METHOD(log_archive, (char **list[], u_int32_t flags),
(dbenv, list, flags))
int DbEnv::log_compare(const DbLsn *lsn0, const DbLsn *lsn1)
DBENV_METHOD(log_cursor, (DbLogc **cursorp, u_int32_t flags),
(dbenv, (DB_LOGC **)cursorp, flags))
DBENV_METHOD(log_file, (DbLsn *lsn, char *namep, size_t len),
(dbenv, lsn, namep, len))
DBENV_METHOD(log_flush, (const DbLsn *lsn), (dbenv, lsn))
DBENV_METHOD(log_get_config, (u_int32_t which, int *onoffp),
(dbenv, which, onoffp))
DBENV_METHOD(log_put, (DbLsn *lsn, const Dbt *data, u_int32_t flags),
(dbenv, lsn, data, flags))
int DbEnv::log_printf(DbTxn *txn, const char *fmt, ...)
DBENV_METHOD(log_set_config, (u_int32_t which, int onoff),
(dbenv, which, onoff))
DBENV_METHOD(log_stat, (DB_LOG_STAT **spp, u_int32_t flags),
(dbenv, spp, flags))
DBENV_METHOD(log_stat_print, (u_int32_t flags), (dbenv, flags))
int DbEnv::log_verify(DB_LOG_VERIFY_CONFIG *config)
DBENV_METHOD(lsn_reset, (const char *file, u_int32_t flags),
(dbenv, file, flags))
int DbEnv::memp_fcreate(DbMpoolFile **dbmfp, u_int32_t flags)
DBENV_METHOD(memp_register,
(int ftype, pgin_fcn_type pgin_fcn, pgout_fcn_type pgout_fcn),
(dbenv, ftype, pgin_fcn, pgout_fcn))
DBENV_METHOD(memp_stat,
(DB_MPOOL_STAT **gsp, DB_MPOOL_FSTAT ***fsp, u_int32_t flags),
(dbenv, gsp, fsp, flags))
DBENV_METHOD(memp_stat_print, (u_int32_t flags), (dbenv, flags))
DBENV_METHOD(memp_sync, (DbLsn *sn), (dbenv, sn))
DBENV_METHOD(memp_trickle, (int pct, int *nwrotep), (dbenv, pct, nwrotep))
void DbEnv::msg(const char *format, ...)
int DbEnv::open(const char *db_home, u_int32_t flags, int mode)
int DbEnv::remove(const char *db_home, u_int32_t flags)
void DbEnv::runtime_error(DbEnv *dbenv,
const char *caller, int error, int error_policy)
void DbEnv::runtime_error_dbt(DbEnv *dbenv,
const char *caller, Dbt *dbt, int error_policy)
void DbEnv::runtime_error_lock_get(DbEnv *dbenv,
const char *caller, int error,
db_lockop_t op, db_lockmode_t mode, Dbt *obj,
DbLock lock, int index, int error_policy)
void DbEnv::_stream_error_function(
const DB_ENV *dbenv, const char *prefix, const char *message)
void DbEnv::_stream_message_function(
const DB_ENV *dbenv, const char *prefix, const char *message)
char *DbEnv::strerror(int error)
DBENV_METHOD(get_backup_config, (DB_BACKUP_CONFIG type, u_int32_t *valuep), (dbenv, type, valuep))
DBENV_METHOD(set_backup_config, (DB_BACKUP_CONFIG type, u_int32_t value), (dbenv, type, value))
DBENV_METHOD(get_blob_dir, (const char **dir), (dbenv, dir))
DBENV_METHOD(set_blob_dir, (const char *dir), (dbenv, dir))
DBENV_METHOD(get_blob_threshold, (u_int32_t *bytes), (dbenv, bytes))
DBENV_METHOD(set_blob_threshold, (u_int32_t bytes, u_int32_t flags), (dbenv, bytes, flags))
DBENV_METHOD(set_data_dir, (const char *dir), (dbenv, dir))
DBENV_METHOD(get_encrypt_flags, (u_int32_t *flagsp),
(dbenv, flagsp))
DBENV_METHOD(set_encrypt, (const char *passwd, u_int32_t flags),
(dbenv, passwd, flags))
DBENV_METHOD_VOID(get_errfile, (FILE **errfilep), (dbenv, errfilep))
DBENV_METHOD_VOID(set_errfile, (FILE *errfile), (dbenv, errfile))
DBENV_METHOD_VOID(get_errpfx, (const char **errpfxp), (dbenv, errpfxp))
DBENV_METHOD_VOID(set_errpfx, (const char *errpfx), (dbenv, errpfx))
DBENV_METHOD(get_ext_file_dir, (const char **dir), (dbenv, dir))
DBENV_METHOD(set_ext_file_dir, (const char *dir), (dbenv, dir))
DBENV_METHOD(get_ext_file_threshold, (u_int32_t *bytes), (dbenv, bytes))
DBENV_METHOD(set_ext_file_threshold, (u_int32_t bytes, u_int32_t flags), (dbenv, bytes, flags))
DBENV_METHOD(get_intermediate_dir_mode, (const char **modep), (dbenv, modep))
DBENV_METHOD(set_intermediate_dir_mode, (const char *mode), (dbenv, mode))
DBENV_METHOD(get_lg_bsize, (u_int32_t *bsizep), (dbenv, bsizep))
DBENV_METHOD(set_lg_bsize, (u_int32_t bsize), (dbenv, bsize))
DBENV_METHOD(get_lg_dir, (const char **dirp), (dbenv, dirp))
DBENV_METHOD(set_lg_dir, (const char *dir), (dbenv, dir))
DBENV_METHOD(get_lg_filemode, (int *modep), (dbenv, modep))
DBENV_METHOD(set_lg_filemode, (int mode), (dbenv, mode))
DBENV_METHOD(get_lg_max, (u_int32_t *maxp), (dbenv, maxp))
DBENV_METHOD(set_lg_max, (u_int32_t max), (dbenv, max))
DBENV_METHOD(get_lg_regionmax, (u_int32_t *regionmaxp), (dbenv, regionmaxp))
DBENV_METHOD(set_lg_regionmax, (u_int32_t regionmax), (dbenv, regionmax))
DBENV_METHOD(get_lk_conflicts, (const u_int8_t **lk_conflictsp, int *lk_maxp),
(dbenv, lk_conflictsp, lk_maxp))
DBENV_METHOD(set_lk_conflicts, (u_int8_t *lk_conflicts, int lk_max),
(dbenv, lk_conflicts, lk_max))
DBENV_METHOD(get_lk_detect, (u_int32_t *detectp), (dbenv, detectp))
DBENV_METHOD(set_lk_detect, (u_int32_t detect), (dbenv, detect))
DBENV_METHOD(get_lk_max_lockers, (u_int32_t *max_lockersp),
(dbenv, max_lockersp))
DBENV_METHOD(set_lk_max_lockers, (u_int32_t max_lockers), (dbenv, max_lockers))
DBENV_METHOD(get_lk_max_locks, (u_int32_t *max_locksp), (dbenv, max_locksp))
DBENV_METHOD(set_lk_max_locks, (u_int32_t max_locks), (dbenv, max_locks))
DBENV_METHOD(get_lk_max_objects, (u_int32_t *max_objectsp),
(dbenv, max_objectsp))
DBENV_METHOD(set_lk_max_objects, (u_int32_t max_objects), (dbenv, max_objects))
DBENV_METHOD(get_lk_partitions, (u_int32_t *partitionsp), (dbenv, partitionsp))
DBENV_METHOD(set_lk_partitions, (u_int32_t partitions), (dbenv, partitions))
DBENV_METHOD(get_lk_priority, (u_int32_t lockerid, u_int32_t *priorityp), (dbenv, lockerid, priorityp))
DBENV_METHOD(set_lk_priority, (u_int32_t lockerid, u_int32_t priority), (dbenv, lockerid, priority))
DBENV_METHOD(get_lk_tablesize, (u_int32_t *tablesize), (dbenv, tablesize))
DBENV_METHOD(set_lk_tablesize, (u_int32_t tablesize), (dbenv, tablesize))
DBENV_METHOD(get_memory_init, (DB_MEM_CONFIG type, u_int32_t *count), (dbenv, type, count))
DBENV_METHOD(set_memory_init, (DB_MEM_CONFIG type, u_int32_t count), (dbenv, type, count))
DBENV_METHOD(get_memory_max, (u_int32_t *gbytes, u_int32_t *bytes), (dbenv, gbytes, bytes))
DBENV_METHOD(set_memory_max, (u_int32_t gbytes, u_int32_t bytes), (dbenv, gbytes, bytes))
DBENV_METHOD(get_metadata_dir, (const char **dirp), (dbenv, dirp))
DBENV_METHOD(set_metadata_dir, (const char *dir), (dbenv, dir))
DBENV_METHOD(get_mp_max_openfd, (int *maxopenfdp), (dbenv, maxopenfdp))
DBENV_METHOD(set_mp_max_openfd, (int maxopenfd), (dbenv, maxopenfd))
DBENV_METHOD(get_mp_max_write, (int *maxwritep, db_timeout_t *maxwrite_sleepp),
(dbenv, maxwritep, maxwrite_sleepp))
DBENV_METHOD(set_mp_max_write, (int maxwrite, db_timeout_t maxwrite_sleep),
(dbenv, maxwrite, maxwrite_sleep))
DBENV_METHOD(get_mp_mmapsize, (size_t *mmapsizep), (dbenv, mmapsizep))
DBENV_METHOD(set_mp_mmapsize, (size_t mmapsize), (dbenv, mmapsize))
DBENV_METHOD(get_mp_pagesize, (u_int32_t *pagesizep), (dbenv, pagesizep))
DBENV_METHOD(set_mp_pagesize, (u_int32_t pagesize), (dbenv, pagesize))
DBENV_METHOD(get_mp_tablesize, (u_int32_t *tablesizep), (dbenv, tablesizep))
DBENV_METHOD(set_mp_tablesize, (u_int32_t tablesize), (dbenv, tablesize))
DBENV_METHOD_VOID(get_msgfile, (FILE **msgfilep), (dbenv, msgfilep))
DBENV_METHOD_VOID(set_msgfile, (FILE *msgfile), (dbenv, msgfile))
DBENV_METHOD_VOID(get_msgpfx, (const char **msgpfxp), (dbenv, msgpfxp))
DBENV_METHOD_VOID(set_msgpfx, (const char *msgpfx), (dbenv, msgpfx))
DBENV_METHOD(get_region_dir, (const char **dirp), (dbenv, dirp))
DBENV_METHOD(set_region_dir, (const char *dir), (dbenv, dir))
DBENV_METHOD(get_tmp_dir, (const char **tmp_dirp), (dbenv, tmp_dirp))
DBENV_METHOD(set_tmp_dir, (const char *tmp_dir), (dbenv, tmp_dir))
DBENV_METHOD(get_tx_max, (u_int32_t *tx_maxp), (dbenv, tx_maxp))
DBENV_METHOD(set_tx_max, (u_int32_t tx_max), (dbenv, tx_max))
DBENV_METHOD(stat_print, (u_int32_t flags), (dbenv, flags))
DBENV_METHOD_QUIET(get_alloc,
(db_malloc_fcn_type *malloc_fcnp, db_realloc_fcn_type *realloc_fcnp,
db_free_fcn_type *free_fcnp),
(dbenv, malloc_fcnp, realloc_fcnp, free_fcnp))
DBENV_METHOD_QUIET(set_alloc,
(db_malloc_fcn_type malloc_fcn, db_realloc_fcn_type realloc_fcn,
db_free_fcn_type free_fcn),
(dbenv, malloc_fcn, realloc_fcn, free_fcn))
void DbEnv::set_app_private(void *value)
DBENV_METHOD(get_cachesize,
(u_int32_t *gbytesp, u_int32_t *bytesp, int *ncachep),
(dbenv, gbytesp, bytesp, ncachep))
DBENV_METHOD(set_cachesize,
(u_int32_t gbytes, u_int32_t bytes, int ncache),
(dbenv, gbytes, bytes, ncache))
DBENV_METHOD(get_cache_max, (u_int32_t *gbytesp, u_int32_t *bytesp),
(dbenv, gbytesp, bytesp))
DBENV_METHOD(set_cache_max, (u_int32_t gbytes, u_int32_t bytes),
(dbenv, gbytes, bytes))
DBENV_METHOD(get_create_dir, (const char **dirp), (dbenv, dirp))
DBENV_METHOD(set_create_dir, (const char *dir), (dbenv, dir))
int DbEnv::get_slices(DbEnv ***slices)
u_int32_t DbEnv::get_slice_count()
void DbEnv::get_errcall(void (**argp)(const DbEnv *, const char *, const char *))
void DbEnv::set_errcall(void (*arg)(const DbEnv *, const char *, const char *))
__DB_STD(ostream) *DbEnv::get_error_stream()
void DbEnv::set_error_stream(__DB_STD(ostream) *stream)
int DbEnv::get_feedback(void (**argp)(DbEnv *, int, int))
int DbEnv::set_feedback(void (*arg)(DbEnv *, int, int))
DBENV_METHOD(get_flags, (u_int32_t *flagsp), (dbenv, flagsp))
DBENV_METHOD(set_flags, (u_int32_t flags, int onoff), (dbenv, flags, onoff))
void DbEnv::get_msgcall(void (**argp)(const DbEnv *, const char *, const char *))
void DbEnv::set_msgcall(void (*arg)(const DbEnv *, const char *, const char *))
__DB_STD(ostream) *DbEnv::get_message_stream()
void DbEnv::set_message_stream(__DB_STD(ostream) *stream)
int DbEnv::set_paniccall(void (*arg)(DbEnv *, int))
int DbEnv::set_event_notify(void (*arg)(DbEnv *, u_int32_t, void *))
DBENV_METHOD(get_shm_key, (long *shm_keyp), (dbenv, shm_keyp))
DBENV_METHOD(set_shm_key, (long shm_key), (dbenv, shm_key))
int DbEnv::get_app_dispatch
(int (**argp)(DbEnv *, Dbt *, DbLsn *, db_recops))
int DbEnv::set_app_dispatch
(int (*arg)(DbEnv *, Dbt *, DbLsn *, db_recops))
int DbEnv::get_isalive
(int (**argp)(DbEnv *, pid_t, db_threadid_t, u_int32_t))
int DbEnv::set_isalive
(int (*arg)(DbEnv *, pid_t, db_threadid_t, u_int32_t))
DBENV_METHOD(get_tx_timestamp, (time_t *timestamp), (dbenv, timestamp))
DBENV_METHOD(set_tx_timestamp, (time_t *timestamp), (dbenv, timestamp))
DBENV_METHOD(get_verbose, (u_int32_t which, int *onoffp),
(dbenv, which, onoffp))
DBENV_METHOD(set_verbose, (u_int32_t which, int onoff), (dbenv, which, onoff))
DBENV_METHOD(mutex_alloc,
(u_int32_t flags, db_mutex_t *mutexp), (dbenv, flags, mutexp))
DBENV_METHOD(mutex_free, (db_mutex_t mutex), (dbenv, mutex))
DBENV_METHOD(mutex_get_align, (u_int32_t *argp), (dbenv, argp))
DBENV_METHOD(mutex_get_increment, (u_int32_t *argp), (dbenv, argp))
DBENV_METHOD(mutex_get_init, (u_int32_t *argp), (dbenv, argp))
DBENV_METHOD(mutex_get_max, (u_int32_t *argp), (dbenv, argp))
DBENV_METHOD(mutex_get_tas_spins, (u_int32_t *argp), (dbenv, argp))
DBENV_METHOD(mutex_lock, (db_mutex_t mutex), (dbenv, mutex))
DBENV_METHOD(mutex_set_align, (u_int32_t arg), (dbenv, arg))
DBENV_METHOD(mutex_set_increment, (u_int32_t arg), (dbenv, arg))
DBENV_METHOD(mutex_set_init, (u_int32_t arg), (dbenv, arg))
DBENV_METHOD(mutex_set_max, (u_int32_t arg), (dbenv, arg))
DBENV_METHOD(mutex_set_tas_spins, (u_int32_t arg), (dbenv, arg))
DBENV_METHOD(mutex_stat,
(DB_MUTEX_STAT **statp, u_int32_t flags), (dbenv, statp, flags))
DBENV_METHOD(mutex_stat_print, (u_int32_t flags), (dbenv, flags))
DBENV_METHOD(mutex_unlock, (db_mutex_t mutex), (dbenv, mutex))
int DbEnv::get_thread_id_fn(void (**argp)(DbEnv *, pid_t *, db_threadid_t *))
int DbEnv::set_thread_id(void (*arg)(DbEnv *, pid_t *, db_threadid_t *))
int DbEnv::get_thread_id_string_fn(
char *(**argp)(DbEnv *, pid_t, db_threadid_t, char *))
int DbEnv::set_thread_id_string(
char *(*arg)(DbEnv *, pid_t, db_threadid_t, char *))
int DbEnv::get_backup_callbacks(
int (**open_funcp)(DbEnv *, const char *, const char *, void **),
int (**write_funcp)(DbEnv *, u_int32_t, u_int32_t, u_int32_t, u_int8_t *, void *),
int (**close_funcp)(DbEnv *, const char *, void *))
int DbEnv::set_backup_callbacks(
int (*open_func)(DbEnv *, const char *, const char *, void **),
int (*write_func)(DbEnv *, u_int32_t, u_int32_t, u_int32_t, u_int8_t *, void *),
int (*close_func)(DbEnv *, const char *, void *))
DBENV_METHOD(add_data_dir, (const char *dir), (dbenv, dir))
int DbEnv::cdsgroup_begin(DbTxn **tid)
int DbEnv::txn_begin(DbTxn *pid, DbTxn **tid, u_int32_t flags)
DBENV_METHOD(txn_checkpoint, (u_int32_t kbyte, u_int32_t min, u_int32_t flags),
(dbenv, kbyte, min, flags))
int DbEnv::txn_recover(DbPreplist *preplist, long count,
long *retp, u_int32_t flags)
DBENV_METHOD(txn_stat, (DB_TXN_STAT **statp, u_int32_t flags),
(dbenv, statp, flags))
DBENV_METHOD(txn_stat_print, (u_int32_t flags), (dbenv, flags))
int DbEnv::rep_set_transport(int myid, int (*arg)(DbEnv *,
const Dbt *, const Dbt *, const DbLsn *, int, u_int32_t))
DBENV_METHOD(rep_elect, (u_int32_t nsites, u_int32_t nvotes, u_int32_t flags),
(dbenv, nsites, nvotes, flags))
DBENV_METHOD(rep_flush, (), (dbenv))
DBENV_METHOD(rep_get_config, (u_int32_t which, int *onoffp),
(dbenv, which, onoffp))
DBENV_METHOD(rep_get_request, (u_int32_t *min, u_int32_t *max),
(dbenv, min, max))
DBENV_METHOD(rep_set_request, (u_int32_t min, u_int32_t max), (dbenv, min, max))
int DbEnv::rep_process_message(Dbt *control,
Dbt *rec, int id, DbLsn *ret_lsnp)
DBENV_METHOD(rep_set_config,
(u_int32_t which, int onoff), (dbenv, which, onoff))
DBENV_METHOD(rep_start,
(Dbt *cookie, u_int32_t flags),
(dbenv, (DBT *)cookie, flags))
DBENV_METHOD(rep_stat, (DB_REP_STAT **statp, u_int32_t flags),
(dbenv, statp, flags))
DBENV_METHOD(rep_stat_print, (u_int32_t flags), (dbenv, flags))
DBENV_METHOD(rep_sync, (u_int32_t flags), (dbenv, flags))
DBENV_METHOD(rep_get_clockskew, (u_int32_t *fast_clockp, u_int32_t *slow_clockp),
(dbenv, fast_clockp, slow_clockp))
DBENV_METHOD(rep_set_clockskew, (u_int32_t fast_clock, u_int32_t slow_clock),
(dbenv, fast_clock, slow_clock))
DBENV_METHOD(rep_get_limit, (u_int32_t *gbytesp, u_int32_t *bytesp),
(dbenv, gbytesp, bytesp))
DBENV_METHOD(rep_set_limit, (u_int32_t gbytes, u_int32_t bytes),
(dbenv, gbytes, bytes))
DBENV_METHOD(rep_get_nsites, (u_int32_t *n), (dbenv, n))
DBENV_METHOD(rep_set_nsites, (u_int32_t n), (dbenv, n))
DBENV_METHOD(rep_get_priority, (u_int32_t *priority),
(dbenv, priority))
DBENV_METHOD(rep_set_priority, (u_int32_t priority),
(dbenv, priority))
DBENV_METHOD(rep_get_timeout, (int which, db_timeout_t * timeout),
(dbenv, which, timeout))
DBENV_METHOD(rep_set_timeout, (int which, db_timeout_t timeout),
(dbenv, which, timeout))
int DbEnv::rep_set_view(int (*arg)(DbEnv *, const char *, int *, u_int32_t))
DBENV_METHOD(repmgr_get_ack_policy, (int *policy), (dbenv, policy))
DBENV_METHOD(repmgr_set_ack_policy, (int policy), (dbenv, policy))
DBENV_METHOD(repmgr_get_incoming_queue_max,
(u_int32_t *gbytesp, u_int32_t *bytesp), (dbenv, gbytesp, bytesp));
DBENV_METHOD(repmgr_set_incoming_queue_max,
(u_int32_t gbytes, u_int32_t bytes), (dbenv, gbytes, bytes));
int DbEnv::repmgr_set_socket(int (*approval_func)(DbEnv *,
DB_REPMGR_SOCKET, int *, u_int32_t))
int DbEnv::repmgr_channel(int eid, DbChannel **dbchannel, u_int32_t flags)
int DbEnv::repmgr_msg_dispatch(
void (*arg)(DbEnv *, DbChannel *, Dbt *, u_int32_t, u_int32_t),
u_int32_t flags)
int DbEnv::repmgr_local_site(DbSite **dbsite)
int DbEnv::repmgr_site(const char *host, u_int port, DbSite **dbsite,
u_int32_t flags)
int DbEnv::repmgr_site_by_eid(int eid, DbSite **dbsite)
DBENV_METHOD(repmgr_site_list, (u_int *countp, DB_REPMGR_SITE **listp),
(dbenv, countp, listp))
int DbEnv::repmgr_start(int nthreads, u_int32_t flags)
DBENV_METHOD(repmgr_stat, (DB_REPMGR_STAT **statp, u_int32_t flags),
(dbenv, statp, flags))
DBENV_METHOD(repmgr_stat_print, (u_int32_t flags), (dbenv, flags))
DBENV_METHOD(get_timeout,
(db_timeout_t *timeoutp, u_int32_t flags),
(dbenv, timeoutp, flags))
DBENV_METHOD(set_timeout,
(db_timeout_t timeout, u_int32_t flags),
(dbenv, timeout, flags))
DBENV_METHOD(backup,
(const char *target, u_int32_t flags), (dbenv, target, flags))
DBENV_METHOD(dbbackup,
(const char *dbfile, const char *target, u_int32_t flags),
(dbenv, dbfile, target, flags))
char *DbEnv::version(int *major, int *minor, int *patch)
char *DbEnv::full_version(int *family, int *release,
int *major, int *minor, int *patch)
DbEnv *DbEnv::wrap_DB_ENV(DB_ENV *dbenv)
bool DbEnv::slices_enabled()
