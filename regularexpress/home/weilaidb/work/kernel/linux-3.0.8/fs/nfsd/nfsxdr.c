#define NFSDDBG_FACILITY		NFSDDBG_XDR
static u32	nfs_ftypes[] = ;
static __be32 *
decode_fh(__be32 *p, struct svc_fh *fhp)
__be32 *nfs2svc_decode_fh(__be32 *p, struct svc_fh *fhp)
static __be32 *
encode_fh(__be32 *p, struct svc_fh *fhp)
static __be32 *
decode_filename(__be32 *p, char **namp, unsigned int *lenp)
static __be32 *
decode_pathname(__be32 *p, char **namp, unsigned int *lenp)
static __be32 *
decode_sattr(__be32 *p, struct iattr *iap)
static __be32 *
encode_fattr(struct svc_rqst *rqstp, __be32 *p, struct svc_fh *fhp,
struct kstat *stat)
__be32 *nfs2svc_encode_fattr(struct svc_rqst *rqstp, __be32 *p, struct svc_fh *fhp)
int
nfssvc_decode_void(struct svc_rqst *rqstp, __be32 *p, void *dummy)
int
nfssvc_decode_fhandle(struct svc_rqst *rqstp, __be32 *p, struct nfsd_fhandle *args)
int
nfssvc_decode_sattrargs(struct svc_rqst *rqstp, __be32 *p,
struct nfsd_sattrargs *args)
int
nfssvc_decode_diropargs(struct svc_rqst *rqstp, __be32 *p,
struct nfsd_diropargs *args)
int
nfssvc_decode_readargs(struct svc_rqst *rqstp, __be32 *p,
struct nfsd_readargs *args)
int
nfssvc_decode_writeargs(struct svc_rqst *rqstp, __be32 *p,
struct nfsd_writeargs *args)
int
nfssvc_decode_createargs(struct svc_rqst *rqstp, __be32 *p,
struct nfsd_createargs *args)
int
nfssvc_decode_renameargs(struct svc_rqst *rqstp, __be32 *p,
struct nfsd_renameargs *args)
int
nfssvc_decode_readlinkargs(struct svc_rqst *rqstp, __be32 *p, struct nfsd_readlinkargs *args)
int
nfssvc_decode_linkargs(struct svc_rqst *rqstp, __be32 *p,
struct nfsd_linkargs *args)
int
nfssvc_decode_symlinkargs(struct svc_rqst *rqstp, __be32 *p,
struct nfsd_symlinkargs *args)
int
nfssvc_decode_readdirargs(struct svc_rqst *rqstp, __be32 *p,
struct nfsd_readdirargs *args)
int
nfssvc_encode_void(struct svc_rqst *rqstp, __be32 *p, void *dummy)
int
nfssvc_encode_attrstat(struct svc_rqst *rqstp, __be32 *p,
struct nfsd_attrstat *resp)
int
nfssvc_encode_diropres(struct svc_rqst *rqstp, __be32 *p,
struct nfsd_diropres *resp)
int
nfssvc_encode_readlinkres(struct svc_rqst *rqstp, __be32 *p,
struct nfsd_readlinkres *resp)
int
nfssvc_encode_readres(struct svc_rqst *rqstp, __be32 *p,
struct nfsd_readres *resp)
int
nfssvc_encode_readdirres(struct svc_rqst *rqstp, __be32 *p,
struct nfsd_readdirres *resp)
int
nfssvc_encode_statfsres(struct svc_rqst *rqstp, __be32 *p,
struct nfsd_statfsres *resp)
int
nfssvc_encode_entry(void *ccdv, const char *name,
int namlen, loff_t offset, u64 ino, unsigned int d_type)
int
nfssvc_release_fhandle(struct svc_rqst *rqstp, __be32 *p,
struct nfsd_fhandle *resp)
