#define NFSDBG_FACILITY		NFSDBG_XDR
#define errno_NFSERR_IO		EIO
#define NFS3_fhandle_sz		(1+16)
#define NFS3_fh_sz		(NFS3_fhandle_sz)
#define NFS3_sattr_sz		(15)
#define NFS3_filename_sz	(1+(NFS3_MAXNAMLEN>>2))
#define NFS3_path_sz		(1+(NFS3_MAXPATHLEN>>2))
#define NFS3_fattr_sz		(21)
#define NFS3_cookieverf_sz	(NFS3_COOKIEVERFSIZE>>2)
#define NFS3_wcc_attr_sz	(6)
#define NFS3_pre_op_attr_sz	(1+NFS3_wcc_attr_sz)
#define NFS3_post_op_attr_sz	(1+NFS3_fattr_sz)
#define NFS3_wcc_data_sz	(NFS3_pre_op_attr_sz+NFS3_post_op_attr_sz)
#define NFS3_diropargs_sz	(NFS3_fh_sz+NFS3_filename_sz)
#define NFS3_getattrargs_sz	(NFS3_fh_sz)
#define NFS3_setattrargs_sz	(NFS3_fh_sz+NFS3_sattr_sz+3)
#define NFS3_lookupargs_sz	(NFS3_fh_sz+NFS3_filename_sz)
#define NFS3_accessargs_sz	(NFS3_fh_sz+1)
#define NFS3_readlinkargs_sz	(NFS3_fh_sz)
#define NFS3_readargs_sz	(NFS3_fh_sz+3)
#define NFS3_writeargs_sz	(NFS3_fh_sz+5)
#define NFS3_createargs_sz	(NFS3_diropargs_sz+NFS3_sattr_sz)
#define NFS3_mkdirargs_sz	(NFS3_diropargs_sz+NFS3_sattr_sz)
#define NFS3_symlinkargs_sz	(NFS3_diropargs_sz+1+NFS3_sattr_sz)
#define NFS3_mknodargs_sz	(NFS3_diropargs_sz+2+NFS3_sattr_sz)
#define NFS3_removeargs_sz	(NFS3_fh_sz+NFS3_filename_sz)
#define NFS3_renameargs_sz	(NFS3_diropargs_sz+NFS3_diropargs_sz)
#define NFS3_linkargs_sz		(NFS3_fh_sz+NFS3_diropargs_sz)
#define NFS3_readdirargs_sz	(NFS3_fh_sz+NFS3_cookieverf_sz+3)
#define NFS3_readdirplusargs_sz	(NFS3_fh_sz+NFS3_cookieverf_sz+4)
#define NFS3_commitargs_sz	(NFS3_fh_sz+3)
#define NFS3_getattrres_sz	(1+NFS3_fattr_sz)
#define NFS3_setattrres_sz	(1+NFS3_wcc_data_sz)
#define NFS3_removeres_sz	(NFS3_setattrres_sz)
#define NFS3_lookupres_sz	(1+NFS3_fh_sz+(2 * NFS3_post_op_attr_sz))
#define NFS3_accessres_sz	(1+NFS3_post_op_attr_sz+1)
#define NFS3_readlinkres_sz	(1+NFS3_post_op_attr_sz+1)
#define NFS3_readres_sz		(1+NFS3_post_op_attr_sz+3)
#define NFS3_writeres_sz	(1+NFS3_wcc_data_sz+4)
#define NFS3_createres_sz	(1+NFS3_fh_sz+NFS3_post_op_attr_sz+NFS3_wcc_data_sz)
#define NFS3_renameres_sz	(1+(2 * NFS3_wcc_data_sz))
#define NFS3_linkres_sz		(1+NFS3_post_op_attr_sz+NFS3_wcc_data_sz)
#define NFS3_readdirres_sz	(1+NFS3_post_op_attr_sz+2)
#define NFS3_fsstatres_sz	(1+NFS3_post_op_attr_sz+13)
#define NFS3_fsinfores_sz	(1+NFS3_post_op_attr_sz+12)
#define NFS3_pathconfres_sz	(1+NFS3_post_op_attr_sz+6)
#define NFS3_commitres_sz	(1+NFS3_wcc_data_sz+2)
#define ACL3_getaclargs_sz	(NFS3_fh_sz+1)
#define ACL3_setaclargs_sz	(NFS3_fh_sz+1+ \
XDR_QUADLEN(NFS_ACL_INLINE_BUFSIZE))
#define ACL3_getaclres_sz	(1+NFS3_post_op_attr_sz+1+ \
XDR_QUADLEN(NFS_ACL_INLINE_BUFSIZE))
#define ACL3_setaclres_sz	(1+NFS3_post_op_attr_sz)
static const umode_t nfs_type2fmt[] = ;
static void prepare_reply_buffer(struct rpc_rqst *req, struct page **pages,
unsigned int base, unsigned int len,
unsigned int bufsize)
static void print_overflow_msg(const char *func, const struct xdr_stream *xdr)
static void encode_uint32(struct xdr_stream *xdr, u32 value)
static int decode_uint32(struct xdr_stream *xdr, u32 *value)
static int decode_uint64(struct xdr_stream *xdr, u64 *value)
static __be32 *xdr_decode_fileid3(__be32 *p, u64 *fileid)
static int decode_fileid3(struct xdr_stream *xdr, u64 *fileid)
static void encode_filename3(struct xdr_stream *xdr,
const char *name, u32 length)
static int decode_inline_filename3(struct xdr_stream *xdr,
const char **name, u32 *length)
static void encode_nfspath3(struct xdr_stream *xdr, struct page **pages,
const u32 length)
static int decode_nfspath3(struct xdr_stream *xdr)
static __be32 *xdr_encode_cookie3(__be32 *p, u64 cookie)
static int decode_cookie3(struct xdr_stream *xdr, u64 *cookie)
static __be32 *xdr_encode_cookieverf3(__be32 *p, const __be32 *verifier)
static int decode_cookieverf3(struct xdr_stream *xdr, __be32 *verifier)
static void encode_createverf3(struct xdr_stream *xdr, const __be32 *verifier)
static int decode_writeverf3(struct xdr_stream *xdr, __be32 *verifier)
static __be32 *xdr_decode_size3(__be32 *p, u64 *size)
#define NFS3_OK		NFS_OK
static int decode_nfsstat3(struct xdr_stream *xdr, enum nfs_stat *status)
static void encode_ftype3(struct xdr_stream *xdr, const u32 type)
static __be32 *xdr_decode_ftype3(__be32 *p, umode_t *mode)
static void encode_specdata3(struct xdr_stream *xdr, const dev_t rdev)
static __be32 *xdr_decode_specdata3(__be32 *p, dev_t *rdev)
static void encode_nfs_fh3(struct xdr_stream *xdr, const struct nfs_fh *fh)
static int decode_nfs_fh3(struct xdr_stream *xdr, struct nfs_fh *fh)
static void zero_nfs_fh3(struct nfs_fh *fh)
static __be32 *xdr_encode_nfstime3(__be32 *p, const struct timespec *timep)
static __be32 *xdr_decode_nfstime3(__be32 *p, struct timespec *timep)
static void encode_sattr3(struct xdr_stream *xdr, const struct iattr *attr)
static int decode_fattr3(struct xdr_stream *xdr, struct nfs_fattr *fattr)
static int decode_post_op_attr(struct xdr_stream *xdr, struct nfs_fattr *fattr)
static int decode_wcc_attr(struct xdr_stream *xdr, struct nfs_fattr *fattr)
static int decode_pre_op_attr(struct xdr_stream *xdr, struct nfs_fattr *fattr)
static int decode_wcc_data(struct xdr_stream *xdr, struct nfs_fattr *fattr)
static int decode_post_op_fh3(struct xdr_stream *xdr, struct nfs_fh *fh)
static void encode_diropargs3(struct xdr_stream *xdr, const struct nfs_fh *fh,
const char *name, u32 length)
static void nfs3_xdr_enc_getattr3args(struct rpc_rqst *req,
struct xdr_stream *xdr,
const struct nfs_fh *fh)
static void encode_sattrguard3(struct xdr_stream *xdr,
const struct nfs3_sattrargs *args)
static void nfs3_xdr_enc_setattr3args(struct rpc_rqst *req,
struct xdr_stream *xdr,
const struct nfs3_sattrargs *args)
static void nfs3_xdr_enc_lookup3args(struct rpc_rqst *req,
struct xdr_stream *xdr,
const struct nfs3_diropargs *args)
static void encode_access3args(struct xdr_stream *xdr,
const struct nfs3_accessargs *args)
static void nfs3_xdr_enc_access3args(struct rpc_rqst *req,
struct xdr_stream *xdr,
const struct nfs3_accessargs *args)
static void nfs3_xdr_enc_readlink3args(struct rpc_rqst *req,
struct xdr_stream *xdr,
const struct nfs3_readlinkargs *args)
static void encode_read3args(struct xdr_stream *xdr,
const struct nfs_readargs *args)
static void nfs3_xdr_enc_read3args(struct rpc_rqst *req,
struct xdr_stream *xdr,
const struct nfs_readargs *args)
static void encode_write3args(struct xdr_stream *xdr,
const struct nfs_writeargs *args)
static void nfs3_xdr_enc_write3args(struct rpc_rqst *req,
struct xdr_stream *xdr,
const struct nfs_writeargs *args)
static void encode_createhow3(struct xdr_stream *xdr,
const struct nfs3_createargs *args)
static void nfs3_xdr_enc_create3args(struct rpc_rqst *req,
struct xdr_stream *xdr,
const struct nfs3_createargs *args)
static void nfs3_xdr_enc_mkdir3args(struct rpc_rqst *req,
struct xdr_stream *xdr,
const struct nfs3_mkdirargs *args)
static void encode_symlinkdata3(struct xdr_stream *xdr,
const struct nfs3_symlinkargs *args)
static void nfs3_xdr_enc_symlink3args(struct rpc_rqst *req,
struct xdr_stream *xdr,
const struct nfs3_symlinkargs *args)
static void encode_devicedata3(struct xdr_stream *xdr,
const struct nfs3_mknodargs *args)
static void encode_mknoddata3(struct xdr_stream *xdr,
const struct nfs3_mknodargs *args)
static void nfs3_xdr_enc_mknod3args(struct rpc_rqst *req,
struct xdr_stream *xdr,
const struct nfs3_mknodargs *args)
static void nfs3_xdr_enc_remove3args(struct rpc_rqst *req,
struct xdr_stream *xdr,
const struct nfs_removeargs *args)
static void nfs3_xdr_enc_rename3args(struct rpc_rqst *req,
struct xdr_stream *xdr,
const struct nfs_renameargs *args)
static void nfs3_xdr_enc_link3args(struct rpc_rqst *req,
struct xdr_stream *xdr,
const struct nfs3_linkargs *args)
static void encode_readdir3args(struct xdr_stream *xdr,
const struct nfs3_readdirargs *args)
static void nfs3_xdr_enc_readdir3args(struct rpc_rqst *req,
struct xdr_stream *xdr,
const struct nfs3_readdirargs *args)
static void encode_readdirplus3args(struct xdr_stream *xdr,
const struct nfs3_readdirargs *args)
static void nfs3_xdr_enc_readdirplus3args(struct rpc_rqst *req,
struct xdr_stream *xdr,
const struct nfs3_readdirargs *args)
static void encode_commit3args(struct xdr_stream *xdr,
const struct nfs_writeargs *args)
static void nfs3_xdr_enc_commit3args(struct rpc_rqst *req,
struct xdr_stream *xdr,
const struct nfs_writeargs *args)
static void nfs3_xdr_enc_getacl3args(struct rpc_rqst *req,
struct xdr_stream *xdr,
const struct nfs3_getaclargs *args)
static void nfs3_xdr_enc_setacl3args(struct rpc_rqst *req,
struct xdr_stream *xdr,
const struct nfs3_setaclargs *args)
static int nfs3_xdr_dec_getattr3res(struct rpc_rqst *req,
struct xdr_stream *xdr,
struct nfs_fattr *result)
static int nfs3_xdr_dec_setattr3res(struct rpc_rqst *req,
struct xdr_stream *xdr,
struct nfs_fattr *result)
static int nfs3_xdr_dec_lookup3res(struct rpc_rqst *req,
struct xdr_stream *xdr,
struct nfs3_diropres *result)
static int nfs3_xdr_dec_access3res(struct rpc_rqst *req,
struct xdr_stream *xdr,
struct nfs3_accessres *result)
static int nfs3_xdr_dec_readlink3res(struct rpc_rqst *req,
struct xdr_stream *xdr,
struct nfs_fattr *result)
static int decode_read3resok(struct xdr_stream *xdr,
struct nfs_readres *result)
static int nfs3_xdr_dec_read3res(struct rpc_rqst *req, struct xdr_stream *xdr,
struct nfs_readres *result)
static int decode_write3resok(struct xdr_stream *xdr,
struct nfs_writeres *result)
static int nfs3_xdr_dec_write3res(struct rpc_rqst *req, struct xdr_stream *xdr,
struct nfs_writeres *result)
static int decode_create3resok(struct xdr_stream *xdr,
struct nfs3_diropres *result)
static int nfs3_xdr_dec_create3res(struct rpc_rqst *req,
struct xdr_stream *xdr,
struct nfs3_diropres *result)
static int nfs3_xdr_dec_remove3res(struct rpc_rqst *req,
struct xdr_stream *xdr,
struct nfs_removeres *result)
static int nfs3_xdr_dec_rename3res(struct rpc_rqst *req,
struct xdr_stream *xdr,
struct nfs_renameres *result)
static int nfs3_xdr_dec_link3res(struct rpc_rqst *req, struct xdr_stream *xdr,
struct nfs3_linkres *result)
int nfs3_decode_dirent(struct xdr_stream *xdr, struct nfs_entry *entry,
int plus)
static int decode_dirlist3(struct xdr_stream *xdr)
static int decode_readdir3resok(struct xdr_stream *xdr,
struct nfs3_readdirres *result)
static int nfs3_xdr_dec_readdir3res(struct rpc_rqst *req,
struct xdr_stream *xdr,
struct nfs3_readdirres *result)
static int decode_fsstat3resok(struct xdr_stream *xdr,
struct nfs_fsstat *result)
static int nfs3_xdr_dec_fsstat3res(struct rpc_rqst *req,
struct xdr_stream *xdr,
struct nfs_fsstat *result)
static int decode_fsinfo3resok(struct xdr_stream *xdr,
struct nfs_fsinfo *result)
static int nfs3_xdr_dec_fsinfo3res(struct rpc_rqst *req,
struct xdr_stream *xdr,
struct nfs_fsinfo *result)
static int decode_pathconf3resok(struct xdr_stream *xdr,
struct nfs_pathconf *result)
static int nfs3_xdr_dec_pathconf3res(struct rpc_rqst *req,
struct xdr_stream *xdr,
struct nfs_pathconf *result)
static int nfs3_xdr_dec_commit3res(struct rpc_rqst *req,
struct xdr_stream *xdr,
struct nfs_writeres *result)
static inline int decode_getacl3resok(struct xdr_stream *xdr,
struct nfs3_getaclres *result)
static int nfs3_xdr_dec_getacl3res(struct rpc_rqst *req,
struct xdr_stream *xdr,
struct nfs3_getaclres *result)
static int nfs3_xdr_dec_setacl3res(struct rpc_rqst *req,
struct xdr_stream *xdr,
struct nfs_fattr *result)
#define PROC(proc, argtype, restype, timer)				\
[NFS3PROC_##proc] =
struct rpc_procinfo	nfs3_procedures[] = ;
struct rpc_version		nfs_version3 = ;
static struct rpc_procinfo	nfs3_acl_procedures[] = ;
struct rpc_version		nfsacl_version3 = ;
