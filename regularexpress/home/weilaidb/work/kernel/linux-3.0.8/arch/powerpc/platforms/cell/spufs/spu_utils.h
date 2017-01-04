#define _SPU_CONTEXT_UTILS_H_
typedef union  addr64;
typedef union  spu_reg128v;
struct dma_list_elem ;
struct dma_list_elem dma_list[15] __attribute__ ((aligned(8)));
extern spu_reg128v regs_spill[NR_SPU_SPILL_REGS];
static struct spu_lscsa *dummy = (struct spu_lscsa *)0;
#define LSCSA_BYTE_OFFSET(_field)  \
((char *)(&(dummy->_field)) - (char *)(&(dummy->gprs[0].slot[0])))
#define LSCSA_QW_OFFSET(_field)  (LSCSA_BYTE_OFFSET(_field) >> 4)
static inline void set_event_mask(void)
static inline void set_tag_mask(void)
static inline void build_dma_list(addr64 lscsa_ea)
static inline void enqueue_putllc(addr64 lscsa_ea)
static inline void set_tag_update(void)
static inline void read_tag_status(void)
static inline void read_llar_status(void)
