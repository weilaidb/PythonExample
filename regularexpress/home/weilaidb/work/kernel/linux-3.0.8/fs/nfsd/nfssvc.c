#define NFSDDBG_FACILITY	NFSDDBG_SVC
extern struct svc_program	nfsd_program;
static int			nfsd(void *vrqstp);
struct timeval			nfssvc_boot;
DEFINE_MUTEX(nfsd_mutex);
struct svc_serv 		*nfsd_serv;
spinlock_t	nfsd_drc_lock;
unsigned int	nfsd_drc_max_mem;
unsigned int	nfsd_drc_mem_used;
#if defined(CONFIG_NFSD_V2_ACL) || defined(CONFIG_NFSD_V3_ACL)
static struct svc_stat	nfsd_acl_svcstats;
static struct svc_version *	nfsd_acl_version[] = ;
#define NFSD_ACL_MINVERS            2
#define NFSD_ACL_NRVERS		ARRAY_SIZE(nfsd_acl_version)
static struct svc_version *nfsd_acl_versions[NFSD_ACL_NRVERS];
static struct svc_program	nfsd_acl_program = ;
static struct svc_stat	nfsd_acl_svcstats = ;
static struct svc_version *	nfsd_version[] = ;
#define NFSD_MINVERS    	2
#define NFSD_NRVERS		ARRAY_SIZE(nfsd_version)
static struct svc_version *nfsd_versions[NFSD_NRVERS];
struct svc_program		nfsd_program = ;
u32 nfsd_supported_minorversion;
int nfsd_vers(int vers, enum vers_op change)
int nfsd_minorversion(u32 minorversion, enum vers_op change)
#define	NFSD_MAXSERVS		8192
int nfsd_nrthreads(void)
static int nfsd_init_socks(int port)
static bool nfsd_up = false;
static int nfsd_startup(unsigned short port, int nrservs)
static void nfsd_shutdown(void)
static void nfsd_last_thread(struct svc_serv *serv)
void nfsd_reset_versions(void)
static void set_max_drc(void)
int nfsd_create_serv(void)
int nfsd_nrpools(void)
int nfsd_get_nrthreads(int n, int *nthreads)
int nfsd_set_nrthreads(int n, int *nthreads)
int
nfsd_svc(unsigned short port, int nrservs)
static int
nfsd(void *vrqstp)
static __be32 map_new_errors(u32 vers, __be32 nfserr)
int
nfsd_dispatch(struct svc_rqst *rqstp, __be32 *statp)
int nfsd_pool_stats_open(struct inode *inode, struct file *file)
int nfsd_pool_stats_release(struct inode *inode, struct file *file)
