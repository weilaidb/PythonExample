struct nv04_graph_engine ;
static uint32_t nv04_graph_ctx_regs[] = ;
struct graph_state ;
static struct nouveau_channel *
nv04_graph_channel(struct drm_device *dev)
static uint32_t *ctx_reg(struct graph_state *ctx, uint32_t reg)
static int
nv04_graph_load_context(struct nouveau_channel *chan)
static int
nv04_graph_unload_context(struct drm_device *dev)
static int
nv04_graph_context_new(struct nouveau_channel *chan, int engine)
static void
nv04_graph_context_del(struct nouveau_channel *chan, int engine)
int
nv04_graph_object_new(struct nouveau_channel *chan, int engine,
u32 handle, u16 class)
static int
nv04_graph_init(struct drm_device *dev, int engine)
static int
nv04_graph_fini(struct drm_device *dev, int engine)
void
nv04_graph_fifo_access(struct drm_device *dev, bool enabled)
static int
nv04_graph_mthd_set_ref(struct nouveau_channel *chan,
u32 class, u32 mthd, u32 data)
int
nv04_graph_mthd_page_flip(struct nouveau_channel *chan,
u32 class, u32 mthd, u32 data)
static void
nv04_graph_set_ctx1(struct nouveau_channel *chan, u32 mask, u32 value)
static void
nv04_graph_set_ctx_val(struct nouveau_channel *chan, u32 mask, u32 value)
static int
nv04_graph_mthd_set_operation(struct nouveau_channel *chan,
u32 class, u32 mthd, u32 data)
static int
nv04_graph_mthd_surf3d_clip_h(struct nouveau_channel *chan,
u32 class, u32 mthd, u32 data)
static int
nv04_graph_mthd_surf3d_clip_v(struct nouveau_channel *chan,
u32 class, u32 mthd, u32 data)
static int
nv04_graph_mthd_bind_surf2d(struct nouveau_channel *chan,
u32 class, u32 mthd, u32 data)
static int
nv04_graph_mthd_bind_surf2d_swzsurf(struct nouveau_channel *chan,
u32 class, u32 mthd, u32 data)
static int
nv04_graph_mthd_bind_nv01_patt(struct nouveau_channel *chan,
u32 class, u32 mthd, u32 data)
static int
nv04_graph_mthd_bind_nv04_patt(struct nouveau_channel *chan,
u32 class, u32 mthd, u32 data)
static int
nv04_graph_mthd_bind_rop(struct nouveau_channel *chan,
u32 class, u32 mthd, u32 data)
static int
nv04_graph_mthd_bind_beta1(struct nouveau_channel *chan,
u32 class, u32 mthd, u32 data)
static int
nv04_graph_mthd_bind_beta4(struct nouveau_channel *chan,
u32 class, u32 mthd, u32 data)
static int
nv04_graph_mthd_bind_surf_dst(struct nouveau_channel *chan,
u32 class, u32 mthd, u32 data)
static int
nv04_graph_mthd_bind_surf_src(struct nouveau_channel *chan,
u32 class, u32 mthd, u32 data)
static int
nv04_graph_mthd_bind_surf_color(struct nouveau_channel *chan,
u32 class, u32 mthd, u32 data)
static int
nv04_graph_mthd_bind_surf_zeta(struct nouveau_channel *chan,
u32 class, u32 mthd, u32 data)
static int
nv04_graph_mthd_bind_clip(struct nouveau_channel *chan,
u32 class, u32 mthd, u32 data)
static int
nv04_graph_mthd_bind_chroma(struct nouveau_channel *chan,
u32 class, u32 mthd, u32 data)
static struct nouveau_bitfield nv04_graph_intr[] = ;
static struct nouveau_bitfield nv04_graph_nstatus[] = ;
struct nouveau_bitfield nv04_graph_nsource[] = ;
static void
nv04_graph_context_switch(struct drm_device *dev)
static void
nv04_graph_isr(struct drm_device *dev)
static void
nv04_graph_destroy(struct drm_device *dev, int engine)
int
nv04_graph_create(struct drm_device *dev)
