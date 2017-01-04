static int
nvc0_graph_load_context(struct nouveau_channel *chan)
static int
nvc0_graph_unload_context_to(struct drm_device *dev, u64 chan)
static int
nvc0_graph_construct_context(struct nouveau_channel *chan)
static int
nvc0_graph_create_context_mmio_list(struct nouveau_channel *chan)
static int
nvc0_graph_context_new(struct nouveau_channel *chan, int engine)
static void
nvc0_graph_context_del(struct nouveau_channel *chan, int engine)
static int
nvc0_graph_object_new(struct nouveau_channel *chan, int engine,
u32 handle, u16 class)
static int
nvc0_graph_fini(struct drm_device *dev, int engine)
static int
nvc0_graph_mthd_page_flip(struct nouveau_channel *chan,
u32 class, u32 mthd, u32 data)
static void
nvc0_graph_init_obj418880(struct drm_device *dev)
static void
nvc0_graph_init_regs(struct drm_device *dev)
static void
nvc0_graph_init_gpc_0(struct drm_device *dev)
static void
nvc0_graph_init_units(struct drm_device *dev)
static void
nvc0_graph_init_gpc_1(struct drm_device *dev)
static void
nvc0_graph_init_rop(struct drm_device *dev)
static void
nvc0_graph_init_fuc(struct drm_device *dev, u32 fuc_base,
struct nvc0_graph_fuc *code, struct nvc0_graph_fuc *data)
static int
nvc0_graph_init_ctxctl(struct drm_device *dev)
static int
nvc0_graph_init(struct drm_device *dev, int engine)
int
nvc0_graph_isr_chid(struct drm_device *dev, u64 inst)
static void
nvc0_graph_isr(struct drm_device *dev)
static void
nvc0_runk140_isr(struct drm_device *dev)
static int
nvc0_graph_create_fw(struct drm_device *dev, const char *fwname,
struct nvc0_graph_fuc *fuc)
static void
nvc0_graph_destroy_fw(struct nvc0_graph_fuc *fuc)
static void
nvc0_graph_destroy(struct drm_device *dev, int engine)
int
nvc0_graph_create(struct drm_device *dev)
MODULE_FIRMWARE("nouveau/nvc0_fuc409c");
MODULE_FIRMWARE("nouveau/nvc0_fuc409d");
MODULE_FIRMWARE("nouveau/nvc0_fuc41ac");
MODULE_FIRMWARE("nouveau/nvc0_fuc41ad");
MODULE_FIRMWARE("nouveau/nvc3_fuc409c");
MODULE_FIRMWARE("nouveau/nvc3_fuc409d");
MODULE_FIRMWARE("nouveau/nvc3_fuc41ac");
MODULE_FIRMWARE("nouveau/nvc3_fuc41ad");
MODULE_FIRMWARE("nouveau/nvc4_fuc409c");
MODULE_FIRMWARE("nouveau/nvc4_fuc409d");
MODULE_FIRMWARE("nouveau/nvc4_fuc41ac");
MODULE_FIRMWARE("nouveau/nvc4_fuc41ad");
MODULE_FIRMWARE("nouveau/fuc409c");
MODULE_FIRMWARE("nouveau/fuc409d");
MODULE_FIRMWARE("nouveau/fuc41ac");
MODULE_FIRMWARE("nouveau/fuc41ad");
