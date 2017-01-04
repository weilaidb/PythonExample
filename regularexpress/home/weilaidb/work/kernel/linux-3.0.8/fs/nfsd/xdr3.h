#define _LINUX_NFSD_XDR3_H
struct nfsd3_sattrargs ;
struct nfsd3_diropargs ;
struct nfsd3_accessargs ;
struct nfsd3_readargs ;
struct nfsd3_writeargs ;
struct nfsd3_createargs ;
struct nfsd3_mknodargs ;
struct nfsd3_renameargs ;
struct nfsd3_readlinkargs ;
struct nfsd3_linkargs ;
struct nfsd3_symlinkargs ;
struct nfsd3_readdirargs ;
struct nfsd3_commitargs ;
struct nfsd3_getaclargs ;
struct posix_acl;
struct nfsd3_setaclargs ;
struct nfsd3_attrstat ;
struct nfsd3_diropres  ;
struct nfsd3_accessres ;
struct nfsd3_readlinkres ;
struct nfsd3_readres ;
struct nfsd3_writeres ;
struct nfsd3_renameres ;
struct nfsd3_linkres ;
struct nfsd3_readdirres ;
struct nfsd3_fsstatres ;
struct nfsd3_fsinfores ;
struct nfsd3_pathconfres ;
struct nfsd3_commitres ;
struct nfsd3_getaclres ;
struct nfsd3_fhandle_pair ;
union nfsd3_xdrstore ;
#define NFS3_SVC_XDRSIZE		sizeof(union nfsd3_xdrstore)
int nfs3svc_decode_fhandle(struct svc_rqst *, __be32 *, struct nfsd_fhandle *);
int nfs3svc_decode_sattrargs(struct svc_rqst *, __be32 *,
struct nfsd3_sattrargs *);
int nfs3svc_decode_diropargs(struct svc_rqst *, __be32 *,
struct nfsd3_diropargs *);
int nfs3svc_decode_accessargs(struct svc_rqst *, __be32 *,
struct nfsd3_accessargs *);
int nfs3svc_decode_readargs(struct svc_rqst *, __be32 *,
struct nfsd3_readargs *);
int nfs3svc_decode_writeargs(struct svc_rqst *, __be32 *,
struct nfsd3_writeargs *);
int nfs3svc_decode_createargs(struct svc_rqst *, __be32 *,
struct nfsd3_createargs *);
int nfs3svc_decode_mkdirargs(struct svc_rqst *, __be32 *,
struct nfsd3_createargs *);
int nfs3svc_decode_mknodargs(struct svc_rqst *, __be32 *,
struct nfsd3_mknodargs *);
int nfs3svc_decode_renameargs(struct svc_rqst *, __be32 *,
struct nfsd3_renameargs *);
int nfs3svc_decode_readlinkargs(struct svc_rqst *, __be32 *,
struct nfsd3_readlinkargs *);
int nfs3svc_decode_linkargs(struct svc_rqst *, __be32 *,
struct nfsd3_linkargs *);
int nfs3svc_decode_symlinkargs(struct svc_rqst *, __be32 *,
struct nfsd3_symlinkargs *);
int nfs3svc_decode_readdirargs(struct svc_rqst *, __be32 *,
struct nfsd3_readdirargs *);
int nfs3svc_decode_readdirplusargs(struct svc_rqst *, __be32 *,
struct nfsd3_readdirargs *);
int nfs3svc_decode_commitargs(struct svc_rqst *, __be32 *,
struct nfsd3_commitargs *);
int nfs3svc_encode_voidres(struct svc_rqst *, __be32 *, void *);
int nfs3svc_encode_attrstat(struct svc_rqst *, __be32 *,
struct nfsd3_attrstat *);
int nfs3svc_encode_wccstat(struct svc_rqst *, __be32 *,
struct nfsd3_attrstat *);
int nfs3svc_encode_diropres(struct svc_rqst *, __be32 *,
struct nfsd3_diropres *);
int nfs3svc_encode_accessres(struct svc_rqst *, __be32 *,
struct nfsd3_accessres *);
int nfs3svc_encode_readlinkres(struct svc_rqst *, __be32 *,
struct nfsd3_readlinkres *);
int nfs3svc_encode_readres(struct svc_rqst *, __be32 *, struct nfsd3_readres *);
int nfs3svc_encode_writeres(struct svc_rqst *, __be32 *, struct nfsd3_writeres *);
int nfs3svc_encode_createres(struct svc_rqst *, __be32 *,
struct nfsd3_diropres *);
int nfs3svc_encode_renameres(struct svc_rqst *, __be32 *,
struct nfsd3_renameres *);
int nfs3svc_encode_linkres(struct svc_rqst *, __be32 *,
struct nfsd3_linkres *);
int nfs3svc_encode_readdirres(struct svc_rqst *, __be32 *,
struct nfsd3_readdirres *);
int nfs3svc_encode_fsstatres(struct svc_rqst *, __be32 *,
struct nfsd3_fsstatres *);
int nfs3svc_encode_fsinfores(struct svc_rqst *, __be32 *,
struct nfsd3_fsinfores *);
int nfs3svc_encode_pathconfres(struct svc_rqst *, __be32 *,
struct nfsd3_pathconfres *);
int nfs3svc_encode_commitres(struct svc_rqst *, __be32 *,
struct nfsd3_commitres *);
int nfs3svc_release_fhandle(struct svc_rqst *, __be32 *,
struct nfsd3_attrstat *);
int nfs3svc_release_fhandle2(struct svc_rqst *, __be32 *,
struct nfsd3_fhandle_pair *);
int nfs3svc_encode_entry(void *, const char *name,
int namlen, loff_t offset, u64 ino,
unsigned int);
int nfs3svc_encode_entry_plus(void *, const char *name,
int namlen, loff_t offset, u64 ino,
unsigned int);
__be32 *nfs3svc_encode_post_op_attr(struct svc_rqst *rqstp, __be32 *p,
struct svc_fh *fhp);
__be32 *nfs3svc_decode_fh(__be32 *p, struct svc_fh *fhp);
