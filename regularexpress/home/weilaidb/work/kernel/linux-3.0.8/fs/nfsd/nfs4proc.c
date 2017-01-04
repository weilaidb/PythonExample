#define NFSDDBG_FACILITY		NFSDDBG_PROC
static u32 nfsd_attrmask[] = ;
static u32 nfsd41_ex_attrmask[] = ;
static __be32
check_attr_support(struct svc_rqst *rqstp, struct nfsd4_compound_state *cstate,
u32 *bmval, u32 *writable)
static __be32
nfsd4_check_open_attributes(struct svc_rqst *rqstp,
struct nfsd4_compound_state *cstate, struct nfsd4_open *open)
static int
is_create_with_attrs(struct nfsd4_open *open)
static void
do_set_nfs4_acl(struct svc_rqst *rqstp, struct svc_fh *fhp,
struct nfs4_acl *acl, u32 *bmval)
static inline void
fh_dup2(struct svc_fh *dst, struct svc_fh *src)
static __be32
do_open_permission(struct svc_rqst *rqstp, struct svc_fh *current_fh, struct nfsd4_open *open, int accmode)
static __be32
do_open_lookup(struct svc_rqst *rqstp, struct svc_fh *current_fh, struct nfsd4_open *open)
static __be32
do_open_fhandle(struct svc_rqst *rqstp, struct svc_fh *current_fh, struct nfsd4_open *open)
static void
copy_clientid(clientid_t *clid, struct nfsd4_session *session)
static __be32
nfsd4_open(struct svc_rqst *rqstp, struct nfsd4_compound_state *cstate,
struct nfsd4_open *open)
static __be32
nfsd4_getfh(struct svc_rqst *rqstp, struct nfsd4_compound_state *cstate,
struct svc_fh **getfh)
static __be32
nfsd4_putfh(struct svc_rqst *rqstp, struct nfsd4_compound_state *cstate,
struct nfsd4_putfh *putfh)
static __be32
nfsd4_putrootfh(struct svc_rqst *rqstp, struct nfsd4_compound_state *cstate,
void *arg)
static __be32
nfsd4_restorefh(struct svc_rqst *rqstp, struct nfsd4_compound_state *cstate,
void *arg)
static __be32
nfsd4_savefh(struct svc_rqst *rqstp, struct nfsd4_compound_state *cstate,
void *arg)
static __be32
nfsd4_access(struct svc_rqst *rqstp, struct nfsd4_compound_state *cstate,
struct nfsd4_access *access)
static __be32
nfsd4_commit(struct svc_rqst *rqstp, struct nfsd4_compound_state *cstate,
struct nfsd4_commit *commit)
static __be32
nfsd4_create(struct svc_rqst *rqstp, struct nfsd4_compound_state *cstate,
struct nfsd4_create *create)
static __be32
nfsd4_getattr(struct svc_rqst *rqstp, struct nfsd4_compound_state *cstate,
struct nfsd4_getattr *getattr)
static __be32
nfsd4_link(struct svc_rqst *rqstp, struct nfsd4_compound_state *cstate,
struct nfsd4_link *link)
static __be32 nfsd4_do_lookupp(struct svc_rqst *rqstp, struct svc_fh *fh)
static __be32
nfsd4_lookupp(struct svc_rqst *rqstp, struct nfsd4_compound_state *cstate,
void *arg)
static __be32
nfsd4_lookup(struct svc_rqst *rqstp, struct nfsd4_compound_state *cstate,
struct nfsd4_lookup *lookup)
static __be32
nfsd4_read(struct svc_rqst *rqstp, struct nfsd4_compound_state *cstate,
struct nfsd4_read *read)
static __be32
nfsd4_readdir(struct svc_rqst *rqstp, struct nfsd4_compound_state *cstate,
struct nfsd4_readdir *readdir)
static __be32
nfsd4_readlink(struct svc_rqst *rqstp, struct nfsd4_compound_state *cstate,
struct nfsd4_readlink *readlink)
static __be32
nfsd4_remove(struct svc_rqst *rqstp, struct nfsd4_compound_state *cstate,
struct nfsd4_remove *remove)
static __be32
nfsd4_rename(struct svc_rqst *rqstp, struct nfsd4_compound_state *cstate,
struct nfsd4_rename *rename)
static __be32
nfsd4_secinfo(struct svc_rqst *rqstp, struct nfsd4_compound_state *cstate,
struct nfsd4_secinfo *secinfo)
static __be32
nfsd4_secinfo_no_name(struct svc_rqst *rqstp, struct nfsd4_compound_state *cstate,
struct nfsd4_secinfo_no_name *sin)
static __be32
nfsd4_setattr(struct svc_rqst *rqstp, struct nfsd4_compound_state *cstate,
struct nfsd4_setattr *setattr)
static __be32
nfsd4_write(struct svc_rqst *rqstp, struct nfsd4_compound_state *cstate,
struct nfsd4_write *write)
static __be32
_nfsd4_verify(struct svc_rqst *rqstp, struct nfsd4_compound_state *cstate,
struct nfsd4_verify *verify)
static __be32
nfsd4_nverify(struct svc_rqst *rqstp, struct nfsd4_compound_state *cstate,
struct nfsd4_verify *verify)
static __be32
nfsd4_verify(struct svc_rqst *rqstp, struct nfsd4_compound_state *cstate,
struct nfsd4_verify *verify)
static __be32
nfsd4_proc_null(struct svc_rqst *rqstp, void *argp, void *resp)
static inline void nfsd4_increment_op_stats(u32 opnum)
typedef __be32(*nfsd4op_func)(struct svc_rqst *, struct nfsd4_compound_state *,
void *);
enum nfsd4_op_flags ;
struct nfsd4_operation ;
static struct nfsd4_operation nfsd4_ops[];
static const char *nfsd4_op_name(unsigned opnum);
static __be32 nfs41_check_op_ordering(struct nfsd4_compoundargs *args)
static inline struct nfsd4_operation *OPDESC(struct nfsd4_op *op)
static bool need_wrongsec_check(struct svc_rqst *rqstp)
static __be32
nfsd4_proc_compound(struct svc_rqst *rqstp,
struct nfsd4_compoundargs *args,
struct nfsd4_compoundres *resp)
static struct nfsd4_operation nfsd4_ops[] = ;
static const char *nfsd4_op_name(unsigned opnum)
#define nfsd4_voidres			nfsd4_voidargs
struct nfsd4_voidargs ;
static struct svc_procedure		nfsd_procedures4[2] = ;
struct svc_version	nfsd_version4 = ;
