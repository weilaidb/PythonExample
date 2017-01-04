struct nv50_graph_engine ;
static void
nv50_graph_fifo_access(struct drm_device *dev, bool enabled)
static struct nouveau_channel *
nv50_graph_channel(struct drm_device *dev)
static int
nv50_graph_do_load_context(struct drm_device *dev, uint32_t inst)
static int
nv50_graph_unload_context(struct drm_device *dev)
static void
nv50_graph_init_reset(struct drm_device *dev)
static void
nv50_graph_init_intr(struct drm_device *dev)
static void
nv50_graph_init_regs__nv(struct drm_device *dev)
static void
nv50_graph_init_zcull(struct drm_device *dev)
static int
nv50_graph_init_ctxctl(struct drm_device *dev)
static int
nv50_graph_init(struct drm_device *dev, int engine)
static int
nv50_graph_fini(struct drm_device *dev, int engine)
static int
nv50_graph_context_new(struct nouveau_channel *chan, int engine)
static void
nv50_graph_context_del(struct nouveau_channel *chan, int engine)
static int
nv50_graph_object_new(struct nouveau_channel *chan, int engine,
u32 handle, u16 class)
static void
nv50_graph_context_switch(struct drm_device *dev)
static int
nv50_graph_nvsw_dma_vblsem(struct nouveau_channel *chan,
u32 class, u32 mthd, u32 data)
static int
nv50_graph_nvsw_vblsem_offset(struct nouveau_channel *chan,
u32 class, u32 mthd, u32 data)
static int
nv50_graph_nvsw_vblsem_release_val(struct nouveau_channel *chan,
u32 class, u32 mthd, u32 data)
static int
nv50_graph_nvsw_vblsem_release(struct nouveau_channel *chan,
u32 class, u32 mthd, u32 data)
static int
nv50_graph_nvsw_mthd_page_flip(struct nouveau_channel *chan,
u32 class, u32 mthd, u32 data)
static void
nv50_graph_tlb_flush(struct drm_device *dev, int engine)
static void
nv84_graph_tlb_flush(struct drm_device *dev, int engine)
static struct nouveau_enum nv50_mp_exec_error_names[] = ;
static struct nouveau_bitfield nv50_graph_trap_m2mf[] = ;
static struct nouveau_bitfield nv50_graph_trap_vfetch[] = ;
static struct nouveau_bitfield nv50_graph_trap_strmout[] = ;
static struct nouveau_bitfield nv50_graph_trap_ccache[] = ;
struct nouveau_enum nv50_data_error_names[] = ;
static struct nouveau_bitfield nv50_graph_intr[] = ;
static void
nv50_pgraph_mp_trap(struct drm_device *dev, int tpid, int display)
static void
nv50_pgraph_tp_trap(struct drm_device *dev, int type, uint32_t ustatus_old,
uint32_t ustatus_new, int display, const char *name)
static int
nv50_pgraph_trap_handler(struct drm_device *dev, u32 display, u64 inst, u32 chid)
int
nv50_graph_isr_chid(struct drm_device *dev, u64 inst)
static void
nv50_graph_isr(struct drm_device *dev)
static void
nv50_graph_destroy(struct drm_device *dev, int engine)
int
nv50_graph_create(struct drm_device *dev)
