typedef struct  db_timespec;
extern "C"
START_NS(dbstl)
using std::string;
u_int32_t db_container::g_db_file_suffix_ = 0;
void set_global_dbfile_suffix_number(u_int32_t num)
void *DbstlReAlloc(void *ptr, size_t size)
void *DbstlMalloc(size_t size)
void db_container::init_members()
void db_container::init_members(Db *dbp, DbEnv *envp)
db_container::db_container()
db_container::db_container(const db_container& dbctnr)
db_container::db_container(Db *dbp, DbEnv *envp)
void db_container::init_members(const db_container&dbctnr)
void db_container::open_db_handles(Db *&pdb, DbEnv *&penv, DBTYPE dbtype,
u_int32_t oflags, u_int32_t sflags)
Db* db_container::clone_db_config(Db *dbp)
Db* db_container::clone_db_config(Db *dbp, string &dbfname)
int db_container::construct_db_file_name(string &filename) const
void db_container::set_auto_commit(Db *db)
void db_container::set_db_handle(Db *dbp, DbEnv *newenv)
void db_container::verify_db_handles(const db_container &cntnr) const
bool operator==(const Dbt&d1, const Dbt&d2)
bool operator==(const DBT&d1, const DBT&d2)
void close_all_dbs()
void close_db(Db *pdb)
DbTxn* begin_txn(u_int32_t flags, DbEnv*env)
void commit_txn(DbEnv *env, u_int32_t flags)
void commit_txn(DbEnv *env, DbTxn *txn, u_int32_t flags)
void abort_txn(DbEnv *env)
void abort_txn(DbEnv *env, DbTxn *txn)
DbTxn* current_txn(DbEnv *env)
DbTxn* set_current_txn_handle(DbEnv *env, DbTxn *newtxn)
void register_db(Db *pdb1)
void register_db_env(DbEnv *env1)
Db* open_db (DbEnv *penv, const char *filename, DBTYPE dbtype,
u_int32_t oflags, u_int32_t set_flags, int mode,
DbTxn *txn, u_int32_t cflags, const char *dbname)
DbEnv* open_env(const char *env_home, u_int32_t set_flags,
u_int32_t oflags, u_int32_t cachesize, int mode, u_int32_t cflags)
void close_db_env(DbEnv *pdbenv)
void close_all_db_envs()
size_t close_db_cursors(Db *dbp1)
db_mutex_t alloc_mutex()
int lock_mutex(db_mutex_t mtx)
int unlock_mutex(db_mutex_t mtx)
void free_mutex(db_mutex_t mtx)
void dbstl_startup()
void dbstl_exit()
void dbstl_thread_exit()
void throw_bdb_exception(const char *caller, int error)
void register_global_object(DbstlGlobalInnerObject *gio)
u_int32_t hash_default(Db *, const void *key, u_int32_t len)
bool DbstlMultipleDataIterator::next(Dbt &data)
bool DbstlMultipleKeyDataIterator::next(Dbt &key, Dbt &data)
bool DbstlMultipleRecnoDataIterator::next(db_recno_t &recno, Dbt &data)
END_NS
