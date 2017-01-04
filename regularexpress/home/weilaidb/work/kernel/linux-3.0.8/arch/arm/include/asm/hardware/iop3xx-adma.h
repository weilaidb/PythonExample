#define _ADMA_H
#define DMA_CCR(chan)		(chan->mmr_base + 0x0)
#define DMA_CSR(chan)		(chan->mmr_base + 0x4)
#define DMA_DAR(chan)		(chan->mmr_base + 0xc)
#define DMA_NDAR(chan)		(chan->mmr_base + 0x10)
#define DMA_PADR(chan)		(chan->mmr_base + 0x14)
#define DMA_PUADR(chan)	(chan->mmr_base + 0x18)
#define DMA_LADR(chan)		(chan->mmr_base + 0x1c)
#define DMA_BCR(chan)		(chan->mmr_base + 0x20)
#define DMA_DCR(chan)		(chan->mmr_base + 0x24)
#define AAU_ACR(chan)		(chan->mmr_base + 0x0)
#define AAU_ASR(chan)		(chan->mmr_base + 0x4)
#define AAU_ADAR(chan)		(chan->mmr_base + 0x8)
#define AAU_ANDAR(chan)	(chan->mmr_base + 0xc)
#define AAU_SAR(src, chan)	(chan->mmr_base + (0x10 + ((src) << 2)))
#define AAU_DAR(chan)		(chan->mmr_base + 0x20)
#define AAU_ABCR(chan)		(chan->mmr_base + 0x24)
#define AAU_ADCR(chan)		(chan->mmr_base + 0x28)
#define AAU_SAR_EDCR(src_edc)	(chan->mmr_base + (0x02c + ((src_edc-4) << 2)))
#define AAU_EDCR0_IDX	8
#define AAU_EDCR1_IDX	17
#define AAU_EDCR2_IDX	26
#define DMA0_ID 0
#define DMA1_ID 1
#define AAU_ID 2
struct iop3xx_aau_desc_ctrl ;
struct iop3xx_aau_e_desc_ctrl ;
struct iop3xx_dma_desc_ctrl ;
struct iop3xx_desc_dma ;
struct iop3xx_desc_aau ;
struct iop3xx_aau_gfmr ;
struct iop3xx_desc_pq_xor ;
struct iop3xx_desc_dual_xor ;
union iop3xx_desc ;
static inline int
iop_chan_pq_slot_count(size_t len, int src_cnt, int *slots_per_op)
static inline void
iop_desc_init_pq(struct iop_adma_desc_slot *desc, int src_cnt,
unsigned long flags)
static inline void
iop_desc_set_pq_addr(struct iop_adma_desc_slot *desc, dma_addr_t *addr)
static inline void
iop_desc_set_pq_src_addr(struct iop_adma_desc_slot *desc, int src_idx,
dma_addr_t addr, unsigned char coef)
static inline int
iop_chan_pq_zero_sum_slot_count(size_t len, int src_cnt, int *slots_per_op)
static inline void
iop_desc_init_pq_zero_sum(struct iop_adma_desc_slot *desc, int src_cnt,
unsigned long flags)
static inline void
iop_desc_set_pq_zero_sum_byte_count(struct iop_adma_desc_slot *desc, u32 len)
#define iop_desc_set_pq_zero_sum_src_addr iop_desc_set_pq_src_addr
static inline void
iop_desc_set_pq_zero_sum_addr(struct iop_adma_desc_slot *desc, int pq_idx,
dma_addr_t *src)
static inline int iop_adma_get_max_xor(void)
static inline int iop_adma_get_max_pq(void)
static inline u32 iop_chan_get_current_descriptor(struct iop_adma_chan *chan)
static inline void iop_chan_set_next_descriptor(struct iop_adma_chan *chan,
u32 next_desc_addr)
#define IOP_ADMA_STATUS_BUSY (1 << 10)
#define IOP_ADMA_ZERO_SUM_MAX_BYTE_COUNT (1024)
#define IOP_ADMA_XOR_MAX_BYTE_COUNT (16 * 1024 * 1024)
#define IOP_ADMA_MAX_BYTE_COUNT (16 * 1024 * 1024)
static inline int iop_chan_is_busy(struct iop_adma_chan *chan)
static inline int iop_desc_is_aligned(struct iop_adma_desc_slot *desc,
int num_slots)
static inline int iop_chan_memcpy_slot_count(size_t len, int *slots_per_op)
static inline int iop_chan_memset_slot_count(size_t len, int *slots_per_op)
static inline int iop3xx_aau_xor_slot_count(size_t len, int src_cnt,
int *slots_per_op)
static inline int
iop_chan_interrupt_slot_count(int *slots_per_op, struct iop_adma_chan *chan)
static inline int iop_chan_xor_slot_count(size_t len, int src_cnt,
int *slots_per_op)
static inline int iop_chan_zero_sum_slot_count(size_t len, int src_cnt,
int *slots_per_op)
static inline int iop_desc_is_pq(struct iop_adma_desc_slot *desc)
static inline u32 iop_desc_get_dest_addr(struct iop_adma_desc_slot *desc,
struct iop_adma_chan *chan)
static inline u32 iop_desc_get_qdest_addr(struct iop_adma_desc_slot *desc,
struct iop_adma_chan *chan)
static inline u32 iop_desc_get_byte_count(struct iop_adma_desc_slot *desc,
struct iop_adma_chan *chan)
static inline int __desc_idx(int src_idx)
static inline u32 iop_desc_get_src_addr(struct iop_adma_desc_slot *desc,
struct iop_adma_chan *chan,
int src_idx)
static inline void iop3xx_aau_desc_set_src_addr(struct iop3xx_desc_aau *hw_desc,
int src_idx, dma_addr_t addr)
static inline void
iop_desc_init_memcpy(struct iop_adma_desc_slot *desc, unsigned long flags)
static inline void
iop_desc_init_memset(struct iop_adma_desc_slot *desc, unsigned long flags)
static inline u32
iop3xx_desc_init_xor(struct iop3xx_desc_aau *hw_desc, int src_cnt,
unsigned long flags)
static inline void
iop_desc_init_xor(struct iop_adma_desc_slot *desc, int src_cnt,
unsigned long flags)
static inline int
iop_desc_init_zero_sum(struct iop_adma_desc_slot *desc, int src_cnt,
unsigned long flags)
static inline void
iop_desc_init_null_xor(struct iop_adma_desc_slot *desc, int src_cnt,
unsigned long flags)
static inline void iop_desc_set_byte_count(struct iop_adma_desc_slot *desc,
struct iop_adma_chan *chan,
u32 byte_count)
static inline void
iop_desc_init_interrupt(struct iop_adma_desc_slot *desc,
struct iop_adma_chan *chan)
static inline void
iop_desc_set_zero_sum_byte_count(struct iop_adma_desc_slot *desc, u32 len)
static inline void iop_desc_set_dest_addr(struct iop_adma_desc_slot *desc,
struct iop_adma_chan *chan,
dma_addr_t addr)
static inline void iop_desc_set_memcpy_src_addr(struct iop_adma_desc_slot *desc,
dma_addr_t addr)
static inline void
iop_desc_set_zero_sum_src_addr(struct iop_adma_desc_slot *desc, int src_idx,
dma_addr_t addr)
static inline void iop_desc_set_xor_src_addr(struct iop_adma_desc_slot *desc,
int src_idx, dma_addr_t addr)
static inline void iop_desc_set_next_desc(struct iop_adma_desc_slot *desc,
u32 next_desc_addr)
static inline u32 iop_desc_get_next_desc(struct iop_adma_desc_slot *desc)
static inline void iop_desc_clear_next_desc(struct iop_adma_desc_slot *desc)
static inline void iop_desc_set_block_fill_val(struct iop_adma_desc_slot *desc,
u32 val)
static inline enum sum_check_flags
iop_desc_get_zero_result(struct iop_adma_desc_slot *desc)
static inline void iop_chan_append(struct iop_adma_chan *chan)
static inline u32 iop_chan_get_status(struct iop_adma_chan *chan)
static inline void iop_chan_disable(struct iop_adma_chan *chan)
static inline void iop_chan_enable(struct iop_adma_chan *chan)
static inline void iop_adma_device_clear_eot_status(struct iop_adma_chan *chan)
static inline void iop_adma_device_clear_eoc_status(struct iop_adma_chan *chan)
static inline void iop_adma_device_clear_err_status(struct iop_adma_chan *chan)
static inline int
iop_is_err_int_parity(unsigned long status, struct iop_adma_chan *chan)
static inline int
iop_is_err_mcu_abort(unsigned long status, struct iop_adma_chan *chan)
static inline int
iop_is_err_int_tabort(unsigned long status, struct iop_adma_chan *chan)
static inline int
iop_is_err_int_mabort(unsigned long status, struct iop_adma_chan *chan)
static inline int
iop_is_err_pci_tabort(unsigned long status, struct iop_adma_chan *chan)
static inline int
iop_is_err_pci_mabort(unsigned long status, struct iop_adma_chan *chan)
static inline int
iop_is_err_split_tx(unsigned long status, struct iop_adma_chan *chan)
