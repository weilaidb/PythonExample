# define NFSDBG_FACILITY	NFSDBG_MOUNT
#define MNTPATHLEN		(1024)
#define encode_dirpath_sz	(1 + XDR_QUADLEN(MNTPATHLEN))
#define MNT_status_sz		(1)
#define MNT_fhs_status_sz	(1)
#define MNT_fhandle_sz		XDR_QUADLEN(NFS2_FHSIZE)
#define MNT_fhandle3_sz		(1 + XDR_QUADLEN(NFS3_FHSIZE))
#define MNT_authflav3_sz	(1 + NFS_MAX_SECFLAVORS)
#define MNT_enc_dirpath_sz	encode_dirpath_sz
#define MNT_dec_mountres_sz	(MNT_status_sz + MNT_fhandle_sz)
#define MNT_dec_mountres3_sz	(MNT_status_sz + MNT_fhandle_sz + \
MNT_authflav3_sz)
enum ;
enum ;
static struct rpc_program	mnt_program;
enum mountstat ;
static struct  mnt_errtbl[] = ;
enum mountstat3 ;
static struct  mnt3_errtbl[] = ;
struct mountres ;
struct mnt_fhstatus ;
int nfs_mount(struct nfs_mount_request *info)
void nfs_umount(const struct nfs_mount_request *info)
static void encode_mntdirpath(struct xdr_stream *xdr, const char *pathname)
static void mnt_xdr_enc_dirpath(struct rpc_rqst *req, struct xdr_stream *xdr,
const char *dirpath)
static int decode_status(struct xdr_stream *xdr, struct mountres *res)
static int decode_fhandle(struct xdr_stream *xdr, struct mountres *res)
static int mnt_xdr_dec_mountres(struct rpc_rqst *req,
struct xdr_stream *xdr,
struct mountres *res)
static int decode_fhs_status(struct xdr_stream *xdr, struct mountres *res)
static int decode_fhandle3(struct xdr_stream *xdr, struct mountres *res)
static int decode_auth_flavors(struct xdr_stream *xdr, struct mountres *res)
static int mnt_xdr_dec_mountres3(struct rpc_rqst *req,
struct xdr_stream *xdr,
struct mountres *res)
static struct rpc_procinfo mnt_procedures[] = ;
static struct rpc_procinfo mnt3_procedures[] = ;
static struct rpc_version mnt_version1 = ;
static struct rpc_version mnt_version3 = ;
static struct rpc_version *mnt_version[] = ;
static struct rpc_stat mnt_stats;
static struct rpc_program mnt_program = ;
