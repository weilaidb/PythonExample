struct nv20_graph_engine ;
#define NV20_GRCTX_SIZE (3580*4)
#define NV25_GRCTX_SIZE (3529*4)
#define NV2A_GRCTX_SIZE (3500*4)
#define NV30_31_GRCTX_SIZE (24392)
#define NV34_GRCTX_SIZE    (18140)
#define NV35_36_GRCTX_SIZE (22396)
int
nv20_graph_unload_context(struct drm_device *dev)
static void
nv20_graph_rdi(struct drm_device *dev)
static void
nv20_graph_context_init(struct nouveau_gpuobj *ctx)
static void
nv25_graph_context_init(struct nouveau_gpuobj *ctx)
static void
nv2a_graph_context_init(struct nouveau_gpuobj *ctx)
static void
nv30_31_graph_context_init(struct nouveau_gpuobj *ctx)
static void
nv34_graph_context_init(struct nouveau_gpuobj *ctx)
static void
nv35_36_graph_context_init(struct nouveau_gpuobj *ctx)
int
nv20_graph_context_new(struct nouveau_channel *chan, int engine)
void
nv20_graph_context_del(struct nouveau_channel *chan, int engine)
static void
nv20_graph_set_tile_region(struct drm_device *dev, int i)
int
nv20_graph_init(struct drm_device *dev, int engine)
int
nv30_graph_init(struct drm_device *dev, int engine)
int
nv20_graph_fini(struct drm_device *dev, int engine)
static void
nv20_graph_isr(struct drm_device *dev)
static void
nv20_graph_destroy(struct drm_device *dev, int engine)
int
nv20_graph_create(struct drm_device *dev)
