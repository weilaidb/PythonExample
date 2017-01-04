int psb_gem_init_object(struct drm_gem_object *obj)
void psb_gem_free_object(struct drm_gem_object *obj)
int psb_gem_get_aperture(struct drm_device *dev, void *data,
struct drm_file *file)
static int psb_gem_create_mmap_offset(struct drm_gem_object *obj)
int psb_gem_dumb_map_gtt(struct drm_file *file, struct drm_device *dev,
uint32_t handle, uint64_t *offset)
static int psb_gem_create(struct drm_file *file,
struct drm_device *dev, uint64_t size, uint32_t *handlep)
int psb_gem_dumb_create(struct drm_file *file, struct drm_device *dev,
struct drm_mode_create_dumb *args)
int psb_gem_dumb_destroy(struct drm_file *file, struct drm_device *dev,
uint32_t handle)
int psb_gem_fault(struct vm_area_struct *vma, struct vm_fault *vmf)
