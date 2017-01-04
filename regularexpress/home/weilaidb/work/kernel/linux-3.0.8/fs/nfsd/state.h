#define _NFSD4_STATE_H
typedef struct  clientid_t;
typedef struct  stateid_opaque_t;
typedef struct  stateid_t;
#define si_boot           si_opaque.so_boot
#define si_stateownerid   si_opaque.so_stateownerid
#define si_fileid         si_opaque.so_fileid
#define STATEID_FMT	"(%08x/%08x/%08x/%08x)"
#define STATEID_VAL(s) \
(s)->si_boot, \
(s)->si_stateownerid, \
(s)->si_fileid, \
(s)->si_generation
struct nfsd4_callback ;
struct nfs4_delegation ;
struct nfs4_cb_conn ;
#define NFSD_MAX_SLOTS_PER_SESSION     160
#define NFSD_MAX_OPS_PER_COMPOUND	16
#define NFSD_SLOT_CACHE_SIZE		1024
#define NFSD_CACHE_SIZE_SLOTS_PER_SESSION	32
#define NFSD_MAX_MEM_PER_SESSION  \
(NFSD_CACHE_SIZE_SLOTS_PER_SESSION * NFSD_SLOT_CACHE_SIZE)
struct nfsd4_slot ;
struct nfsd4_channel_attrs ;
struct nfsd4_create_session ;
struct nfsd4_bind_conn_to_session ;
struct nfsd4_clid_slot ;
struct nfsd4_conn ;
struct nfsd4_session ;
static inline void
nfsd4_put_session(struct nfsd4_session *ses)
static inline void
nfsd4_get_session(struct nfsd4_session *ses)
struct nfsd4_sessionid ;
#define HEXDIR_LEN     33
struct nfs4_client ;
static inline void
mark_client_expired(struct nfs4_client *clp)
static inline bool
is_client_expired(struct nfs4_client *clp)
struct nfs4_client_reclaim ;
static inline void
update_stateid(stateid_t *stateid)
#define NFSD4_REPLAY_ISIZE       112
struct nfs4_replay ;
struct nfs4_stateowner ;
struct nfs4_file ;
static inline struct file *find_writeable_file(struct nfs4_file *f)
static inline struct file *find_readable_file(struct nfs4_file *f)
static inline struct file *find_any_file(struct nfs4_file *f)
struct nfs4_stateid ;
#define HAS_SESSION             0x00000001
#define CONFIRM                 0x00000002
#define OPEN_STATE              0x00000004
#define LOCK_STATE              0x00000008
#define RD_STATE	        0x00000010
#define WR_STATE	        0x00000020
#define CLOSE_STATE             0x00000040
#define seqid_mutating_err(err)                       \
(((err) != nfserr_stale_clientid) &&    \
((err) != nfserr_bad_seqid) &&          \
((err) != nfserr_stale_stateid) &&      \
((err) != nfserr_bad_stateid))
struct nfsd4_compound_state;
extern __be32 nfs4_preprocess_stateid_op(struct nfsd4_compound_state *cstate,
stateid_t *stateid, int flags, struct file **filp);
extern void nfs4_lock_state(void);
extern void nfs4_unlock_state(void);
extern int nfs4_in_grace(void);
extern __be32 nfs4_check_open_reclaim(clientid_t *clid);
extern void nfs4_free_stateowner(struct kref *kref);
extern int set_callback_cred(void);
extern void nfsd4_probe_callback(struct nfs4_client *clp);
extern void nfsd4_probe_callback_sync(struct nfs4_client *clp);
extern void nfsd4_change_callback(struct nfs4_client *clp, struct nfs4_cb_conn *);
extern void nfsd4_do_callback_rpc(struct work_struct *);
extern void nfsd4_cb_recall(struct nfs4_delegation *dp);
extern int nfsd4_create_callback_queue(void);
extern void nfsd4_destroy_callback_queue(void);
extern void nfsd4_shutdown_callback(struct nfs4_client *);
extern void nfs4_put_delegation(struct nfs4_delegation *dp);
extern __be32 nfs4_make_rec_clidname(char *clidname, struct xdr_netobj *clname);
extern void nfsd4_init_recdir(char *recdir_name);
extern int nfsd4_recdir_load(void);
extern void nfsd4_shutdown_recdir(void);
extern int nfs4_client_to_reclaim(const char *name);
extern int nfs4_has_reclaimed_state(const char *name, bool use_exchange_id);
extern void nfsd4_recdir_purge_old(void);
extern int nfsd4_create_clid_dir(struct nfs4_client *clp);
extern void nfsd4_remove_clid_dir(struct nfs4_client *clp);
extern void release_session_client(struct nfsd4_session *);
static inline void
nfs4_put_stateowner(struct nfs4_stateowner *so)
static inline void
nfs4_get_stateowner(struct nfs4_stateowner *so)
