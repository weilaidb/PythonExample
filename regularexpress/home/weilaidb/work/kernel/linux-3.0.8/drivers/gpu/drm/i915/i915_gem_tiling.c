void
i915_gem_detect_bit_6_swizzle(struct drm_device *dev)
static bool
i915_tiling_ok(struct drm_device *dev, int stride, int size, int tiling_mode)
static bool
i915_gem_object_fence_ok(struct drm_i915_gem_object *obj, int tiling_mode)
int
i915_gem_set_tiling(struct drm_device *dev, void *data,
struct drm_file *file)
int
i915_gem_get_tiling(struct drm_device *dev, void *data,
struct drm_file *file)
static void
i915_gem_swizzle_page(struct page *page)
void
i915_gem_object_do_bit_17_swizzle(struct drm_i915_gem_object *obj)
void
i915_gem_object_save_bit_17_swizzle(struct drm_i915_gem_object *obj)
