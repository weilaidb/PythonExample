#define nouveau_gem_pushbuf_sync(chan) 0
int
nouveau_gem_object_new(struct drm_gem_object *gem)
void
nouveau_gem_object_del(struct drm_gem_object *gem)
int
nouveau_gem_new(struct drm_device *dev, struct nouveau_channel *chan,
int size, int align, uint32_t domain, uint32_t tile_mode,
uint32_t tile_flags, struct nouveau_bo **pnvbo)
static int
nouveau_gem_info(struct drm_gem_object *gem, struct drm_nouveau_gem_info *rep)
int
nouveau_gem_ioctl_new(struct drm_device *dev, void *data,
struct drm_file *file_priv)
static int
nouveau_gem_set_domain(struct drm_gem_object *gem, uint32_t read_domains,
uint32_t write_domains, uint32_t valid_domains)
struct validate_op ;
static void
validate_fini_list(struct list_head *list, struct nouveau_fence *fence)
static void
validate_fini(struct validate_op *op, struct nouveau_fence* fence)
static int
validate_init(struct nouveau_channel *chan, struct drm_file *file_priv,
struct drm_nouveau_gem_pushbuf_bo *pbbo,
int nr_buffers, struct validate_op *op)
static int
validate_list(struct nouveau_channel *chan, struct list_head *list,
struct drm_nouveau_gem_pushbuf_bo *pbbo, uint64_t user_pbbo_ptr)
static int
nouveau_gem_pushbuf_validate(struct nouveau_channel *chan,
struct drm_file *file_priv,
struct drm_nouveau_gem_pushbuf_bo *pbbo,
uint64_t user_buffers, int nr_buffers,
struct validate_op *op, int *apply_relocs)
static inline void *
u_memcpya(uint64_t user, unsigned nmemb, unsigned size)
static int
nouveau_gem_pushbuf_reloc_apply(struct drm_device *dev,
struct drm_nouveau_gem_pushbuf *req,
struct drm_nouveau_gem_pushbuf_bo *bo)
int
nouveau_gem_ioctl_pushbuf(struct drm_device *dev, void *data,
struct drm_file *file_priv)
static inline uint32_t
domain_to_ttm(struct nouveau_bo *nvbo, uint32_t domain)
int
nouveau_gem_ioctl_cpu_prep(struct drm_device *dev, void *data,
struct drm_file *file_priv)
int
nouveau_gem_ioctl_cpu_fini(struct drm_device *dev, void *data,
struct drm_file *file_priv)
int
nouveau_gem_ioctl_info(struct drm_device *dev, void *data,
struct drm_file *file_priv)
