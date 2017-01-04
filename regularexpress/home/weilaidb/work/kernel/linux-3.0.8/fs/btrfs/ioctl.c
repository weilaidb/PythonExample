static inline __u32 btrfs_mask_flags(umode_t mode, __u32 flags)
static unsigned int btrfs_flags_to_ioctl(unsigned int flags)
void btrfs_update_iflags(struct inode *inode)
void btrfs_inherit_iflags(struct inode *inode, struct inode *dir)
static int btrfs_ioctl_getflags(struct file *file, void __user *arg)
static int check_flags(unsigned int flags)
static int btrfs_ioctl_setflags(struct file *file, void __user *arg)
static int btrfs_ioctl_getversion(struct file *file, int __user *arg)
static noinline int btrfs_ioctl_fitrim(struct file *file, void __user *arg)
static noinline int create_subvol(struct btrfs_root *root,
struct dentry *dentry,
char *name, int namelen,
u64 *async_transid)
static int create_snapshot(struct btrfs_root *root, struct dentry *dentry,
char *name, int namelen, u64 *async_transid,
bool readonly)
static inline int btrfs_check_sticky(struct inode *dir, struct inode *inode)
static int btrfs_may_delete(struct inode *dir,struct dentry *victim,int isdir)
static inline int btrfs_may_create(struct inode *dir, struct dentry *child)
static noinline int btrfs_mksubvol(struct path *parent,
char *name, int namelen,
struct btrfs_root *snap_src,
u64 *async_transid, bool readonly)
static int check_defrag_in_cache(struct inode *inode, u64 offset, int thresh)
static int find_new_extents(struct btrfs_root *root,
struct inode *inode, u64 newer_than,
u64 *off, int thresh)
static int should_defrag_range(struct inode *inode, u64 start, u64 len,
int thresh, u64 *last_len, u64 *skip,
u64 *defrag_end)
static int cluster_pages_for_defrag(struct inode *inode,
struct page **pages,
unsigned long start_index,
int num_pages)
int btrfs_defrag_file(struct inode *inode, struct file *file,
struct btrfs_ioctl_defrag_range_args *range,
u64 newer_than, unsigned long max_to_defrag)
static noinline int btrfs_ioctl_resize(struct btrfs_root *root,
void __user *arg)
static noinline int btrfs_ioctl_snap_create_transid(struct file *file,
char *name,
unsigned long fd,
int subvol,
u64 *transid,
bool readonly)
static noinline int btrfs_ioctl_snap_create(struct file *file,
void __user *arg, int subvol)
static noinline int btrfs_ioctl_snap_create_v2(struct file *file,
void __user *arg, int subvol)
static noinline int btrfs_ioctl_subvol_getflags(struct file *file,
void __user *arg)
static noinline int btrfs_ioctl_subvol_setflags(struct file *file,
void __user *arg)
static noinline int may_destroy_subvol(struct btrfs_root *root)
static noinline int key_in_sk(struct btrfs_key *key,
struct btrfs_ioctl_search_key *sk)
static noinline int copy_to_sk(struct btrfs_root *root,
struct btrfs_path *path,
struct btrfs_key *key,
struct btrfs_ioctl_search_key *sk,
char *buf,
unsigned long *sk_offset,
int *num_found)
static noinline int search_ioctl(struct inode *inode,
struct btrfs_ioctl_search_args *args)
static noinline int btrfs_ioctl_tree_search(struct file *file,
void __user *argp)
static noinline int btrfs_search_path_in_tree(struct btrfs_fs_info *info,
u64 tree_id, u64 dirid, char *name)
static noinline int btrfs_ioctl_ino_lookup(struct file *file,
void __user *argp)
static noinline int btrfs_ioctl_snap_destroy(struct file *file,
void __user *arg)
static int btrfs_ioctl_defrag(struct file *file, void __user *argp)
static long btrfs_ioctl_add_dev(struct btrfs_root *root, void __user *arg)
static long btrfs_ioctl_rm_dev(struct btrfs_root *root, void __user *arg)
static long btrfs_ioctl_fs_info(struct btrfs_root *root, void __user *arg)
static long btrfs_ioctl_dev_info(struct btrfs_root *root, void __user *arg)
static noinline long btrfs_ioctl_clone(struct file *file, unsigned long srcfd,
u64 off, u64 olen, u64 destoff)
static long btrfs_ioctl_clone_range(struct file *file, void __user *argp)
static long btrfs_ioctl_trans_start(struct file *file)
static long btrfs_ioctl_default_subvol(struct file *file, void __user *argp)
static void get_block_group_info(struct list_head *groups_list,
struct btrfs_ioctl_space_info *space)
long btrfs_ioctl_space_info(struct btrfs_root *root, void __user *arg)
long btrfs_ioctl_trans_end(struct file *file)
static noinline long btrfs_ioctl_start_sync(struct file *file, void __user *argp)
static noinline long btrfs_ioctl_wait_sync(struct file *file, void __user *argp)
static long btrfs_ioctl_scrub(struct btrfs_root *root, void __user *arg)
static long btrfs_ioctl_scrub_cancel(struct btrfs_root *root, void __user *arg)
static long btrfs_ioctl_scrub_progress(struct btrfs_root *root,
void __user *arg)
long btrfs_ioctl(struct file *file, unsigned int
cmd, unsigned long arg)
