#define __NOUVEAU_DMA_H__
#define NOUVEAU_DMA_DEBUG 0
void nv50_dma_push(struct nouveau_channel *, struct nouveau_bo *,
int delta, int length);
#define NOUVEAU_DMA_SKIPS (128 / 4)
enum ;
enum ;
#define NV_MEMORY_TO_MEMORY_FORMAT                                    0x00000039
#define NV_MEMORY_TO_MEMORY_FORMAT_NAME                               0x00000000
#define NV_MEMORY_TO_MEMORY_FORMAT_SET_REF                            0x00000050
#define NV_MEMORY_TO_MEMORY_FORMAT_NOP                                0x00000100
#define NV_MEMORY_TO_MEMORY_FORMAT_NOTIFY                             0x00000104
#define NV_MEMORY_TO_MEMORY_FORMAT_NOTIFY_STYLE_WRITE                 0x00000000
#define NV_MEMORY_TO_MEMORY_FORMAT_NOTIFY_STYLE_WRITE_LE_AWAKEN       0x00000001
#define NV_MEMORY_TO_MEMORY_FORMAT_DMA_NOTIFY                         0x00000180
#define NV_MEMORY_TO_MEMORY_FORMAT_DMA_SOURCE                         0x00000184
#define NV_MEMORY_TO_MEMORY_FORMAT_OFFSET_IN                          0x0000030c
#define NV50_MEMORY_TO_MEMORY_FORMAT                                  0x00005039
#define NV50_MEMORY_TO_MEMORY_FORMAT_UNK200                           0x00000200
#define NV50_MEMORY_TO_MEMORY_FORMAT_UNK21C                           0x0000021c
#define NV50_MEMORY_TO_MEMORY_FORMAT_OFFSET_IN_HIGH                   0x00000238
#define NV50_MEMORY_TO_MEMORY_FORMAT_OFFSET_OUT_HIGH                  0x0000023c
static __must_check inline int
RING_SPACE(struct nouveau_channel *chan, int size)
static inline void
OUT_RING(struct nouveau_channel *chan, int data)
extern void
OUT_RINGp(struct nouveau_channel *chan, const void *data, unsigned nr_dwords);
static inline void
BEGIN_NVC0(struct nouveau_channel *chan, int op, int subc, int mthd, int size)
static inline void
BEGIN_RING(struct nouveau_channel *chan, int subc, int mthd, int size)
#define WRITE_PUT(val) do  while (0)
static inline void
FIRE_RING(struct nouveau_channel *chan)
static inline void
WIND_RING(struct nouveau_channel *chan)
