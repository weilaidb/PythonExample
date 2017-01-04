#define __MTD_SUPER_H__
extern struct dentry *mount_mtd(struct file_system_type *fs_type, int flags,
const char *dev_name, void *data,
int (*fill_super)(struct super_block *, void *, int));
extern void kill_mtd_super(struct super_block *sb);
