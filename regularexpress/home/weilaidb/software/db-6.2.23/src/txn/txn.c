#define	LOG_FLAGS(txn)						\
(DB_LOG_COMMIT | (F_ISSET(txn, TXN_SYNC) ?	\
DB_FLUSH : (F_ISSET(txn, TXN_WRITE_NOSYNC) ?	\
DB_LOG_WRNOSYNC : 0)))
typedef enum  txnop_t;
static int  __txn_abort_pp __P((DB_TXN *));
static int  __txn_applied __P((ENV *,
DB_THREAD_INFO *, DB_COMMIT_INFO *, db_timeout_t));
static void __txn_build_token __P((DB_TXN *, DB_LSN *));
static int  __txn_begin_int __P((DB_TXN *));
static int  __txn_close_cursors __P((DB_TXN *));
static int  __txn_commit_pp __P((DB_TXN *, u_int32_t));
static int  __txn_discard __P((DB_TXN *, u_int32_t));
static int  __txn_dispatch_undo
__P((ENV *, DB_TXN *, DBT *, DB_LSN *, DB_TXNHEAD *));
static int  __txn_end __P((DB_TXN *, int));
static int  __txn_isvalid __P((const DB_TXN *, txnop_t));
static int  __txn_undo __P((DB_TXN *));
static int __txn_set_commit_token __P((DB_TXN *txn, DB_TXN_TOKEN *));
static void __txn_set_txn_lsnp __P((DB_TXN *, DB_LSN **, DB_LSN **));
#define	TxnAlloc "Unable to allocate a transaction handle"
int
__txn_begin_pp(dbenv, parent, txnpp, flags)
DB_ENV *dbenv;
DB_TXN *parent, **txnpp;
u_int32_t flags;
int
__txn_allocate(env, txnpp)
ENV *env;
DB_TXN **txnpp;
int
__txn_begin(env, ip, parent, txnpp, flags)
ENV *env;
DB_THREAD_INFO *ip;
DB_TXN *parent, **txnpp;
u_int32_t flags;
int
__txn_recycle_id(env, locked)
ENV *env;
int locked;
static int
__txn_begin_int(txn)
DB_TXN *txn;
int
__txn_continue(env, txn, td, ip, add_to_list)
ENV *env;
DB_TXN *txn;
TXN_DETAIL *td;
DB_THREAD_INFO *ip;
int add_to_list;
static int
__txn_commit_pp(txn, flags)
DB_TXN *txn;
u_int32_t flags;
int
__txn_commit(txn, flags)
DB_TXN *txn;
u_int32_t flags;
static int
__txn_close_cursors(txn)
DB_TXN *txn;
static int
__txn_set_commit_token(txn, tokenp)
DB_TXN *txn;
DB_TXN_TOKEN *tokenp;
static void
__txn_build_token(txn, lsnp)
DB_TXN *txn;
DB_LSN *lsnp;
static int
__txn_abort_pp(txn)
DB_TXN *txn;
int
__txn_abort(txn)
DB_TXN *txn;
static int
__txn_discard(txn, flags)
DB_TXN *txn;
u_int32_t flags;
int
__txn_discard_int(txn, flags)
DB_TXN *txn;
u_int32_t flags;
int
__txn_prepare(txn, gid)
DB_TXN *txn;
u_int8_t *gid;
u_int32_t
__txn_id(txn)
DB_TXN *txn;
int
__txn_get_name(txn, namep)
DB_TXN *txn;
const char **namep;
int
__txn_set_name(txn, name)
DB_TXN *txn;
const char *name;
int
__txn_get_priority(txn, priorityp)
DB_TXN *txn;
u_int32_t *priorityp;
int
__txn_set_priority(txn, priority)
DB_TXN *txn;
u_int32_t priority;
int
__txn_set_timeout(txn, timeout, op)
DB_TXN *txn;
db_timeout_t timeout;
u_int32_t op;
static int
__txn_isvalid(txn, op)
const DB_TXN *txn;
txnop_t op;
static int
__txn_end(txn, is_commit)
DB_TXN *txn;
int is_commit;
static int
__txn_dispatch_undo(env, txn, rdbt, key_lsn, txnlist)
ENV *env;
DB_TXN *txn;
DBT *rdbt;
DB_LSN *key_lsn;
DB_TXNHEAD *txnlist;
static int
__txn_undo(txn)
DB_TXN *txn;
int
__txn_activekids(env, rectype, txn)
ENV *env;
u_int32_t rectype;
DB_TXN *txn;
int
__txn_force_abort(env, buffer)
ENV *env;
u_int8_t *buffer;
int
__txn_preclose(env)
ENV *env;
int
__txn_reset(env)
ENV *env;
static void
__txn_set_txn_lsnp(txn, blsnp, llsnp)
DB_TXN *txn;
DB_LSN **blsnp, **llsnp;
int
__txn_applied_pp(dbenv, token, timeout, flags)
DB_ENV *dbenv;
DB_TXN_TOKEN *token;
db_timeout_t timeout;
u_int32_t flags;
static int
__txn_applied(env, ip, commit_info, timeout)
ENV *env;
DB_THREAD_INFO *ip;
DB_COMMIT_INFO *commit_info;
db_timeout_t timeout;
int
__txn_init_timeout(txn, parent)
DB_TXN *txn, *parent;
int
__txn_slice_begin(txn, sl_txnpp, slice_index)
DB_TXN *txn;
DB_TXN **sl_txnpp;
db_slice_t slice_index;
int
__txn_multislice(txn)
DB_TXN *txn;
