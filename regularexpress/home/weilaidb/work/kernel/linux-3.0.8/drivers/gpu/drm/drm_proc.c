static struct drm_info_list drm_proc_list[] = ;
#define DRM_PROC_ENTRIES ARRAY_SIZE(drm_proc_list)
static int drm_proc_open(struct inode *inode, struct file *file)
static const struct file_operations drm_proc_fops = ;
int drm_proc_create_files(struct drm_info_list *files, int count,
struct proc_dir_entry *root, struct drm_minor *minor)
int drm_proc_init(struct drm_minor *minor, int minor_id,
struct proc_dir_entry *root)
int drm_proc_remove_files(struct drm_info_list *files, int count,
struct drm_minor *minor)
int drm_proc_cleanup(struct drm_minor *minor, struct proc_dir_entry *root)
