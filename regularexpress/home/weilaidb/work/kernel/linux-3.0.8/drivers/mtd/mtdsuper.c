static int get_sb_mtd_compare(struct super_block *sb, void *_mtd)
static int get_sb_mtd_set(struct super_block *sb, void *_mtd)
static struct dentry *mount_mtd_aux(struct file_system_type *fs_type, int flags,
const char *dev_name, void *data,
struct mtd_info *mtd,
int (*fill_super)(struct super_block *, void *, int))
static struct dentry *mount_mtd_nr(struct file_system_type *fs_type, int flags,
const char *dev_name, void *data, int mtdnr,
int (*fill_super)(struct super_block *, void *, int))
struct dentry *mount_mtd(struct file_system_type *fs_type, int flags,
const char *dev_name, void *data,
int (*fill_super)(struct super_block *, void *, int))
EXPORT_SYMBOL_GPL(mount_mtd);
void kill_mtd_super(struct super_block *sb)
EXPORT_SYMBOL_GPL(kill_mtd_super);
