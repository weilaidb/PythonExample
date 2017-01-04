#define NFSDDBG_FACILITY		NFSDDBG_PROC
#define RETURN_STATUS(st)
static __be32
nfsacld_proc_null(struct svc_rqst *rqstp, void *argp, void *resp)
static __be32 nfsacld_proc_getacl(struct svc_rqst * rqstp,
struct nfsd3_getaclargs *argp, struct nfsd3_getaclres *resp)
static __be32 nfsacld_proc_setacl(struct svc_rqst * rqstp,
struct nfsd3_setaclargs *argp,
struct nfsd_attrstat *resp)
static __be32 nfsacld_proc_getattr(struct svc_rqst * rqstp,
struct nfsd_fhandle *argp, struct nfsd_attrstat *resp)
static __be32 nfsacld_proc_access(struct svc_rqst *rqstp, struct nfsd3_accessargs *argp,
struct nfsd3_accessres *resp)
static int nfsaclsvc_decode_getaclargs(struct svc_rqst *rqstp, __be32 *p,
struct nfsd3_getaclargs *argp)
static int nfsaclsvc_decode_setaclargs(struct svc_rqst *rqstp, __be32 *p,
struct nfsd3_setaclargs *argp)
static int nfsaclsvc_decode_fhandleargs(struct svc_rqst *rqstp, __be32 *p,
struct nfsd_fhandle *argp)
static int nfsaclsvc_decode_accessargs(struct svc_rqst *rqstp, __be32 *p,
struct nfsd3_accessargs *argp)
int
nfsaclsvc_encode_voidres(struct svc_rqst *rqstp, __be32 *p, void *dummy)
static int nfsaclsvc_encode_getaclres(struct svc_rqst *rqstp, __be32 *p,
struct nfsd3_getaclres *resp)
static int nfsaclsvc_encode_attrstatres(struct svc_rqst *rqstp, __be32 *p,
struct nfsd_attrstat *resp)
static int nfsaclsvc_encode_accessres(struct svc_rqst *rqstp, __be32 *p,
struct nfsd3_accessres *resp)
static int nfsaclsvc_release_getacl(struct svc_rqst *rqstp, __be32 *p,
struct nfsd3_getaclres *resp)
static int nfsaclsvc_release_attrstat(struct svc_rqst *rqstp, __be32 *p,
struct nfsd_attrstat *resp)
static int nfsaclsvc_release_access(struct svc_rqst *rqstp, __be32 *p,
struct nfsd3_accessres *resp)
#define nfsaclsvc_decode_voidargs	NULL
#define nfsaclsvc_release_void		NULL
#define nfsd3_fhandleargs	nfsd_fhandle
#define nfsd3_attrstatres	nfsd_attrstat
#define nfsd3_voidres		nfsd3_voidargs
struct nfsd3_voidargs ;
#define PROC(name, argt, rest, relt, cache, respsize)	\
#define ST 1
#define AT 21
#define pAT (1+AT)
#define ACL (1+NFS_ACL_MAX_ENTRIES*3)
static struct svc_procedure		nfsd_acl_procedures2[] = ;
struct svc_version	nfsd_acl_version2 = ;
