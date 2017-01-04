#define NFSDDBG_FACILITY		NFSDDBG_FH
static int nfsd_acceptable(void *expv, struct dentry *dentry)
static inline __be32
nfsd_mode_check(struct svc_rqst *rqstp, umode_t mode, int type)
static __be32 nfsd_setuser_and_check_port(struct svc_rqst *rqstp,
struct svc_export *exp)
static inline __be32 check_pseudo_root(struct svc_rqst *rqstp,
struct dentry *dentry, struct svc_export *exp)
static __be32 nfsd_set_fh_dentry(struct svc_rqst *rqstp, struct svc_fh *fhp)
__be32
fh_verify(struct svc_rqst *rqstp, struct svc_fh *fhp, int type, int access)
static void _fh_update(struct svc_fh *fhp, struct svc_export *exp,
struct dentry *dentry)
static inline void _fh_update_old(struct dentry *dentry,
struct svc_export *exp,
struct knfsd_fh *fh)
static bool is_root_export(struct svc_export *exp)
static struct super_block *exp_sb(struct svc_export *exp)
static bool fsid_type_ok_for_exp(u8 fsid_type, struct svc_export *exp)
static void set_version_and_fsid_type(struct svc_fh *fhp, struct svc_export *exp, struct svc_fh *ref_fh)
__be32
fh_compose(struct svc_fh *fhp, struct svc_export *exp, struct dentry *dentry,
struct svc_fh *ref_fh)
__be32
fh_update(struct svc_fh *fhp)
void
fh_put(struct svc_fh *fhp)
char * SVCFH_fmt(struct svc_fh *fhp)
enum fsid_source fsid_source(struct svc_fh *fhp)
