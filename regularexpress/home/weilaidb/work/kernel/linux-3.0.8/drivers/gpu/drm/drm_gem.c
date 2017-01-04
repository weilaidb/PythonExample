#if BITS_PER_LONG == 64
#define DRM_FILE_PAGE_OFFSET_START ((0xFFFFFFFFUL >> PAGE_SHIFT) + 1)
#define DRM_FILE_PAGE_OFFSET_SIZE ((0xFFFFFFFFUL >> PAGE_SHIFT) * 16)
#define DRM_FILE_PAGE_OFFSET_START ((0xFFFFFFFUL >> PAGE_SHIFT) + 1)
#define DRM_FILE_PAGE_OFFSET_SIZE ((0xFFFFFFFUL >> PAGE_SHIFT) * 16)
int
drm_gem_init(struct drm_device *dev)
void
drm_gem_destroy(struct drm_device *dev)
int drm_gem_object_init(struct drm_device *dev,
struct drm_gem_object *obj, size_t size)
EXPORT_SYMBOL(drm_gem_object_init);
struct drm_gem_object *
drm_gem_object_alloc(struct drm_device *dev, size_t size)
EXPORT_SYMBOL(drm_gem_object_alloc);
int
drm_gem_handle_delete(struct drm_file *filp, u32 handle)
EXPORT_SYMBOL(drm_gem_handle_delete);
int
drm_gem_handle_create(struct drm_file *file_priv,
struct drm_gem_object *obj,
u32 *handlep)
EXPORT_SYMBOL(drm_gem_handle_create);
struct drm_gem_object *
drm_gem_object_lookup(struct drm_device *dev, struct drm_file *filp,
u32 handle)
EXPORT_SYMBOL(drm_gem_object_lookup);
int
drm_gem_close_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv)
int
drm_gem_flink_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv)
int
drm_gem_open_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv)
void
drm_gem_open(struct drm_device *dev, struct drm_file *file_private)
static int
drm_gem_object_release_handle(int id, void *ptr, void *data)
void
drm_gem_release(struct drm_device *dev, struct drm_file *file_private)
void
drm_gem_object_release(struct drm_gem_object *obj)
EXPORT_SYMBOL(drm_gem_object_release);
void
drm_gem_object_free(struct kref *kref)
EXPORT_SYMBOL(drm_gem_object_free);
static void drm_gem_object_ref_bug(struct kref *list_kref)
void drm_gem_object_handle_free(struct drm_gem_object *obj)
EXPORT_SYMBOL(drm_gem_object_handle_free);
void drm_gem_vm_open(struct vm_area_struct *vma)
EXPORT_SYMBOL(drm_gem_vm_open);
void drm_gem_vm_close(struct vm_area_struct *vma)
EXPORT_SYMBOL(drm_gem_vm_close);
int drm_gem_mmap(struct file *filp, struct vm_area_struct *vma)
EXPORT_SYMBOL(drm_gem_mmap);
