#define NFSDDBG_FACILITY		NFSDDBG_XDR
static u32	nfs3_ftypes[] = ;
static __be32 *
encode_time3(__be32 *p, struct timespec *time)
static __be32 *
decode_time3(__be32 *p, struct timespec *time)
static __be32 *
decode_fh(__be32 *p, struct svc_fh *fhp)
__be32 *nfs3svc_decode_fh(__be32 *p, struct svc_fh *fhp)
static __be32 *
encode_fh(__be32 *p, struct svc_fh *fhp)
static __be32 *
decode_filename(__be32 *p, char **namp, unsigned int *lenp)
static __be32 *
decode_sattr3(__be32 *p, struct iattr *iap)
static __be32 *encode_fsid(__be32 *p, struct svc_fh *fhp)
static __be32 *
encode_fattr3(struct svc_rqst *rqstp, __be32 *p, struct svc_fh *fhp,
struct kstat *stat)
static __be32 *
encode_saved_post_attr(struct svc_rqst *rqstp, __be32 *p, struct svc_fh *fhp)
static __be32 *
encode_post_op_attr(struct svc_rqst *rqstp, __be32 *p, struct svc_fh *fhp)
__be32 *
nfs3svc_encode_post_op_attr(struct svc_rqst *rqstp, __be32 *p, struct svc_fh *fhp)
static __be32 *
encode_wcc_data(struct svc_rqst *rqstp, __be32 *p, struct svc_fh *fhp)
void fill_post_wcc(struct svc_fh *fhp)
int
nfs3svc_decode_fhandle(struct svc_rqst *rqstp, __be32 *p, struct nfsd_fhandle *args)
int
nfs3svc_decode_sattrargs(struct svc_rqst *rqstp, __be32 *p,
struct nfsd3_sattrargs *args)
int
nfs3svc_decode_diropargs(struct svc_rqst *rqstp, __be32 *p,
struct nfsd3_diropargs *args)
int
nfs3svc_decode_accessargs(struct svc_rqst *rqstp, __be32 *p,
struct nfsd3_accessargs *args)
int
nfs3svc_decode_readargs(struct svc_rqst *rqstp, __be32 *p,
struct nfsd3_readargs *args)
int
nfs3svc_decode_writeargs(struct svc_rqst *rqstp, __be32 *p,
struct nfsd3_writeargs *args)
int
nfs3svc_decode_createargs(struct svc_rqst *rqstp, __be32 *p,
struct nfsd3_createargs *args)
int
nfs3svc_decode_mkdirargs(struct svc_rqst *rqstp, __be32 *p,
struct nfsd3_createargs *args)
int
nfs3svc_decode_symlinkargs(struct svc_rqst *rqstp, __be32 *p,
struct nfsd3_symlinkargs *args)
int
nfs3svc_decode_mknodargs(struct svc_rqst *rqstp, __be32 *p,
struct nfsd3_mknodargs *args)
int
nfs3svc_decode_renameargs(struct svc_rqst *rqstp, __be32 *p,
struct nfsd3_renameargs *args)
int
nfs3svc_decode_readlinkargs(struct svc_rqst *rqstp, __be32 *p,
struct nfsd3_readlinkargs *args)
int
nfs3svc_decode_linkargs(struct svc_rqst *rqstp, __be32 *p,
struct nfsd3_linkargs *args)
int
nfs3svc_decode_readdirargs(struct svc_rqst *rqstp, __be32 *p,
struct nfsd3_readdirargs *args)
int
nfs3svc_decode_readdirplusargs(struct svc_rqst *rqstp, __be32 *p,
struct nfsd3_readdirargs *args)
int
nfs3svc_decode_commitargs(struct svc_rqst *rqstp, __be32 *p,
struct nfsd3_commitargs *args)
int
nfs3svc_encode_voidres(struct svc_rqst *rqstp, __be32 *p, void *dummy)
int
nfs3svc_encode_attrstat(struct svc_rqst *rqstp, __be32 *p,
struct nfsd3_attrstat *resp)
int
nfs3svc_encode_wccstat(struct svc_rqst *rqstp, __be32 *p,
struct nfsd3_attrstat *resp)
int
nfs3svc_encode_diropres(struct svc_rqst *rqstp, __be32 *p,
struct nfsd3_diropres *resp)
int
nfs3svc_encode_accessres(struct svc_rqst *rqstp, __be32 *p,
struct nfsd3_accessres *resp)
int
nfs3svc_encode_readlinkres(struct svc_rqst *rqstp, __be32 *p,
struct nfsd3_readlinkres *resp)
int
nfs3svc_encode_readres(struct svc_rqst *rqstp, __be32 *p,
struct nfsd3_readres *resp)
int
nfs3svc_encode_writeres(struct svc_rqst *rqstp, __be32 *p,
struct nfsd3_writeres *resp)
int
nfs3svc_encode_createres(struct svc_rqst *rqstp, __be32 *p,
struct nfsd3_diropres *resp)
int
nfs3svc_encode_renameres(struct svc_rqst *rqstp, __be32 *p,
struct nfsd3_renameres *resp)
int
nfs3svc_encode_linkres(struct svc_rqst *rqstp, __be32 *p,
struct nfsd3_linkres *resp)
int
nfs3svc_encode_readdirres(struct svc_rqst *rqstp, __be32 *p,
struct nfsd3_readdirres *resp)
static __be32 *
encode_entry_baggage(struct nfsd3_readdirres *cd, __be32 *p, const char *name,
int namlen, u64 ino)
static int
compose_entry_fh(struct nfsd3_readdirres *cd, struct svc_fh *fhp,
const char *name, int namlen)
static __be32 *encode_entryplus_baggage(struct nfsd3_readdirres *cd, __be32 *p, const char *name, int namlen)
#define NFS3_ENTRY_BAGGAGE	(2 + 1 + 2 + 1)
#define NFS3_ENTRYPLUS_BAGGAGE	(1 + 21 + 1 + (NFS3_FHSIZE >> 2))
static int
encode_entry(struct readdir_cd *ccd, const char *name, int namlen,
loff_t offset, u64 ino, unsigned int d_type, int plus)
int
nfs3svc_encode_entry(void *cd, const char *name,
int namlen, loff_t offset, u64 ino, unsigned int d_type)
int
nfs3svc_encode_entry_plus(void *cd, const char *name,
int namlen, loff_t offset, u64 ino,
unsigned int d_type)
int
nfs3svc_encode_fsstatres(struct svc_rqst *rqstp, __be32 *p,
struct nfsd3_fsstatres *resp)
int
nfs3svc_encode_fsinfores(struct svc_rqst *rqstp, __be32 *p,
struct nfsd3_fsinfores *resp)
int
nfs3svc_encode_pathconfres(struct svc_rqst *rqstp, __be32 *p,
struct nfsd3_pathconfres *resp)
int
nfs3svc_encode_commitres(struct svc_rqst *rqstp, __be32 *p,
struct nfsd3_commitres *resp)
int
nfs3svc_release_fhandle(struct svc_rqst *rqstp, __be32 *p,
struct nfsd3_attrstat *resp)
int
nfs3svc_release_fhandle2(struct svc_rqst *rqstp, __be32 *p,
struct nfsd3_fhandle_pair *resp)
