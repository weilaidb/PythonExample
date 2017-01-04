#define _LINUX_NFSD_XDR4_H
#define NFSD4_MAX_TAGLEN	128
#define XDR_LEN(n)                     (((n) + 3) & ~3)
struct nfsd4_compound_state ;
static inline bool nfsd4_has_session(struct nfsd4_compound_state *cs)
struct nfsd4_change_info ;
struct nfsd4_access ;
struct nfsd4_close ;
struct nfsd4_commit ;
struct nfsd4_create ;
#define cr_linklen	u.link.namelen
#define cr_linkname	u.link.name
#define cr_specdata1	u.dev.specdata1
#define cr_specdata2	u.dev.specdata2
struct nfsd4_delegreturn ;
struct nfsd4_getattr ;
struct nfsd4_link ;
struct nfsd4_lock_denied ;
struct nfsd4_lock ;
#define lk_new_open_seqid       v.new.open_seqid
#define lk_new_open_stateid     v.new.open_stateid
#define lk_new_lock_seqid       v.new.lock_seqid
#define lk_new_clientid         v.new.clientid
#define lk_new_owner            v.new.owner
#define lk_old_lock_stateid     v.old.lock_stateid
#define lk_old_lock_seqid       v.old.lock_seqid
#define lk_rflags       u.ok.rflags
#define lk_resp_stateid u.ok.stateid
#define lk_denied       u.denied
struct nfsd4_lockt ;
struct nfsd4_locku ;
struct nfsd4_lookup ;
struct nfsd4_putfh ;
struct nfsd4_open ;
#define op_iattr	iattr
#define op_verf		verf
struct nfsd4_open_confirm ;
struct nfsd4_open_downgrade ;
struct nfsd4_read ;
struct nfsd4_readdir ;
struct nfsd4_release_lockowner ;
struct nfsd4_readlink ;
struct nfsd4_remove ;
struct nfsd4_rename ;
struct nfsd4_secinfo ;
struct nfsd4_secinfo_no_name ;
struct nfsd4_setattr ;
struct nfsd4_setclientid ;
struct nfsd4_setclientid_confirm ;
struct nfsd4_verify ;
struct nfsd4_write ;
struct nfsd4_exchange_id ;
struct nfsd4_sequence ;
struct nfsd4_destroy_session ;
struct nfsd4_reclaim_complete ;
struct nfsd4_op ;
struct nfsd4_compoundargs ;
struct nfsd4_compoundres ;
static inline bool nfsd4_is_solo_sequence(struct nfsd4_compoundres *resp)
static inline bool nfsd4_not_cached(struct nfsd4_compoundres *resp)
#define NFS4_SVC_XDRSIZE		sizeof(struct nfsd4_compoundargs)
static inline void
set_change_info(struct nfsd4_change_info *cinfo, struct svc_fh *fhp)
int nfs4svc_encode_voidres(struct svc_rqst *, __be32 *, void *);
int nfs4svc_decode_compoundargs(struct svc_rqst *, __be32 *,
struct nfsd4_compoundargs *);
int nfs4svc_encode_compoundres(struct svc_rqst *, __be32 *,
struct nfsd4_compoundres *);
void nfsd4_encode_operation(struct nfsd4_compoundres *, struct nfsd4_op *);
void nfsd4_encode_replay(struct nfsd4_compoundres *resp, struct nfsd4_op *op);
__be32 nfsd4_encode_fattr(struct svc_fh *fhp, struct svc_export *exp,
struct dentry *dentry, __be32 *buffer, int *countp,
u32 *bmval, struct svc_rqst *, int ignore_crossmnt);
extern __be32 nfsd4_setclientid(struct svc_rqst *rqstp,
struct nfsd4_compound_state *,
struct nfsd4_setclientid *setclid);
extern __be32 nfsd4_setclientid_confirm(struct svc_rqst *rqstp,
struct nfsd4_compound_state *,
struct nfsd4_setclientid_confirm *setclientid_confirm);
extern void nfsd4_store_cache_entry(struct nfsd4_compoundres *resp);
extern __be32 nfsd4_replay_cache_entry(struct nfsd4_compoundres *resp,
struct nfsd4_sequence *seq);
extern __be32 nfsd4_exchange_id(struct svc_rqst *rqstp,
struct nfsd4_compound_state *, struct nfsd4_exchange_id *);
extern __be32 nfsd4_bind_conn_to_session(struct svc_rqst *, struct nfsd4_compound_state *, struct nfsd4_bind_conn_to_session *);
extern __be32 nfsd4_create_session(struct svc_rqst *,
struct nfsd4_compound_state *,
struct nfsd4_create_session *);
extern __be32 nfsd4_sequence(struct svc_rqst *,
struct nfsd4_compound_state *,
struct nfsd4_sequence *);
extern __be32 nfsd4_destroy_session(struct svc_rqst *,
struct nfsd4_compound_state *,
struct nfsd4_destroy_session *);
__be32 nfsd4_reclaim_complete(struct svc_rqst *, struct nfsd4_compound_state *, struct nfsd4_reclaim_complete *);
extern __be32 nfsd4_process_open1(struct nfsd4_compound_state *,
struct nfsd4_open *open);
extern __be32 nfsd4_process_open2(struct svc_rqst *rqstp,
struct svc_fh *current_fh, struct nfsd4_open *open);
extern __be32 nfsd4_open_confirm(struct svc_rqst *rqstp,
struct nfsd4_compound_state *, struct nfsd4_open_confirm *oc);
extern __be32 nfsd4_close(struct svc_rqst *rqstp,
struct nfsd4_compound_state *,
struct nfsd4_close *close);
extern __be32 nfsd4_open_downgrade(struct svc_rqst *rqstp,
struct nfsd4_compound_state *,
struct nfsd4_open_downgrade *od);
extern __be32 nfsd4_lock(struct svc_rqst *rqstp, struct nfsd4_compound_state *,
struct nfsd4_lock *lock);
extern __be32 nfsd4_lockt(struct svc_rqst *rqstp,
struct nfsd4_compound_state *,
struct nfsd4_lockt *lockt);
extern __be32 nfsd4_locku(struct svc_rqst *rqstp,
struct nfsd4_compound_state *,
struct nfsd4_locku *locku);
extern __be32
nfsd4_release_lockowner(struct svc_rqst *rqstp,
struct nfsd4_compound_state *,
struct nfsd4_release_lockowner *rlockowner);
extern void nfsd4_release_compoundargs(struct nfsd4_compoundargs *);
extern __be32 nfsd4_delegreturn(struct svc_rqst *rqstp,
struct nfsd4_compound_state *, struct nfsd4_delegreturn *dr);
extern __be32 nfsd4_renew(struct svc_rqst *rqstp,
struct nfsd4_compound_state *, clientid_t *clid);
