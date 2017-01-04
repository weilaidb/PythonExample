void
nouveau_dma_pre_init(struct nouveau_channel *chan)
int
nouveau_dma_init(struct nouveau_channel *chan)
void
OUT_RINGp(struct nouveau_channel *chan, const void *data, unsigned nr_dwords)
static inline int
READ_GET(struct nouveau_channel *chan, uint32_t *prev_get, uint32_t *timeout)
void
nv50_dma_push(struct nouveau_channel *chan, struct nouveau_bo *bo,
int delta, int length)
static int
nv50_dma_push_wait(struct nouveau_channel *chan, int count)
static int
nv50_dma_wait(struct nouveau_channel *chan, int slots, int count)
int
nouveau_dma_wait(struct nouveau_channel *chan, int slots, int size)
