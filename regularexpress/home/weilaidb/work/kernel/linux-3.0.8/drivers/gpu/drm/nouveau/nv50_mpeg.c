struct nv50_mpeg_engine ;
static inline u32
CTX_PTR(struct drm_device *dev, u32 offset)
static int
nv50_mpeg_context_new(struct nouveau_channel *chan, int engine)
static void
nv50_mpeg_context_del(struct nouveau_channel *chan, int engine)
static int
nv50_mpeg_object_new(struct nouveau_channel *chan, int engine,
u32 handle, u16 class)
static void
nv50_mpeg_tlb_flush(struct drm_device *dev, int engine)
static int
nv50_mpeg_init(struct drm_device *dev, int engine)
static int
nv50_mpeg_fini(struct drm_device *dev, int engine)
static void
nv50_mpeg_isr(struct drm_device *dev)
static void
nv50_vpe_isr(struct drm_device *dev)
static void
nv50_mpeg_destroy(struct drm_device *dev, int engine)
int
nv50_mpeg_create(struct drm_device *dev)
