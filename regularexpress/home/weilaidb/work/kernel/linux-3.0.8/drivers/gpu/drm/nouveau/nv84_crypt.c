struct nv84_crypt_engine ;
static int
nv84_crypt_context_new(struct nouveau_channel *chan, int engine)
static void
nv84_crypt_context_del(struct nouveau_channel *chan, int engine)
static int
nv84_crypt_object_new(struct nouveau_channel *chan, int engine,
u32 handle, u16 class)
static void
nv84_crypt_tlb_flush(struct drm_device *dev, int engine)
static void
nv84_crypt_isr(struct drm_device *dev)
static int
nv84_crypt_fini(struct drm_device *dev, int engine)
static int
nv84_crypt_init(struct drm_device *dev, int engine)
static void
nv84_crypt_destroy(struct drm_device *dev, int engine)
int
nv84_crypt_create(struct drm_device *dev)
