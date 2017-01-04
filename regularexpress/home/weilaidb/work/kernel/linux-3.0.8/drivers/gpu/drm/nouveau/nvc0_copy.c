struct nvc0_copy_engine ;
static int
nvc0_copy_context_new(struct nouveau_channel *chan, int engine)
static int
nvc0_copy_object_new(struct nouveau_channel *chan, int engine,
u32 handle, u16 class)
static void
nvc0_copy_context_del(struct nouveau_channel *chan, int engine)
static int
nvc0_copy_init(struct drm_device *dev, int engine)
static int
nvc0_copy_fini(struct drm_device *dev, int engine)
static struct nouveau_enum nvc0_copy_isr_error_name[] = ;
static void
nvc0_copy_isr(struct drm_device *dev, int engine)
static void
nvc0_copy_isr_0(struct drm_device *dev)
static void
nvc0_copy_isr_1(struct drm_device *dev)
static void
nvc0_copy_destroy(struct drm_device *dev, int engine)
int
nvc0_copy_create(struct drm_device *dev, int engine)
