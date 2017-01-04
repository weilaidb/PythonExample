static void mark_block(struct drm_device * dev, struct mem_block *p, int in_use)
static struct mem_block *split_block(struct mem_block *p, int start, int size,
struct drm_file *file_priv)
static struct mem_block *alloc_block(struct mem_block *heap, int size,
int align2, struct drm_file *file_priv)
static struct mem_block *find_block(struct mem_block *heap, int start)
static void free_block(struct mem_block *p)
static int init_heap(struct mem_block **heap, int start, int size)
void i915_mem_release(struct drm_device * dev, struct drm_file *file_priv,
struct mem_block *heap)
void i915_mem_takedown(struct mem_block **heap)
static struct mem_block **get_heap(drm_i915_private_t * dev_priv, int region)
int i915_mem_alloc(struct drm_device *dev, void *data,
struct drm_file *file_priv)
int i915_mem_free(struct drm_device *dev, void *data,
struct drm_file *file_priv)
int i915_mem_init_heap(struct drm_device *dev, void *data,
struct drm_file *file_priv)
int i915_mem_destroy_heap( struct drm_device *dev, void *data,
struct drm_file *file_priv )
