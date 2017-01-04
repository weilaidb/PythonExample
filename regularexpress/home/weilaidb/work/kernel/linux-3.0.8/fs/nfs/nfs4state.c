#define OPENOWNER_POOL_SIZE	8
const nfs4_stateid zero_stateid;
static LIST_HEAD(nfs4_clientid_list);
int nfs4_init_clientid(struct nfs_client *clp, struct rpc_cred *cred)
struct rpc_cred *nfs4_get_machine_cred_locked(struct nfs_client *clp)
static void nfs4_clear_machine_cred(struct nfs_client *clp)
static struct rpc_cred *
nfs4_get_renew_cred_server_locked(struct nfs_server *server)
struct rpc_cred *nfs4_get_renew_cred_locked(struct nfs_client *clp)
#if defined(CONFIG_NFS_V4_1)
static int nfs41_setup_state_renewal(struct nfs_client *clp)
static void nfs4_end_drain_session(struct nfs_client *clp)
static int nfs4_wait_on_slot_tbl(struct nfs4_slot_table *tbl)
static int nfs4_begin_drain_session(struct nfs_client *clp)
int nfs41_init_clientid(struct nfs_client *clp, struct rpc_cred *cred)
struct rpc_cred *nfs4_get_exchange_id_cred(struct nfs_client *clp)
static struct rpc_cred *
nfs4_get_setclientid_cred_server(struct nfs_server *server)
struct rpc_cred *nfs4_get_setclientid_cred(struct nfs_client *clp)
static void nfs_alloc_unique_id_locked(struct rb_root *root,
struct nfs_unique_id *new,
__u64 minval, int maxbits)
static void nfs_free_unique_id(struct rb_root *root, struct nfs_unique_id *id)
static struct nfs4_state_owner *
nfs4_find_state_owner_locked(struct nfs_server *server, struct rpc_cred *cred)
static struct nfs4_state_owner *
nfs4_insert_state_owner_locked(struct nfs4_state_owner *new)
static void
nfs4_remove_state_owner_locked(struct nfs4_state_owner *sp)
static struct nfs4_state_owner *
nfs4_alloc_state_owner(void)
static void
nfs4_drop_state_owner(struct nfs4_state_owner *sp)
struct nfs4_state_owner *nfs4_get_state_owner(struct nfs_server *server,
struct rpc_cred *cred)
void nfs4_put_state_owner(struct nfs4_state_owner *sp)
static struct nfs4_state *
nfs4_alloc_open_state(void)
void
nfs4_state_set_mode_locked(struct nfs4_state *state, fmode_t fmode)
static struct nfs4_state *
__nfs4_find_state_byowner(struct inode *inode, struct nfs4_state_owner *owner)
static void
nfs4_free_open_state(struct nfs4_state *state)
struct nfs4_state *
nfs4_get_open_state(struct inode *inode, struct nfs4_state_owner *owner)
void nfs4_put_open_state(struct nfs4_state *state)
static void __nfs4_close(struct path *path, struct nfs4_state *state,
fmode_t fmode, gfp_t gfp_mask, int wait)
void nfs4_close_state(struct path *path, struct nfs4_state *state, fmode_t fmode)
void nfs4_close_sync(struct path *path, struct nfs4_state *state, fmode_t fmode)
static struct nfs4_lock_state *
__nfs4_find_lock_state(struct nfs4_state *state, fl_owner_t fl_owner, pid_t fl_pid, unsigned int type)
static struct nfs4_lock_state *nfs4_alloc_lock_state(struct nfs4_state *state, fl_owner_t fl_owner, pid_t fl_pid, unsigned int type)
static void nfs4_free_lock_state(struct nfs4_lock_state *lsp)
static struct nfs4_lock_state *nfs4_get_lock_state(struct nfs4_state *state, fl_owner_t owner, pid_t pid, unsigned int type)
void nfs4_put_lock_state(struct nfs4_lock_state *lsp)
static void nfs4_fl_copy_lock(struct file_lock *dst, struct file_lock *src)
static void nfs4_fl_release_lock(struct file_lock *fl)
static const struct file_lock_operations nfs4_fl_lock_ops = ;
int nfs4_set_lock_state(struct nfs4_state *state, struct file_lock *fl)
void nfs4_copy_stateid(nfs4_stateid *dst, struct nfs4_state *state, fl_owner_t fl_owner, pid_t fl_pid)
struct nfs_seqid *nfs_alloc_seqid(struct nfs_seqid_counter *counter, gfp_t gfp_mask)
void nfs_release_seqid(struct nfs_seqid *seqid)
void nfs_free_seqid(struct nfs_seqid *seqid)
static void nfs_increment_seqid(int status, struct nfs_seqid *seqid)
void nfs_increment_open_seqid(int status, struct nfs_seqid *seqid)
void nfs_increment_lock_seqid(int status, struct nfs_seqid *seqid)
int nfs_wait_on_sequence(struct nfs_seqid *seqid, struct rpc_task *task)
static int nfs4_run_state_manager(void *);
static void nfs4_clear_state_manager_bit(struct nfs_client *clp)
void nfs4_schedule_state_manager(struct nfs_client *clp)
void nfs4_schedule_lease_recovery(struct nfs_client *clp)
static int nfs4_state_mark_reclaim_reboot(struct nfs_client *clp, struct nfs4_state *state)
static int nfs4_state_mark_reclaim_nograce(struct nfs_client *clp, struct nfs4_state *state)
void nfs4_schedule_stateid_recovery(const struct nfs_server *server, struct nfs4_state *state)
static int nfs4_reclaim_locks(struct nfs4_state *state, const struct nfs4_state_recovery_ops *ops)
static int nfs4_reclaim_open_state(struct nfs4_state_owner *sp, const struct nfs4_state_recovery_ops *ops)
static void nfs4_clear_open_state(struct nfs4_state *state)
static void nfs4_reset_seqids(struct nfs_server *server,
int (*mark_reclaim)(struct nfs_client *clp, struct nfs4_state *state))
static void nfs4_state_mark_reclaim_helper(struct nfs_client *clp,
int (*mark_reclaim)(struct nfs_client *clp, struct nfs4_state *state))
static void nfs4_state_start_reclaim_reboot(struct nfs_client *clp)
static void nfs4_reclaim_complete(struct nfs_client *clp,
const struct nfs4_state_recovery_ops *ops)
static void nfs4_clear_reclaim_server(struct nfs_server *server)
static int nfs4_state_clear_reclaim_reboot(struct nfs_client *clp)
static void nfs4_state_end_reclaim_reboot(struct nfs_client *clp)
static void nfs_delegation_clear_all(struct nfs_client *clp)
static void nfs4_state_start_reclaim_nograce(struct nfs_client *clp)
static void nfs4_warn_keyexpired(const char *s)
static int nfs4_recovery_handle_error(struct nfs_client *clp, int error)
static int nfs4_do_reclaim(struct nfs_client *clp, const struct nfs4_state_recovery_ops *ops)
static int nfs4_check_lease(struct nfs_client *clp)
static int nfs4_reclaim_lease(struct nfs_client *clp)
void nfs4_schedule_session_recovery(struct nfs4_session *session)
EXPORT_SYMBOL_GPL(nfs4_schedule_session_recovery);
void nfs41_handle_recall_slot(struct nfs_client *clp)
static void nfs4_reset_all_state(struct nfs_client *clp)
static void nfs41_handle_server_reboot(struct nfs_client *clp)
static void nfs41_handle_state_revoked(struct nfs_client *clp)
static void nfs41_handle_recallable_state_revoked(struct nfs_client *clp)
static void nfs41_handle_cb_path_down(struct nfs_client *clp)
void nfs41_handle_sequence_flag_errors(struct nfs_client *clp, u32 flags)
static int nfs4_reset_session(struct nfs_client *clp)
static int nfs4_recall_slot(struct nfs_client *clp)
static int nfs4_reset_session(struct nfs_client *clp)
static int nfs4_end_drain_session(struct nfs_client *clp)
static int nfs4_recall_slot(struct nfs_client *clp)
static void nfs4_set_lease_expired(struct nfs_client *clp, int status)
static void nfs4_state_manager(struct nfs_client *clp)
static int nfs4_run_state_manager(void *ptr)
