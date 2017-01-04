#if defined(CONFIG_DEBUG_FS)
static struct drm_info_list drm_debugfs_list[] = ;
#define DRM_DEBUGFS_ENTRIES ARRAY_SIZE(drm_debugfs_list)
static int drm_debugfs_open(struct inode *inode, struct file *file)
static const struct file_operations drm_debugfs_fops = ;
int drm_debugfs_create_files(struct drm_info_list *files, int count,
struct dentry *root, struct drm_minor *minor)
EXPORT_SYMBOL(drm_debugfs_create_files);
int drm_debugfs_init(struct drm_minor *minor, int minor_id,
struct dentry *root)
int drm_debugfs_remove_files(struct drm_info_list *files, int count,
struct drm_minor *minor)
EXPORT_SYMBOL(drm_debugfs_remove_files);
int drm_debugfs_cleanup(struct drm_minor *minor)
