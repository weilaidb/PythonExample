#define NFSDBG_FACILITY		NFSDBG_PROC
#define NFS4_POLL_RETRY_MIN	(HZ/10)
#define NFS4_POLL_RETRY_MAX	(15*HZ)
#define NFS4_MAX_LOOP_ON_RECOVER (10)
struct nfs4_opendata;
static int _nfs4_proc_open(struct nfs4_opendata *data);
static int _nfs4_recover_proc_open(struct nfs4_opendata *data);
static int nfs4_do_fsinfo(struct nfs_server *, struct nfs_fh *, struct nfs_fsinfo *);
static int nfs4_async_handle_error(struct rpc_task *, const struct nfs_server *, struct nfs4_state *);
static int _nfs4_proc_lookup(struct rpc_clnt *client, struct inode *dir,
const struct qstr *name, struct nfs_fh *fhandle,
struct nfs_fattr *fattr);
static int _nfs4_proc_getattr(struct nfs_server *server, struct nfs_fh *fhandle, struct nfs_fattr *fattr);
static int nfs4_do_setattr(struct inode *inode, struct rpc_cred *cred,
struct nfs_fattr *fattr, struct iattr *sattr,
struct nfs4_state *state);
static int nfs4_map_errors(int err)
const u32 nfs4_fattr_bitmap[2] = ;
const u32 nfs4_statfs_bitmap[2] = ;
const u32 nfs4_pathconf_bitmap[2] = ;
const u32 nfs4_fsinfo_bitmap[2] = ;
const u32 nfs4_fs_locations_bitmap[2] = ;
static void nfs4_setup_readdir(u64 cookie, __be32 *verifier, struct dentry *dentry,
struct nfs4_readdir_arg *readdir)
static int nfs4_wait_clnt_recover(struct nfs_client *clp)
static int nfs4_delay(struct rpc_clnt *clnt, long *timeout)
static int nfs4_handle_exception(struct nfs_server *server, int errorcode, struct nfs4_exception *exception)
static void do_renew_lease(struct nfs_client *clp, unsigned long timestamp)
static void renew_lease(const struct nfs_server *server, unsigned long timestamp)
#if defined(CONFIG_NFS_V4_1)
static void
nfs4_free_slot(struct nfs4_slot_table *tbl, struct nfs4_slot *free_slot)
static void nfs4_check_drain_fc_complete(struct nfs4_session *ses)
void nfs4_check_drain_bc_complete(struct nfs4_session *ses)
static void nfs41_sequence_free_slot(struct nfs4_sequence_res *res)
static int nfs41_sequence_done(struct rpc_task *task, struct nfs4_sequence_res *res)
static int nfs4_sequence_done(struct rpc_task *task,
struct nfs4_sequence_res *res)
static u8
nfs4_find_slot(struct nfs4_slot_table *tbl)
int nfs41_setup_sequence(struct nfs4_session *session,
struct nfs4_sequence_args *args,
struct nfs4_sequence_res *res,
int cache_reply,
struct rpc_task *task)
EXPORT_SYMBOL_GPL(nfs41_setup_sequence);
int nfs4_setup_sequence(const struct nfs_server *server,
struct nfs4_sequence_args *args,
struct nfs4_sequence_res *res,
int cache_reply,
struct rpc_task *task)
struct nfs41_call_sync_data ;
static void nfs41_call_sync_prepare(struct rpc_task *task, void *calldata)
static void nfs41_call_priv_sync_prepare(struct rpc_task *task, void *calldata)
static void nfs41_call_sync_done(struct rpc_task *task, void *calldata)
struct rpc_call_ops nfs41_call_sync_ops = ;
struct rpc_call_ops nfs41_call_priv_sync_ops = ;
static int nfs4_call_sync_sequence(struct rpc_clnt *clnt,
struct nfs_server *server,
struct rpc_message *msg,
struct nfs4_sequence_args *args,
struct nfs4_sequence_res *res,
int cache_reply,
int privileged)
int _nfs4_call_sync_session(struct rpc_clnt *clnt,
struct nfs_server *server,
struct rpc_message *msg,
struct nfs4_sequence_args *args,
struct nfs4_sequence_res *res,
int cache_reply)
static int nfs4_sequence_done(struct rpc_task *task,
struct nfs4_sequence_res *res)
int _nfs4_call_sync(struct rpc_clnt *clnt,
struct nfs_server *server,
struct rpc_message *msg,
struct nfs4_sequence_args *args,
struct nfs4_sequence_res *res,
int cache_reply)
static inline
int nfs4_call_sync(struct rpc_clnt *clnt,
struct nfs_server *server,
struct rpc_message *msg,
struct nfs4_sequence_args *args,
struct nfs4_sequence_res *res,
int cache_reply)
static void update_changeattr(struct inode *dir, struct nfs4_change_info *cinfo)
struct nfs4_opendata ;
static void nfs4_init_opendata_res(struct nfs4_opendata *p)
static struct nfs4_opendata *nfs4_opendata_alloc(struct path *path,
struct nfs4_state_owner *sp, fmode_t fmode, int flags,
const struct iattr *attrs,
gfp_t gfp_mask)
static void nfs4_opendata_free(struct kref *kref)
static void nfs4_opendata_put(struct nfs4_opendata *p)
static int nfs4_wait_for_completion_rpc_task(struct rpc_task *task)
static int can_open_cached(struct nfs4_state *state, fmode_t mode, int open_mode)
static int can_open_delegated(struct nfs_delegation *delegation, fmode_t fmode)
static void update_open_stateflags(struct nfs4_state *state, fmode_t fmode)
static void nfs_set_open_stateid_locked(struct nfs4_state *state, nfs4_stateid *stateid, fmode_t fmode)
static void nfs_set_open_stateid(struct nfs4_state *state, nfs4_stateid *stateid, fmode_t fmode)
static void __update_open_stateid(struct nfs4_state *state, nfs4_stateid *open_stateid, const nfs4_stateid *deleg_stateid, fmode_t fmode)
static int update_open_stateid(struct nfs4_state *state, nfs4_stateid *open_stateid, nfs4_stateid *delegation, fmode_t fmode)
static void nfs4_return_incompatible_delegation(struct inode *inode, fmode_t fmode)
static struct nfs4_state *nfs4_try_open_cached(struct nfs4_opendata *opendata)
static struct nfs4_state *nfs4_opendata_to_nfs4_state(struct nfs4_opendata *data)
static struct nfs_open_context *nfs4_state_find_open_context(struct nfs4_state *state)
static struct nfs4_opendata *nfs4_open_recoverdata_alloc(struct nfs_open_context *ctx, struct nfs4_state *state)
static int nfs4_open_recover_helper(struct nfs4_opendata *opendata, fmode_t fmode, struct nfs4_state **res)
static int nfs4_open_recover(struct nfs4_opendata *opendata, struct nfs4_state *state)
static int _nfs4_do_open_reclaim(struct nfs_open_context *ctx, struct nfs4_state *state)
static int nfs4_do_open_reclaim(struct nfs_open_context *ctx, struct nfs4_state *state)
static int nfs4_open_reclaim(struct nfs4_state_owner *sp, struct nfs4_state *state)
static int _nfs4_open_delegation_recall(struct nfs_open_context *ctx, struct nfs4_state *state, const nfs4_stateid *stateid)
int nfs4_open_delegation_recall(struct nfs_open_context *ctx, struct nfs4_state *state, const nfs4_stateid *stateid)
static void nfs4_open_confirm_done(struct rpc_task *task, void *calldata)
static void nfs4_open_confirm_release(void *calldata)
static const struct rpc_call_ops nfs4_open_confirm_ops = ;
static int _nfs4_proc_open_confirm(struct nfs4_opendata *data)
static void nfs4_open_prepare(struct rpc_task *task, void *calldata)
static void nfs4_recover_open_prepare(struct rpc_task *task, void *calldata)
static void nfs4_open_done(struct rpc_task *task, void *calldata)
static void nfs4_open_release(void *calldata)
static const struct rpc_call_ops nfs4_open_ops = ;
static const struct rpc_call_ops nfs4_recover_open_ops = ;
static int nfs4_run_open_task(struct nfs4_opendata *data, int isrecover)
static int _nfs4_recover_proc_open(struct nfs4_opendata *data)
static int _nfs4_proc_open(struct nfs4_opendata *data)
static int nfs4_client_recover_expired_lease(struct nfs_client *clp)
static int nfs4_recover_expired_lease(struct nfs_server *server)
static int _nfs4_open_expired(struct nfs_open_context *ctx, struct nfs4_state *state)
static int nfs4_do_open_expired(struct nfs_open_context *ctx, struct nfs4_state *state)
static int nfs4_open_expired(struct nfs4_state_owner *sp, struct nfs4_state *state)
static inline void nfs4_exclusive_attrset(struct nfs4_opendata *opendata, struct iattr *sattr)
static int _nfs4_do_open(struct inode *dir, struct path *path, fmode_t fmode, int flags, struct iattr *sattr, struct rpc_cred *cred, struct nfs4_state **res)
static struct nfs4_state *nfs4_do_open(struct inode *dir, struct path *path, fmode_t fmode, int flags, struct iattr *sattr, struct rpc_cred *cred)
static int _nfs4_do_setattr(struct inode *inode, struct rpc_cred *cred,
struct nfs_fattr *fattr, struct iattr *sattr,
struct nfs4_state *state)
static int nfs4_do_setattr(struct inode *inode, struct rpc_cred *cred,
struct nfs_fattr *fattr, struct iattr *sattr,
struct nfs4_state *state)
struct nfs4_closedata ;
static void nfs4_free_closedata(void *data)
static void nfs4_close_clear_stateid_flags(struct nfs4_state *state,
fmode_t fmode)
static void nfs4_close_done(struct rpc_task *task, void *data)
static void nfs4_close_prepare(struct rpc_task *task, void *data)
static const struct rpc_call_ops nfs4_close_ops = ;
int nfs4_do_close(struct path *path, struct nfs4_state *state, gfp_t gfp_mask, int wait, bool roc)
static struct inode *
nfs4_atomic_open(struct inode *dir, struct nfs_open_context *ctx, int open_flags, struct iattr *attr)
static void nfs4_close_context(struct nfs_open_context *ctx, int is_sync)
static int _nfs4_server_capabilities(struct nfs_server *server, struct nfs_fh *fhandle)
int nfs4_server_capabilities(struct nfs_server *server, struct nfs_fh *fhandle)
static int _nfs4_lookup_root(struct nfs_server *server, struct nfs_fh *fhandle,
struct nfs_fsinfo *info)
static int nfs4_lookup_root(struct nfs_server *server, struct nfs_fh *fhandle,
struct nfs_fsinfo *info)
static int nfs4_lookup_root_sec(struct nfs_server *server, struct nfs_fh *fhandle,
struct nfs_fsinfo *info, rpc_authflavor_t flavor)
static int nfs4_find_root_sec(struct nfs_server *server, struct nfs_fh *fhandle,
struct nfs_fsinfo *info)
static int nfs4_proc_get_root(struct nfs_server *server, struct nfs_fh *fhandle,
struct nfs_fsinfo *info)
static void nfs_fixup_referral_attributes(struct nfs_fattr *fattr);
static int nfs4_get_referral(struct inode *dir, const struct qstr *name,
struct nfs_fattr *fattr, struct nfs_fh *fhandle)
static int _nfs4_proc_getattr(struct nfs_server *server, struct nfs_fh *fhandle, struct nfs_fattr *fattr)
static int nfs4_proc_getattr(struct nfs_server *server, struct nfs_fh *fhandle, struct nfs_fattr *fattr)
static int
nfs4_proc_setattr(struct dentry *dentry, struct nfs_fattr *fattr,
struct iattr *sattr)
static int _nfs4_proc_lookupfh(struct rpc_clnt *clnt, struct nfs_server *server,
const struct nfs_fh *dirfh, const struct qstr *name,
struct nfs_fh *fhandle, struct nfs_fattr *fattr)
static int nfs4_proc_lookupfh(struct nfs_server *server, struct nfs_fh *dirfh,
struct qstr *name, struct nfs_fh *fhandle,
struct nfs_fattr *fattr)
static int _nfs4_proc_lookup(struct rpc_clnt *clnt, struct inode *dir,
const struct qstr *name, struct nfs_fh *fhandle,
struct nfs_fattr *fattr)
void nfs_fixup_secinfo_attributes(struct nfs_fattr *fattr, struct nfs_fh *fh)
static int nfs4_proc_lookup(struct rpc_clnt *clnt, struct inode *dir, struct qstr *name,
struct nfs_fh *fhandle, struct nfs_fattr *fattr)
static int _nfs4_proc_access(struct inode *inode, struct nfs_access_entry *entry)
static int nfs4_proc_access(struct inode *inode, struct nfs_access_entry *entry)
static int _nfs4_proc_readlink(struct inode *inode, struct page *page,
unsigned int pgbase, unsigned int pglen)
static int nfs4_proc_readlink(struct inode *inode, struct page *page,
unsigned int pgbase, unsigned int pglen)
static int
nfs4_proc_create(struct inode *dir, struct dentry *dentry, struct iattr *sattr,
int flags, struct nfs_open_context *ctx)
static int _nfs4_proc_remove(struct inode *dir, struct qstr *name)
static int nfs4_proc_remove(struct inode *dir, struct qstr *name)
static void nfs4_proc_unlink_setup(struct rpc_message *msg, struct inode *dir)
static int nfs4_proc_unlink_done(struct rpc_task *task, struct inode *dir)
static void nfs4_proc_rename_setup(struct rpc_message *msg, struct inode *dir)
static int nfs4_proc_rename_done(struct rpc_task *task, struct inode *old_dir,
struct inode *new_dir)
static int _nfs4_proc_rename(struct inode *old_dir, struct qstr *old_name,
struct inode *new_dir, struct qstr *new_name)
static int nfs4_proc_rename(struct inode *old_dir, struct qstr *old_name,
struct inode *new_dir, struct qstr *new_name)
static int _nfs4_proc_link(struct inode *inode, struct inode *dir, struct qstr *name)
static int nfs4_proc_link(struct inode *inode, struct inode *dir, struct qstr *name)
struct nfs4_createdata ;
static struct nfs4_createdata *nfs4_alloc_createdata(struct inode *dir,
struct qstr *name, struct iattr *sattr, u32 ftype)
static int nfs4_do_create(struct inode *dir, struct dentry *dentry, struct nfs4_createdata *data)
static void nfs4_free_createdata(struct nfs4_createdata *data)
static int _nfs4_proc_symlink(struct inode *dir, struct dentry *dentry,
struct page *page, unsigned int len, struct iattr *sattr)
static int nfs4_proc_symlink(struct inode *dir, struct dentry *dentry,
struct page *page, unsigned int len, struct iattr *sattr)
static int _nfs4_proc_mkdir(struct inode *dir, struct dentry *dentry,
struct iattr *sattr)
static int nfs4_proc_mkdir(struct inode *dir, struct dentry *dentry,
struct iattr *sattr)
static int _nfs4_proc_readdir(struct dentry *dentry, struct rpc_cred *cred,
u64 cookie, struct page **pages, unsigned int count, int plus)
static int nfs4_proc_readdir(struct dentry *dentry, struct rpc_cred *cred,
u64 cookie, struct page **pages, unsigned int count, int plus)
static int _nfs4_proc_mknod(struct inode *dir, struct dentry *dentry,
struct iattr *sattr, dev_t rdev)
static int nfs4_proc_mknod(struct inode *dir, struct dentry *dentry,
struct iattr *sattr, dev_t rdev)
static int _nfs4_proc_statfs(struct nfs_server *server, struct nfs_fh *fhandle,
struct nfs_fsstat *fsstat)
static int nfs4_proc_statfs(struct nfs_server *server, struct nfs_fh *fhandle, struct nfs_fsstat *fsstat)
static int _nfs4_do_fsinfo(struct nfs_server *server, struct nfs_fh *fhandle,
struct nfs_fsinfo *fsinfo)
static int nfs4_do_fsinfo(struct nfs_server *server, struct nfs_fh *fhandle, struct nfs_fsinfo *fsinfo)
static int nfs4_proc_fsinfo(struct nfs_server *server, struct nfs_fh *fhandle, struct nfs_fsinfo *fsinfo)
static int _nfs4_proc_pathconf(struct nfs_server *server, struct nfs_fh *fhandle,
struct nfs_pathconf *pathconf)
static int nfs4_proc_pathconf(struct nfs_server *server, struct nfs_fh *fhandle,
struct nfs_pathconf *pathconf)
void __nfs4_read_done_cb(struct nfs_read_data *data)
static int nfs4_read_done_cb(struct rpc_task *task, struct nfs_read_data *data)
static int nfs4_read_done(struct rpc_task *task, struct nfs_read_data *data)
static void nfs4_proc_read_setup(struct nfs_read_data *data, struct rpc_message *msg)
void nfs4_reset_read(struct rpc_task *task, struct nfs_read_data *data)
EXPORT_SYMBOL_GPL(nfs4_reset_read);
static int nfs4_write_done_cb(struct rpc_task *task, struct nfs_write_data *data)
static int nfs4_write_done(struct rpc_task *task, struct nfs_write_data *data)
void nfs4_reset_write(struct rpc_task *task, struct nfs_write_data *data)
EXPORT_SYMBOL_GPL(nfs4_reset_write);
static void nfs4_proc_write_setup(struct nfs_write_data *data, struct rpc_message *msg)
static int nfs4_commit_done_cb(struct rpc_task *task, struct nfs_write_data *data)
static int nfs4_commit_done(struct rpc_task *task, struct nfs_write_data *data)
static void nfs4_proc_commit_setup(struct nfs_write_data *data, struct rpc_message *msg)
struct nfs4_renewdata ;
static void nfs4_renew_release(void *calldata)
static void nfs4_renew_done(struct rpc_task *task, void *calldata)
static const struct rpc_call_ops nfs4_renew_ops = ;
int nfs4_proc_async_renew(struct nfs_client *clp, struct rpc_cred *cred)
int nfs4_proc_renew(struct nfs_client *clp, struct rpc_cred *cred)
static inline int nfs4_server_supports_acls(struct nfs_server *server)
#define NFS4ACL_MAXPAGES (XATTR_SIZE_MAX >> PAGE_CACHE_SHIFT)
static void buf_to_pages(const void *buf, size_t buflen,
struct page **pages, unsigned int *pgbase)
static int buf_to_pages_noslab(const void *buf, size_t buflen,
struct page **pages, unsigned int *pgbase)
struct nfs4_cached_acl ;
static void nfs4_set_cached_acl(struct inode *inode, struct nfs4_cached_acl *acl)
static void nfs4_zap_acl_attr(struct inode *inode)
static inline ssize_t nfs4_read_cached_acl(struct inode *inode, char *buf, size_t buflen)
static void nfs4_write_cached_acl(struct inode *inode, const char *buf, size_t acl_len)
static ssize_t __nfs4_get_acl_uncached(struct inode *inode, void *buf, size_t buflen)
static ssize_t nfs4_get_acl_uncached(struct inode *inode, void *buf, size_t buflen)
static ssize_t nfs4_proc_get_acl(struct inode *inode, void *buf, size_t buflen)
static int __nfs4_proc_set_acl(struct inode *inode, const void *buf, size_t buflen)
static int nfs4_proc_set_acl(struct inode *inode, const void *buf, size_t buflen)
static int
nfs4_async_handle_error(struct rpc_task *task, const struct nfs_server *server, struct nfs4_state *state)
int nfs4_proc_setclientid(struct nfs_client *clp, u32 program,
unsigned short port, struct rpc_cred *cred,
struct nfs4_setclientid_res *res)
int nfs4_proc_setclientid_confirm(struct nfs_client *clp,
struct nfs4_setclientid_res *arg,
struct rpc_cred *cred)
struct nfs4_delegreturndata ;
static void nfs4_delegreturn_done(struct rpc_task *task, void *calldata)
static void nfs4_delegreturn_release(void *calldata)
#if defined(CONFIG_NFS_V4_1)
static void nfs4_delegreturn_prepare(struct rpc_task *task, void *data)
static const struct rpc_call_ops nfs4_delegreturn_ops = ;
static int _nfs4_proc_delegreturn(struct inode *inode, struct rpc_cred *cred, const nfs4_stateid *stateid, int issync)
int nfs4_proc_delegreturn(struct inode *inode, struct rpc_cred *cred, const nfs4_stateid *stateid, int issync)
#define NFS4_LOCK_MINTIMEOUT (1 * HZ)
#define NFS4_LOCK_MAXTIMEOUT (30 * HZ)
static unsigned long
nfs4_set_lock_task_retry(unsigned long timeout)
static int _nfs4_proc_getlk(struct nfs4_state *state, int cmd, struct file_lock *request)
static int nfs4_proc_getlk(struct nfs4_state *state, int cmd, struct file_lock *request)
static int do_vfs_lock(struct file *file, struct file_lock *fl)
struct nfs4_unlockdata ;
static struct nfs4_unlockdata *nfs4_alloc_unlockdata(struct file_lock *fl,
struct nfs_open_context *ctx,
struct nfs4_lock_state *lsp,
struct nfs_seqid *seqid)
static void nfs4_locku_release_calldata(void *data)
static void nfs4_locku_done(struct rpc_task *task, void *data)
static void nfs4_locku_prepare(struct rpc_task *task, void *data)
static const struct rpc_call_ops nfs4_locku_ops = ;
static struct rpc_task *nfs4_do_unlck(struct file_lock *fl,
struct nfs_open_context *ctx,
struct nfs4_lock_state *lsp,
struct nfs_seqid *seqid)
static int nfs4_proc_unlck(struct nfs4_state *state, int cmd, struct file_lock *request)
struct nfs4_lockdata ;
static struct nfs4_lockdata *nfs4_alloc_lockdata(struct file_lock *fl,
struct nfs_open_context *ctx, struct nfs4_lock_state *lsp,
gfp_t gfp_mask)
static void nfs4_lock_prepare(struct rpc_task *task, void *calldata)
static void nfs4_recover_lock_prepare(struct rpc_task *task, void *calldata)
static void nfs4_lock_done(struct rpc_task *task, void *calldata)
static void nfs4_lock_release(void *calldata)
static const struct rpc_call_ops nfs4_lock_ops = ;
static const struct rpc_call_ops nfs4_recover_lock_ops = ;
static void nfs4_handle_setlk_error(struct nfs_server *server, struct nfs4_lock_state *lsp, int new_lock_owner, int error)
static int _nfs4_do_setlk(struct nfs4_state *state, int cmd, struct file_lock *fl, int recovery_type)
static int nfs4_lock_reclaim(struct nfs4_state *state, struct file_lock *request)
static int nfs4_lock_expired(struct nfs4_state *state, struct file_lock *request)
static int _nfs4_proc_setlk(struct nfs4_state *state, int cmd, struct file_lock *request)
static int nfs4_proc_setlk(struct nfs4_state *state, int cmd, struct file_lock *request)
static int
nfs4_proc_lock(struct file *filp, int cmd, struct file_lock *request)
int nfs4_lock_delegation_recall(struct nfs4_state *state, struct file_lock *fl)
static void nfs4_release_lockowner_release(void *calldata)
const struct rpc_call_ops nfs4_release_lockowner_ops = ;
void nfs4_release_lockowner(const struct nfs4_lock_state *lsp)
#define XATTR_NAME_NFSV4_ACL "system.nfs4_acl"
static int nfs4_xattr_set_nfs4_acl(struct dentry *dentry, const char *key,
const void *buf, size_t buflen,
int flags, int type)
static int nfs4_xattr_get_nfs4_acl(struct dentry *dentry, const char *key,
void *buf, size_t buflen, int type)
static size_t nfs4_xattr_list_nfs4_acl(struct dentry *dentry, char *list,
size_t list_len, const char *name,
size_t name_len, int type)
static void nfs_fixup_referral_attributes(struct nfs_fattr *fattr)
int nfs4_proc_fs_locations(struct inode *dir, const struct qstr *name,
struct nfs4_fs_locations *fs_locations, struct page *page)
static int _nfs4_proc_secinfo(struct inode *dir, const struct qstr *name, struct nfs4_secinfo_flavors *flavors)
int nfs4_proc_secinfo(struct inode *dir, const struct qstr *name, struct nfs4_secinfo_flavors *flavors)
static int nfs4_check_cl_exchange_flags(u32 flags)
int nfs4_proc_exchange_id(struct nfs_client *clp, struct rpc_cred *cred)
struct nfs4_get_lease_time_data ;
static void nfs4_get_lease_time_prepare(struct rpc_task *task,
void *calldata)
static void nfs4_get_lease_time_done(struct rpc_task *task, void *calldata)
struct rpc_call_ops nfs4_get_lease_time_ops = ;
int nfs4_proc_get_lease_time(struct nfs_client *clp, struct nfs_fsinfo *fsinfo)
static int nfs4_reset_slot_table(struct nfs4_slot_table *tbl, u32 max_reqs,
int ivalue)
static int nfs4_reset_slot_tables(struct nfs4_session *session)
static void nfs4_destroy_slot_tables(struct nfs4_session *session)
static int nfs4_init_slot_table(struct nfs4_slot_table *tbl,
int max_slots, int ivalue)
static int nfs4_init_slot_tables(struct nfs4_session *session)
struct nfs4_session *nfs4_alloc_session(struct nfs_client *clp)
void nfs4_destroy_session(struct nfs4_session *session)
static void nfs4_init_channel_attrs(struct nfs41_create_session_args *args)
static int nfs4_verify_fore_channel_attrs(struct nfs41_create_session_args *args, struct nfs4_session *session)
static int nfs4_verify_back_channel_attrs(struct nfs41_create_session_args *args, struct nfs4_session *session)
static int nfs4_verify_channel_attrs(struct nfs41_create_session_args *args,
struct nfs4_session *session)
static int _nfs4_proc_create_session(struct nfs_client *clp)
int nfs4_proc_create_session(struct nfs_client *clp)
int nfs4_proc_destroy_session(struct nfs4_session *session)
int nfs4_init_session(struct nfs_server *server)
int nfs4_init_ds_session(struct nfs_client *clp)
EXPORT_SYMBOL_GPL(nfs4_init_ds_session);
struct nfs4_sequence_data ;
static void nfs41_sequence_release(void *data)
static int nfs41_sequence_handle_errors(struct rpc_task *task, struct nfs_client *clp)
static void nfs41_sequence_call_done(struct rpc_task *task, void *data)
static void nfs41_sequence_prepare(struct rpc_task *task, void *data)
static const struct rpc_call_ops nfs41_sequence_ops = ;
static struct rpc_task *_nfs41_proc_sequence(struct nfs_client *clp, struct rpc_cred *cred)
static int nfs41_proc_async_sequence(struct nfs_client *clp, struct rpc_cred *cred)
static int nfs4_proc_sequence(struct nfs_client *clp, struct rpc_cred *cred)
struct nfs4_reclaim_complete_data ;
static void nfs4_reclaim_complete_prepare(struct rpc_task *task, void *data)
static int nfs41_reclaim_complete_handle_errors(struct rpc_task *task, struct nfs_client *clp)
static void nfs4_reclaim_complete_done(struct rpc_task *task, void *data)
static void nfs4_free_reclaim_complete_data(void *data)
static const struct rpc_call_ops nfs4_reclaim_complete_call_ops = ;
static int nfs41_proc_reclaim_complete(struct nfs_client *clp)
static void
nfs4_layoutget_prepare(struct rpc_task *task, void *calldata)
static void nfs4_layoutget_done(struct rpc_task *task, void *calldata)
static void nfs4_layoutget_release(void *calldata)
static const struct rpc_call_ops nfs4_layoutget_call_ops = ;
int nfs4_proc_layoutget(struct nfs4_layoutget *lgp)
static void
nfs4_layoutreturn_prepare(struct rpc_task *task, void *calldata)
static void nfs4_layoutreturn_done(struct rpc_task *task, void *calldata)
static void nfs4_layoutreturn_release(void *calldata)
static const struct rpc_call_ops nfs4_layoutreturn_call_ops = ;
int nfs4_proc_layoutreturn(struct nfs4_layoutreturn *lrp)
static int
_nfs4_proc_getdeviceinfo(struct nfs_server *server, struct pnfs_device *pdev)
int nfs4_proc_getdeviceinfo(struct nfs_server *server, struct pnfs_device *pdev)
EXPORT_SYMBOL_GPL(nfs4_proc_getdeviceinfo);
static void nfs4_layoutcommit_prepare(struct rpc_task *task, void *calldata)
static void
nfs4_layoutcommit_done(struct rpc_task *task, void *calldata)
static void nfs4_layoutcommit_release(void *calldata)
static const struct rpc_call_ops nfs4_layoutcommit_ops = ;
int
nfs4_proc_layoutcommit(struct nfs4_layoutcommit_data *data, bool sync)
struct nfs4_state_recovery_ops nfs40_reboot_recovery_ops = ;
#if defined(CONFIG_NFS_V4_1)
struct nfs4_state_recovery_ops nfs41_reboot_recovery_ops = ;
struct nfs4_state_recovery_ops nfs40_nograce_recovery_ops = ;
#if defined(CONFIG_NFS_V4_1)
struct nfs4_state_recovery_ops nfs41_nograce_recovery_ops = ;
struct nfs4_state_maintenance_ops nfs40_state_renewal_ops = ;
#if defined(CONFIG_NFS_V4_1)
struct nfs4_state_maintenance_ops nfs41_state_renewal_ops = ;
static const struct nfs4_minor_version_ops nfs_v4_0_minor_ops = ;
#if defined(CONFIG_NFS_V4_1)
static const struct nfs4_minor_version_ops nfs_v4_1_minor_ops = ;
const struct nfs4_minor_version_ops *nfs_v4_minor_ops[] = ;
static const struct inode_operations nfs4_file_inode_operations = ;
const struct nfs_rpc_ops nfs_v4_clientops = ;
static const struct xattr_handler nfs4_xattr_nfs4_acl_handler = ;
const struct xattr_handler *nfs4_xattr_handlers[] = ;
