#define	INITIAL_SITES_ALLOCATION	3
static int convert_gmdb(ENV *, DB_THREAD_INFO *, DB *, DB_TXN *);
static int get_eid __P((ENV *, const char *, u_int, int *));
static int read_gmdb __P((ENV *, DB_THREAD_INFO *, u_int8_t **, size_t *));
static int __repmgr_addrcmp __P((repmgr_netaddr_t *, repmgr_netaddr_t *));
static int __repmgr_find_commit __P((ENV *, DB_LSN *, DB_LSN *, int *));
static int __repmgr_remote_lsnhist(ENV *, int, u_int32_t,
__repmgr_lsnhist_match_args *);
int
__repmgr_schedule_connection_attempt(env, eid, immediate)
ENV *env;
int eid;
int immediate;
int
__repmgr_is_server(env, site)
ENV *env;
REPMGR_SITE *site;
static int
__repmgr_addrcmp(addr1, addr2)
repmgr_netaddr_t *addr1, *addr2;
void
__repmgr_reset_for_reading(con)
REPMGR_CONNECTION *con;
int
__repmgr_new_connection(env, connp, s, state)
ENV *env;
REPMGR_CONNECTION **connp;
socket_t s;
int state;
int
__repmgr_set_keepalive(env, conn)
ENV *env;
REPMGR_CONNECTION *conn;
int
__repmgr_new_site(env, sitep, host, port)
ENV *env;
REPMGR_SITE **sitep;
const char *host;
u_int port;
int
__repmgr_create_mutex(env, mtxp)
ENV *env;
mgr_mutex_t **mtxp;
int
__repmgr_destroy_mutex(env, mtx)
ENV *env;
mgr_mutex_t *mtx;
void
__repmgr_cleanup_netaddr(env, addr)
ENV *env;
repmgr_netaddr_t *addr;
void
__repmgr_iovec_init(v)
REPMGR_IOVECS *v;
void
__repmgr_add_buffer(v, address, length)
REPMGR_IOVECS *v;
void *address;
size_t length;
void
__repmgr_add_dbt(v, dbt)
REPMGR_IOVECS *v;
const DBT *dbt;
int
__repmgr_update_consumed(v, byte_count)
REPMGR_IOVECS *v;
size_t byte_count;
int
__repmgr_prepare_my_addr(env, dbt)
ENV *env;
DBT *dbt;
int
__repmgr_get_nsites(env, nsitesp)
ENV *env;
u_int32_t *nsitesp;
int
__repmgr_thread_failure(env, why)
ENV *env;
int why;
char *
__repmgr_format_eid_loc(db_rep, conn, buffer)
DB_REP *db_rep;
REPMGR_CONNECTION *conn;
char *buffer;
char *
__repmgr_format_site_loc(site, buffer)
REPMGR_SITE *site;
char *buffer;
char *
__repmgr_format_addr_loc(addr, buffer)
repmgr_netaddr_t *addr;
char *buffer;
int
__repmgr_repstart(env, flags, startopts)
ENV *env;
u_int32_t flags;
u_int32_t startopts;
int
__repmgr_become_master(env, startopts)
ENV *env;
u_int32_t startopts;
int
__repmgr_each_connection(env, callback, info, err_quit)
ENV *env;
CONNECTION_ACTION callback;
void *info;
int err_quit;
int
__repmgr_open(env, rep_)
ENV *env;
void *rep_;
int
__repmgr_join(env, rep_)
ENV *env;
void *rep_;
int
__repmgr_env_refresh(env)
ENV *env;
int
__repmgr_share_netaddrs(env, rep_, start, limit)
ENV *env;
void *rep_;
u_int start, limit;
int
__repmgr_copy_in_added_sites(env)
ENV *env;
int
__repmgr_init_new_sites(env, from, limit)
ENV *env;
int from, limit;
int
__repmgr_failchk(env)
ENV *env;
int
__repmgr_master_is_known(env)
ENV *env;
int
__repmgr_stable_lsn(env, stable_lsn)
ENV *env;
DB_LSN *stable_lsn;
int
__repmgr_make_request_conn(env, addr, connp)
ENV *env;
repmgr_netaddr_t *addr;
REPMGR_CONNECTION **connp;
int
__repmgr_send_sync_msg(env, conn, type, buf, len)
ENV *env;
REPMGR_CONNECTION *conn;
u_int8_t *buf;
u_int32_t len, type;
int
__repmgr_read_own_msg(env, conn, typep, bufp, lenp)
ENV *env;
REPMGR_CONNECTION *conn;
u_int32_t *typep;
u_int8_t **bufp;
size_t *lenp;
int
__repmgr_prefmas_connected(env)
ENV *env;
int
__repmgr_restart_site_as_client(env, eid)
ENV *env;
int eid;
int
__repmgr_make_site_readonly_master(env, eid, gen, sync_lsnp)
ENV *env;
int eid;
u_int32_t *gen;
DB_LSN *sync_lsnp;
int
__repmgr_lsnhist_match(env, ip, eid, match)
ENV *env;
DB_THREAD_INFO *ip;
int eid;
int *match;
static int
__repmgr_find_commit(env, low_lsn, high_lsn, found_commit)
ENV *env;
DB_LSN *low_lsn;
DB_LSN *high_lsn;
int *found_commit;
static int
__repmgr_remote_lsnhist(env, eid, gen, lsnhist_match)
ENV *env;
int eid;
u_int32_t gen;
__repmgr_lsnhist_match_args *lsnhist_match;
int
__repmgr_prefmas_get_wait(env, tries, yield_usecs)
ENV *env;
u_int32_t *tries;
u_long *yield_usecs;
int
__repmgr_marshal_member_list(env, msg_version, bufp, lenp)
ENV *env;
u_int32_t msg_version;
u_int8_t **bufp;
size_t *lenp;
static int
read_gmdb(env, ip, bufp, lenp)
ENV *env;
DB_THREAD_INFO *ip;
u_int8_t **bufp;
size_t *lenp;
static int
convert_gmdb(env, ip, dbp, txn)
ENV *env;
DB_THREAD_INFO *ip;
DB *dbp;
DB_TXN *txn;
int
__repmgr_refresh_membership(env, buf, len, version)
ENV *env;
u_int8_t *buf;
size_t len;
u_int32_t version;
int
__repmgr_reload_gmdb(env)
ENV *env;
int
__repmgr_gmdb_version_cmp(env, gen, version)
ENV *env;
u_int32_t gen, version;
int
__repmgr_init_save(env, dbt)
ENV *env;
DBT *dbt;
int
__repmgr_init_restore(env, dbt)
ENV *env;
DBT *dbt;
int
__repmgr_defer_op(env, op)
ENV *env;
u_int32_t op;
void
__repmgr_fire_conn_err_event(env, conn, err)
ENV *env;
REPMGR_CONNECTION *conn;
int err;
void
__repmgr_print_conn_err(env, netaddr, err)
ENV *env;
repmgr_netaddr_t *netaddr;
int err;
int
__repmgr_become_client(env)
ENV *env;
REPMGR_SITE *
__repmgr_lookup_site(env, host, port)
ENV *env;
const char *host;
u_int port;
int
__repmgr_find_site(env, host, port, eidp)
ENV *env;
const char *host;
u_int port;
int *eidp;
static int
get_eid(env, host, port, eidp)
ENV *env;
const char *host;
u_int port;
int *eidp;
int
__repmgr_set_membership(env, host, port, status, flags)
ENV *env;
const char *host;
u_int port;
u_int32_t status;
u_int32_t flags;
int
__repmgr_bcast_parm_refresh(env)
ENV *env;
int
__repmgr_chg_prio(env, prev, cur)
ENV *env;
u_int32_t prev, cur;
int
__repmgr_bcast_own_msg(env, type, buf, len)
ENV *env;
u_int32_t type;
u_int8_t *buf;
size_t len;
int
__repmgr_bcast_member_list(env)
ENV *env;
int
__repmgr_forward_single_write(optype, dbp, key, data, opflags)
u_int32_t optype;
DB *dbp;
DBT *key;
DBT *data;
u_int32_t opflags;
void
__repmgr_msgdispatch(dbenv, ch, request, nseg, flags)
DB_ENV *dbenv;
DB_CHANNEL *ch;
DBT *request;
u_int32_t nseg;
u_int32_t flags;
int
__repmgr_set_write_forwarding(env, turn_on)
ENV *env;
int turn_on;
