struct change_domains ;
static void
i915_gem_object_set_to_gpu_domain(struct drm_i915_gem_object *obj,
struct intel_ring_buffer *ring,
struct change_domains *cd)
struct eb_objects ;
static struct eb_objects *
eb_create(int size)
static void
eb_reset(struct eb_objects *eb)
static void
eb_add_object(struct eb_objects *eb, struct drm_i915_gem_object *obj)
static struct drm_i915_gem_object *
eb_get_object(struct eb_objects *eb, unsigned long handle)
static void
eb_destroy(struct eb_objects *eb)
static int
i915_gem_execbuffer_relocate_entry(struct drm_i915_gem_object *obj,
struct eb_objects *eb,
struct drm_i915_gem_relocation_entry *reloc)
static int
i915_gem_execbuffer_relocate_object(struct drm_i915_gem_object *obj,
struct eb_objects *eb)
static int
i915_gem_execbuffer_relocate_object_slow(struct drm_i915_gem_object *obj,
struct eb_objects *eb,
struct drm_i915_gem_relocation_entry *relocs)
static int
i915_gem_execbuffer_relocate(struct drm_device *dev,
struct eb_objects *eb,
struct list_head *objects)
static int
i915_gem_execbuffer_reserve(struct intel_ring_buffer *ring,
struct drm_file *file,
struct list_head *objects)
static int
i915_gem_execbuffer_relocate_slow(struct drm_device *dev,
struct drm_file *file,
struct intel_ring_buffer *ring,
struct list_head *objects,
struct eb_objects *eb,
struct drm_i915_gem_exec_object2 *exec,
int count)
static int
i915_gem_execbuffer_flush(struct drm_device *dev,
uint32_t invalidate_domains,
uint32_t flush_domains,
uint32_t flush_rings)
static int
i915_gem_execbuffer_sync_rings(struct drm_i915_gem_object *obj,
struct intel_ring_buffer *to)
static int
i915_gem_execbuffer_wait_for_flips(struct intel_ring_buffer *ring, u32 flips)
static int
i915_gem_execbuffer_move_to_gpu(struct intel_ring_buffer *ring,
struct list_head *objects)
static bool
i915_gem_check_execbuffer(struct drm_i915_gem_execbuffer2 *exec)
static int
validate_exec_list(struct drm_i915_gem_exec_object2 *exec,
int count)
static void
i915_gem_execbuffer_move_to_active(struct list_head *objects,
struct intel_ring_buffer *ring,
u32 seqno)
static void
i915_gem_execbuffer_retire_commands(struct drm_device *dev,
struct drm_file *file,
struct intel_ring_buffer *ring)
static int
i915_gem_do_execbuffer(struct drm_device *dev, void *data,
struct drm_file *file,
struct drm_i915_gem_execbuffer2 *args,
struct drm_i915_gem_exec_object2 *exec)
int
i915_gem_execbuffer(struct drm_device *dev, void *data,
struct drm_file *file)
int
i915_gem_execbuffer2(struct drm_device *dev, void *data,
struct drm_file *file)
