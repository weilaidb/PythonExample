#define _DB_STL_RESOURCE_MANAGER_H__
START_NS(dbstl)
class DbCursorBase;
using std::map;
using std::multimap;
using std::set;
using std::stack;
typedef map<Db *, set<dbstl::DbCursorBase *> *> db_csr_map_t;
typedef set<dbstl::DbCursorBase *> csrset_t;
typedef map<DbTxn *, set<DbCursorBase *> *> txncsr_t;
typedef stack<DbTxn *> txnstk_t;
typedef map<DbEnv *, txnstk_t> env_txns_t;
template <Typename T>
class TlsWrapper
;
#elif defined(HAVE_PTHREAD_TLS)
template <Typename T>
class TlsWrapper
;
#error "A multi-threaded build of STL for Berkeley DB requires thread local storage.  None is configured."
class _exported ResourceManager : public DbstlGlobalInnerObject
;
END_NS
