static u32
nouveau_ramht_hash_handle(struct nouveau_channel *chan, u32 handle)
static int
nouveau_ramht_entry_valid(struct drm_device *dev, struct nouveau_gpuobj *ramht,
u32 offset)
static int
nouveau_ramht_entry_same_channel(struct nouveau_channel *chan,
struct nouveau_gpuobj *ramht, u32 offset)
int
nouveau_ramht_insert(struct nouveau_channel *chan, u32 handle,
struct nouveau_gpuobj *gpuobj)
static struct nouveau_ramht_entry *
nouveau_ramht_remove_entry(struct nouveau_channel *chan, u32 handle)
static void
nouveau_ramht_remove_hash(struct nouveau_channel *chan, u32 handle)
int
nouveau_ramht_remove(struct nouveau_channel *chan, u32 handle)
struct nouveau_gpuobj *
nouveau_ramht_find(struct nouveau_channel *chan, u32 handle)
int
nouveau_ramht_new(struct drm_device *dev, struct nouveau_gpuobj *gpuobj,
struct nouveau_ramht **pramht)
static void
nouveau_ramht_del(struct kref *ref)
void
nouveau_ramht_ref(struct nouveau_ramht *ref, struct nouveau_ramht **ptr,
struct nouveau_channel *chan)
