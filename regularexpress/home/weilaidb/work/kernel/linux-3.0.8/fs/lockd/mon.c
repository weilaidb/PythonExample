#define NLMDBG_FACILITY		NLMDBG_MONITOR
#define NSM_PROGRAM		100024
#define NSM_VERSION		1
enum ;
struct nsm_args ;
struct nsm_res ;
static struct rpc_program	nsm_program;
static				LIST_HEAD(nsm_handles);
static				DEFINE_SPINLOCK(nsm_lock);
u32	__read_mostly		nsm_local_state;
int	__read_mostly		nsm_use_hostnames;
static inline struct sockaddr *nsm_addr(const struct nsm_handle *nsm)
static struct rpc_clnt *nsm_create(void)
static int nsm_mon_unmon(struct nsm_handle *nsm, u32 proc, struct nsm_res *res)
int nsm_monitor(const struct nlm_host *host)
void nsm_unmonitor(const struct nlm_host *host)
static struct nsm_handle *nsm_lookup_hostname(const char *hostname,
const size_t len)
static struct nsm_handle *nsm_lookup_addr(const struct sockaddr *sap)
static struct nsm_handle *nsm_lookup_priv(const struct nsm_private *priv)
static void nsm_init_private(struct nsm_handle *nsm)
static struct nsm_handle *nsm_create_handle(const struct sockaddr *sap,
const size_t salen,
const char *hostname,
const size_t hostname_len)
struct nsm_handle *nsm_get_handle(const struct sockaddr *sap,
const size_t salen, const char *hostname,
const size_t hostname_len)
struct nsm_handle *nsm_reboot_lookup(const struct nlm_reboot *info)
void nsm_release(struct nsm_handle *nsm)
static void encode_nsm_string(struct xdr_stream *xdr, const char *string)
static void encode_mon_name(struct xdr_stream *xdr, const struct nsm_args *argp)
static void encode_my_id(struct xdr_stream *xdr, const struct nsm_args *argp)
static void encode_mon_id(struct xdr_stream *xdr, const struct nsm_args *argp)
static void encode_priv(struct xdr_stream *xdr, const struct nsm_args *argp)
static void nsm_xdr_enc_mon(struct rpc_rqst *req, struct xdr_stream *xdr,
const struct nsm_args *argp)
static void nsm_xdr_enc_unmon(struct rpc_rqst *req, struct xdr_stream *xdr,
const struct nsm_args *argp)
static int nsm_xdr_dec_stat_res(struct rpc_rqst *rqstp,
struct xdr_stream *xdr,
struct nsm_res *resp)
static int nsm_xdr_dec_stat(struct rpc_rqst *rqstp,
struct xdr_stream *xdr,
struct nsm_res *resp)
#define SM_my_name_sz	(1+XDR_QUADLEN(SM_MAXSTRLEN))
#define SM_my_id_sz	(SM_my_name_sz+3)
#define SM_mon_name_sz	(1+XDR_QUADLEN(SM_MAXSTRLEN))
#define SM_mon_id_sz	(SM_mon_name_sz+SM_my_id_sz)
#define SM_priv_sz	(XDR_QUADLEN(SM_PRIV_SIZE))
#define SM_mon_sz	(SM_mon_id_sz+SM_priv_sz)
#define SM_monres_sz	2
#define SM_unmonres_sz	1
static struct rpc_procinfo	nsm_procedures[] = ;
static struct rpc_version	nsm_version1 = ;
static struct rpc_version *	nsm_version[] = ;
static struct rpc_stat		nsm_stats;
static struct rpc_program	nsm_program = ;
