#define RETURN_STATUS(st)
static __be32
nfsd3_proc_null(struct svc_rqst *rqstp, void *argp, void *resp)
static __be32 nfsd3_proc_getacl(struct svc_rqst * rqstp,
struct nfsd3_getaclargs *argp, struct nfsd3_getaclres *resp)
static __be32 nfsd3_proc_setacl(struct svc_rqst * rqstp,
struct nfsd3_setaclargs *argp,
struct nfsd3_attrstat *resp)
static int nfs3svc_decode_getaclargs(struct svc_rqst *rqstp, __be32 *p,
struct nfsd3_getaclargs *args)
static int nfs3svc_decode_setaclargs(struct svc_rqst *rqstp, __be32 *p,
struct nfsd3_setaclargs *args)
static int nfs3svc_encode_getaclres(struct svc_rqst *rqstp, __be32 *p,
struct nfsd3_getaclres *resp)
static int nfs3svc_encode_setaclres(struct svc_rqst *rqstp, __be32 *p,
struct nfsd3_attrstat *resp)
static int nfs3svc_release_getacl(struct svc_rqst *rqstp, __be32 *p,
struct nfsd3_getaclres *resp)
#define nfs3svc_decode_voidargs		NULL
#define nfs3svc_release_void		NULL
#define nfsd3_setaclres			nfsd3_attrstat
#define nfsd3_voidres			nfsd3_voidargs
struct nfsd3_voidargs ;
#define PROC(name, argt, rest, relt, cache, respsize)	\
#define ST 1
#define AT 21
#define pAT (1+AT)
#define ACL (1+NFS_ACL_MAX_ENTRIES*3)
static struct svc_procedure		nfsd_acl_procedures3[] = ;
struct svc_version	nfsd_acl_version3 = ;
