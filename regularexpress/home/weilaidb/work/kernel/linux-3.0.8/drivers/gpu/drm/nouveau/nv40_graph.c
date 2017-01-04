struct nv40_graph_engine ;
static struct nouveau_channel *
nv40_graph_channel(struct drm_device *dev)
static int
nv40_graph_transfer_context(struct drm_device *dev, uint32_t inst, int save)
static int
nv40_graph_unload_context(struct drm_device *dev)
static int
nv40_graph_context_new(struct nouveau_channel *chan, int engine)
static void
nv40_graph_context_del(struct nouveau_channel *chan, int engine)
int
nv40_graph_object_new(struct nouveau_channel *chan, int engine,
u32 handle, u16 class)
static void
nv40_graph_set_tile_region(struct drm_device *dev, int i)
int
nv40_graph_init(struct drm_device *dev, int engine)
static int
nv40_graph_fini(struct drm_device *dev, int engine)
static int
nv40_graph_isr_chid(struct drm_device *dev, u32 inst)
static void
nv40_graph_isr(struct drm_device *dev)
static void
nv40_graph_destroy(struct drm_device *dev, int engine)
int
nv40_graph_create(struct drm_device *dev)
