int radeon_gem_object_init(struct drm_gem_object *obj)
void radeon_gem_object_free(struct drm_gem_object *gobj)
int radeon_gem_object_create(struct radeon_device *rdev, int size,
int alignment, int initial_domain,
bool discardable, bool kernel,
struct drm_gem_object **obj)
int radeon_gem_object_pin(struct drm_gem_object *obj, uint32_t pin_domain,
uint64_t *gpu_addr)
void radeon_gem_object_unpin(struct drm_gem_object *obj)
int radeon_gem_set_domain(struct drm_gem_object *gobj,
uint32_t rdomain, uint32_t wdomain)
int radeon_gem_init(struct radeon_device *rdev)
void radeon_gem_fini(struct radeon_device *rdev)
int radeon_gem_info_ioctl(struct drm_device *dev, void *data,
struct drm_file *filp)
int radeon_gem_pread_ioctl(struct drm_device *dev, void *data,
struct drm_file *filp)
int radeon_gem_pwrite_ioctl(struct drm_device *dev, void *data,
struct drm_file *filp)
int radeon_gem_create_ioctl(struct drm_device *dev, void *data,
struct drm_file *filp)
int radeon_gem_set_domain_ioctl(struct drm_device *dev, void *data,
struct drm_file *filp)
int radeon_mode_dumb_mmap(struct drm_file *filp,
struct drm_device *dev,
uint32_t handle, uint64_t *offset_p)
int radeon_gem_mmap_ioctl(struct drm_device *dev, void *data,
struct drm_file *filp)
int radeon_gem_busy_ioctl(struct drm_device *dev, void *data,
struct drm_file *filp)
int radeon_gem_wait_idle_ioctl(struct drm_device *dev, void *data,
struct drm_file *filp)
int radeon_gem_set_tiling_ioctl(struct drm_device *dev, void *data,
struct drm_file *filp)
int radeon_gem_get_tiling_ioctl(struct drm_device *dev, void *data,
struct drm_file *filp)
int radeon_mode_dumb_create(struct drm_file *file_priv,
struct drm_device *dev,
struct drm_mode_create_dumb *args)
int radeon_mode_dumb_destroy(struct drm_file *file_priv,
struct drm_device *dev,
uint32_t handle)
