typedef struct svc_rqst	svc_rqst;
typedef struct svc_buf	svc_buf;
#define NFSDDBG_FACILITY		NFSDDBG_PROC
static __be32
nfsd_proc_null(struct svc_rqst *rqstp, void *argp, void *resp)
static __be32
nfsd_return_attrs(__be32 err, struct nfsd_attrstat *resp)
static __be32
nfsd_return_dirop(__be32 err, struct nfsd_diropres *resp)
static __be32
nfsd_proc_getattr(struct svc_rqst *rqstp, struct nfsd_fhandle  *argp,
struct nfsd_attrstat *resp)
static __be32
nfsd_proc_setattr(struct svc_rqst *rqstp, struct nfsd_sattrargs *argp,
struct nfsd_attrstat  *resp)
static __be32
nfsd_proc_lookup(struct svc_rqst *rqstp, struct nfsd_diropargs *argp,
struct nfsd_diropres  *resp)
static __be32
nfsd_proc_readlink(struct svc_rqst *rqstp, struct nfsd_readlinkargs *argp,
struct nfsd_readlinkres *resp)
static __be32
nfsd_proc_read(struct svc_rqst *rqstp, struct nfsd_readargs *argp,
struct nfsd_readres  *resp)
static __be32
nfsd_proc_write(struct svc_rqst *rqstp, struct nfsd_writeargs *argp,
struct nfsd_attrstat  *resp)
static __be32
nfsd_proc_create(struct svc_rqst *rqstp, struct nfsd_createargs *argp,
struct nfsd_diropres   *resp)
static __be32
nfsd_proc_remove(struct svc_rqst *rqstp, struct nfsd_diropargs *argp,
void		       *resp)
static __be32
nfsd_proc_rename(struct svc_rqst *rqstp, struct nfsd_renameargs *argp,
void		        *resp)
static __be32
nfsd_proc_link(struct svc_rqst *rqstp, struct nfsd_linkargs *argp,
void			    *resp)
static __be32
nfsd_proc_symlink(struct svc_rqst *rqstp, struct nfsd_symlinkargs *argp,
void			  *resp)
static __be32
nfsd_proc_mkdir(struct svc_rqst *rqstp, struct nfsd_createargs *argp,
struct nfsd_diropres   *resp)
static __be32
nfsd_proc_rmdir(struct svc_rqst *rqstp, struct nfsd_diropargs *argp,
void		      *resp)
static __be32
nfsd_proc_readdir(struct svc_rqst *rqstp, struct nfsd_readdirargs *argp,
struct nfsd_readdirres  *resp)
static __be32
nfsd_proc_statfs(struct svc_rqst * rqstp, struct nfsd_fhandle   *argp,
struct nfsd_statfsres *resp)
struct nfsd_void ;
#define ST 1
#define FH 8
#define	AT 18
static struct svc_procedure		nfsd_procedures2[18] = ;
struct svc_version	nfsd_version2 = ;
__be32
nfserrno (int errno)
