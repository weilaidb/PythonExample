#define __LINUX_FS_NFS_NFS4_FS_H
struct idmap;
#define seqid_mutating_err(err)       \
(((err) != NFSERR_STALE_CLIENTID) &&  \
((err) != NFSERR_STALE_STATEID)  &&  \
((err) != NFSERR_BAD_STATEID)    &&  \
((err) != NFSERR_BAD_SEQID)      &&  \
((err) != NFSERR_BAD_XDR)        &&  \
((err) != NFSERR_RESOURCE)       &&  \
((err) != NFSERR_NOFILEHANDLE))
enum nfs4_client_state ;
enum nfs4_session_state ;
struct nfs4_minor_version_ops ;
struct rpc_sequence ;
#define NFS_SEQID_CONFIRMED 1
struct nfs_seqid_counter ;
struct nfs_seqid ;
static inline void nfs_confirm_seqid(struct nfs_seqid_counter *seqid, int status)
struct nfs_unique_id ;
struct nfs4_state_owner ;
enum ;
#define NFS_LOCK_NEW		0
#define NFS_LOCK_RECLAIM	1
#define NFS_LOCK_EXPIRED	2
struct nfs4_lock_owner ;
struct nfs4_lock_state ;
enum ;
struct nfs4_state ;
struct nfs4_exception ;
struct nfs4_state_recovery_ops ;
struct nfs4_state_maintenance_ops ;
extern const struct dentry_operations nfs4_dentry_operations;
extern const struct inode_operations nfs4_dir_inode_operations;
extern int nfs4_proc_setclientid(struct nfs_client *, u32, unsigned short, struct rpc_cred *, struct nfs4_setclientid_res *);
extern int nfs4_proc_setclientid_confirm(struct nfs_client *, struct nfs4_setclientid_res *arg, struct rpc_cred *);
extern int nfs4_proc_exchange_id(struct nfs_client *clp, struct rpc_cred *cred);
extern int nfs4_proc_async_renew(struct nfs_client *, struct rpc_cred *);
extern int nfs4_proc_renew(struct nfs_client *, struct rpc_cred *);
extern int nfs4_init_clientid(struct nfs_client *, struct rpc_cred *);
extern int nfs41_init_clientid(struct nfs_client *, struct rpc_cred *);
extern int nfs4_do_close(struct path *path, struct nfs4_state *state, gfp_t gfp_mask, int wait, bool roc);
extern int nfs4_server_capabilities(struct nfs_server *server, struct nfs_fh *fhandle);
extern int nfs4_proc_fs_locations(struct inode *dir, const struct qstr *name,
struct nfs4_fs_locations *fs_locations, struct page *page);
extern void nfs4_release_lockowner(const struct nfs4_lock_state *);
extern const struct xattr_handler *nfs4_xattr_handlers[];
#if defined(CONFIG_NFS_V4_1)
static inline struct nfs4_session *nfs4_get_session(const struct nfs_server *server)
extern int nfs4_setup_sequence(const struct nfs_server *server,
struct nfs4_sequence_args *args, struct nfs4_sequence_res *res,
int cache_reply, struct rpc_task *task);
extern int nfs41_setup_sequence(struct nfs4_session *session,
struct nfs4_sequence_args *args, struct nfs4_sequence_res *res,
int cache_reply, struct rpc_task *task);
extern void nfs4_destroy_session(struct nfs4_session *session);
extern struct nfs4_session *nfs4_alloc_session(struct nfs_client *clp);
extern int nfs4_proc_create_session(struct nfs_client *);
extern int nfs4_proc_destroy_session(struct nfs4_session *);
extern int nfs4_init_session(struct nfs_server *server);
extern int nfs4_proc_get_lease_time(struct nfs_client *clp,
struct nfs_fsinfo *fsinfo);
extern int nfs4_proc_layoutcommit(struct nfs4_layoutcommit_data *data,
bool sync);
static inline bool
is_ds_only_client(struct nfs_client *clp)
static inline bool
is_ds_client(struct nfs_client *clp)
static inline struct nfs4_session *nfs4_get_session(const struct nfs_server *server)
static inline int nfs4_setup_sequence(const struct nfs_server *server,
struct nfs4_sequence_args *args, struct nfs4_sequence_res *res,
int cache_reply, struct rpc_task *task)
static inline int nfs4_init_session(struct nfs_server *server)
static inline bool
is_ds_only_client(struct nfs_client *clp)
static inline bool
is_ds_client(struct nfs_client *clp)
extern const struct nfs4_minor_version_ops *nfs_v4_minor_ops[];
extern const u32 nfs4_fattr_bitmap[2];
extern const u32 nfs4_statfs_bitmap[2];
extern const u32 nfs4_pathconf_bitmap[2];
extern const u32 nfs4_fsinfo_bitmap[2];
extern const u32 nfs4_fs_locations_bitmap[2];
extern void nfs4_schedule_state_renewal(struct nfs_client *);
extern void nfs4_renewd_prepare_shutdown(struct nfs_server *);
extern void nfs4_kill_renewd(struct nfs_client *);
extern void nfs4_renew_state(struct work_struct *);
struct rpc_cred *nfs4_get_setclientid_cred(struct nfs_client *clp);
struct rpc_cred *nfs4_get_renew_cred_locked(struct nfs_client *clp);
#if defined(CONFIG_NFS_V4_1)
struct rpc_cred *nfs4_get_machine_cred_locked(struct nfs_client *clp);
struct rpc_cred *nfs4_get_exchange_id_cred(struct nfs_client *clp);
extern void nfs4_schedule_session_recovery(struct nfs4_session *);
static inline void nfs4_schedule_session_recovery(struct nfs4_session *session)
extern struct nfs4_state_owner * nfs4_get_state_owner(struct nfs_server *, struct rpc_cred *);
extern void nfs4_put_state_owner(struct nfs4_state_owner *);
extern struct nfs4_state * nfs4_get_open_state(struct inode *, struct nfs4_state_owner *);
extern void nfs4_put_open_state(struct nfs4_state *);
extern void nfs4_close_state(struct path *, struct nfs4_state *, fmode_t);
extern void nfs4_close_sync(struct path *, struct nfs4_state *, fmode_t);
extern void nfs4_state_set_mode_locked(struct nfs4_state *, fmode_t);
extern void nfs4_schedule_lease_recovery(struct nfs_client *);
extern void nfs4_schedule_state_manager(struct nfs_client *);
extern void nfs4_schedule_stateid_recovery(const struct nfs_server *, struct nfs4_state *);
extern void nfs41_handle_sequence_flag_errors(struct nfs_client *clp, u32 flags);
extern void nfs41_handle_recall_slot(struct nfs_client *clp);
extern void nfs4_put_lock_state(struct nfs4_lock_state *lsp);
extern int nfs4_set_lock_state(struct nfs4_state *state, struct file_lock *fl);
extern void nfs4_copy_stateid(nfs4_stateid *, struct nfs4_state *, fl_owner_t, pid_t);
extern struct nfs_seqid *nfs_alloc_seqid(struct nfs_seqid_counter *counter, gfp_t gfp_mask);
extern int nfs_wait_on_sequence(struct nfs_seqid *seqid, struct rpc_task *task);
extern void nfs_increment_open_seqid(int status, struct nfs_seqid *seqid);
extern void nfs_increment_lock_seqid(int status, struct nfs_seqid *seqid);
extern void nfs_release_seqid(struct nfs_seqid *seqid);
extern void nfs_free_seqid(struct nfs_seqid *seqid);
extern const nfs4_stateid zero_stateid;
extern struct rpc_procinfo nfs4_procedures[];
struct nfs4_mount_data;
extern struct svc_version nfs4_callback_version1;
extern struct svc_version nfs4_callback_version4;
#define nfs4_close_state(a, b, c) do  while (0)
#define nfs4_close_sync(a, b, c) do  while (0)
