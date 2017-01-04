typedef int (*HEARTBEAT_ACTION) __P((ENV *));
static int accept_handshake __P((ENV *, REPMGR_CONNECTION *, char *, int *));
static int accept_v1_handshake __P((ENV *, REPMGR_CONNECTION *, char *));
static void check_min_log_file __P((ENV *));
static int dispatch_msgin __P((ENV *, REPMGR_CONNECTION *));
static int prepare_input __P((ENV *, REPMGR_CONNECTION *));
static int process_own_msg __P((ENV *, REPMGR_CONNECTION *));
static int process_parameters __P((ENV *,
REPMGR_CONNECTION *, char *, u_int, u_int32_t, int, u_int32_t));
static int read_version_response __P((ENV *, REPMGR_CONNECTION *));
static int record_permlsn __P((ENV *, REPMGR_CONNECTION *));
static int __repmgr_call_election __P((ENV *));
static int __repmgr_check_listener __P((ENV *));
static int __repmgr_check_master_listener __P((ENV *));
static int __repmgr_connector_main __P((ENV *, REPMGR_RUNNABLE *));
static void *__repmgr_connector_thread __P((void *));
static int __repmgr_next_timeout __P((ENV *,
db_timespec *, HEARTBEAT_ACTION *));
static int __repmgr_reset_last_rcvd __P((ENV *));
static int __repmgr_retry_connections __P((ENV *));
static int __repmgr_send_heartbeat __P((ENV *));
static int __repmgr_start_takeover __P((ENV *));
static void *__repmgr_takeover_thread __P((void *));
static int __repmgr_try_one __P((ENV *, int, int));
static int resolve_collision __P((ENV *, REPMGR_SITE *, REPMGR_CONNECTION *));
static int send_version_response __P((ENV *, REPMGR_CONNECTION *));
#define	ONLY_HANDSHAKE(env, conn) do  while (0)
void *
__repmgr_select_thread(argsp)
void *argsp;
int
__repmgr_bow_out(env)
ENV *env;
int
__repmgr_accept(env)
ENV *env;
int
__repmgr_compute_timeout(env, timeout)
ENV *env;
db_timespec *timeout;
static int
__repmgr_next_timeout(env, deadline, action)
ENV *env;
db_timespec *deadline;
HEARTBEAT_ACTION *action;
static int
__repmgr_send_heartbeat(env)
ENV *env;
REPMGR_SITE *
__repmgr_connected_master(env)
ENV *env;
static int
__repmgr_call_election(env)
ENV *env;
int
__repmgr_check_timeouts(env)
ENV *env;
static int
__repmgr_check_listener(env)
ENV *env;
static int
__repmgr_start_takeover(env)
ENV *env;
static void *
__repmgr_takeover_thread(argsp)
void *argsp;
static int
__repmgr_reset_last_rcvd(env)
ENV *env;
static int
__repmgr_check_master_listener(env)
ENV *env;
int
__repmgr_refresh_selector(env)
ENV *env;
static int
__repmgr_retry_connections(env)
ENV *env;
int
__repmgr_first_try_connections(env)
ENV *env;
static int
__repmgr_try_one(env, eid, refresh)
ENV *env;
int eid;
int refresh;
static void *
__repmgr_connector_thread(argsp)
void *argsp;
static int
__repmgr_connector_main(env, th)
ENV *env;
REPMGR_RUNNABLE *th;
int
__repmgr_send_v1_handshake(env, conn, buf, len)
ENV *env;
REPMGR_CONNECTION *conn;
void *buf;
size_t len;
int
__repmgr_read_from_site(env, conn)
ENV *env;
REPMGR_CONNECTION *conn;
int
__repmgr_read_conn(conn)
REPMGR_CONNECTION *conn;
static int
prepare_input(env, conn)
ENV *env;
REPMGR_CONNECTION *conn;
int
__repmgr_prepare_simple_input(env, conn, msg_hdr)
ENV *env;
REPMGR_CONNECTION *conn;
__repmgr_msg_hdr_args *msg_hdr;
static int
dispatch_msgin(env, conn)
ENV *env;
REPMGR_CONNECTION *conn;
static int
process_own_msg(env, conn)
ENV *env;
REPMGR_CONNECTION *conn;
static int
send_version_response(env, conn)
ENV *env;
REPMGR_CONNECTION *conn;
int
__repmgr_send_handshake(env, conn, opt, optlen, flags)
ENV *env;
REPMGR_CONNECTION *conn;
void *opt;
size_t optlen;
u_int32_t flags;
static int
read_version_response(env, conn)
ENV *env;
REPMGR_CONNECTION *conn;
int
__repmgr_find_version_info(env, conn, vi)
ENV *env;
REPMGR_CONNECTION *conn;
DBT *vi;
static int
accept_handshake(env, conn, hostname, subordinate)
ENV *env;
REPMGR_CONNECTION *conn;
char *hostname;
int *subordinate;
static int
accept_v1_handshake(env, conn, hostname)
ENV *env;
REPMGR_CONNECTION *conn;
char *hostname;
static int
process_parameters(env, conn, host, port, ack, electable, flags)
ENV *env;
REPMGR_CONNECTION *conn;
char *host;
u_int port;
int electable;
u_int32_t ack, flags;
static int
resolve_collision(env, site, conn)
ENV *env;
REPMGR_SITE *site;
REPMGR_CONNECTION *conn;
static int
record_permlsn(env, conn)
ENV *env;
REPMGR_CONNECTION *conn;
static void
check_min_log_file(env)
ENV *env;
int
__repmgr_write_some(env, conn)
ENV *env;
REPMGR_CONNECTION *conn;
