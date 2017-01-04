#define NFSDDBG_FACILITY		NFSDDBG_PROC
#define RETURN_STATUS(st)
static int	nfs3_ftypes[] = ;
static __be32
nfsd3_proc_null(struct svc_rqst *rqstp, void *argp, void *resp)
static __be32
nfsd3_proc_getattr(struct svc_rqst *rqstp, struct nfsd_fhandle  *argp,
struct nfsd3_attrstat *resp)
static __be32
nfsd3_proc_setattr(struct svc_rqst *rqstp, struct nfsd3_sattrargs *argp,
struct nfsd3_attrstat  *resp)
static __be32
nfsd3_proc_lookup(struct svc_rqst *rqstp, struct nfsd3_diropargs *argp,
struct nfsd3_diropres  *resp)
static __be32
nfsd3_proc_access(struct svc_rqst *rqstp, struct nfsd3_accessargs *argp,
struct nfsd3_accessres *resp)
static __be32
nfsd3_proc_readlink(struct svc_rqst *rqstp, struct nfsd3_readlinkargs *argp,
struct nfsd3_readlinkres *resp)
static __be32
nfsd3_proc_read(struct svc_rqst *rqstp, struct nfsd3_readargs *argp,
struct nfsd3_readres  *resp)
static __be32
nfsd3_proc_write(struct svc_rqst *rqstp, struct nfsd3_writeargs *argp,
struct nfsd3_writeres  *resp)
static __be32
nfsd3_proc_create(struct svc_rqst *rqstp, struct nfsd3_createargs *argp,
struct nfsd3_diropres   *resp)
static __be32
nfsd3_proc_mkdir(struct svc_rqst *rqstp, struct nfsd3_createargs *argp,
struct nfsd3_diropres   *resp)
static __be32
nfsd3_proc_symlink(struct svc_rqst *rqstp, struct nfsd3_symlinkargs *argp,
struct nfsd3_diropres    *resp)
static __be32
nfsd3_proc_mknod(struct svc_rqst *rqstp, struct nfsd3_mknodargs *argp,
struct nfsd3_diropres  *resp)
static __be32
nfsd3_proc_remove(struct svc_rqst *rqstp, struct nfsd3_diropargs *argp,
struct nfsd3_attrstat  *resp)
static __be32
nfsd3_proc_rmdir(struct svc_rqst *rqstp, struct nfsd3_diropargs *argp,
struct nfsd3_attrstat  *resp)
static __be32
nfsd3_proc_rename(struct svc_rqst *rqstp, struct nfsd3_renameargs *argp,
struct nfsd3_renameres  *resp)
static __be32
nfsd3_proc_link(struct svc_rqst *rqstp, struct nfsd3_linkargs *argp,
struct nfsd3_linkres  *resp)
static __be32
nfsd3_proc_readdir(struct svc_rqst *rqstp, struct nfsd3_readdirargs *argp,
struct nfsd3_readdirres  *resp)
static __be32
nfsd3_proc_readdirplus(struct svc_rqst *rqstp, struct nfsd3_readdirargs *argp,
struct nfsd3_readdirres  *resp)
static __be32
nfsd3_proc_fsstat(struct svc_rqst * rqstp, struct nfsd_fhandle    *argp,
struct nfsd3_fsstatres *resp)
static __be32
nfsd3_proc_fsinfo(struct svc_rqst * rqstp, struct nfsd_fhandle    *argp,
struct nfsd3_fsinfores *resp)
static __be32
nfsd3_proc_pathconf(struct svc_rqst * rqstp, struct nfsd_fhandle      *argp,
struct nfsd3_pathconfres *resp)
static __be32
nfsd3_proc_commit(struct svc_rqst * rqstp, struct nfsd3_commitargs *argp,
struct nfsd3_commitres  *resp)
#define nfs3svc_decode_fhandleargs	nfs3svc_decode_fhandle
#define nfs3svc_encode_attrstatres	nfs3svc_encode_attrstat
#define nfs3svc_encode_wccstatres	nfs3svc_encode_wccstat
#define nfsd3_mkdirargs			nfsd3_createargs
#define nfsd3_readdirplusargs		nfsd3_readdirargs
#define nfsd3_fhandleargs		nfsd_fhandle
#define nfsd3_fhandleres		nfsd3_attrstat
#define nfsd3_attrstatres		nfsd3_attrstat
#define nfsd3_wccstatres		nfsd3_attrstat
#define nfsd3_createres			nfsd3_diropres
#define nfsd3_voidres			nfsd3_voidargs
struct nfsd3_voidargs ;
#define PROC(name, argt, rest, relt, cache, respsize)	\
#define ST 1
#define FH 17
#define AT 21
#define pAT (1+AT)
#define WC (7+pAT)
static struct svc_procedure		nfsd_procedures3[22] = ;
struct svc_version	nfsd_version3 = ;
