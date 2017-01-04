static int dispatch_app_message __P((ENV *, REPMGR_MESSAGE *));
static int finish_gmdb_update __P((ENV *, DB_THREAD_INFO *,
DBT *, u_int32_t, u_int32_t, u_int32_t, __repmgr_member_args *));
static int incr_gm_version __P((ENV *, DB_THREAD_INFO *, DB_TXN *));
static void marshal_site_data __P((ENV *,
u_int32_t, u_int32_t, u_int8_t *, DBT *));
static void marshal_site_key __P((ENV *,
repmgr_netaddr_t *, u_int8_t *, DBT *, __repmgr_member_args *));
static int message_loop __P((ENV *, REPMGR_RUNNABLE *));
static int preferred_master_takeover __P((ENV*));
static int process_message __P((ENV*, DBT*, DBT*, int));
static int reject_fwd __P((ENV *, REPMGR_CONNECTION *));
static int rejoin_connections(ENV *);
static int rejoin_deferred_election(ENV *);
static int rescind_pending __P((ENV *,
DB_THREAD_INFO *, int, u_int32_t, u_int32_t));
static int resolve_limbo_int __P((ENV *, DB_THREAD_INFO *));
static int resolve_limbo_wrapper __P((ENV *, DB_THREAD_INFO *));
static int send_permlsn __P((ENV *, u_int32_t, DB_LSN *));
static int send_permlsn_conn __P((ENV *,
REPMGR_CONNECTION *, u_int32_t, DB_LSN *));
static int serve_join_request __P((ENV *,
DB_THREAD_INFO *, REPMGR_MESSAGE *));
static int serve_lsnhist_request __P((ENV *, DB_THREAD_INFO *,
REPMGR_MESSAGE *));
static int serve_readonly_master_request __P((ENV *, REPMGR_MESSAGE *));
static int serve_remove_request __P((ENV *,
DB_THREAD_INFO *, REPMGR_MESSAGE *));
static int serve_repmgr_request __P((ENV *, REPMGR_MESSAGE *));
static int serve_restart_client_request __P((ENV *, REPMGR_MESSAGE *));
#define	NEXT_STATUS(s) (u_int32_t)((s) == SITE_ADDING ? SITE_PRESENT : 0)
void *
__repmgr_msg_thread(argsp)
void *argsp;
static int
message_loop(env, th)
ENV *env;
REPMGR_RUNNABLE *th;
static int
dispatch_app_message(env, msg)
ENV *env;
REPMGR_MESSAGE *msg;
int
__repmgr_send_err_resp(env, channel, err)
ENV *env;
CHANNEL *channel;
int err;
static int
process_message(env, control, rec, eid)
ENV *env;
DBT *control, *rec;
int eid;
int
__repmgr_handle_event(env, event, info)
ENV *env;
u_int32_t event;
void *info;
static int
send_permlsn(env, generation, lsn)
ENV *env;
u_int32_t generation;
DB_LSN *lsn;
static int
send_permlsn_conn(env, conn, generation, lsn)
ENV *env;
REPMGR_CONNECTION *conn;
u_int32_t generation;
DB_LSN *lsn;
static int
preferred_master_takeover(env)
ENV *env;
static int
serve_repmgr_request(env, msg)
ENV *env;
REPMGR_MESSAGE *msg;
static int
serve_join_request(env, ip, msg)
ENV *env;
DB_THREAD_INFO *ip;
REPMGR_MESSAGE *msg;
static int
serve_remove_request(env, ip, msg)
ENV *env;
DB_THREAD_INFO *ip;
REPMGR_MESSAGE *msg;
static int
serve_restart_client_request(env, msg)
ENV *env;
REPMGR_MESSAGE *msg;
static int
serve_readonly_master_request(env, msg)
ENV *env;
REPMGR_MESSAGE *msg;
static int
serve_lsnhist_request(env, ip, msg)
ENV *env;
DB_THREAD_INFO *ip;
REPMGR_MESSAGE *msg;
static int
resolve_limbo_wrapper(env, ip)
ENV *env;
DB_THREAD_INFO *ip;
static int
resolve_limbo_int(env, ip)
ENV *env;
DB_THREAD_INFO *ip;
int
__repmgr_update_membership(env, ip, eid, pstatus, site_flags)
ENV *env;
DB_THREAD_INFO *ip;
int eid;
u_int32_t pstatus;
u_int32_t site_flags;
static int
rescind_pending(env, ip, eid, cur_status, new_status)
ENV *env;
DB_THREAD_INFO *ip;
int eid;
u_int32_t cur_status, new_status;
static int
incr_gm_version(env, ip, txn)
ENV *env;
DB_THREAD_INFO *ip;
DB_TXN *txn;
int
__repmgr_set_gm_version(env, ip, txn, version)
ENV *env;
DB_THREAD_INFO *ip;
DB_TXN *txn;
u_int32_t version;
static int
finish_gmdb_update(env, ip, key_dbt, prev_status, status, flags, logrec)
ENV *env;
DB_THREAD_INFO *ip;
DBT *key_dbt;
u_int32_t prev_status, status, flags;
__repmgr_member_args *logrec;
int
__repmgr_setup_gmdb_op(env, ip, txnp, flags)
ENV *env;
DB_THREAD_INFO *ip;
DB_TXN **txnp;
u_int32_t flags;
int
__repmgr_cleanup_gmdb_op(env, do_close)
ENV *env;
int do_close;
int
__repmgr_hold_master_role(env, conn, membership)
ENV *env;
REPMGR_CONNECTION *conn;
u_int32_t membership;
int
__repmgr_rlse_master_role(env)
ENV *env;
static int
reject_fwd(env, conn)
ENV *env;
REPMGR_CONNECTION *conn;
static void
marshal_site_key(env, addr, buf, dbt, logrec)
ENV *env;
repmgr_netaddr_t *addr;
u_int8_t *buf;
DBT *dbt;
__repmgr_member_args *logrec;
static void
marshal_site_data(env, status, flags, buf, dbt)
ENV *env;
u_int32_t status;
u_int32_t flags;
u_int8_t *buf;
DBT *dbt;
void
__repmgr_set_sites(env)
ENV *env;
static int
rejoin_deferred_election(env)
ENV *env;
static int
rejoin_connections(env)
ENV *env;
