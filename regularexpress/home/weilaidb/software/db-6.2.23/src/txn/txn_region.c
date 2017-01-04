static int __txn_init __P((ENV *, DB_TXNMGR *));
static int lsn_hi_to_low __P((const void *, const void *));
int
__txn_open(env)
ENV *env;
int
__txn_region_detach(env, mgr)
ENV *env;
DB_TXNMGR *mgr;
static int
__txn_init(env, mgr)
ENV *env;
DB_TXNMGR *mgr;
int
__txn_findlastckp(env, lsnp, max_lsn)
ENV *env;
DB_LSN *lsnp;
DB_LSN *max_lsn;
int
__txn_env_refresh(env)
ENV *env;
u_int32_t
__txn_region_mutex_count(env)
ENV *env;
u_int32_t
__txn_region_mutex_max(env)
ENV *env;
size_t
__txn_region_size(env)
ENV *env;
size_t
__txn_region_max(env)
ENV *env;
int
__txn_id_set(env, cur_txnid, max_txnid)
ENV *env;
u_int32_t cur_txnid, max_txnid;
static int
lsn_hi_to_low(lsn1, lsn2)
const void *lsn1, *lsn2;
#define	TXN_READERS_SIZE	64
int
__txn_get_readers(env, readers, ntxnsp)
ENV *env;
DB_LSN **readers;
int *ntxnsp;
int
__txn_add_buffer(env, td)
ENV *env;
TXN_DETAIL *td;
int
__txn_remove_buffer(env, td, hash_mtx)
ENV *env;
TXN_DETAIL *td;
db_mutex_t hash_mtx;
