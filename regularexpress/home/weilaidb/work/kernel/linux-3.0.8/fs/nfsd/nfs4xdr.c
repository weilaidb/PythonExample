#define NFSDDBG_FACILITY		NFSDDBG_XDR
#define NFS4_REFERRAL_FSID_MAJOR	0x8000000ULL
#define NFS4_REFERRAL_FSID_MINOR	0x8000000ULL
static __be32
check_filename(char *str, int len, __be32 err)
#define DECODE_HEAD				\
__be32 *p;				\
__be32 status
#define DECODE_TAIL				\
status = 0;				\
out:						\
return status;				\
xdr_error:					\
dprintk("NFSD: xdr error (%s:%d)\n",	\
__FILE__, __LINE__);	\
status = nfserr_bad_xdr;		\
goto out
#define READ32(x)         (x) = ntohl(*p++)
#define READ64(x)         do  while (0)
#define READTIME(x)       do  while (0)
#define READMEM(x,nbytes) do  while (0)
#define SAVEMEM(x,nbytes) do  while (0)
#define COPYMEM(x,nbytes) do  while (0)
#define READ_BUF(nbytes)  do  while (0)
static __be32 *read_buf(struct nfsd4_compoundargs *argp, u32 nbytes)
static int zero_clientid(clientid_t *clid)
static int
defer_free(struct nfsd4_compoundargs *argp,
void (*release)(const void *), void *p)
static char *savemem(struct nfsd4_compoundargs *argp, __be32 *p, int nbytes)
static __be32
nfsd4_decode_bitmap(struct nfsd4_compoundargs *argp, u32 *bmval)
static __be32
nfsd4_decode_fattr(struct nfsd4_compoundargs *argp, u32 *bmval,
struct iattr *iattr, struct nfs4_acl **acl)
static __be32
nfsd4_decode_stateid(struct nfsd4_compoundargs *argp, stateid_t *sid)
static __be32
nfsd4_decode_access(struct nfsd4_compoundargs *argp, struct nfsd4_access *access)
static __be32 nfsd4_decode_bind_conn_to_session(struct nfsd4_compoundargs *argp, struct nfsd4_bind_conn_to_session *bcts)
static __be32
nfsd4_decode_close(struct nfsd4_compoundargs *argp, struct nfsd4_close *close)
static __be32
nfsd4_decode_commit(struct nfsd4_compoundargs *argp, struct nfsd4_commit *commit)
static __be32
nfsd4_decode_create(struct nfsd4_compoundargs *argp, struct nfsd4_create *create)
static inline __be32
nfsd4_decode_delegreturn(struct nfsd4_compoundargs *argp, struct nfsd4_delegreturn *dr)
static inline __be32
nfsd4_decode_getattr(struct nfsd4_compoundargs *argp, struct nfsd4_getattr *getattr)
static __be32
nfsd4_decode_link(struct nfsd4_compoundargs *argp, struct nfsd4_link *link)
static __be32
nfsd4_decode_lock(struct nfsd4_compoundargs *argp, struct nfsd4_lock *lock)
static __be32
nfsd4_decode_lockt(struct nfsd4_compoundargs *argp, struct nfsd4_lockt *lockt)
static __be32
nfsd4_decode_locku(struct nfsd4_compoundargs *argp, struct nfsd4_locku *locku)
static __be32
nfsd4_decode_lookup(struct nfsd4_compoundargs *argp, struct nfsd4_lookup *lookup)
static __be32
nfsd4_decode_open(struct nfsd4_compoundargs *argp, struct nfsd4_open *open)
static __be32
nfsd4_decode_open_confirm(struct nfsd4_compoundargs *argp, struct nfsd4_open_confirm *open_conf)
static __be32
nfsd4_decode_open_downgrade(struct nfsd4_compoundargs *argp, struct nfsd4_open_downgrade *open_down)
static __be32
nfsd4_decode_putfh(struct nfsd4_compoundargs *argp, struct nfsd4_putfh *putfh)
static __be32
nfsd4_decode_read(struct nfsd4_compoundargs *argp, struct nfsd4_read *read)
static __be32
nfsd4_decode_readdir(struct nfsd4_compoundargs *argp, struct nfsd4_readdir *readdir)
static __be32
nfsd4_decode_remove(struct nfsd4_compoundargs *argp, struct nfsd4_remove *remove)
static __be32
nfsd4_decode_rename(struct nfsd4_compoundargs *argp, struct nfsd4_rename *rename)
static __be32
nfsd4_decode_renew(struct nfsd4_compoundargs *argp, clientid_t *clientid)
static __be32
nfsd4_decode_secinfo(struct nfsd4_compoundargs *argp,
struct nfsd4_secinfo *secinfo)
static __be32
nfsd4_decode_secinfo_no_name(struct nfsd4_compoundargs *argp,
struct nfsd4_secinfo_no_name *sin)
static __be32
nfsd4_decode_setattr(struct nfsd4_compoundargs *argp, struct nfsd4_setattr *setattr)
static __be32
nfsd4_decode_setclientid(struct nfsd4_compoundargs *argp, struct nfsd4_setclientid *setclientid)
static __be32
nfsd4_decode_setclientid_confirm(struct nfsd4_compoundargs *argp, struct nfsd4_setclientid_confirm *scd_c)
static __be32
nfsd4_decode_verify(struct nfsd4_compoundargs *argp, struct nfsd4_verify *verify)
static __be32
nfsd4_decode_write(struct nfsd4_compoundargs *argp, struct nfsd4_write *write)
static __be32
nfsd4_decode_release_lockowner(struct nfsd4_compoundargs *argp, struct nfsd4_release_lockowner *rlockowner)
static __be32
nfsd4_decode_exchange_id(struct nfsd4_compoundargs *argp,
struct nfsd4_exchange_id *exid)
static __be32
nfsd4_decode_create_session(struct nfsd4_compoundargs *argp,
struct nfsd4_create_session *sess)
static __be32
nfsd4_decode_destroy_session(struct nfsd4_compoundargs *argp,
struct nfsd4_destroy_session *destroy_session)
static __be32
nfsd4_decode_sequence(struct nfsd4_compoundargs *argp,
struct nfsd4_sequence *seq)
static __be32 nfsd4_decode_reclaim_complete(struct nfsd4_compoundargs *argp, struct nfsd4_reclaim_complete *rc)
static __be32
nfsd4_decode_noop(struct nfsd4_compoundargs *argp, void *p)
static __be32
nfsd4_decode_notsupp(struct nfsd4_compoundargs *argp, void *p)
typedef __be32(*nfsd4_dec)(struct nfsd4_compoundargs *argp, void *);
static nfsd4_dec nfsd4_dec_ops[] = ;
static nfsd4_dec nfsd41_dec_ops[] = ;
struct nfsd4_minorversion_ops ;
static struct nfsd4_minorversion_ops nfsd4_minorversion[] = ;
static __be32
nfsd4_decode_compound(struct nfsd4_compoundargs *argp)
#define WRITE32(n)               *p++ = htonl(n)
#define WRITE64(n)               do  while (0)
#define WRITEMEM(ptr,nbytes)     do  while (0)
static void write32(__be32 **p, u32 n)
static void write64(__be32 **p, u64 n)
static void write_change(__be32 **p, struct kstat *stat, struct inode *inode)
static void write_cinfo(__be32 **p, struct nfsd4_change_info *c)
#define RESERVE_SPACE(nbytes)	do  while (0)
#define ADJUST_ARGS()		resp->p = p
#define ENCODE_SEQID_OP_HEAD					\
__be32 *save;						\
\
save = resp->p;
#define ENCODE_SEQID_OP_TAIL(stateowner) do  while (0);
static __be32 nfsd4_encode_components(char sep, char *components,
__be32 **pp, int *buflen)
static __be32 nfsd4_encode_fs_location4(struct nfsd4_fs_location *location,
__be32 **pp, int *buflen)
static char *nfsd4_path(struct svc_rqst *rqstp, struct svc_export *exp, __be32 *stat)
static __be32 nfsd4_encode_fs_locations(struct svc_rqst *rqstp,
struct svc_export *exp,
__be32 **pp, int *buflen)
static u32 nfs4_ftypes[16] = ;
static __be32
nfsd4_encode_name(struct svc_rqst *rqstp, int whotype, uid_t id, int group,
__be32 **p, int *buflen)
static inline __be32
nfsd4_encode_user(struct svc_rqst *rqstp, uid_t uid, __be32 **p, int *buflen)
static inline __be32
nfsd4_encode_group(struct svc_rqst *rqstp, uid_t gid, __be32 **p, int *buflen)
static inline __be32
nfsd4_encode_aclname(struct svc_rqst *rqstp, int whotype, uid_t id, int group,
__be32 **p, int *buflen)
#define WORD0_ABSENT_FS_ATTRS (FATTR4_WORD0_FS_LOCATIONS | FATTR4_WORD0_FSID | \
FATTR4_WORD0_RDATTR_ERROR)
#define WORD1_ABSENT_FS_ATTRS FATTR4_WORD1_MOUNTED_ON_FILEID
static __be32 fattr_handle_absent_fs(u32 *bmval0, u32 *bmval1, u32 *rdattr_err)
__be32
nfsd4_encode_fattr(struct svc_fh *fhp, struct svc_export *exp,
struct dentry *dentry, __be32 *buffer, int *countp, u32 *bmval,
struct svc_rqst *rqstp, int ignore_crossmnt)
static inline int attributes_need_mount(u32 *bmval)
static __be32
nfsd4_encode_dirent_fattr(struct nfsd4_readdir *cd,
const char *name, int namlen, __be32 *p, int *buflen)
static __be32 *
nfsd4_encode_rdattr_error(__be32 *p, int buflen, __be32 nfserr)
static int
nfsd4_encode_dirent(void *ccdv, const char *name, int namlen,
loff_t offset, u64 ino, unsigned int d_type)
static void
nfsd4_encode_stateid(struct nfsd4_compoundres *resp, stateid_t *sid)
static __be32
nfsd4_encode_access(struct nfsd4_compoundres *resp, __be32 nfserr, struct nfsd4_access *access)
static __be32 nfsd4_encode_bind_conn_to_session(struct nfsd4_compoundres *resp, __be32 nfserr, struct nfsd4_bind_conn_to_session *bcts)
static __be32
nfsd4_encode_close(struct nfsd4_compoundres *resp, __be32 nfserr, struct nfsd4_close *close)
static __be32
nfsd4_encode_commit(struct nfsd4_compoundres *resp, __be32 nfserr, struct nfsd4_commit *commit)
static __be32
nfsd4_encode_create(struct nfsd4_compoundres *resp, __be32 nfserr, struct nfsd4_create *create)
static __be32
nfsd4_encode_getattr(struct nfsd4_compoundres *resp, __be32 nfserr, struct nfsd4_getattr *getattr)
static __be32
nfsd4_encode_getfh(struct nfsd4_compoundres *resp, __be32 nfserr, struct svc_fh **fhpp)
static void
nfsd4_encode_lock_denied(struct nfsd4_compoundres *resp, struct nfsd4_lock_denied *ld)
static __be32
nfsd4_encode_lock(struct nfsd4_compoundres *resp, __be32 nfserr, struct nfsd4_lock *lock)
static __be32
nfsd4_encode_lockt(struct nfsd4_compoundres *resp, __be32 nfserr, struct nfsd4_lockt *lockt)
static __be32
nfsd4_encode_locku(struct nfsd4_compoundres *resp, __be32 nfserr, struct nfsd4_locku *locku)
static __be32
nfsd4_encode_link(struct nfsd4_compoundres *resp, __be32 nfserr, struct nfsd4_link *link)
static __be32
nfsd4_encode_open(struct nfsd4_compoundres *resp, __be32 nfserr, struct nfsd4_open *open)
static __be32
nfsd4_encode_open_confirm(struct nfsd4_compoundres *resp, __be32 nfserr, struct nfsd4_open_confirm *oc)
static __be32
nfsd4_encode_open_downgrade(struct nfsd4_compoundres *resp, __be32 nfserr, struct nfsd4_open_downgrade *od)
static __be32
nfsd4_encode_read(struct nfsd4_compoundres *resp, __be32 nfserr,
struct nfsd4_read *read)
static __be32
nfsd4_encode_readlink(struct nfsd4_compoundres *resp, __be32 nfserr, struct nfsd4_readlink *readlink)
static __be32
nfsd4_encode_readdir(struct nfsd4_compoundres *resp, __be32 nfserr, struct nfsd4_readdir *readdir)
static __be32
nfsd4_encode_remove(struct nfsd4_compoundres *resp, __be32 nfserr, struct nfsd4_remove *remove)
static __be32
nfsd4_encode_rename(struct nfsd4_compoundres *resp, __be32 nfserr, struct nfsd4_rename *rename)
static __be32
nfsd4_do_encode_secinfo(struct nfsd4_compoundres *resp,
__be32 nfserr,struct svc_export *exp)
static __be32
nfsd4_encode_secinfo(struct nfsd4_compoundres *resp, __be32 nfserr,
struct nfsd4_secinfo *secinfo)
static __be32
nfsd4_encode_secinfo_no_name(struct nfsd4_compoundres *resp, __be32 nfserr,
struct nfsd4_secinfo_no_name *secinfo)
static __be32
nfsd4_encode_setattr(struct nfsd4_compoundres *resp, __be32 nfserr, struct nfsd4_setattr *setattr)
static __be32
nfsd4_encode_setclientid(struct nfsd4_compoundres *resp, __be32 nfserr, struct nfsd4_setclientid *scd)
static __be32
nfsd4_encode_write(struct nfsd4_compoundres *resp, __be32 nfserr, struct nfsd4_write *write)
static __be32
nfsd4_encode_exchange_id(struct nfsd4_compoundres *resp, int nfserr,
struct nfsd4_exchange_id *exid)
static __be32
nfsd4_encode_create_session(struct nfsd4_compoundres *resp, int nfserr,
struct nfsd4_create_session *sess)
static __be32
nfsd4_encode_destroy_session(struct nfsd4_compoundres *resp, int nfserr,
struct nfsd4_destroy_session *destroy_session)
static __be32
nfsd4_encode_sequence(struct nfsd4_compoundres *resp, int nfserr,
struct nfsd4_sequence *seq)
static __be32
nfsd4_encode_noop(struct nfsd4_compoundres *resp, __be32 nfserr, void *p)
typedef __be32(* nfsd4_enc)(struct nfsd4_compoundres *, __be32, void *);
static nfsd4_enc nfsd4_enc_ops[] = ;
static int nfsd4_check_drc_limit(struct nfsd4_compoundres *resp)
void
nfsd4_encode_operation(struct nfsd4_compoundres *resp, struct nfsd4_op *op)
void
nfsd4_encode_replay(struct nfsd4_compoundres *resp, struct nfsd4_op *op)
int
nfs4svc_encode_voidres(struct svc_rqst *rqstp, __be32 *p, void *dummy)
void nfsd4_release_compoundargs(struct nfsd4_compoundargs *args)
int
nfs4svc_decode_compoundargs(struct svc_rqst *rqstp, __be32 *p, struct nfsd4_compoundargs *args)
int
nfs4svc_encode_compoundres(struct svc_rqst *rqstp, __be32 *p, struct nfsd4_compoundres *resp)
