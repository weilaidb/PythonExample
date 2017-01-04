#define NFSDBG_FACILITY		NFSDBG_XDR
#define errno_NFSERR_IO		EIO
#define NFS_fhandle_sz		(8)
#define NFS_sattr_sz		(8)
#define NFS_filename_sz		(1+(NFS2_MAXNAMLEN>>2))
#define NFS_path_sz		(1+(NFS2_MAXPATHLEN>>2))
#define NFS_fattr_sz		(17)
#define NFS_info_sz		(5)
#define NFS_entry_sz		(NFS_filename_sz+3)
#define NFS_diropargs_sz	(NFS_fhandle_sz+NFS_filename_sz)
#define NFS_removeargs_sz	(NFS_fhandle_sz+NFS_filename_sz)
#define NFS_sattrargs_sz	(NFS_fhandle_sz+NFS_sattr_sz)
#define NFS_readlinkargs_sz	(NFS_fhandle_sz)
#define NFS_readargs_sz		(NFS_fhandle_sz+3)
#define NFS_writeargs_sz	(NFS_fhandle_sz+4)
#define NFS_createargs_sz	(NFS_diropargs_sz+NFS_sattr_sz)
#define NFS_renameargs_sz	(NFS_diropargs_sz+NFS_diropargs_sz)
#define NFS_linkargs_sz		(NFS_fhandle_sz+NFS_diropargs_sz)
#define NFS_symlinkargs_sz	(NFS_diropargs_sz+1+NFS_sattr_sz)
#define NFS_readdirargs_sz	(NFS_fhandle_sz+2)
#define NFS_attrstat_sz		(1+NFS_fattr_sz)
#define NFS_diropres_sz		(1+NFS_fhandle_sz+NFS_fattr_sz)
#define NFS_readlinkres_sz	(2)
#define NFS_readres_sz		(1+NFS_fattr_sz+1)
#define NFS_writeres_sz         (NFS_attrstat_sz)
#define NFS_stat_sz		(1)
#define NFS_readdirres_sz	(1)
#define NFS_statfsres_sz	(1+NFS_info_sz)
static void prepare_reply_buffer(struct rpc_rqst *req, struct page **pages,
unsigned int base, unsigned int len,
unsigned int bufsize)
static void print_overflow_msg(const char *func, const struct xdr_stream *xdr)
static int decode_nfsdata(struct xdr_stream *xdr, struct nfs_readres *result)
static int decode_stat(struct xdr_stream *xdr, enum nfs_stat *status)
static __be32 *xdr_decode_ftype(__be32 *p, u32 *type)
static void encode_fhandle(struct xdr_stream *xdr, const struct nfs_fh *fh)
static int decode_fhandle(struct xdr_stream *xdr, struct nfs_fh *fh)
static __be32 *xdr_encode_time(__be32 *p, const struct timespec *timep)
static __be32 *xdr_encode_current_server_time(__be32 *p,
const struct timespec *timep)
static __be32 *xdr_decode_time(__be32 *p, struct timespec *timep)
static int decode_fattr(struct xdr_stream *xdr, struct nfs_fattr *fattr)
#define NFS2_SATTR_NOT_SET	(0xffffffff)
static __be32 *xdr_time_not_set(__be32 *p)
static void encode_sattr(struct xdr_stream *xdr, const struct iattr *attr)
static void encode_filename(struct xdr_stream *xdr,
const char *name, u32 length)
static int decode_filename_inline(struct xdr_stream *xdr,
const char **name, u32 *length)
static void encode_path(struct xdr_stream *xdr, struct page **pages, u32 length)
static int decode_path(struct xdr_stream *xdr)
static int decode_attrstat(struct xdr_stream *xdr, struct nfs_fattr *result)
static void encode_diropargs(struct xdr_stream *xdr, const struct nfs_fh *fh,
const char *name, u32 length)
static int decode_diropok(struct xdr_stream *xdr, struct nfs_diropok *result)
static int decode_diropres(struct xdr_stream *xdr, struct nfs_diropok *result)
static void nfs2_xdr_enc_fhandle(struct rpc_rqst *req,
struct xdr_stream *xdr,
const struct nfs_fh *fh)
static void nfs2_xdr_enc_sattrargs(struct rpc_rqst *req,
struct xdr_stream *xdr,
const struct nfs_sattrargs *args)
static void nfs2_xdr_enc_diropargs(struct rpc_rqst *req,
struct xdr_stream *xdr,
const struct nfs_diropargs *args)
static void nfs2_xdr_enc_readlinkargs(struct rpc_rqst *req,
struct xdr_stream *xdr,
const struct nfs_readlinkargs *args)
static void encode_readargs(struct xdr_stream *xdr,
const struct nfs_readargs *args)
static void nfs2_xdr_enc_readargs(struct rpc_rqst *req,
struct xdr_stream *xdr,
const struct nfs_readargs *args)
static void encode_writeargs(struct xdr_stream *xdr,
const struct nfs_writeargs *args)
static void nfs2_xdr_enc_writeargs(struct rpc_rqst *req,
struct xdr_stream *xdr,
const struct nfs_writeargs *args)
static void nfs2_xdr_enc_createargs(struct rpc_rqst *req,
struct xdr_stream *xdr,
const struct nfs_createargs *args)
static void nfs2_xdr_enc_removeargs(struct rpc_rqst *req,
struct xdr_stream *xdr,
const struct nfs_removeargs *args)
static void nfs2_xdr_enc_renameargs(struct rpc_rqst *req,
struct xdr_stream *xdr,
const struct nfs_renameargs *args)
static void nfs2_xdr_enc_linkargs(struct rpc_rqst *req,
struct xdr_stream *xdr,
const struct nfs_linkargs *args)
static void nfs2_xdr_enc_symlinkargs(struct rpc_rqst *req,
struct xdr_stream *xdr,
const struct nfs_symlinkargs *args)
static void encode_readdirargs(struct xdr_stream *xdr,
const struct nfs_readdirargs *args)
static void nfs2_xdr_enc_readdirargs(struct rpc_rqst *req,
struct xdr_stream *xdr,
const struct nfs_readdirargs *args)
static int nfs2_xdr_dec_stat(struct rpc_rqst *req, struct xdr_stream *xdr,
void *__unused)
static int nfs2_xdr_dec_attrstat(struct rpc_rqst *req, struct xdr_stream *xdr,
struct nfs_fattr *result)
static int nfs2_xdr_dec_diropres(struct rpc_rqst *req, struct xdr_stream *xdr,
struct nfs_diropok *result)
static int nfs2_xdr_dec_readlinkres(struct rpc_rqst *req,
struct xdr_stream *xdr, void *__unused)
static int nfs2_xdr_dec_readres(struct rpc_rqst *req, struct xdr_stream *xdr,
struct nfs_readres *result)
static int nfs2_xdr_dec_writeres(struct rpc_rqst *req, struct xdr_stream *xdr,
struct nfs_writeres *result)
int nfs2_decode_dirent(struct xdr_stream *xdr, struct nfs_entry *entry,
int plus)
static int decode_readdirok(struct xdr_stream *xdr)
static int nfs2_xdr_dec_readdirres(struct rpc_rqst *req,
struct xdr_stream *xdr, void *__unused)
static int decode_info(struct xdr_stream *xdr, struct nfs2_fsstat *result)
static int nfs2_xdr_dec_statfsres(struct rpc_rqst *req, struct xdr_stream *xdr,
struct nfs2_fsstat *result)
static const struct  nfs_errtbl[] = ;
int nfs_stat_to_errno(enum nfs_stat status)
#define PROC(proc, argtype, restype, timer)				\
[NFSPROC_##proc] =
struct rpc_procinfo	nfs_procedures[] = ;
struct rpc_version		nfs_version2 = ;
