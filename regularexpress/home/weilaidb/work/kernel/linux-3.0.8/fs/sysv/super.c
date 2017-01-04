enum ;
static void detected_xenix(struct sysv_sb_info *sbi)
static void detected_sysv4(struct sysv_sb_info *sbi)
static void detected_sysv2(struct sysv_sb_info *sbi)
static void detected_coherent(struct sysv_sb_info *sbi)
static void detected_v7(struct sysv_sb_info *sbi)
static int detect_xenix(struct sysv_sb_info *sbi, struct buffer_head *bh)
static int detect_sysv(struct sysv_sb_info *sbi, struct buffer_head *bh)
static int detect_coherent(struct sysv_sb_info *sbi, struct buffer_head *bh)
static int detect_sysv_odd(struct sysv_sb_info *sbi, struct buffer_head *bh)
static struct  flavours[] = ;
static char *flavour_names[] = ;
static void (*flavour_setup[])(struct sysv_sb_info *) = ;
static int complete_read_super(struct super_block *sb, int silent, int size)
static int sysv_fill_super(struct super_block *sb, void *data, int silent)
static int v7_sanity_check(struct super_block *sb, struct buffer_head *bh)
static int v7_fill_super(struct super_block *sb, void *data, int silent)
static struct dentry *sysv_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *data)
static struct dentry *v7_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *data)
static struct file_system_type sysv_fs_type = ;
static struct file_system_type v7_fs_type = ;
static int __init init_sysv_fs(void)
static void __exit exit_sysv_fs(void)
module_init(init_sysv_fs)
module_exit(exit_sysv_fs)
MODULE_ALIAS("v7");
MODULE_LICENSE("GPL");
