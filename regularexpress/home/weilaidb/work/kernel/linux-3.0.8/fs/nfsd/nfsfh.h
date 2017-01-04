#define _LINUX_NFSD_FH_INT_H
enum nfsd_fsid ;
enum fsid_source ;
extern enum fsid_source fsid_source(struct svc_fh *fhp);
static inline void mk_fsid(int vers, u32 *fsidv, dev_t dev, ino_t ino,
u32 fsid, unsigned char *uuid)
static inline int key_len(int type)
extern char * SVCFH_fmt(struct svc_fh *fhp);
__be32	fh_verify(struct svc_rqst *, struct svc_fh *, int, int);
__be32	fh_compose(struct svc_fh *, struct svc_export *, struct dentry *, struct svc_fh *);
__be32	fh_update(struct svc_fh *);
void	fh_put(struct svc_fh *);
static __inline__ struct svc_fh *
fh_copy(struct svc_fh *dst, struct svc_fh *src)
static inline void
fh_copy_shallow(struct knfsd_fh *dst, struct knfsd_fh *src)
static __inline__ struct svc_fh *
fh_init(struct svc_fh *fhp, int maxsize)
static inline void
fill_pre_wcc(struct svc_fh *fhp)
extern void fill_post_wcc(struct svc_fh *);
#define	fill_pre_wcc(ignored)
#define fill_post_wcc(notused)
static inline void
fh_lock_nested(struct svc_fh *fhp, unsigned int subclass)
static inline void
fh_lock(struct svc_fh *fhp)
static inline void
fh_unlock(struct svc_fh *fhp)
