struct nouveau_gpuobj_method ;
struct nouveau_gpuobj_class ;
int
nouveau_gpuobj_class_new(struct drm_device *dev, u32 class, u32 engine)
int
nouveau_gpuobj_mthd_new(struct drm_device *dev, u32 class, u32 mthd,
int (*exec)(struct nouveau_channel *, u32, u32, u32))
int
nouveau_gpuobj_mthd_call(struct nouveau_channel *chan,
u32 class, u32 mthd, u32 data)
int
nouveau_gpuobj_mthd_call2(struct drm_device *dev, int chid,
u32 class, u32 mthd, u32 data)
int
nouveau_gpuobj_new(struct drm_device *dev, struct nouveau_channel *chan,
uint32_t size, int align, uint32_t flags,
struct nouveau_gpuobj **gpuobj_ret)
int
nouveau_gpuobj_init(struct drm_device *dev)
void
nouveau_gpuobj_takedown(struct drm_device *dev)
static void
nouveau_gpuobj_del(struct kref *ref)
void
nouveau_gpuobj_ref(struct nouveau_gpuobj *ref, struct nouveau_gpuobj **ptr)
int
nouveau_gpuobj_new_fake(struct drm_device *dev, u32 pinst, u64 vinst,
u32 size, u32 flags, struct nouveau_gpuobj **pgpuobj)
void
nv50_gpuobj_dma_init(struct nouveau_gpuobj *obj, u32 offset, int class,
u64 base, u64 size, int target, int access,
u32 type, u32 comp)
int
nv50_gpuobj_dma_new(struct nouveau_channel *chan, int class, u64 base, u64 size,
int target, int access, u32 type, u32 comp,
struct nouveau_gpuobj **pobj)
int
nouveau_gpuobj_dma_new(struct nouveau_channel *chan, int class, u64 base,
u64 size, int access, int target,
struct nouveau_gpuobj **pobj)
static int
nouveau_gpuobj_sw_new(struct nouveau_channel *chan, u32 handle, u16 class)
int
nouveau_gpuobj_gr_new(struct nouveau_channel *chan, u32 handle, int class)
static int
nouveau_gpuobj_channel_init_pramin(struct nouveau_channel *chan)
int
nouveau_gpuobj_channel_init(struct nouveau_channel *chan,
uint32_t vram_h, uint32_t tt_h)
void
nouveau_gpuobj_channel_takedown(struct nouveau_channel *chan)
int
nouveau_gpuobj_suspend(struct drm_device *dev)
void
nouveau_gpuobj_resume(struct drm_device *dev)
int nouveau_ioctl_grobj_alloc(struct drm_device *dev, void *data,
struct drm_file *file_priv)
int nouveau_ioctl_gpuobj_free(struct drm_device *dev, void *data,
struct drm_file *file_priv)
u32
nv_ro32(struct nouveau_gpuobj *gpuobj, u32 offset)
void
nv_wo32(struct nouveau_gpuobj *gpuobj, u32 offset, u32 val)
