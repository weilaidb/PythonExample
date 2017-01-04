struct sending_msg ;
struct repmgr_permanence ;
static u_int fake_port __P((ENV *, u_int));
static int final_cleanup __P((ENV *, REPMGR_CONNECTION *, void *));
static int flatten __P((ENV *, struct sending_msg *));
static int got_acks __P((ENV *, void *));
static int __repmgr_finish_connect
__P((ENV *, socket_t s, REPMGR_CONNECTION **));
static void __repmgr_print_addrlist __P((ENV *, const char *, ADDRINFO *));
static int __repmgr_propose_version __P((ENV *, REPMGR_CONNECTION *));
static int __repmgr_start_connect __P((ENV*, socket_t *, ADDRINFO *, int *));
static void setup_sending_msg __P((ENV *,
struct sending_msg *, u_int8_t *, u_int, const DBT *, const DBT *));
static int __repmgr_send_internal
__P((ENV *, REPMGR_CONNECTION *, struct sending_msg *, db_timeout_t));
static int enqueue_msg
__P((ENV *, REPMGR_CONNECTION *, struct sending_msg *, size_t));
static REPMGR_SITE *connected_site __P((ENV *, int));
static REPMGR_SITE *__repmgr_find_available_peer __P((ENV *));
static int send_connection __P((ENV *, u_int,
REPMGR_CONNECTION *, struct sending_msg *, int *));
#define	__os_inet_ntop InetNtop
#define	__os_inet_ntop inet_ntop
int
__repmgr_connect(env, netaddr, connp, errp)
ENV *env;
repmgr_netaddr_t *netaddr;
REPMGR_CONNECTION **connp;
int *errp;
static int
__repmgr_start_connect(env, socket_result, ai, err)
ENV *env;
socket_t *socket_result;
ADDRINFO *ai;
int *err;
static int
__repmgr_finish_connect(env, s, connp)
ENV *env;
socket_t s;
REPMGR_CONNECTION **connp;
static int
__repmgr_propose_version(env, conn)
ENV *env;
REPMGR_CONNECTION *conn;
int
__repmgr_send(dbenv, control, rec, lsnp, eid, flags)
DB_ENV *dbenv;
const DBT *control, *rec;
const DB_LSN *lsnp;
int eid;
u_int32_t flags;
static REPMGR_SITE *
connected_site(env, eid)
ENV *env;
int eid;
int
__repmgr_sync_siteaddr(env)
ENV *env;
int
__repmgr_send_broadcast(env, type, control, rec, nsitesp, npeersp, missingp)
ENV *env;
u_int type;
const DBT *control, *rec;
u_int *nsitesp, *npeersp;
int *missingp;
static int
send_connection(env, type, conn, msg, sent)
ENV *env;
u_int type;
REPMGR_CONNECTION *conn;
struct sending_msg *msg;
int *sent;
int
__repmgr_send_one(env, conn, msg_type, control, rec, maxblock)
ENV *env;
REPMGR_CONNECTION *conn;
u_int msg_type;
const DBT *control, *rec;
db_timeout_t maxblock;
int
__repmgr_send_many(env, conn, iovecs, maxblock)
ENV *env;
REPMGR_CONNECTION *conn;
REPMGR_IOVECS *iovecs;
db_timeout_t maxblock;
int
__repmgr_send_own_msg(env, conn, type, buf, len)
ENV *env;
REPMGR_CONNECTION *conn;
u_int8_t *buf;
u_int32_t len, type;
static int
__repmgr_send_internal(env, conn, msg, maxblock)
ENV *env;
REPMGR_CONNECTION *conn;
struct sending_msg *msg;
db_timeout_t maxblock;
int
__repmgr_write_iovecs(env, conn, iovecs, writtenp)
ENV *env;
REPMGR_CONNECTION *conn;
REPMGR_IOVECS *iovecs;
size_t *writtenp;
static int
got_acks(env, context)
ENV *env;
void *context;
int
__repmgr_bust_connection(env, conn)
ENV *env;
REPMGR_CONNECTION *conn;
int
__repmgr_disable_connection(env, conn)
ENV *env;
REPMGR_CONNECTION *conn;
int
__repmgr_cleanup_defunct(env, conn)
ENV *env;
REPMGR_CONNECTION *conn;
int
__repmgr_close_connection(env, conn)
ENV *env;
REPMGR_CONNECTION *conn;
int
__repmgr_decr_conn_ref(env, conn)
ENV *env;
REPMGR_CONNECTION *conn;
int
__repmgr_destroy_conn(env, conn)
ENV *env;
REPMGR_CONNECTION *conn;
static int
enqueue_msg(env, conn, msg, offset)
ENV *env;
REPMGR_CONNECTION *conn;
struct sending_msg *msg;
size_t offset;
static void
setup_sending_msg(env, msg, hdr_buf, type, control, rec)
ENV *env;
struct sending_msg *msg;
u_int8_t *hdr_buf;
u_int type;
const DBT *control, *rec;
static int
flatten(env, msg)
ENV *env;
struct sending_msg *msg;
static REPMGR_SITE *
__repmgr_find_available_peer(env)
ENV *env;
int
__repmgr_pack_netaddr(env, host, port, addr)
ENV *env;
const char *host;
u_int port;
repmgr_netaddr_t *addr;
int
__repmgr_getaddr(env, host, port, flags, result)
ENV *env;
const char *host;
u_int port;
int flags;
ADDRINFO **result;
int
__repmgr_listen(env)
ENV *env;
int
__repmgr_net_close(env)
ENV *env;
static int
final_cleanup(env, conn, unused)
ENV *env;
REPMGR_CONNECTION *conn;
void *unused;
void
__repmgr_net_destroy(env, db_rep)
ENV *env;
DB_REP *db_rep;
static u_int
fake_port(env, port)
ENV *env;
u_int port;
void
__repmgr_print_addr(env, addr, idstring, single, idx)
ENV *env;
struct sockaddr *addr;
const char *idstring;
int single;
int idx;
static void
__repmgr_print_addrlist(env, idstring, ai0)
ENV *env;
const char *idstring;
ADDRINFO *ai0;
