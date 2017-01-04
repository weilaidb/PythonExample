#define USE_REFCNT(dev) (nouveau_private(dev)->chipset >= 0x10)
#define USE_SEMA(dev) (nouveau_private(dev)->chipset >= 0x17)
struct nouveau_fence ;
struct nouveau_semaphore ;
static inline struct nouveau_fence *
nouveau_fence(void *sync_obj)
static void
nouveau_fence_del(struct kref *ref)
void
nouveau_fence_update(struct nouveau_channel *chan)
int
nouveau_fence_new(struct nouveau_channel *chan, struct nouveau_fence **pfence,
bool emit)
struct nouveau_channel *
nouveau_fence_channel(struct nouveau_fence *fence)
int
nouveau_fence_emit(struct nouveau_fence *fence)
void
nouveau_fence_work(struct nouveau_fence *fence,
void (*work)(void *priv, bool signalled),
void *priv)
void
__nouveau_fence_unref(void **sync_obj)
void *
__nouveau_fence_ref(void *sync_obj)
bool
__nouveau_fence_signalled(void *sync_obj, void *sync_arg)
int
__nouveau_fence_wait(void *sync_obj, void *sync_arg, bool lazy, bool intr)
static struct nouveau_semaphore *
semaphore_alloc(struct drm_device *dev)
static void
semaphore_free(struct kref *ref)
static void
semaphore_work(void *priv, bool signalled)
static int
semaphore_acquire(struct nouveau_channel *chan, struct nouveau_semaphore *sema)
static int
semaphore_release(struct nouveau_channel *chan, struct nouveau_semaphore *sema)
int
nouveau_fence_sync(struct nouveau_fence *fence,
struct nouveau_channel *wchan)
int
__nouveau_fence_flush(void *sync_obj, void *sync_arg)
int
nouveau_fence_channel_init(struct nouveau_channel *chan)
void
nouveau_fence_channel_fini(struct nouveau_channel *chan)
int
nouveau_fence_init(struct drm_device *dev)
void
nouveau_fence_fini(struct drm_device *dev)
