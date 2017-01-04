struct response_wait ;
static int addr_chk __P((const ENV *, const char *, u_int));
static void adjust_bulk_response __P((ENV *, DBT *));
static int bad_callback_method __P((DB_CHANNEL *, const char *));
static void copy_body __P((u_int8_t *, REPMGR_IOVECS *));
static int get_shared_netaddr __P((ENV *, int, repmgr_netaddr_t *));
static int establish_connection __P((ENV *, int, REPMGR_CONNECTION **));
static int get_channel_connection __P((CHANNEL *, REPMGR_CONNECTION **));
static int init_dbsite __P((ENV *, int, const char *, u_int, DB_SITE **));
static int join_group_at_site __P((ENV *, repmgr_netaddr_t *));
static int kick_blockers __P((ENV *, REPMGR_CONNECTION *, void *));
static int set_local_site __P((DB_SITE *, u_int32_t));
static int refresh_site __P((DB_SITE *));
static int __repmgr_await_threads __P((ENV *));
static int __repmgr_build_data_out __P((ENV *,
DBT *, u_int32_t, __repmgr_msg_metadata_args *, REPMGR_IOVECS **iovecsp));
static int __repmgr_build_msg_out __P((ENV *,
DBT *, u_int32_t, __repmgr_msg_metadata_args *, REPMGR_IOVECS **iovecsp));
static int __repmgr_demote_site(ENV *, int);
static int repmgr_only __P((ENV *, const char *));
static int __repmgr_restart __P((ENV *, int, u_int32_t));
static int __repmgr_remove_and_close_site __P((DB_SITE *));
static int __repmgr_remove_site __P((DB_SITE *));
static int __repmgr_remove_site_pp __P((DB_SITE *));
static int __repmgr_start_msg_threads __P((ENV *, u_int));
static int request_self __P((ENV *, DBT *, u_int32_t, DBT *, u_int32_t));
static int response_complete __P((ENV *, void *));
static int send_msg_conn __P((ENV *, REPMGR_CONNECTION *, DBT *, u_int32_t));
static int send_msg_self __P((ENV *, REPMGR_IOVECS *, u_int32_t));
static int site_by_addr __P((ENV *, const char *, u_int, DB_SITE **));
int
__repmgr_start_pp(dbenv, nthreads, flags)
DB_ENV *dbenv;
int nthreads;
u_int32_t flags;
int
__repmgr_start_int(env, nthreads, flags)
ENV *env;
int nthreads;
u_int32_t flags;
int
__repmgr_valid_config(env, flags)
ENV *env;
u_int32_t flags;
int __repmgr_prefmas_auto_config (dbenv, config_flags)
DB_ENV *dbenv;
u_int32_t *config_flags;
static int
__repmgr_start_msg_threads(env, n)
ENV *env;
u_int n;
static int
__repmgr_restart(env, nthreads, flags)
ENV *env;
int nthreads;
u_int32_t flags;
int
__repmgr_autostart(env)
ENV *env;
int
__repmgr_start_selector(env)
ENV *env;
int
__repmgr_close(env)
ENV *env;
int
__repmgr_stop(env)
ENV *env;
int
__repmgr_set_ack_policy(dbenv, policy)
DB_ENV *dbenv;
int policy;
int
__repmgr_get_ack_policy(dbenv, policy)
DB_ENV *dbenv;
int *policy;
int
__repmgr_set_incoming_queue_max(dbenv, gbytes, bytes)
DB_ENV *dbenv;
u_int32_t gbytes, bytes;
int
__repmgr_get_incoming_queue_max(dbenv, gbytesp, bytesp)
DB_ENV *dbenv;
u_int32_t *gbytesp, *bytesp;
void __repmgr_set_incoming_queue_redzone(rep_, gbytes, bytes)
void *rep_;
u_int32_t gbytes, bytes;
int __repmgr_get_incoming_queue_redzone(dbenv, gbytesp, bytesp)
DB_ENV *dbenv;
u_int32_t *gbytesp, *bytesp;
int __repmgr_get_incoming_queue_fullevent(dbenv, onoffp)
DB_ENV *dbenv;
int *onoffp;
int
__repmgr_env_create(env, db_rep)
ENV *env;
DB_REP *db_rep;
void
__repmgr_env_destroy(env, db_rep)
ENV *env;
DB_REP *db_rep;
int
__repmgr_stop_threads(env)
ENV *env;
static int
kick_blockers(env, conn, unused)
ENV *env;
REPMGR_CONNECTION *conn;
void *unused;
static int
__repmgr_await_threads(env)
ENV *env;
int
__repmgr_local_site(dbenv, sitep)
DB_ENV *dbenv;
DB_SITE **sitep;
static int
addr_chk(env, host, port)
const ENV *env;
const char *host;
u_int port;
int
__repmgr_channel(dbenv, eid, dbchannelp, flags)
DB_ENV *dbenv;
int eid;
DB_CHANNEL **dbchannelp;
u_int32_t flags;
static int
get_shared_netaddr(env, eid, netaddr)
ENV *env;
int eid;
repmgr_netaddr_t *netaddr;
static int
establish_connection(env, eid, connp)
ENV *env;
int eid;
REPMGR_CONNECTION **connp;
int
__repmgr_set_msg_dispatch(dbenv, dispatch, flags)
DB_ENV *dbenv;
void (*dispatch) __P((DB_ENV *,
DB_CHANNEL *, DBT *, u_int32_t, u_int32_t));
u_int32_t flags;
int
__repmgr_send_msg(db_channel, msg, nmsg, flags)
DB_CHANNEL *db_channel;
DBT *msg;
u_int32_t nmsg;
u_int32_t flags;
static int
send_msg_conn(env, conn, msg, nmsg)
ENV *env;
REPMGR_CONNECTION *conn;
DBT *msg;
u_int32_t nmsg;
static int
send_msg_self(env, iovecs, nmsg)
ENV *env;
REPMGR_IOVECS *iovecs;
u_int32_t nmsg;
static void
copy_body(membase, iovecs)
u_int8_t *membase;
REPMGR_IOVECS *iovecs;
static int
get_channel_connection(channel, connp)
CHANNEL *channel;
REPMGR_CONNECTION **connp;
int
__repmgr_send_request(db_channel, request, nrequest, response, timeout, flags)
DB_CHANNEL *db_channel;
DBT *request;
u_int32_t nrequest;
DBT *response;
db_timeout_t timeout;
u_int32_t flags;
static int
response_complete(env, ctx)
ENV *env;
void *ctx;
static int
request_self(env, request, nrequest, response, flags)
ENV *env;
DBT *request;
u_int32_t nrequest;
DBT *response;
u_int32_t flags;
static void
adjust_bulk_response(env, response)
ENV *env;
DBT *response;
int
__repmgr_send_response(db_channel, msg, nmsg, flags)
DB_CHANNEL *db_channel;
DBT *msg;
u_int32_t nmsg;
u_int32_t flags;
static int
__repmgr_build_msg_out(env, msg, nmsg, meta, iovecsp)
ENV *env;
DBT *msg;
u_int32_t nmsg;
__repmgr_msg_metadata_args *meta;
REPMGR_IOVECS **iovecsp;
static int
__repmgr_build_data_out(env, msg, nmsg, meta, iovecsp)
ENV *env;
DBT *msg;
u_int32_t nmsg;
__repmgr_msg_metadata_args *meta;
REPMGR_IOVECS **iovecsp;
int
__repmgr_channel_close(dbchan, flags)
DB_CHANNEL *dbchan;
u_int32_t flags;
int
__repmgr_channel_timeout(chan, timeout)
DB_CHANNEL *chan;
db_timeout_t timeout;
int
__repmgr_send_request_inval(dbchan, request, nrequest, response, timeout, flags)
DB_CHANNEL *dbchan;
DBT *request;
u_int32_t nrequest;
DBT *response;
db_timeout_t timeout;
u_int32_t flags;
int
__repmgr_channel_close_inval(dbchan, flags)
DB_CHANNEL *dbchan;
u_int32_t flags;
int
__repmgr_channel_timeout_inval(dbchan, timeout)
DB_CHANNEL *dbchan;
db_timeout_t timeout;
static int
bad_callback_method(chan, method)
DB_CHANNEL *chan;
const char *method;
static int
repmgr_only(env, method)
ENV *env;
const char *method;
int
__repmgr_join_group(env)
ENV *env;
static int
join_group_at_site(env, addrp)
ENV *env;
repmgr_netaddr_t *addrp;
int
__repmgr_site(dbenv, host, port, sitep, flags)
DB_ENV *dbenv;
const char *host;
u_int port;
DB_SITE **sitep;
u_int32_t flags;
static int
site_by_addr(env, host, port, sitep)
ENV *env;
const char *host;
u_int port;
DB_SITE **sitep;
int
__repmgr_site_by_eid(dbenv, eid, sitep)
DB_ENV *dbenv;
int eid;
DB_SITE **sitep;
static int
init_dbsite(env, eid, host, port, sitep)
ENV *env;
int eid;
const char *host;
u_int port;
DB_SITE **sitep;
int
__repmgr_get_site_address(dbsite, hostp, port)
DB_SITE *dbsite;
const char **hostp;
u_int *port;
int
__repmgr_get_eid(dbsite, eidp)
DB_SITE *dbsite;
int *eidp;
int
__repmgr_get_config(dbsite, which, valuep)
DB_SITE *dbsite;
u_int32_t which;
u_int32_t *valuep;
int
__repmgr_site_config_pp(dbsite, which, value)
DB_SITE *dbsite;
u_int32_t which;
u_int32_t value;
int
__repmgr_site_config_int(dbsite, which, value)
DB_SITE *dbsite;
u_int32_t which;
u_int32_t value;
static int
set_local_site(dbsite, value)
DB_SITE *dbsite;
u_int32_t value;
static int
refresh_site(dbsite)
DB_SITE *dbsite;
static int
__repmgr_remove_and_close_site(dbsite)
DB_SITE *dbsite;
static int
__repmgr_remove_site_pp(dbsite)
DB_SITE *dbsite;
static int
__repmgr_remove_site(dbsite)
DB_SITE *dbsite;
int
__repmgr_site_close(dbsite)
DB_SITE *dbsite;
#define	REPMGR_DEMOTION_MASTER_RETRIES	10
#define	REPMGR_DEMOTION_RETRY_USECS	500000
static int
__repmgr_demote_site(env, eid)
ENV *env;
int eid;
int
__repmgr_set_socket(dbenv, f_approval)
DB_ENV *dbenv;
int (*f_approval) __P((DB_ENV *, DB_REPMGR_SOCKET, int *, u_int32_t));
