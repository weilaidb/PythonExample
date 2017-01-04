#define	DB_METHOD(_name, _argspec, _arglist, _retok)			\
int Db::_name _argspec							\
#define	DB_DESTRUCTOR(_name, _argspec, _arglist, _retok)		\
int Db::_name _argspec							\
#define	DB_METHOD_QUIET(_name, _argspec, _arglist)			\
int Db::_name _argspec							\
#define	DB_METHOD_VOID(_name, _argspec, _arglist)			\
void Db::_name _argspec							\
Db::Db(DbEnv *dbenv, u_int32_t flags)
:	imp_(0)
,	slices_(0)
,	dbenv_(dbenv)
,	mpf_(0)
,	construct_error_(0)
,	internally_managed_(false)
,	flags_(0)
,	construct_flags_(flags)
,	append_recno_callback_(0)
,	associate_callback_(0)
,	associate_foreign_callback_(0)
,	bt_compare_callback_(0)
,	bt_compress_callback_(0)
,	bt_decompress_callback_(0)
,	bt_prefix_callback_(0)
,	db_partition_callback_(0)
,	dup_compare_callback_(0)
,	feedback_callback_(0)
,	h_compare_callback_(0)
,	h_hash_callback_(0)
,	slice_callback_(0)
Db::Db(DB *dbp)
:	imp_(dbp)
,	slices_(0)
,	dbenv_(0)
,	mpf_(0)
,	construct_error_(0)
,	internally_managed_(true)
,	flags_(0)
,	construct_flags_(0)
,	append_recno_callback_(0)
,	associate_callback_(0)
,	associate_foreign_callback_(0)
,	bt_compare_callback_(0)
,	bt_compress_callback_(0)
,	bt_decompress_callback_(0)
,	bt_prefix_callback_(0)
,	db_partition_callback_(0)
,	dup_compare_callback_(0)
,	feedback_callback_(0)
,	h_compare_callback_(0)
,	h_hash_callback_(0)
,	slice_callback_(0)
Db::~Db()
int Db::initialize()
void Db::cleanup()
int Db::error_policy()
DB_DESTRUCTOR(close, (u_int32_t flags), (db, flags), DB_RETOK_STD)
DB_METHOD(compact, (DbTxn *txnid, Dbt *start, Dbt *stop,
DB_COMPACT *c_data, u_int32_t flags, Dbt *end),
(db, unwrap(txnid), start, stop, c_data, flags, end), DB_RETOK_STD)
DB_METHOD(cursor, (DbTxn *txnid, Dbc **cursorp, u_int32_t flags),
(db, unwrap(txnid), (DBC **)cursorp, flags),
DB_RETOK_STD)
DB_METHOD(del, (DbTxn *txnid, Dbt *key, u_int32_t flags),
(db, unwrap(txnid), key, flags),
DB_RETOK_DBDEL)
void Db::err(int error, const char *format, ...)
void Db::errx(const char *format, ...)
void Db::msg(const char *format, ...)
DB_METHOD(exists, (DbTxn *txnid, Dbt *key, u_int32_t flags),
(db, unwrap(txnid), key, flags), DB_RETOK_EXISTS)
DB_METHOD(fd, (int *fdp), (db, fdp), DB_RETOK_STD)
int Db::get(DbTxn *txnid, Dbt *key, Dbt *value, u_int32_t flags)
int Db::get_byteswapped(int *isswapped)
DbEnv *Db::get_env()
DbMpoolFile *Db::get_mpf()
int Db::get_slices(Db ***slices)
int Db::slice_lookup(const Dbt *key, Db **slice, u_int32_t flags)
DB_METHOD(get_dbname, (const char **filenamep, const char **dbnamep),
(db, filenamep, dbnamep), DB_RETOK_STD)
DB_METHOD(get_open_flags, (u_int32_t *flagsp), (db, flagsp), DB_RETOK_STD)
int Db::get_type(DBTYPE *dbtype)
DB_METHOD(join, (Dbc **curslist, Dbc **cursorp, u_int32_t flags),
(db, (DBC **)curslist, (DBC **)cursorp, flags), DB_RETOK_STD)
DB_METHOD(key_range,
(DbTxn *txnid, Dbt *key, DB_KEY_RANGE *results, u_int32_t flags),
(db, unwrap(txnid), key, results, flags), DB_RETOK_STD)
int Db::get_lk_exclusive(bool *onoff, bool *nowait)
int Db::set_lk_exclusive(bool nowait)
int Db::open(DbTxn *txnid, const char *file, const char *database,
DBTYPE type, u_int32_t flags, int mode)
int Db::pget(DbTxn *txnid, Dbt *key, Dbt *pkey, Dbt *value, u_int32_t flags)
DB_METHOD(put, (DbTxn *txnid, Dbt *key, Dbt *value, u_int32_t flags),
(db, unwrap(txnid), key, value, flags), DB_RETOK_DBPUT)
DB_DESTRUCTOR(rename,
(const char *file, const char *database, const char *newname,
u_int32_t flags),
(db, file, database, newname, flags), DB_RETOK_STD)
DB_DESTRUCTOR(remove, (const char *file, const char *database, u_int32_t flags),
(db, file, database, flags), DB_RETOK_STD)
DB_METHOD(truncate, (DbTxn *txnid, u_int32_t *countp, u_int32_t flags),
(db, unwrap(txnid), countp, flags), DB_RETOK_STD)
DB_METHOD(stat, (DbTxn *txnid, void *sp, u_int32_t flags),
(db, unwrap(txnid), sp, flags), DB_RETOK_STD)
DB_METHOD(stat_print, (u_int32_t flags), (db, flags), DB_RETOK_STD)
DB_METHOD(sync, (u_int32_t flags), (db, flags), DB_RETOK_STD)
DB_METHOD(upgrade,
(const char *name, u_int32_t flags), (db, name, flags), DB_RETOK_STD)
#define	DB_CALLBACK_C_INTERCEPT(_name, _rettype, _cargspec,		\
_return, _cxxargs)							\
extern "C" _rettype _db_##_name##_intercept_c _cargspec			\
#define	DB_SET_CALLBACK(_cxxname, _name, _cxxargspec, _cb)		\
int Db::_cxxname _cxxargspec						\
#define	DB_GET_CALLBACK(_cxxname, _name, _cxxargspec, _cbp)		\
int Db::_cxxname _cxxargspec						\
#define	DB_CALLBACK_C_INTERCEPT_CONST(_name, _rettype, _cargspec,	\
_return, _cxxargs)						\
extern "C" _rettype _db_##_name##_intercept_c_const _cargspec	\
#define	DB_SET_CALLBACK_CONST(_cxxname, _name, _cxxargspec, _cb)	\
int Db::_cxxname _cxxargspec					\
DB_CALLBACK_C_INTERCEPT(associate,
int, (DB *cthis, const DBT *key, const DBT *data, DBT *retval),
return, (cxxthis, Dbt::get_const_Dbt(key), Dbt::get_const_Dbt(data),
Dbt::get_Dbt(retval)))
int Db::associate(DbTxn *txn, Db *secondary, int (*callback)(Db *, const Dbt *,
const Dbt *, Dbt *), u_int32_t flags)
DB_CALLBACK_C_INTERCEPT(associate_foreign, int,
(DB *cthis, const DBT *key, DBT *data, const DBT *fkey, int *changed),
return, (cxxthis, Dbt::get_const_Dbt(key),
Dbt::get_Dbt(data), Dbt::get_const_Dbt(fkey), changed))
int Db::associate_foreign(Db *secondary, int (*callback)(Db *,
const Dbt *, Dbt *, const Dbt *, int *), u_int32_t flags)
DB_CALLBACK_C_INTERCEPT(feedback,
void, (DB *cthis, int opcode, int pct), (void), (cxxthis, opcode, pct))
DB_GET_CALLBACK(get_feedback, feedback,
(void (**argp)(Db *cxxthis, int opcode, int pct)), argp)
DB_SET_CALLBACK(set_feedback, feedback,
(void (*arg)(Db *cxxthis, int opcode, int pct)), arg)
DB_CALLBACK_C_INTERCEPT(append_recno,
int, (DB *cthis, DBT *data, db_recno_t recno),
return, (cxxthis, Dbt::get_Dbt(data), recno))
DB_GET_CALLBACK(get_append_recno, append_recno,
(int (**argp)(Db *cxxthis, Dbt *data, db_recno_t recno)), argp)
DB_SET_CALLBACK(set_append_recno, append_recno,
(int (*arg)(Db *cxxthis, Dbt *data, db_recno_t recno)), arg)
DB_CALLBACK_C_INTERCEPT(bt_compare,
int, (DB *cthis, const DBT *data1, const DBT *data2, size_t *locp),
return,
(cxxthis, Dbt::get_const_Dbt(data1), Dbt::get_const_Dbt(data2), locp))
DB_GET_CALLBACK(get_bt_compare, bt_compare,
(int (**argp)(Db *cxxthis, const Dbt *data1, const Dbt *data2,
size_t *locp)), argp)
DB_SET_CALLBACK(set_bt_compare, bt_compare,
(int (*arg)(Db *cxxthis, const Dbt *data1, const Dbt *data2,
size_t *locp)), arg)
DB_CALLBACK_C_INTERCEPT(bt_compress,
int, (DB *cthis, const DBT *data1, const DBT *data2, const DBT *data3,
const DBT *data4, DBT *data5), return,
(cxxthis, Dbt::get_const_Dbt(data1), Dbt::get_const_Dbt(data2),
Dbt::get_const_Dbt(data3), Dbt::get_const_Dbt(data4), Dbt::get_Dbt(data5)))
DB_CALLBACK_C_INTERCEPT(bt_decompress,
int, (DB *cthis, const DBT *data1, const DBT *data2, DBT *data3,
DBT *data4, DBT *data5), return,
(cxxthis, Dbt::get_const_Dbt(data1), Dbt::get_const_Dbt(data2),
Dbt::get_Dbt(data3), Dbt::get_Dbt(data4), Dbt::get_Dbt(data5)))
int Db::get_bt_compress(
int (**bt_compress)
(Db *, const Dbt *, const Dbt *, const Dbt *, const Dbt *, Dbt *),
int (**bt_decompress)
(Db *, const Dbt *, const Dbt *, Dbt *, Dbt *, Dbt *))
int Db::set_bt_compress(
int (*bt_compress)
(Db *, const Dbt *, const Dbt *, const Dbt *, const Dbt *, Dbt *),
int (*bt_decompress)(Db *, const Dbt *, const Dbt *, Dbt *, Dbt *, Dbt *))
DB_CALLBACK_C_INTERCEPT(bt_prefix,
size_t, (DB *cthis, const DBT *data1, const DBT *data2),
return,
(cxxthis, Dbt::get_const_Dbt(data1), Dbt::get_const_Dbt(data2)))
DB_GET_CALLBACK(get_bt_prefix, bt_prefix,
(size_t (**argp)(Db *cxxthis, const Dbt *data1, const Dbt *data2)), argp)
DB_SET_CALLBACK(set_bt_prefix, bt_prefix,
(size_t (*arg)(Db *cxxthis, const Dbt *data1, const Dbt *data2)), arg)
DB_CALLBACK_C_INTERCEPT(dup_compare,
int, (DB *cthis, const DBT *data1, const DBT *data2, size_t *locp),
return,
(cxxthis, Dbt::get_const_Dbt(data1), Dbt::get_const_Dbt(data2), locp))
DB_GET_CALLBACK(get_dup_compare, dup_compare,
(int (**argp)(Db *cxxthis, const Dbt *data1, const Dbt *data2,
size_t *locp)), argp)
DB_SET_CALLBACK(set_dup_compare, dup_compare,
(int (*arg)(Db *cxxthis, const Dbt *data1, const Dbt *data2,
size_t *locp)), arg)
DB_CALLBACK_C_INTERCEPT(h_compare,
int, (DB *cthis, const DBT *data1, const DBT *data2, size_t *locp),
return,
(cxxthis, Dbt::get_const_Dbt(data1), Dbt::get_const_Dbt(data2), locp))
DB_GET_CALLBACK(get_h_compare, h_compare,
(int (**argp)(Db *cxxthis, const Dbt *data1, const Dbt *data2,
size_t *locp)), argp)
DB_SET_CALLBACK(set_h_compare, h_compare,
(int (*arg)(Db *cxxthis, const Dbt *data1, const Dbt *data2,
size_t *locp)), arg)
DB_CALLBACK_C_INTERCEPT(h_hash,
u_int32_t, (DB *cthis, const void *data, u_int32_t len),
return, (cxxthis, data, len))
DB_GET_CALLBACK(get_h_hash, h_hash,
(u_int32_t (**argp)(Db *cxxthis, const void *data, u_int32_t len)), argp)
DB_SET_CALLBACK(set_h_hash, h_hash,
(u_int32_t (*arg)(Db *cxxthis, const void *data, u_int32_t len)), arg)
DB_CALLBACK_C_INTERCEPT_CONST(slice,
int, (const DB *cthis, const DBT *key, DBT *slice),
return,
(cxxthis, Dbt::get_const_Dbt(key), Dbt::get_Dbt(slice)))
DB_SET_CALLBACK_CONST(set_slice_callback, slice,
(int(*arg)(const Db *cxxthis, const Dbt *key, Dbt *)), arg)
extern "C"
int _verify_callback_c(void *handle, const void *str_arg)
int Db::verify(const char *name, const char *subdb,
__DB_STD(ostream) *ostr, u_int32_t flags)
DB_METHOD(set_blob_dir, (const char *dir), (db, dir), DB_RETOK_STD)
DB_METHOD(get_blob_dir, (const char **dir), (db, dir), DB_RETOK_STD)
DB_METHOD(set_blob_threshold, (u_int32_t bytes, u_int32_t flags),
(db, bytes, flags), DB_RETOK_STD)
DB_METHOD(get_blob_threshold, (u_int32_t *bytes),
(db, bytes), DB_RETOK_STD)
DB_METHOD(set_bt_compare, (bt_compare_fcn_type func),
(db, func), DB_RETOK_STD)
DB_METHOD(get_bt_minkey, (u_int32_t *bt_minkeyp),
(db, bt_minkeyp), DB_RETOK_STD)
DB_METHOD(set_bt_minkey, (u_int32_t bt_minkey),
(db, bt_minkey), DB_RETOK_STD)
DB_METHOD(set_bt_prefix, (bt_prefix_fcn_type func),
(db, func), DB_RETOK_STD)
DB_METHOD(set_dup_compare, (dup_compare_fcn_type func),
(db, func), DB_RETOK_STD)
DB_METHOD(get_encrypt_flags, (u_int32_t *flagsp),
(db, flagsp), DB_RETOK_STD)
DB_METHOD(set_encrypt, (const char *passwd, u_int32_t flags),
(db, passwd, flags), DB_RETOK_STD)
DB_METHOD_VOID(get_errfile, (FILE **errfilep), (db, errfilep))
DB_METHOD_VOID(set_errfile, (FILE *errfile), (db, errfile))
DB_METHOD_VOID(get_errpfx, (const char **errpfxp), (db, errpfxp))
DB_METHOD_VOID(set_errpfx, (const char *errpfx), (db, errpfx))
DB_METHOD(set_ext_file_dir, (const char *dir), (db, dir), DB_RETOK_STD)
DB_METHOD(get_ext_file_dir, (const char **dir), (db, dir), DB_RETOK_STD)
DB_METHOD(set_ext_file_threshold, (u_int32_t bytes, u_int32_t flags),
(db, bytes, flags), DB_RETOK_STD)
DB_METHOD(get_ext_file_threshold, (u_int32_t *bytes),
(db, bytes), DB_RETOK_STD)
DB_METHOD(get_flags, (u_int32_t *flagsp), (db, flagsp),
DB_RETOK_STD)
DB_METHOD(set_flags, (u_int32_t flags), (db, flags),
DB_RETOK_STD)
DB_METHOD(get_heapsize, (u_int32_t *gbytesp, u_int32_t *bytesp),
(db, gbytesp, bytesp), DB_RETOK_STD)
DB_METHOD(set_heapsize, (u_int32_t gbytes, u_int32_t bytes),
(db, gbytes, bytes, 0), DB_RETOK_STD)
DB_METHOD(get_heap_regionsize, (u_int32_t *npagesp),
(db, npagesp), DB_RETOK_STD)
DB_METHOD(set_heap_regionsize, (u_int32_t npages),
(db, npages), DB_RETOK_STD)
DB_METHOD(set_h_compare, (h_compare_fcn_type func),
(db, func), DB_RETOK_STD)
DB_METHOD(get_h_ffactor, (u_int32_t *h_ffactorp),
(db, h_ffactorp), DB_RETOK_STD)
DB_METHOD(set_h_ffactor, (u_int32_t h_ffactor),
(db, h_ffactor), DB_RETOK_STD)
DB_METHOD(set_h_hash, (h_hash_fcn_type func),
(db, func), DB_RETOK_STD)
DB_METHOD(get_h_nelem, (u_int32_t *h_nelemp),
(db, h_nelemp), DB_RETOK_STD)
DB_METHOD(set_h_nelem, (u_int32_t h_nelem),
(db, h_nelem), DB_RETOK_STD)
DB_METHOD(get_lorder, (int *db_lorderp), (db, db_lorderp),
DB_RETOK_STD)
DB_METHOD(set_lorder, (int db_lorder), (db, db_lorder),
DB_RETOK_STD)
DB_METHOD_VOID(get_msgfile, (FILE **msgfilep), (db, msgfilep))
DB_METHOD_VOID(set_msgfile, (FILE *msgfile), (db, msgfile))
DB_METHOD_VOID(get_msgpfx, (const char **msgpfxp), (db, msgpfxp))
DB_METHOD_VOID(set_msgpfx, (const char *msgpfx), (db, msgpfx))
DB_METHOD_QUIET(get_multiple, (), (db))
DB_METHOD(get_pagesize, (u_int32_t *db_pagesizep),
(db, db_pagesizep), DB_RETOK_STD)
DB_METHOD(set_pagesize, (u_int32_t db_pagesize),
(db, db_pagesize), DB_RETOK_STD)
DB_CALLBACK_C_INTERCEPT(db_partition,
u_int32_t, (DB *cthis, DBT *key),
return, (cxxthis, Dbt::get_Dbt(key)))
int Db::set_partition(u_int32_t parts, Dbt *keys,
u_int32_t (*arg)(Db *cxxthis, Dbt *key))
int Db::get_partition_callback(u_int32_t *parts,
u_int32_t (**argp)(Db *cxxthis, Dbt *key))
DB_METHOD(set_partition_dirs, (const char **dirp), (db, dirp), DB_RETOK_STD)
DB_METHOD(get_partition_dirs, (const char ***dirpp), (db, dirpp), DB_RETOK_STD)
DB_METHOD(get_partition_keys, (u_int32_t *parts, Dbt **keys),
(db, parts, (DBT **)keys), DB_RETOK_STD)
DB_METHOD(get_priority, (DB_CACHE_PRIORITY *priorityp),
(db, priorityp), DB_RETOK_STD)
DB_METHOD(set_priority, (DB_CACHE_PRIORITY priority),
(db, priority), DB_RETOK_STD)
DB_METHOD(get_re_delim, (int *re_delimp),
(db, re_delimp), DB_RETOK_STD)
DB_METHOD(set_re_delim, (int re_delim),
(db, re_delim), DB_RETOK_STD)
DB_METHOD(get_re_len, (u_int32_t *re_lenp),
(db, re_lenp), DB_RETOK_STD)
DB_METHOD(set_re_len, (u_int32_t re_len),
(db, re_len), DB_RETOK_STD)
DB_METHOD(get_re_pad, (int *re_padp),
(db, re_padp), DB_RETOK_STD)
DB_METHOD(set_re_pad, (int re_pad),
(db, re_pad), DB_RETOK_STD)
DB_METHOD(get_re_source, (const char **re_source),
(db, re_source), DB_RETOK_STD)
DB_METHOD(set_re_source, (const char *re_source),
(db, re_source), DB_RETOK_STD)
DB_METHOD(sort_multiple, (Dbt *key, Dbt *data, u_int32_t flags),
(db, key, data, flags), DB_RETOK_STD)
DB_METHOD(get_q_extentsize, (u_int32_t *extentsizep),
(db, extentsizep), DB_RETOK_STD)
DB_METHOD(set_q_extentsize, (u_int32_t extentsize),
(db, extentsize), DB_RETOK_STD)
DB_METHOD_QUIET(get_alloc, (db_malloc_fcn_type *malloc_fcnp,
db_realloc_fcn_type *realloc_fcnp, db_free_fcn_type *free_fcnp),
(db, malloc_fcnp, realloc_fcnp, free_fcnp))
DB_METHOD_QUIET(set_alloc, (db_malloc_fcn_type malloc_fcn,
db_realloc_fcn_type realloc_fcn, db_free_fcn_type free_fcn),
(db, malloc_fcn, realloc_fcn, free_fcn))
void Db::get_errcall(void (**argp)(const DbEnv *, const char *, const char *))
void Db::set_errcall(void (*arg)(const DbEnv *, const char *, const char *))
void Db::get_msgcall(void (**argp)(const DbEnv *, const char *, const char *))
void Db::set_msgcall(void (*arg)(const DbEnv *, const char *, const char *))
void *Db::get_app_private() const
void Db::set_app_private(void *value)
DB_METHOD(get_cachesize, (u_int32_t *gbytesp, u_int32_t *bytesp, int *ncachep),
(db, gbytesp, bytesp, ncachep), DB_RETOK_STD)
DB_METHOD(set_cachesize, (u_int32_t gbytes, u_int32_t bytes, int ncache),
(db, gbytes, bytes, ncache), DB_RETOK_STD)
DB_METHOD(get_create_dir, (const char **dirp), (db, dirp), DB_RETOK_STD)
DB_METHOD(set_create_dir, (const char *dir), (db, dir), DB_RETOK_STD)
int Db::set_paniccall(void (*callback)(DbEnv *, int))
__DB_STD(ostream) *Db::get_error_stream()
void Db::set_error_stream(__DB_STD(ostream) *error_stream)
__DB_STD(ostream) *Db::get_message_stream()
void Db::set_message_stream(__DB_STD(ostream) *message_stream)
DB_METHOD_QUIET(get_transactional, (), (db))
int Db::alt_close(DB *pdb, u_int32_t flags)
