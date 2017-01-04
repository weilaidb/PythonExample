#define _ADMA_H
#define ADMA_ACCR(chan)	(chan->mmr_base + 0x0)
#define ADMA_ACSR(chan)	(chan->mmr_base + 0x4)
#define ADMA_ADAR(chan)	(chan->mmr_base + 0x8)
#define ADMA_IIPCR(chan)	(chan->mmr_base + 0x18)
#define ADMA_IIPAR(chan)	(chan->mmr_base + 0x1c)
#define ADMA_IIPUAR(chan)	(chan->mmr_base + 0x20)
#define ADMA_ANDAR(chan)	(chan->mmr_base + 0x24)
#define ADMA_ADCR(chan)	(chan->mmr_base + 0x28)
#define ADMA_CARMD(chan)	(chan->mmr_base + 0x2c)
#define ADMA_ABCR(chan)	(chan->mmr_base + 0x30)
#define ADMA_DLADR(chan)	(chan->mmr_base + 0x34)
#define ADMA_DUADR(chan)	(chan->mmr_base + 0x38)
#define ADMA_SLAR(src, chan)	(chan->mmr_base + (0x3c + (src << 3)))
#define ADMA_SUAR(src, chan)	(chan->mmr_base + (0x40 + (src << 3)))
struct iop13xx_adma_src ;
struct iop13xx_adma_desc_ctrl ;
struct iop13xx_adma_byte_count ;
struct iop13xx_adma_desc_hw ;
struct iop13xx_adma_desc_dual_xor ;
struct iop13xx_adma_desc_pq_update ;
static inline int iop_adma_get_max_xor(void)
#define iop_adma_get_max_pq iop_adma_get_max_xor
static inline u32 iop_chan_get_current_descriptor(struct iop_adma_chan *chan)
static inline void iop_chan_set_next_descriptor(struct iop_adma_chan *chan,
u32 next_desc_addr)
#define ADMA_STATUS_BUSY (1 << 13)
static inline char iop_chan_is_busy(struct iop_adma_chan *chan)
static inline int
iop_chan_get_desc_align(struct iop_adma_chan *chan, int num_slots)
#define iop_desc_is_aligned(x, y) 1
static inline int
iop_chan_memcpy_slot_count(size_t len, int *slots_per_op)
#define iop_chan_interrupt_slot_count(s, c) iop_chan_memcpy_slot_count(0, s)
static inline int
iop_chan_memset_slot_count(size_t len, int *slots_per_op)
static inline int
iop_chan_xor_slot_count(size_t len, int src_cnt, int *slots_per_op)
#define ADMA_MAX_BYTE_COUNT	(16 * 1024 * 1024)
#define IOP_ADMA_MAX_BYTE_COUNT ADMA_MAX_BYTE_COUNT
#define IOP_ADMA_ZERO_SUM_MAX_BYTE_COUNT ADMA_MAX_BYTE_COUNT
#define IOP_ADMA_XOR_MAX_BYTE_COUNT ADMA_MAX_BYTE_COUNT
#define IOP_ADMA_PQ_MAX_BYTE_COUNT ADMA_MAX_BYTE_COUNT
#define iop_chan_zero_sum_slot_count(l, s, o) iop_chan_xor_slot_count(l, s, o)
#define iop_chan_pq_slot_count iop_chan_xor_slot_count
#define iop_chan_pq_zero_sum_slot_count iop_chan_xor_slot_count
static inline u32 iop_desc_get_dest_addr(struct iop_adma_desc_slot *desc,
struct iop_adma_chan *chan)
static inline u32 iop_desc_get_qdest_addr(struct iop_adma_desc_slot *desc,
struct iop_adma_chan *chan)
static inline u32 iop_desc_get_byte_count(struct iop_adma_desc_slot *desc,
struct iop_adma_chan *chan)
static inline u32 iop_desc_get_src_addr(struct iop_adma_desc_slot *desc,
struct iop_adma_chan *chan,
int src_idx)
static inline u32 iop_desc_get_src_count(struct iop_adma_desc_slot *desc,
struct iop_adma_chan *chan)
static inline void
iop_desc_init_memcpy(struct iop_adma_desc_slot *desc, unsigned long flags)
static inline void
iop_desc_init_memset(struct iop_adma_desc_slot *desc, unsigned long flags)
static inline void
iop_desc_init_xor(struct iop_adma_desc_slot *desc, int src_cnt,
unsigned long flags)
#define iop_desc_init_null_xor(d, s, i) iop_desc_init_xor(d, s, i)
static inline int
iop_desc_init_zero_sum(struct iop_adma_desc_slot *desc, int src_cnt,
unsigned long flags)
static inline void
iop_desc_init_pq(struct iop_adma_desc_slot *desc, int src_cnt,
unsigned long flags)
static inline int iop_desc_is_pq(struct iop_adma_desc_slot *desc)
static inline void
iop_desc_init_pq_zero_sum(struct iop_adma_desc_slot *desc, int src_cnt,
unsigned long flags)
static inline void iop_desc_set_byte_count(struct iop_adma_desc_slot *desc,
struct iop_adma_chan *chan,
u32 byte_count)
static inline void
iop_desc_set_zero_sum_byte_count(struct iop_adma_desc_slot *desc, u32 len)
#define iop_desc_set_pq_zero_sum_byte_count iop_desc_set_zero_sum_byte_count
static inline void iop_desc_set_dest_addr(struct iop_adma_desc_slot *desc,
struct iop_adma_chan *chan,
dma_addr_t addr)
static inline void
iop_desc_set_pq_addr(struct iop_adma_desc_slot *desc, dma_addr_t *addr)
static inline void iop_desc_set_memcpy_src_addr(struct iop_adma_desc_slot *desc,
dma_addr_t addr)
static inline void iop_desc_set_xor_src_addr(struct iop_adma_desc_slot *desc,
int src_idx, dma_addr_t addr)
static inline void
iop_desc_set_pq_src_addr(struct iop_adma_desc_slot *desc, int src_idx,
dma_addr_t addr, unsigned char coef)
static inline void
iop_desc_init_interrupt(struct iop_adma_desc_slot *desc,
struct iop_adma_chan *chan)
#define iop_desc_set_zero_sum_src_addr iop_desc_set_xor_src_addr
#define iop_desc_set_pq_zero_sum_src_addr iop_desc_set_pq_src_addr
static inline void
iop_desc_set_pq_zero_sum_addr(struct iop_adma_desc_slot *desc, int pq_idx,
dma_addr_t *src)
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
