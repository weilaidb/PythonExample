#define NFSDBG_FACILITY NFSDBG_CALLBACK
struct nfs_callback_data ;
static struct nfs_callback_data nfs_callback_info[NFS4_MAX_MINOR_VERSION + 1];
static DEFINE_MUTEX(nfs_callback_mutex);
static struct svc_program nfs4_callback_program;
unsigned int nfs_callback_set_tcpport;
unsigned short nfs_callback_tcpport;
unsigned short nfs_callback_tcpport6;
#define NFS_CALLBACK_MAXPORTNR (65535U)
static int param_set_portnr(const char *val, const struct kernel_param *kp)
static struct kernel_param_ops param_ops_portnr = ;
#define param_check_portnr(name, p) __param_check(name, p, unsigned int);
module_param_named(callback_tcpport, nfs_callback_set_tcpport, portnr, 0644);
static int
nfs4_callback_svc(void *vrqstp)
struct svc_rqst *
nfs4_callback_up(struct svc_serv *serv)
#if defined(CONFIG_NFS_V4_1)
static int
nfs41_callback_svc(void *vrqstp)
struct svc_rqst *
nfs41_callback_up(struct svc_serv *serv, struct rpc_xprt *xprt)
static inline int nfs_minorversion_callback_svc_setup(u32 minorversion,
struct svc_serv *serv, struct rpc_xprt *xprt,
struct svc_rqst **rqstpp, int (**callback_svc)(void *vrqstp))
static inline void nfs_callback_bc_serv(u32 minorversion, struct rpc_xprt *xprt,
struct nfs_callback_data *cb_info)
static inline int nfs_minorversion_callback_svc_setup(u32 minorversion,
struct svc_serv *serv, struct rpc_xprt *xprt,
struct svc_rqst **rqstpp, int (**callback_svc)(void *vrqstp))
static inline void nfs_callback_bc_serv(u32 minorversion, struct rpc_xprt *xprt,
struct nfs_callback_data *cb_info)
int nfs_callback_up(u32 minorversion, struct rpc_xprt *xprt)
void nfs_callback_down(int minorversion)
int
check_gss_callback_principal(struct nfs_client *clp, struct svc_rqst *rqstp)
static int nfs_callback_authenticate(struct svc_rqst *rqstp)
static struct svc_version *nfs4_callback_version[] = ;
static struct svc_stat nfs4_callback_stats;
static struct svc_program nfs4_callback_program = ;
