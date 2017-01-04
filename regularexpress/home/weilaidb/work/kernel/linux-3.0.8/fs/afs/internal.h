#define AFS_CELL_MAX_ADDRS 15
struct pagevec;
struct afs_call;
typedef enum  __attribute__((packed)) afs_vlocation_state_t;
struct afs_mount_params ;
struct afs_wait_mode ;
extern const struct afs_wait_mode afs_sync_call;
extern const struct afs_wait_mode afs_async_call;
struct afs_call ;
struct afs_call_type ;
struct afs_writeback ;
struct afs_super_info ;
static inline struct afs_super_info *AFS_FS_S(struct super_block *sb)
extern struct file_system_type afs_fs_type;
struct afs_cache_cell ;
struct afs_cell ;
struct afs_cache_vlocation ;
struct afs_cache_vhash  __attribute__((packed));
struct afs_vlocation ;
struct afs_server ;
struct afs_volume ;
struct afs_cache_vnode ;
struct afs_vnode ;
struct afs_permit ;
struct afs_permits ;
struct afs_interface ;
struct afs_uuid ;
extern struct fscache_netfs afs_cache_netfs;
extern struct fscache_cookie_def afs_cell_cache_index_def;
extern struct fscache_cookie_def afs_vlocation_cache_index_def;
extern struct fscache_cookie_def afs_volume_cache_index_def;
extern struct fscache_cookie_def afs_vnode_cache_index_def;
#define afs_cell_cache_index_def	(*(struct fscache_cookie_def *) NULL)
#define afs_vlocation_cache_index_def	(*(struct fscache_cookie_def *) NULL)
#define afs_volume_cache_index_def	(*(struct fscache_cookie_def *) NULL)
#define afs_vnode_cache_index_def	(*(struct fscache_cookie_def *) NULL)
extern void afs_init_callback_state(struct afs_server *);
extern void afs_broken_callback_work(struct work_struct *);
extern void afs_break_callbacks(struct afs_server *, size_t,
struct afs_callback[]);
extern void afs_discard_callback_on_delete(struct afs_vnode *);
extern void afs_give_up_callback(struct afs_vnode *);
extern void afs_dispatch_give_up_callbacks(struct work_struct *);
extern void afs_flush_callback_breaks(struct afs_server *);
extern int __init afs_callback_update_init(void);
extern void afs_callback_update_kill(void);
extern struct rw_semaphore afs_proc_cells_sem;
extern struct list_head afs_proc_cells;
#define afs_get_cell(C) do  while(0)
extern int afs_cell_init(char *);
extern struct afs_cell *afs_cell_create(const char *, unsigned, char *, bool);
extern struct afs_cell *afs_cell_lookup(const char *, unsigned, bool);
extern struct afs_cell *afs_grab_cell(struct afs_cell *);
extern void afs_put_cell(struct afs_cell *);
extern void afs_cell_purge(void);
extern bool afs_cm_incoming_call(struct afs_call *);
extern const struct inode_operations afs_dir_inode_operations;
extern const struct dentry_operations afs_fs_dentry_operations;
extern const struct file_operations afs_dir_file_operations;
extern const struct address_space_operations afs_fs_aops;
extern const struct inode_operations afs_file_inode_operations;
extern const struct file_operations afs_file_operations;
extern int afs_open(struct inode *, struct file *);
extern int afs_release(struct inode *, struct file *);
extern int afs_page_filler(void *, struct page *);
extern void __exit afs_kill_lock_manager(void);
extern void afs_lock_work(struct work_struct *);
extern void afs_lock_may_be_available(struct afs_vnode *);
extern int afs_lock(struct file *, int, struct file_lock *);
extern int afs_flock(struct file *, int, struct file_lock *);
extern int afs_fs_fetch_file_status(struct afs_server *, struct key *,
struct afs_vnode *, struct afs_volsync *,
const struct afs_wait_mode *);
extern int afs_fs_give_up_callbacks(struct afs_server *,
const struct afs_wait_mode *);
extern int afs_fs_fetch_data(struct afs_server *, struct key *,
struct afs_vnode *, off_t, size_t, struct page *,
const struct afs_wait_mode *);
extern int afs_fs_create(struct afs_server *, struct key *,
struct afs_vnode *, const char *, umode_t,
struct afs_fid *, struct afs_file_status *,
struct afs_callback *,
const struct afs_wait_mode *);
extern int afs_fs_remove(struct afs_server *, struct key *,
struct afs_vnode *, const char *, bool,
const struct afs_wait_mode *);
extern int afs_fs_link(struct afs_server *, struct key *, struct afs_vnode *,
struct afs_vnode *, const char *,
const struct afs_wait_mode *);
extern int afs_fs_symlink(struct afs_server *, struct key *,
struct afs_vnode *, const char *, const char *,
struct afs_fid *, struct afs_file_status *,
const struct afs_wait_mode *);
extern int afs_fs_rename(struct afs_server *, struct key *,
struct afs_vnode *, const char *,
struct afs_vnode *, const char *,
const struct afs_wait_mode *);
extern int afs_fs_store_data(struct afs_server *, struct afs_writeback *,
pgoff_t, pgoff_t, unsigned, unsigned,
const struct afs_wait_mode *);
extern int afs_fs_setattr(struct afs_server *, struct key *,
struct afs_vnode *, struct iattr *,
const struct afs_wait_mode *);
extern int afs_fs_get_volume_status(struct afs_server *, struct key *,
struct afs_vnode *,
struct afs_volume_status *,
const struct afs_wait_mode *);
extern int afs_fs_set_lock(struct afs_server *, struct key *,
struct afs_vnode *, afs_lock_type_t,
const struct afs_wait_mode *);
extern int afs_fs_extend_lock(struct afs_server *, struct key *,
struct afs_vnode *,
const struct afs_wait_mode *);
extern int afs_fs_release_lock(struct afs_server *, struct key *,
struct afs_vnode *,
const struct afs_wait_mode *);
extern struct inode *afs_iget_autocell(struct inode *, const char *, int,
struct key *);
extern struct inode *afs_iget(struct super_block *, struct key *,
struct afs_fid *, struct afs_file_status *,
struct afs_callback *);
extern void afs_zap_data(struct afs_vnode *);
extern int afs_validate(struct afs_vnode *, struct key *);
extern int afs_getattr(struct vfsmount *, struct dentry *, struct kstat *);
extern int afs_setattr(struct dentry *, struct iattr *);
extern void afs_evict_inode(struct inode *);
extern int afs_drop_inode(struct inode *);
extern struct workqueue_struct *afs_wq;
extern struct afs_uuid afs_uuid;
extern int afs_abort_to_error(u32);
extern const struct inode_operations afs_mntpt_inode_operations;
extern const struct inode_operations afs_autocell_inode_operations;
extern const struct file_operations afs_mntpt_file_operations;
extern struct vfsmount *afs_d_automount(struct path *);
extern int afs_mntpt_check_symlink(struct afs_vnode *, struct key *);
extern void afs_mntpt_kill_timer(void);
extern int afs_proc_init(void);
extern void afs_proc_cleanup(void);
extern int afs_proc_cell_setup(struct afs_cell *);
extern void afs_proc_cell_remove(struct afs_cell *);
extern int afs_open_socket(void);
extern void afs_close_socket(void);
extern int afs_make_call(struct in_addr *, struct afs_call *, gfp_t,
const struct afs_wait_mode *);
extern struct afs_call *afs_alloc_flat_call(const struct afs_call_type *,
size_t, size_t);
extern void afs_flat_call_destructor(struct afs_call *);
extern void afs_transfer_reply(struct afs_call *, struct sk_buff *);
extern void afs_send_empty_reply(struct afs_call *);
extern void afs_send_simple_reply(struct afs_call *, const void *, size_t);
extern int afs_extract_data(struct afs_call *, struct sk_buff *, bool, void *,
size_t);
extern void afs_clear_permits(struct afs_vnode *);
extern void afs_cache_permit(struct afs_vnode *, struct key *, long);
extern void afs_zap_permits(struct rcu_head *);
extern struct key *afs_request_key(struct afs_cell *);
extern int afs_permission(struct inode *, int, unsigned int);
extern spinlock_t afs_server_peer_lock;
#define afs_get_server(S)					\
do  while(0)
extern struct afs_server *afs_lookup_server(struct afs_cell *,
const struct in_addr *);
extern struct afs_server *afs_find_server(const struct in_addr *);
extern void afs_put_server(struct afs_server *);
extern void __exit afs_purge_servers(void);
extern int afs_fs_init(void);
extern void afs_fs_exit(void);
extern int afs_get_ipv4_interfaces(struct afs_interface *, size_t, bool);
extern int afs_get_MAC_address(u8 *, size_t);
extern int afs_vl_get_entry_by_name(struct in_addr *, struct key *,
const char *, struct afs_cache_vlocation *,
const struct afs_wait_mode *);
extern int afs_vl_get_entry_by_id(struct in_addr *, struct key *,
afs_volid_t, afs_voltype_t,
struct afs_cache_vlocation *,
const struct afs_wait_mode *);
#define afs_get_vlocation(V) do  while(0)
extern int __init afs_vlocation_update_init(void);
extern struct afs_vlocation *afs_vlocation_lookup(struct afs_cell *,
struct key *,
const char *, size_t);
extern void afs_put_vlocation(struct afs_vlocation *);
extern void afs_vlocation_purge(void);
static inline struct afs_vnode *AFS_FS_I(struct inode *inode)
static inline struct inode *AFS_VNODE_TO_I(struct afs_vnode *vnode)
extern void afs_vnode_finalise_status_update(struct afs_vnode *,
struct afs_server *);
extern int afs_vnode_fetch_status(struct afs_vnode *, struct afs_vnode *,
struct key *);
extern int afs_vnode_fetch_data(struct afs_vnode *, struct key *,
off_t, size_t, struct page *);
extern int afs_vnode_create(struct afs_vnode *, struct key *, const char *,
umode_t, struct afs_fid *, struct afs_file_status *,
struct afs_callback *, struct afs_server **);
extern int afs_vnode_remove(struct afs_vnode *, struct key *, const char *,
bool);
extern int afs_vnode_link(struct afs_vnode *, struct afs_vnode *, struct key *,
const char *);
extern int afs_vnode_symlink(struct afs_vnode *, struct key *, const char *,
const char *, struct afs_fid *,
struct afs_file_status *, struct afs_server **);
extern int afs_vnode_rename(struct afs_vnode *, struct afs_vnode *,
struct key *, const char *, const char *);
extern int afs_vnode_store_data(struct afs_writeback *, pgoff_t, pgoff_t,
unsigned, unsigned);
extern int afs_vnode_setattr(struct afs_vnode *, struct key *, struct iattr *);
extern int afs_vnode_get_volume_status(struct afs_vnode *, struct key *,
struct afs_volume_status *);
extern int afs_vnode_set_lock(struct afs_vnode *, struct key *,
afs_lock_type_t);
extern int afs_vnode_extend_lock(struct afs_vnode *, struct key *);
extern int afs_vnode_release_lock(struct afs_vnode *, struct key *);
#define afs_get_volume(V) do  while(0)
extern void afs_put_volume(struct afs_volume *);
extern struct afs_volume *afs_volume_lookup(struct afs_mount_params *);
extern struct afs_server *afs_volume_pick_fileserver(struct afs_vnode *);
extern int afs_volume_release_fileserver(struct afs_vnode *,
struct afs_server *, int);
extern int afs_set_page_dirty(struct page *);
extern void afs_put_writeback(struct afs_writeback *);
extern int afs_write_begin(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned flags,
struct page **pagep, void **fsdata);
extern int afs_write_end(struct file *file, struct address_space *mapping,
loff_t pos, unsigned len, unsigned copied,
struct page *page, void *fsdata);
extern int afs_writepage(struct page *, struct writeback_control *);
extern int afs_writepages(struct address_space *, struct writeback_control *);
extern void afs_pages_written_back(struct afs_vnode *, struct afs_call *);
extern ssize_t afs_file_write(struct kiocb *, const struct iovec *,
unsigned long, loff_t);
extern int afs_writeback_all(struct afs_vnode *);
extern int afs_fsync(struct file *, int);
extern unsigned afs_debug;
#define dbgprintk(FMT,...) \
printk("[%-6.6s] "FMT"\n", current->comm ,##__VA_ARGS__)
#define kenter(FMT,...)	dbgprintk("==> %s("FMT")",__func__ ,##__VA_ARGS__)
#define kleave(FMT,...)	dbgprintk("<== %s()"FMT"",__func__ ,##__VA_ARGS__)
#define kdebug(FMT,...)	dbgprintk("    "FMT ,##__VA_ARGS__)
#if defined(__KDEBUG)
#define _enter(FMT,...)	kenter(FMT,##__VA_ARGS__)
#define _leave(FMT,...)	kleave(FMT,##__VA_ARGS__)
#define _debug(FMT,...)	kdebug(FMT,##__VA_ARGS__)
#elif defined(CONFIG_AFS_DEBUG)
#define AFS_DEBUG_KENTER	0x01
#define AFS_DEBUG_KLEAVE	0x02
#define AFS_DEBUG_KDEBUG	0x04
#define _enter(FMT,...)					\
do  while (0)
#define _leave(FMT,...)					\
do  while (0)
#define _debug(FMT,...)					\
do  while (0)
#define _enter(FMT,...)	no_printk("==> %s("FMT")",__func__ ,##__VA_ARGS__)
#define _leave(FMT,...)	no_printk("<== %s()"FMT"",__func__ ,##__VA_ARGS__)
#define _debug(FMT,...)	no_printk("    "FMT ,##__VA_ARGS__)
#if 1
#define ASSERT(X)						\
do  while(0)
#define ASSERTCMP(X, OP, Y)						\
do  while(0)
#define ASSERTRANGE(L, OP1, N, OP2, H)					\
do  while(0)
#define ASSERTIF(C, X)						\
do  while(0)
#define ASSERTIFCMP(C, X, OP, Y)					\
do  while(0)
#define ASSERT(X)				\
do  while(0)
#define ASSERTCMP(X, OP, Y)			\
do  while(0)
#define ASSERTRANGE(L, OP1, N, OP2, H)		\
do  while(0)
#define ASSERTIF(C, X)				\
do  while(0)
#define ASSERTIFCMP(C, X, OP, Y)		\
do  while(0)
