#define CREATE_TRACE_POINTS
static const struct super_operations btrfs_super_ops;
static const char *btrfs_decode_error(struct btrfs_fs_info *fs_info, int errno,
char nbuf[16])
static void __save_error_info(struct btrfs_fs_info *fs_info)
static void save_error_info(struct btrfs_fs_info *fs_info)
static void btrfs_handle_error(struct btrfs_fs_info *fs_info)
void __btrfs_std_error(struct btrfs_fs_info *fs_info, const char *function,
unsigned int line, int errno)
static void btrfs_put_super(struct super_block *sb)
enum ;
static match_table_t tokens = ;
int btrfs_parse_options(struct btrfs_root *root, char *options)
static int btrfs_parse_early_options(const char *options, fmode_t flags,
void *holder, char **subvol_name, u64 *subvol_objectid,
u64 *subvol_rootid, struct btrfs_fs_devices **fs_devices)
static struct dentry *get_default_root(struct super_block *sb,
u64 subvol_objectid)
static int btrfs_fill_super(struct super_block *sb,
struct btrfs_fs_devices *fs_devices,
void *data, int silent)
int btrfs_sync_fs(struct super_block *sb, int wait)
static int btrfs_show_options(struct seq_file *seq, struct vfsmount *vfs)
static int btrfs_test_super(struct super_block *s, void *data)
static int btrfs_set_super(struct super_block *s, void *data)
static struct dentry *btrfs_mount(struct file_system_type *fs_type, int flags,
const char *device_name, void *data)
static int btrfs_remount(struct super_block *sb, int *flags, char *data)
static int btrfs_cmp_device_free_bytes(const void *dev_info1,
const void *dev_info2)
static inline void btrfs_descending_sort_devices(
struct btrfs_device_info *devices,
size_t nr_devices)
static int btrfs_calc_avail_data_space(struct btrfs_root *root, u64 *free_bytes)
static int btrfs_statfs(struct dentry *dentry, struct kstatfs *buf)
static struct file_system_type btrfs_fs_type = ;
static long btrfs_control_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static int btrfs_freeze(struct super_block *sb)
static int btrfs_unfreeze(struct super_block *sb)
static const struct super_operations btrfs_super_ops = ;
static const struct file_operations btrfs_ctl_fops = ;
static struct miscdevice btrfs_misc = ;
MODULE_ALIAS_MISCDEV(BTRFS_MINOR);
MODULE_ALIAS("devname:btrfs-control");
static int btrfs_interface_init(void)
static void btrfs_interface_exit(void)
static int __init init_btrfs_fs(void)
static void __exit exit_btrfs_fs(void)
module_init(init_btrfs_fs)
module_exit(exit_btrfs_fs)
MODULE_LICENSE("GPL");
