START_NS(dbstl)
typedef struct  db_timespec;
extern "C"
using std::pair;
using std::make_pair;
map<Db*, size_t> ResourceManager::open_dbs_;
map<DbEnv*, size_t> ResourceManager::open_envs_;
set<DbstlGlobalInnerObject *> ResourceManager::glob_objs_;
set<Db *> ResourceManager::deldbs;
set<DbEnv *> ResourceManager::delenvs;
DbEnv * ResourceManager::mtx_env_ = NULL;
db_mutex_t ResourceManager::mtx_handle_ = 0;
db_mutex_t ResourceManager::mtx_globj_ = 0;
template <Typename T> TLS_DEFN_MODIFIER T *TlsWrapper<T>::tinst_ = NULL;
#elif defined(HAVE_PTHREAD_TLS)
static pthread_once_t once_control_ = PTHREAD_ONCE_INIT;
template <Typename T>
pthread_key_t TlsWrapper<T>::tls_key_;
template<Typename T>
void tls_init_once(void)
template<Typename T>
TlsWrapper<T>::TlsWrapper()
#error "No suitable thread-local storage model configured"
int ResourceManager::global_lock(db_mutex_t dbcontainer_mtx)
int ResourceManager::global_unlock(db_mutex_t dbcontainer_mtx)
u_int32_t dbstl_strlen(const char *str)
void dbstl_strcpy(char *dest, const char *src, size_t num)
int dbstl_strncmp(const char *s1, const char *s2, size_t num)
int dbstl_wcsncmp(const wchar_t *s1, const wchar_t *s2, size_t num)
int dbstl_strcmp(const char *s1, const char *s2)
int dbstl_wcscmp(const wchar_t *s1, const wchar_t *s2)
u_int32_t dbstl_wcslen(const wchar_t *str)
void dbstl_wcscpy(wchar_t *dest, const wchar_t *src, size_t num)
void ResourceManager::global_startup()
ResourceManager::ResourceManager(void)
void ResourceManager::close_db(Db *pdb)
void ResourceManager::close_all_db_envs()
void ResourceManager::close_db_env(DbEnv *penv)
void ResourceManager::close_all_dbs()
ResourceManager::~ResourceManager(void)
Db* ResourceManager::open_db (
DbEnv*penv, const char* filename, DBTYPE dbtype,
u_int32_t oflags, u_int32_t set_flags1, int mode, DbTxn* txn,
u_int32_t cflags, const char* dbname)
DbEnv* ResourceManager::open_env(const char* env_home, u_int32_t set_flags1,
u_int32_t oflags, u_int32_t cachesize, int mode, u_int32_t cflags)
DbTxn* ResourceManager::current_txn(DbEnv*env)
void ResourceManager::thread_exit()
void ResourceManager::set_global_callbacks()
ResourceManager* ResourceManager::instance()
int ResourceManager::open_cursor(DbCursorBase *dcbcsr,
Db *pdb, int flags)
void ResourceManager::add_cursor(Db* dbp, DbCursorBase* dcbcsr)
size_t ResourceManager::close_db_cursors(Db* dbp1)
int ResourceManager::remove_cursor(DbCursorBase*csr,
bool remove_from_txncsrs)
void ResourceManager::remove_txn_cursor(DbTxn* txn)
DbTxn* ResourceManager::begin_txn(u_int32_t flags, DbEnv*env1, int outtxn)
void ResourceManager::commit_txn(DbEnv *env, u_int32_t flags)
void ResourceManager::commit_txn(DbEnv *env, DbTxn *txn, u_int32_t flags)
void ResourceManager::abort_txn(DbEnv *env, DbTxn *txn)
void ResourceManager::abort_txn(DbEnv*env)
DbTxn* ResourceManager::set_current_txn_handle(DbEnv *env, DbTxn *newtxn)
void ResourceManager::add_txn_cursor(DbCursorBase *dcbcsr, DbEnv *env)
void ResourceManager::register_db(Db*pdb1)
void ResourceManager::register_db_env(DbEnv*env1)
void ResourceManager::global_exit()
void ResourceManager::register_global_object(DbstlGlobalInnerObject *gio)
END_NS
