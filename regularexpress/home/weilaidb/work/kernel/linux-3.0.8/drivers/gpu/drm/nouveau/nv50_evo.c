static void
nv50_evo_channel_del(struct nouveau_channel **pevo)
void
nv50_evo_dmaobj_init(struct nouveau_gpuobj *obj, u32 memtype, u64 base, u64 size)
int
nv50_evo_dmaobj_new(struct nouveau_channel *evo, u32 handle, u32 memtype,
u64 base, u64 size, struct nouveau_gpuobj **pobj)
static int
nv50_evo_channel_new(struct drm_device *dev, int chid,
struct nouveau_channel **pevo)
static int
nv50_evo_channel_init(struct nouveau_channel *evo)
static void
nv50_evo_channel_fini(struct nouveau_channel *evo)
static void
nv50_evo_destroy(struct drm_device *dev)
static int
nv50_evo_create(struct drm_device *dev)
int
nv50_evo_init(struct drm_device *dev)
void
nv50_evo_fini(struct drm_device *dev)
