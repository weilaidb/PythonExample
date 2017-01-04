struct nva3_copy_engine ;
static int
nva3_copy_context_new(struct nouveau_channel *chan, int engine)
static int
nva3_copy_object_new(struct nouveau_channel *chan, int engine,
u32 handle, u16 class)
static void
nva3_copy_context_del(struct nouveau_channel *chan, int engine)
static void
nva3_copy_tlb_flush(struct drm_device *dev, int engine)
static int
nva3_copy_init(struct drm_device *dev, int engine)
static int
nva3_copy_fini(struct drm_device *dev, int engine)
static struct nouveau_enum nva3_copy_isr_error_name[] = ;
static void
nva3_copy_isr(struct drm_device *dev)
static void
nva3_copy_destroy(struct drm_device *dev, int engine)
int
nva3_copy_create(struct drm_device *dev)
