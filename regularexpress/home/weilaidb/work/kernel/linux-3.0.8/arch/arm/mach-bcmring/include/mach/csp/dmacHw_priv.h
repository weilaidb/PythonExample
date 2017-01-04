#define _DMACHW_PRIV_H
typedef struct  dmacHw_DESC_t;
typedef struct  dmacHw_DESC_RING_t;
typedef struct  dmacHw_CBLK_t;
#define dmacHw_ASSERT(a)                  if (!(a)) while (1)
#define dmacHw_MAX_CHANNEL_COUNT          16
#define dmacHw_FREE_USER_MEMORY           0xFFFFFFFF
#define dmacHw_DESC_FREE                  dmacHw_REG_CTL_DONE
#define dmacHw_DESC_INIT                  ((dmacHw_DESC_t *) 0xFFFFFFFF)
#define dmacHw_MAX_BLOCKSIZE              4064
#define dmacHw_GET_DESC_RING(addr)        (dmacHw_DESC_RING_t *)(addr)
#define dmacHw_ADDRESS_MASK(byte)         ((byte) - 1)
#define dmacHw_NEXT_DESC(rp, dp)           ((rp)->dp = (dmacHw_DESC_t *)(rp)->dp->llp)
#define dmacHw_HANDLE_TO_CBLK(handle)     ((dmacHw_CBLK_t *) (handle))
#define dmacHw_CBLK_TO_HANDLE(cblkp)      ((dmacHw_HANDLE_t) (cblkp))
#define dmacHw_DST_IS_MEMORY(tt)          (((tt) ==  dmacHw_TRANSFER_TYPE_PERIPHERAL_TO_MEM) || ((tt) == dmacHw_TRANSFER_TYPE_MEM_TO_MEM)) ? 1 : 0
static inline dmacHw_TRANSACTION_WIDTH_e dmacHw_GetNextTrWidth(dmacHw_TRANSACTION_WIDTH_e tw
)
static inline int dmacHw_GetTrWidthInBytes(dmacHw_TRANSACTION_WIDTH_e tw
)
