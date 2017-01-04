static unsigned long ntfs_nr_compression_users;
static ntfschar *default_upcase = NULL;
static unsigned long ntfs_nr_upcase_users = 0;
typedef enum  ON_ERRORS_ACTIONS;
const option_t on_errors_arr[] = ;
static int simple_getbool(char *s, bool *setval)
static bool parse_options(ntfs_volume *vol, char *opt)
static int ntfs_write_volume_flags(ntfs_volume *vol, const VOLUME_FLAGS flags)
static inline int ntfs_set_volume_flags(ntfs_volume *vol, VOLUME_FLAGS flags)
static inline int ntfs_clear_volume_flags(ntfs_volume *vol, VOLUME_FLAGS flags)
static int ntfs_remount(struct super_block *sb, int *flags, char *opt)
static bool is_boot_sector_ntfs(const struct super_block *sb,
const NTFS_BOOT_SECTOR *b, const bool silent)
static struct buffer_head *read_ntfs_boot_sector(struct super_block *sb,
const int silent)
static bool parse_ntfs_boot_sector(ntfs_volume *vol, const NTFS_BOOT_SECTOR *b)
static void ntfs_setup_allocators(ntfs_volume *vol)
static bool load_and_init_mft_mirror(ntfs_volume *vol)
static bool check_mft_mirror(ntfs_volume *vol)
static bool load_and_check_logfile(ntfs_volume *vol,
RESTART_PAGE_HEADER **rp)
#define NTFS_HIBERFIL_HEADER_SIZE	4096
static int check_windows_hibernation_status(ntfs_volume *vol)
static bool load_and_init_quota(ntfs_volume *vol)
static bool load_and_init_usnjrnl(ntfs_volume *vol)
static bool load_and_init_attrdef(ntfs_volume *vol)
static bool load_and_init_upcase(ntfs_volume *vol)
static struct lock_class_key
lcnbmp_runlist_lock_key, lcnbmp_mrec_lock_key,
mftbmp_runlist_lock_key, mftbmp_mrec_lock_key;
static bool load_system_files(ntfs_volume *vol)
static void ntfs_put_super(struct super_block *sb)
static s64 get_nr_free_clusters(ntfs_volume *vol)
static unsigned long __get_nr_free_mft_records(ntfs_volume *vol,
s64 nr_free, const pgoff_t max_index)
static int ntfs_statfs(struct dentry *dentry, struct kstatfs *sfs)
static int ntfs_write_inode(struct inode *vi, struct writeback_control *wbc)
static const struct super_operations ntfs_sops = ;
static int ntfs_fill_super(struct super_block *sb, void *opt, const int silent)
struct kmem_cache *ntfs_name_cache;
struct kmem_cache *ntfs_inode_cache;
struct kmem_cache *ntfs_big_inode_cache;
static void ntfs_big_inode_init_once(void *foo)
struct kmem_cache *ntfs_attr_ctx_cache;
struct kmem_cache *ntfs_index_ctx_cache;
DEFINE_MUTEX(ntfs_lock);
static struct dentry *ntfs_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *data)
static struct file_system_type ntfs_fs_type = ;
static const char ntfs_index_ctx_cache_name[] = "ntfs_index_ctx_cache";
static const char ntfs_attr_ctx_cache_name[] = "ntfs_attr_ctx_cache";
static const char ntfs_name_cache_name[] = "ntfs_name_cache";
static const char ntfs_inode_cache_name[] = "ntfs_inode_cache";
static const char ntfs_big_inode_cache_name[] = "ntfs_big_inode_cache";
static int __init init_ntfs_fs(void)
static void __exit exit_ntfs_fs(void)
MODULE_AUTHOR("Anton Altaparmakov <anton@tuxera.com>");
MODULE_DESCRIPTION("NTFS 1.2/3.x driver - Copyright (c) 2001-2011 Anton Altaparmakov and Tuxera Inc.");
MODULE_VERSION(NTFS_VERSION);
MODULE_LICENSE("GPL");
module_param(debug_msgs, bool, 0);
MODULE_PARM_DESC(debug_msgs, "Enable debug messages.");
module_init(init_ntfs_fs)
module_exit(exit_ntfs_fs)
