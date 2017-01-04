struct nv10_graph_engine ;
struct pipe_state ;
static int nv10_graph_ctx_regs[] = ;
static int nv17_graph_ctx_regs[] = ;
struct graph_state ;
#define PIPE_SAVE(dev, state, addr)					\
do  while (0)
#define PIPE_RESTORE(dev, state, addr)					\
do  while (0)
static void nv10_graph_save_pipe(struct nouveau_channel *chan)
static void nv10_graph_load_pipe(struct nouveau_channel *chan)
static void nv10_graph_create_pipe(struct nouveau_channel *chan)
static int nv10_graph_ctx_regs_find_offset(struct drm_device *dev, int reg)
static int nv17_graph_ctx_regs_find_offset(struct drm_device *dev, int reg)
static void nv10_graph_load_dma_vtxbuf(struct nouveau_channel *chan,
uint32_t inst)
static int
nv10_graph_load_context(struct nouveau_channel *chan)
static int
nv10_graph_unload_context(struct drm_device *dev)
static void
nv10_graph_context_switch(struct drm_device *dev)
#define NV_WRITE_CTX(reg, val) do  while (0)
#define NV17_WRITE_CTX(reg, val) do  while (0)
struct nouveau_channel *
nv10_graph_channel(struct drm_device *dev)
static int
nv10_graph_context_new(struct nouveau_channel *chan, int engine)
static void
nv10_graph_context_del(struct nouveau_channel *chan, int engine)
static void
nv10_graph_set_tile_region(struct drm_device *dev, int i)
static int
nv10_graph_init(struct drm_device *dev, int engine)
static int
nv10_graph_fini(struct drm_device *dev, int engine)
static int
nv17_graph_mthd_lma_window(struct nouveau_channel *chan,
u32 class, u32 mthd, u32 data)
static int
nv17_graph_mthd_lma_enable(struct nouveau_channel *chan,
u32 class, u32 mthd, u32 data)
struct nouveau_bitfield nv10_graph_intr[] = ;
struct nouveau_bitfield nv10_graph_nstatus[] = ;
static void
nv10_graph_isr(struct drm_device *dev)
static void
nv10_graph_destroy(struct drm_device *dev, int engine)
int
nv10_graph_create(struct drm_device *dev)
