#define NFSDDBG_FACILITY                NFSDDBG_PROC
time_t nfsd4_lease = 90;
time_t nfsd4_grace = 90;
static time_t boot_time;
static u32 current_ownerid = 1;
static u32 current_fileid = 1;
static u32 current_delegid = 1;
static stateid_t zerostateid;
static stateid_t onestateid;
static u64 current_sessionid = 1;
#define ZERO_STATEID(stateid) (!memcmp((stateid), &zerostateid, sizeof(stateid_t)))
#define ONE_STATEID(stateid)  (!memcmp((stateid), &onestateid, sizeof(stateid_t)))
static struct nfs4_stateid * find_stateid(stateid_t *stid, int flags);
static struct nfs4_delegation * find_delegation_stateid(struct inode *ino, stateid_t *stid);
static char user_recovery_dirname[PATH_MAX] = "/var/lib/nfs/v4recovery";
static void nfs4_set_recdir(char *recdir);
static DEFINE_MUTEX(client_mutex);
static DEFINE_SPINLOCK(recall_lock);
static struct kmem_cache *stateowner_slab = NULL;
static struct kmem_cache *file_slab = NULL;
static struct kmem_cache *stateid_slab = NULL;
static struct kmem_cache *deleg_slab = NULL;
void
nfs4_lock_state(void)
void
nfs4_unlock_state(void)
static inline u32
opaque_hashval(const void *ptr, int nbytes)
static struct list_head del_recall_lru;
static inline void
put_nfs4_file(struct nfs4_file *fi)
static inline void
get_nfs4_file(struct nfs4_file *fi)
static int num_delegations;
unsigned int max_delegations;
#define OWNER_HASH_BITS              8
#define OWNER_HASH_SIZE             (1 << OWNER_HASH_BITS)
#define OWNER_HASH_MASK             (OWNER_HASH_SIZE - 1)
#define ownerid_hashval(id) \
((id) & OWNER_HASH_MASK)
#define ownerstr_hashval(clientid, ownername) \
(((clientid) + opaque_hashval((ownername.data), (ownername.len))) & OWNER_HASH_MASK)
static struct list_head	ownerid_hashtbl[OWNER_HASH_SIZE];
static struct list_head	ownerstr_hashtbl[OWNER_HASH_SIZE];
#define FILE_HASH_BITS                   8
#define FILE_HASH_SIZE                  (1 << FILE_HASH_BITS)
#define STATEID_HASH_BITS              10
#define STATEID_HASH_SIZE              (1 << STATEID_HASH_BITS)
#define STATEID_HASH_MASK              (STATEID_HASH_SIZE - 1)
#define file_hashval(x) \
hash_ptr(x, FILE_HASH_BITS)
#define stateid_hashval(owner_id, file_id)  \
(((owner_id) + (file_id)) & STATEID_HASH_MASK)
static struct list_head file_hashtbl[FILE_HASH_SIZE];
static struct list_head stateid_hashtbl[STATEID_HASH_SIZE];
static void __nfs4_file_get_access(struct nfs4_file *fp, int oflag)
static void nfs4_file_get_access(struct nfs4_file *fp, int oflag)
static void nfs4_file_put_fd(struct nfs4_file *fp, int oflag)
static void __nfs4_file_put_access(struct nfs4_file *fp, int oflag)
static void nfs4_file_put_access(struct nfs4_file *fp, int oflag)
static struct nfs4_delegation *
alloc_init_deleg(struct nfs4_client *clp, struct nfs4_stateid *stp, struct svc_fh *current_fh, u32 type)
void
nfs4_put_delegation(struct nfs4_delegation *dp)
static void nfs4_put_deleg_lease(struct nfs4_file *fp)
static void
unhash_delegation(struct nfs4_delegation *dp)
static DEFINE_SPINLOCK(client_lock);
#define CLIENT_HASH_BITS                 4
#define CLIENT_HASH_SIZE                (1 << CLIENT_HASH_BITS)
#define CLIENT_HASH_MASK                (CLIENT_HASH_SIZE - 1)
#define clientid_hashval(id) \
((id) & CLIENT_HASH_MASK)
#define clientstr_hashval(name) \
(opaque_hashval((name), 8) & CLIENT_HASH_MASK)
static struct list_head	reclaim_str_hashtbl[CLIENT_HASH_SIZE];
static int reclaim_str_hashtbl_size = 0;
static struct list_head	conf_id_hashtbl[CLIENT_HASH_SIZE];
static struct list_head	conf_str_hashtbl[CLIENT_HASH_SIZE];
static struct list_head	unconf_str_hashtbl[CLIENT_HASH_SIZE];
static struct list_head	unconf_id_hashtbl[CLIENT_HASH_SIZE];
static struct list_head client_lru;
static struct list_head close_lru;
static void
set_access(unsigned int *access, unsigned long bmap)
static void
set_deny(unsigned int *deny, unsigned long bmap)
static int
test_share(struct nfs4_stateid *stp, struct nfsd4_open *open)
static int nfs4_access_to_omode(u32 access)
static void unhash_generic_stateid(struct nfs4_stateid *stp)
static void free_generic_stateid(struct nfs4_stateid *stp)
static void release_lock_stateid(struct nfs4_stateid *stp)
static void unhash_lockowner(struct nfs4_stateowner *sop)
static void release_lockowner(struct nfs4_stateowner *sop)
static void
release_stateid_lockowners(struct nfs4_stateid *open_stp)
static void release_open_stateid(struct nfs4_stateid *stp)
static void unhash_openowner(struct nfs4_stateowner *sop)
static void release_openowner(struct nfs4_stateowner *sop)
#define SESSION_HASH_SIZE	512
static struct list_head sessionid_hashtbl[SESSION_HASH_SIZE];
static inline int
hash_sessionid(struct nfs4_sessionid *sessionid)
static inline void
dump_sessionid(const char *fn, struct nfs4_sessionid *sessionid)
static void
gen_sessionid(struct nfsd4_session *ses)
#define NFSD_MIN_HDR_SEQ_SZ  (24 + 12 + 44)
static void
free_session_slots(struct nfsd4_session *ses)
static inline int slot_bytes(struct nfsd4_channel_attrs *ca)
static int nfsd4_sanitize_slot_size(u32 size)
static int nfsd4_get_drc_mem(int slotsize, u32 num)
static void nfsd4_put_drc_mem(int slotsize, int num)
static struct nfsd4_session *alloc_session(int slotsize, int numslots)
static void init_forechannel_attrs(struct nfsd4_channel_attrs *new, struct nfsd4_channel_attrs *req, int numslots, int slotsize)
static void free_conn(struct nfsd4_conn *c)
static void nfsd4_conn_lost(struct svc_xpt_user *u)
static struct nfsd4_conn *alloc_conn(struct svc_rqst *rqstp, u32 flags)
static void __nfsd4_hash_conn(struct nfsd4_conn *conn, struct nfsd4_session *ses)
static void nfsd4_hash_conn(struct nfsd4_conn *conn, struct nfsd4_session *ses)
static int nfsd4_register_conn(struct nfsd4_conn *conn)
static __be32 nfsd4_new_conn(struct svc_rqst *rqstp, struct nfsd4_session *ses, u32 dir)
static __be32 nfsd4_new_conn_from_crses(struct svc_rqst *rqstp, struct nfsd4_session *ses)
static void nfsd4_del_conns(struct nfsd4_session *s)
void free_session(struct kref *kref)
static struct nfsd4_session *alloc_init_session(struct svc_rqst *rqstp, struct nfs4_client *clp, struct nfsd4_create_session *cses)
static struct nfsd4_session *
find_in_sessionid_hashtbl(struct nfs4_sessionid *sessionid)
static void
unhash_session(struct nfsd4_session *ses)
static inline void
renew_client_locked(struct nfs4_client *clp)
static inline void
renew_client(struct nfs4_client *clp)
static int
STALE_CLIENTID(clientid_t *clid)
static struct nfs4_client *alloc_client(struct xdr_netobj name)
static inline void
free_client(struct nfs4_client *clp)
void
release_session_client(struct nfsd4_session *session)
static inline void
unhash_client_locked(struct nfs4_client *clp)
static void
expire_client(struct nfs4_client *clp)
static void copy_verf(struct nfs4_client *target, nfs4_verifier *source)
static void copy_clid(struct nfs4_client *target, struct nfs4_client *source)
static void copy_cred(struct svc_cred *target, struct svc_cred *source)
static int same_name(const char *n1, const char *n2)
static int
same_verf(nfs4_verifier *v1, nfs4_verifier *v2)
static int
same_clid(clientid_t *cl1, clientid_t *cl2)
static int
same_creds(struct svc_cred *cr1, struct svc_cred *cr2)
static void gen_clid(struct nfs4_client *clp)
static void gen_confirm(struct nfs4_client *clp)
static struct nfs4_client *create_client(struct xdr_netobj name, char *recdir,
struct svc_rqst *rqstp, nfs4_verifier *verf)
static int check_name(struct xdr_netobj name)
static void
add_to_unconfirmed(struct nfs4_client *clp, unsigned int strhashval)
static void
move_to_confirmed(struct nfs4_client *clp)
static struct nfs4_client *
find_confirmed_client(clientid_t *clid)
static struct nfs4_client *
find_unconfirmed_client(clientid_t *clid)
static bool clp_used_exchangeid(struct nfs4_client *clp)
static struct nfs4_client *
find_confirmed_client_by_str(const char *dname, unsigned int hashval)
static struct nfs4_client *
find_unconfirmed_client_by_str(const char *dname, unsigned int hashval)
static void rpc_svcaddr2sockaddr(struct sockaddr *sa, unsigned short family, union svc_addr_u *svcaddr)
static void
gen_callback(struct nfs4_client *clp, struct nfsd4_setclientid *se, struct svc_rqst *rqstp)
void
nfsd4_store_cache_entry(struct nfsd4_compoundres *resp)
static __be32
nfsd4_enc_sequence_replay(struct nfsd4_compoundargs *args,
struct nfsd4_compoundres *resp)
__be32
nfsd4_replay_cache_entry(struct nfsd4_compoundres *resp,
struct nfsd4_sequence *seq)
static void
nfsd4_set_ex_flags(struct nfs4_client *new, struct nfsd4_exchange_id *clid)
__be32
nfsd4_exchange_id(struct svc_rqst *rqstp,
struct nfsd4_compound_state *cstate,
struct nfsd4_exchange_id *exid)
static int
check_slot_seqid(u32 seqid, u32 slot_seqid, int slot_inuse)
static void
nfsd4_cache_create_session(struct nfsd4_create_session *cr_ses,
struct nfsd4_clid_slot *slot, int nfserr)
static __be32
nfsd4_replay_create_session(struct nfsd4_create_session *cr_ses,
struct nfsd4_clid_slot *slot)
__be32
nfsd4_create_session(struct svc_rqst *rqstp,
struct nfsd4_compound_state *cstate,
struct nfsd4_create_session *cr_ses)
static bool nfsd4_last_compound_op(struct svc_rqst *rqstp)
static __be32 nfsd4_map_bcts_dir(u32 *dir)
__be32 nfsd4_bind_conn_to_session(struct svc_rqst *rqstp,
struct nfsd4_compound_state *cstate,
struct nfsd4_bind_conn_to_session *bcts)
static bool nfsd4_compound_in_session(struct nfsd4_session *session, struct nfs4_sessionid *sid)
__be32
nfsd4_destroy_session(struct svc_rqst *r,
struct nfsd4_compound_state *cstate,
struct nfsd4_destroy_session *sessionid)
static struct nfsd4_conn *__nfsd4_find_conn(struct svc_xprt *xpt, struct nfsd4_session *s)
static void nfsd4_sequence_check_conn(struct nfsd4_conn *new, struct nfsd4_session *ses)
static bool nfsd4_session_too_many_ops(struct svc_rqst *rqstp, struct nfsd4_session *session)
__be32
nfsd4_sequence(struct svc_rqst *rqstp,
struct nfsd4_compound_state *cstate,
struct nfsd4_sequence *seq)
__be32
nfsd4_reclaim_complete(struct svc_rqst *rqstp, struct nfsd4_compound_state *cstate, struct nfsd4_reclaim_complete *rc)
__be32
nfsd4_setclientid(struct svc_rqst *rqstp, struct nfsd4_compound_state *cstate,
struct nfsd4_setclientid *setclid)
__be32
nfsd4_setclientid_confirm(struct svc_rqst *rqstp,
struct nfsd4_compound_state *cstate,
struct nfsd4_setclientid_confirm *setclientid_confirm)
static inline struct nfs4_file *
alloc_init_file(struct inode *ino)
static void
nfsd4_free_slab(struct kmem_cache **slab)
void
nfsd4_free_slabs(void)
static int
nfsd4_init_slabs(void)
void
nfs4_free_stateowner(struct kref *kref)
static inline struct nfs4_stateowner *
alloc_stateowner(struct xdr_netobj *owner)
static struct nfs4_stateowner *
alloc_init_open_stateowner(unsigned int strhashval, struct nfs4_client *clp, struct nfsd4_open *open)
static inline void
init_stateid(struct nfs4_stateid *stp, struct nfs4_file *fp, struct nfsd4_open *open)
static void
move_to_close_lru(struct nfs4_stateowner *sop)
static int
same_owner_str(struct nfs4_stateowner *sop, struct xdr_netobj *owner,
clientid_t *clid)
static struct nfs4_stateowner *
find_openstateowner_str(unsigned int hashval, struct nfsd4_open *open)
static struct nfs4_file *
find_file(struct inode *ino)
static inline int access_valid(u32 x, u32 minorversion)
static inline int deny_valid(u32 x)
static __be32
nfs4_share_conflict(struct svc_fh *current_fh, unsigned int deny_type)
static void nfsd_break_one_deleg(struct nfs4_delegation *dp)
static void nfsd_break_deleg_cb(struct file_lock *fl)
static
int nfsd_change_deleg_cb(struct file_lock **onlist, int arg)
static const struct lock_manager_operations nfsd_lease_mng_ops = ;
__be32
nfsd4_process_open1(struct nfsd4_compound_state *cstate,
struct nfsd4_open *open)
static inline __be32
nfs4_check_delegmode(struct nfs4_delegation *dp, int flags)
static struct nfs4_delegation *
find_delegation_file(struct nfs4_file *fp, stateid_t *stid)
static int share_access_to_flags(u32 share_access)
static __be32
nfs4_check_deleg(struct nfs4_file *fp, struct nfsd4_open *open,
struct nfs4_delegation **dp)
static __be32
nfs4_check_open(struct nfs4_file *fp, struct nfsd4_open *open, struct nfs4_stateid **stpp)
static inline struct nfs4_stateid *
nfs4_alloc_stateid(void)
static inline int nfs4_access_to_access(u32 nfs4_access)
static __be32 nfs4_get_vfs_file(struct svc_rqst *rqstp, struct nfs4_file *fp,
struct svc_fh *cur_fh, struct nfsd4_open *open)
static __be32
nfs4_new_open(struct svc_rqst *rqstp, struct nfs4_stateid **stpp,
struct nfs4_file *fp, struct svc_fh *cur_fh,
struct nfsd4_open *open)
static inline __be32
nfsd4_truncate(struct svc_rqst *rqstp, struct svc_fh *fh,
struct nfsd4_open *open)
static __be32
nfs4_upgrade_open(struct svc_rqst *rqstp, struct nfs4_file *fp, struct svc_fh *cur_fh, struct nfs4_stateid *stp, struct nfsd4_open *open)
static void
nfs4_set_claim_prev(struct nfsd4_open *open)
static bool nfsd4_cb_channel_good(struct nfs4_client *clp)
static struct file_lock *nfs4_alloc_init_lease(struct nfs4_delegation *dp, int flag)
static int nfs4_setlease(struct nfs4_delegation *dp, int flag)
static int nfs4_set_delegation(struct nfs4_delegation *dp, int flag)
static void
nfs4_open_delegation(struct svc_fh *fh, struct nfsd4_open *open, struct nfs4_stateid *stp)
__be32
nfsd4_process_open2(struct svc_rqst *rqstp, struct svc_fh *current_fh, struct nfsd4_open *open)
__be32
nfsd4_renew(struct svc_rqst *rqstp, struct nfsd4_compound_state *cstate,
clientid_t *clid)
static struct lock_manager nfsd4_manager = ;
static void
nfsd4_end_grace(void)
static time_t
nfs4_laundromat(void)
static struct workqueue_struct *laundry_wq;
static void laundromat_main(struct work_struct *);
static DECLARE_DELAYED_WORK(laundromat_work, laundromat_main);
static void
laundromat_main(struct work_struct *not_used)
static struct nfs4_stateowner *
search_close_lru(u32 st_id, int flags)
static inline int
nfs4_check_fh(struct svc_fh *fhp, struct nfs4_stateid *stp)
static int
STALE_STATEID(stateid_t *stateid)
static inline int
access_permit_read(unsigned long access_bmap)
static inline int
access_permit_write(unsigned long access_bmap)
static
__be32 nfs4_check_openmode(struct nfs4_stateid *stp, int flags)
static inline __be32
check_special_stateids(svc_fh *current_fh, stateid_t *stateid, int flags)
static inline int
grace_disallows_io(struct inode *inode)
static int check_stateid_generation(stateid_t *in, stateid_t *ref, int flags)
static int is_delegation_stateid(stateid_t *stateid)
__be32
nfs4_preprocess_stateid_op(struct nfsd4_compound_state *cstate,
stateid_t *stateid, int flags, struct file **filpp)
static inline int
setlkflg (int type)
static __be32
nfs4_preprocess_seqid_op(struct nfsd4_compound_state *cstate, u32 seqid,
stateid_t *stateid, int flags,
struct nfs4_stateowner **sopp,
struct nfs4_stateid **stpp, struct nfsd4_lock *lock)
__be32
nfsd4_open_confirm(struct svc_rqst *rqstp, struct nfsd4_compound_state *cstate,
struct nfsd4_open_confirm *oc)
static inline void nfs4_file_downgrade(struct nfs4_stateid *stp, unsigned int to_access)
static void
reset_union_bmap_deny(unsigned long deny, unsigned long *bmap)
__be32
nfsd4_open_downgrade(struct svc_rqst *rqstp,
struct nfsd4_compound_state *cstate,
struct nfsd4_open_downgrade *od)
__be32
nfsd4_close(struct svc_rqst *rqstp, struct nfsd4_compound_state *cstate,
struct nfsd4_close *close)
__be32
nfsd4_delegreturn(struct svc_rqst *rqstp, struct nfsd4_compound_state *cstate,
struct nfsd4_delegreturn *dr)
#define LOFF_OVERFLOW(start, len)      ((u64)(len) > ~(u64)(start))
#define LOCK_HASH_BITS              8
#define LOCK_HASH_SIZE             (1 << LOCK_HASH_BITS)
#define LOCK_HASH_MASK             (LOCK_HASH_SIZE - 1)
static inline u64
end_offset(u64 start, u64 len)
static inline u64
last_byte_offset(u64 start, u64 len)
#define lockownerid_hashval(id) \
((id) & LOCK_HASH_MASK)
static inline unsigned int
lock_ownerstr_hashval(struct inode *inode, u32 cl_id,
struct xdr_netobj *ownername)
static struct list_head lock_ownerid_hashtbl[LOCK_HASH_SIZE];
static struct list_head	lock_ownerstr_hashtbl[LOCK_HASH_SIZE];
static struct list_head lockstateid_hashtbl[STATEID_HASH_SIZE];
static struct nfs4_stateid *
find_stateid(stateid_t *stid, int flags)
static struct nfs4_delegation *
find_delegation_stateid(struct inode *ino, stateid_t *stid)
static inline void
nfs4_transform_lock_offset(struct file_lock *lock)
static const struct lock_manager_operations nfsd_posix_mng_ops  = ;
static inline void
nfs4_set_lock_denied(struct file_lock *fl, struct nfsd4_lock_denied *deny)
static struct nfs4_stateowner *
find_lockstateowner_str(struct inode *inode, clientid_t *clid,
struct xdr_netobj *owner)
static struct nfs4_stateowner *
alloc_init_lock_stateowner(unsigned int strhashval, struct nfs4_client *clp, struct nfs4_stateid *open_stp, struct nfsd4_lock *lock)
static struct nfs4_stateid *
alloc_init_lock_stateid(struct nfs4_stateowner *sop, struct nfs4_file *fp, struct nfs4_stateid *open_stp)
static int
check_lock_length(u64 offset, u64 length)
static void get_lock_access(struct nfs4_stateid *lock_stp, u32 access)
__be32
nfsd4_lock(struct svc_rqst *rqstp, struct nfsd4_compound_state *cstate,
struct nfsd4_lock *lock)
static int nfsd_test_lock(struct svc_rqst *rqstp, struct svc_fh *fhp, struct file_lock *lock)
__be32
nfsd4_lockt(struct svc_rqst *rqstp, struct nfsd4_compound_state *cstate,
struct nfsd4_lockt *lockt)
__be32
nfsd4_locku(struct svc_rqst *rqstp, struct nfsd4_compound_state *cstate,
struct nfsd4_locku *locku)
static int
check_for_locks(struct nfs4_file *filp, struct nfs4_stateowner *lowner)
__be32
nfsd4_release_lockowner(struct svc_rqst *rqstp,
struct nfsd4_compound_state *cstate,
struct nfsd4_release_lockowner *rlockowner)
static inline struct nfs4_client_reclaim *
alloc_reclaim(void)
int
nfs4_has_reclaimed_state(const char *name, bool use_exchange_id)
int
nfs4_client_to_reclaim(const char *name)
static void
nfs4_release_reclaim(void)
static struct nfs4_client_reclaim *
nfs4_find_reclaim_client(clientid_t *clid)
__be32
nfs4_check_open_reclaim(clientid_t *clid)
int
nfs4_state_init(void)
static void
nfsd4_load_reboot_recovery_data(void)
static void
set_max_delegations(void)
static int
__nfs4_state_start(void)
int
nfs4_state_start(void)
static void
__nfs4_state_shutdown(void)
void
nfs4_state_shutdown(void)
static void
nfs4_set_recdir(char *recdir)
int
nfs4_reset_recoverydir(char *recdir)
char *
nfs4_recoverydir(void)
