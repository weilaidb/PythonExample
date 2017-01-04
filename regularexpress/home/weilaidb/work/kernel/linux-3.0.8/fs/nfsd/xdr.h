#define LINUX_NFSD_H
struct nfsd_fhandle ;
struct nfsd_sattrargs ;
struct nfsd_diropargs ;
struct nfsd_readargs ;
struct nfsd_writeargs ;
struct nfsd_createargs ;
struct nfsd_renameargs ;
struct nfsd_readlinkargs ;
struct nfsd_linkargs ;
struct nfsd_symlinkargs ;
struct nfsd_readdirargs ;
struct nfsd_attrstat ;
struct nfsd_diropres  ;
struct nfsd_readlinkres ;
struct nfsd_readres ;
struct nfsd_readdirres ;
struct nfsd_statfsres ;
union nfsd_xdrstore ;
#define NFS2_SVC_XDRSIZE	sizeof(union nfsd_xdrstore)
int nfssvc_decode_void(struct svc_rqst *, __be32 *, void *);
int nfssvc_decode_fhandle(struct svc_rqst *, __be32 *, struct nfsd_fhandle *);
int nfssvc_decode_sattrargs(struct svc_rqst *, __be32 *,
struct nfsd_sattrargs *);
int nfssvc_decode_diropargs(struct svc_rqst *, __be32 *,
struct nfsd_diropargs *);
int nfssvc_decode_readargs(struct svc_rqst *, __be32 *,
struct nfsd_readargs *);
int nfssvc_decode_writeargs(struct svc_rqst *, __be32 *,
struct nfsd_writeargs *);
int nfssvc_decode_createargs(struct svc_rqst *, __be32 *,
struct nfsd_createargs *);
int nfssvc_decode_renameargs(struct svc_rqst *, __be32 *,
struct nfsd_renameargs *);
int nfssvc_decode_readlinkargs(struct svc_rqst *, __be32 *,
struct nfsd_readlinkargs *);
int nfssvc_decode_linkargs(struct svc_rqst *, __be32 *,
struct nfsd_linkargs *);
int nfssvc_decode_symlinkargs(struct svc_rqst *, __be32 *,
struct nfsd_symlinkargs *);
int nfssvc_decode_readdirargs(struct svc_rqst *, __be32 *,
struct nfsd_readdirargs *);
int nfssvc_encode_void(struct svc_rqst *, __be32 *, void *);
int nfssvc_encode_attrstat(struct svc_rqst *, __be32 *, struct nfsd_attrstat *);
int nfssvc_encode_diropres(struct svc_rqst *, __be32 *, struct nfsd_diropres *);
int nfssvc_encode_readlinkres(struct svc_rqst *, __be32 *, struct nfsd_readlinkres *);
int nfssvc_encode_readres(struct svc_rqst *, __be32 *, struct nfsd_readres *);
int nfssvc_encode_statfsres(struct svc_rqst *, __be32 *, struct nfsd_statfsres *);
int nfssvc_encode_readdirres(struct svc_rqst *, __be32 *, struct nfsd_readdirres *);
int nfssvc_encode_entry(void *, const char *name,
int namlen, loff_t offset, u64 ino, unsigned int);
int nfssvc_release_fhandle(struct svc_rqst *, __be32 *, struct nfsd_fhandle *);
__be32 *nfs2svc_encode_fattr(struct svc_rqst *rqstp, __be32 *p, struct svc_fh *fhp);
__be32 *nfs2svc_decode_fh(__be32 *p, struct svc_fh *fhp);
