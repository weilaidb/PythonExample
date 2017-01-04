struct nv40_mpeg_engine ;
static int
nv40_mpeg_context_new(struct nouveau_channel *chan, int engine)
static void
nv40_mpeg_context_del(struct nouveau_channel *chan, int engine)
static int
nv40_mpeg_object_new(struct nouveau_channel *chan, int engine,
u32 handle, u16 class)
static int
nv40_mpeg_init(struct drm_device *dev, int engine)
static int
nv40_mpeg_fini(struct drm_device *dev, int engine)
static int
nv40_mpeg_mthd_dma(struct nouveau_channel *chan, u32 class, u32 mthd, u32 data)
static int
nv40_mpeg_isr_chid(struct drm_device *dev, u32 inst)
static void
nv40_vpe_set_tile_region(struct drm_device *dev, int i)
static void
nv40_mpeg_isr(struct drm_device *dev)
static void
nv40_vpe_isr(struct drm_device *dev)
static void
nv40_mpeg_destroy(struct drm_device *dev, int engine)
int
nv40_mpeg_create(struct drm_device *dev)
