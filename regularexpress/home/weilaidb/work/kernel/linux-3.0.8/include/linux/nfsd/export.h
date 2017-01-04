#define NFSD_EXPORT_H
# include <linux/types.h>
# include <linux/nfsd/nfsfh.h>
#define NFSCLNT_IDMAX		1024
#define NFSCLNT_ADDRMAX		16
#define NFSCLNT_KEYMAX		32
#define NFSEXP_READONLY		0x0001
#define NFSEXP_INSECURE_PORT	0x0002
#define NFSEXP_ROOTSQUASH	0x0004
#define NFSEXP_ALLSQUASH	0x0008
#define NFSEXP_ASYNC		0x0010
#define NFSEXP_GATHERED_WRITES	0x0020
#define NFSEXP_NOHIDE		0x0200
#define NFSEXP_NOSUBTREECHECK	0x0400
#define	NFSEXP_NOAUTHNLM	0x0800
#define NFSEXP_MSNFS		0x1000
#define NFSEXP_FSID		0x2000
#define	NFSEXP_CROSSMOUNT	0x4000
#define	NFSEXP_NOACL		0x8000
#define	NFSEXP_V4ROOT		0x10000
#define NFSEXP_ALLFLAGS		0x17E3F
#define NFSEXP_SECINFO_FLAGS	(NFSEXP_READONLY | NFSEXP_ROOTSQUASH \
| NFSEXP_ALLSQUASH \
| NFSEXP_INSECURE_PORT)
#define MAX_FS_LOCATIONS	128
struct nfsd4_fs_location ;
struct nfsd4_fs_locations ;
#define MAX_SECINFO_LIST	8
struct exp_flavor_info ;
struct svc_export ;
struct svc_expkey ;
#define EX_ISSYNC(exp)		(!((exp)->ex_flags & NFSEXP_ASYNC))
#define EX_NOHIDE(exp)		((exp)->ex_flags & NFSEXP_NOHIDE)
#define EX_WGATHER(exp)		((exp)->ex_flags & NFSEXP_GATHERED_WRITES)
int nfsexp_flags(struct svc_rqst *rqstp, struct svc_export *exp);
__be32 check_nfsd_access(struct svc_export *exp, struct svc_rqst *rqstp);
int			nfsd_export_init(void);
void			nfsd_export_shutdown(void);
void			nfsd_export_flush(void);
void			exp_readlock(void);
void			exp_readunlock(void);
struct svc_export *	rqst_exp_get_by_name(struct svc_rqst *,
struct path *);
struct svc_export *	rqst_exp_parent(struct svc_rqst *,
struct path *);
int			exp_rootfh(struct auth_domain *,
char *path, struct knfsd_fh *, int maxsize);
__be32			exp_pseudoroot(struct svc_rqst *, struct svc_fh *);
__be32			nfserrno(int errno);
extern struct cache_detail svc_export_cache;
static inline void exp_put(struct svc_export *exp)
static inline void exp_get(struct svc_export *exp)
struct svc_export * rqst_exp_find(struct svc_rqst *, int, u32 *);
