static void corrupted_env __P((ENV *, int));
static int __xa_get_txn __P((ENV *,
XID *, TXN_DETAIL *, DB_TXN **, u_long, int));
static void __xa_put_txn __P((ENV *, DB_TXN *));
static int __xa_txn_get_prepared
__P((ENV *, XID *, DB_PREPLIST *, long, long *, u_int32_t));
static int __xa_thread_enter __P((ENV *, DB_THREAD_INFO **));
static int __db_xa_close __P((char *, int, long));
static int __db_xa_commit __P((XID *, int, long));
static int __db_xa_complete __P((int *, int *, int, long));
static int __db_xa_end __P((XID *, int, long));
static int __db_xa_forget __P((XID *, int, long));
static int __db_xa_open __P((char *, int, long));
static int __db_xa_prepare __P((XID *, int, long));
static int __db_xa_recover __P((XID *, long, int, long));
static int __db_xa_rollback __P((XID *, int, long));
static int __db_xa_start __P((XID *, int, long));
const struct xa_switch_t db_xa_switch = ;
static int
__xa_get_txn(env, xid, td, txnp, flags, ending)
ENV *env;
XID *xid;
TXN_DETAIL *td;
DB_TXN **txnp;
u_long flags;
int ending;
static void
__xa_put_txn(env, txnp)
ENV *env;
DB_TXN *txnp;
static
int __xa_thread_enter(env, ipp)
ENV *env;
DB_THREAD_INFO **ipp;
static int
__xa_txn_get_prepared(env, xids, txns, count, retp, flags)
ENV *env;
XID *xids;
DB_PREPLIST *txns;
long count;
long *retp;
u_int32_t flags;
#define	XA_FLAGS \
(DB_CREATE | DB_INIT_LOCK | DB_INIT_LOG | DB_INIT_MPOOL | \
DB_INIT_TXN | DB_THREAD | DB_REGISTER | DB_RECOVER)
static int
__db_xa_open(xa_info, rmid, arg_flags)
char *xa_info;
int rmid;
long arg_flags;
static int
__db_xa_close(xa_info, rmid, arg_flags)
char *xa_info;
int rmid;
long arg_flags;
static int
__db_xa_start(xid, rmid, arg_flags)
XID *xid;
int rmid;
long arg_flags;
static int
__db_xa_end(xid, rmid, arg_flags)
XID *xid;
int rmid;
long arg_flags;
static void
corrupted_env(env, rmid)
ENV *env;
int rmid;
static int
__db_xa_prepare(xid, rmid, arg_flags)
XID *xid;
int rmid;
long arg_flags;
static int
__db_xa_commit(xid, rmid, arg_flags)
XID *xid;
int rmid;
long arg_flags;
static int
__db_xa_recover(xids, count, rmid, flags)
XID *xids;
long count, flags;
int rmid;
static int
__db_xa_rollback(xid, rmid, arg_flags)
XID *xid;
int rmid;
long arg_flags;
static int
__db_xa_forget(xid, rmid, arg_flags)
XID *xid;
int rmid;
long arg_flags;
static int
__db_xa_complete(handle, retval, rmid, flags)
int *handle, *retval, rmid;
long flags;
