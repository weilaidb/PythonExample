# define RPCDBG_FACILITY	RPCDBG_BIND
#define RPCBIND_SOCK_PATHNAME	"/var/run/rpcbind.sock"
#define RPCBIND_PROGRAM		(100000u)
#define RPCBIND_PORT		(111u)
#define RPCBVERS_2		(2u)
#define RPCBVERS_3		(3u)
#define RPCBVERS_4		(4u)
enum ;
#define RPCB_OWNER_STRING	"0"
#define RPCB_MAXOWNERLEN	sizeof(RPCB_OWNER_STRING)
#define RPCB_program_sz		(1)
#define RPCB_version_sz		(1)
#define RPCB_protocol_sz	(1)
#define RPCB_port_sz		(1)
#define RPCB_boolean_sz		(1)
#define RPCB_netid_sz		(1 + XDR_QUADLEN(RPCBIND_MAXNETIDLEN))
#define RPCB_addr_sz		(1 + XDR_QUADLEN(RPCBIND_MAXUADDRLEN))
#define RPCB_ownerstring_sz	(1 + XDR_QUADLEN(RPCB_MAXOWNERLEN))
#define RPCB_mappingargs_sz	(RPCB_program_sz + RPCB_version_sz + \
RPCB_protocol_sz + RPCB_port_sz)
#define RPCB_getaddrargs_sz	(RPCB_program_sz + RPCB_version_sz + \
RPCB_netid_sz + RPCB_addr_sz + \
RPCB_ownerstring_sz)
#define RPCB_getportres_sz	RPCB_port_sz
#define RPCB_setres_sz		RPCB_boolean_sz
#define RPCB_getaddrres_sz	RPCB_addr_sz
static void			rpcb_getport_done(struct rpc_task *, void *);
static void			rpcb_map_release(void *data);
static struct rpc_program	rpcb_program;
static struct rpc_clnt *	rpcb_local_clnt;
static struct rpc_clnt *	rpcb_local_clnt4;
struct rpcbind_args ;
static struct rpc_procinfo rpcb_procedures2[];
static struct rpc_procinfo rpcb_procedures3[];
static struct rpc_procinfo rpcb_procedures4[];
struct rpcb_info ;
static struct rpcb_info rpcb_next_version[];
static struct rpcb_info rpcb_next_version6[];
static const struct rpc_call_ops rpcb_getport_ops = ;
static void rpcb_wake_rpcbind_waiters(struct rpc_xprt *xprt, int status)
static void rpcb_map_release(void *data)
static int rpcb_create_local_unix(void)
static int rpcb_create_local_net(void)
static int rpcb_create_local(void)
static struct rpc_clnt *rpcb_create(char *hostname, struct sockaddr *srvaddr,
size_t salen, int proto, u32 version)
static int rpcb_register_call(struct rpc_clnt *clnt, struct rpc_message *msg)
int rpcb_register(u32 prog, u32 vers, int prot, unsigned short port)
static int rpcb_register_inet4(const struct sockaddr *sap,
struct rpc_message *msg)
static int rpcb_register_inet6(const struct sockaddr *sap,
struct rpc_message *msg)
static int rpcb_unregister_all_protofamilies(struct rpc_message *msg)
int rpcb_v4_register(const u32 program, const u32 version,
const struct sockaddr *address, const char *netid)
static struct rpc_task *rpcb_call_async(struct rpc_clnt *rpcb_clnt, struct rpcbind_args *map, struct rpc_procinfo *proc)
static struct rpc_clnt *rpcb_find_transport_owner(struct rpc_clnt *clnt)
void rpcb_getport_async(struct rpc_task *task)
EXPORT_SYMBOL_GPL(rpcb_getport_async);
static void rpcb_getport_done(struct rpc_task *child, void *data)
static void rpcb_enc_mapping(struct rpc_rqst *req, struct xdr_stream *xdr,
const struct rpcbind_args *rpcb)
static int rpcb_dec_getport(struct rpc_rqst *req, struct xdr_stream *xdr,
struct rpcbind_args *rpcb)
static int rpcb_dec_set(struct rpc_rqst *req, struct xdr_stream *xdr,
unsigned int *boolp)
static void encode_rpcb_string(struct xdr_stream *xdr, const char *string,
const u32 maxstrlen)
static void rpcb_enc_getaddr(struct rpc_rqst *req, struct xdr_stream *xdr,
const struct rpcbind_args *rpcb)
static int rpcb_dec_getaddr(struct rpc_rqst *req, struct xdr_stream *xdr,
struct rpcbind_args *rpcb)
static struct rpc_procinfo rpcb_procedures2[] = ;
static struct rpc_procinfo rpcb_procedures3[] = ;
static struct rpc_procinfo rpcb_procedures4[] = ;
static struct rpcb_info rpcb_next_version[] = ;
static struct rpcb_info rpcb_next_version6[] = ;
static struct rpc_version rpcb_version2 = ;
static struct rpc_version rpcb_version3 = ;
static struct rpc_version rpcb_version4 = ;
static struct rpc_version *rpcb_version[] = ;
static struct rpc_stat rpcb_stats;
static struct rpc_program rpcb_program = ;
void cleanup_rpcb_clnt(void)
