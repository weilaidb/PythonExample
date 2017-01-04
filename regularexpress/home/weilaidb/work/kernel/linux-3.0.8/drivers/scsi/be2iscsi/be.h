#define BEISCSI_H
#define FW_VER_LEN	32
#define MCC_Q_LEN	128
#define MCC_CQ_LEN	256
#define MAX_MCC_CMD	16
#define BE_GEN2 2
#define BE_GEN3 3
struct be_dma_mem ;
struct be_queue_info ;
static inline u32 MODULO(u16 val, u16 limit)
static inline void index_inc(u16 *index, u16 limit)
static inline void *queue_head_node(struct be_queue_info *q)
static inline void *queue_get_wrb(struct be_queue_info *q, unsigned int wrb_num)
static inline void *queue_tail_node(struct be_queue_info *q)
static inline void queue_head_inc(struct be_queue_info *q)
static inline void queue_tail_inc(struct be_queue_info *q)
struct be_eq_obj ;
struct be_mcc_obj ;
struct be_ctrl_info ;
#define PAGE_SHIFT_4K 12
#define PAGE_SIZE_4K (1 << PAGE_SHIFT_4K)
#define mcc_timeout		120000
#define PAGES_4K_SPANNED(_address, size)				\
((u32)((((size_t)(_address) & (PAGE_SIZE_4K - 1)) +	\
(size) + (PAGE_SIZE_4K - 1)) >> PAGE_SHIFT_4K))
#define OFFSET_IN_PAGE(addr)						\
((size_t)(addr) & (PAGE_SIZE_4K-1))
#define AMAP_BIT_OFFSET(_struct, field)					\
(((size_t)&(((_struct *)0)->field))%32)
static inline u32 amap_mask(u32 bitsize)
static inline void amap_set(void *ptr, u32 dw_offset, u32 mask,
u32 offset, u32 value)
#define AMAP_SET_BITS(_struct, field, ptr, val)				\
amap_set(ptr,						\
offsetof(_struct, field)/32,			\
amap_mask(sizeof(((_struct *)0)->field)),	\
AMAP_BIT_OFFSET(_struct, field),		\
val)
static inline u32 amap_get(void *ptr, u32 dw_offset, u32 mask, u32 offset)
#define AMAP_GET_BITS(_struct, field, ptr)				\
amap_get(ptr,						\
offsetof(_struct, field)/32,			\
amap_mask(sizeof(((_struct *)0)->field)),	\
AMAP_BIT_OFFSET(_struct, field))
#define be_dws_cpu_to_le(wrb, len) swap_dws(wrb, len)
#define be_dws_le_to_cpu(wrb, len) swap_dws(wrb, len)
static inline void swap_dws(void *wrb, int len)
