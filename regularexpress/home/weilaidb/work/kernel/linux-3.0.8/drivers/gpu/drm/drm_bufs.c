static struct drm_map_list *drm_find_matching_map(struct drm_device *dev,
struct drm_local_map *map)
static int drm_map_handle(struct drm_device *dev, struct drm_hash_item *hash,
unsigned long user_token, int hashed_handle, int shm)
static int drm_addmap_core(struct drm_device * dev, resource_size_t offset,
unsigned int size, enum drm_map_type type,
enum drm_map_flags flags,
struct drm_map_list ** maplist)
int drm_addmap(struct drm_device * dev, resource_size_t offset,
unsigned int size, enum drm_map_type type,
enum drm_map_flags flags, struct drm_local_map ** map_ptr)
EXPORT_SYMBOL(drm_addmap);
int drm_addmap_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv)
int drm_rmmap_locked(struct drm_device *dev, struct drm_local_map *map)
EXPORT_SYMBOL(drm_rmmap_locked);
int drm_rmmap(struct drm_device *dev, struct drm_local_map *map)
EXPORT_SYMBOL(drm_rmmap);
int drm_rmmap_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv)
static void drm_cleanup_buf_error(struct drm_device * dev,
struct drm_buf_entry * entry)
#if __OS_HAS_AGP
int drm_addbufs_agp(struct drm_device * dev, struct drm_buf_desc * request)
EXPORT_SYMBOL(drm_addbufs_agp);
int drm_addbufs_pci(struct drm_device * dev, struct drm_buf_desc * request)
EXPORT_SYMBOL(drm_addbufs_pci);
static int drm_addbufs_sg(struct drm_device * dev, struct drm_buf_desc * request)
static int drm_addbufs_fb(struct drm_device * dev, struct drm_buf_desc * request)
int drm_addbufs(struct drm_device *dev, void *data,
struct drm_file *file_priv)
int drm_infobufs(struct drm_device *dev, void *data,
struct drm_file *file_priv)
int drm_markbufs(struct drm_device *dev, void *data,
struct drm_file *file_priv)
int drm_freebufs(struct drm_device *dev, void *data,
struct drm_file *file_priv)
int drm_mapbufs(struct drm_device *dev, void *data,
struct drm_file *file_priv)
int drm_order(unsigned long size)
EXPORT_SYMBOL(drm_order);
