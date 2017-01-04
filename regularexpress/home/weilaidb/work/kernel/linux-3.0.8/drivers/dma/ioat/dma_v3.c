#define src_cnt_to_sw(x) ((x) + 2)
#define src_cnt_to_hw(x) ((x) - 2)
static const u8 xor_idx_to_desc __read_mostly = 0xd0;
static const u8 xor_idx_to_field[] __read_mostly = ;
static const u8 pq_idx_to_desc __read_mostly = 0xf8;
static const u8 pq_idx_to_field[] __read_mostly = ;
static dma_addr_t xor_get_src(struct ioat_raw_descriptor *descs[2], int idx)
static void xor_set_src(struct ioat_raw_descriptor *descs[2],
dma_addr_t addr, u32 offset, int idx)
static dma_addr_t pq_get_src(struct ioat_raw_descriptor *descs[2], int idx)
static void pq_set_src(struct ioat_raw_descriptor *descs[2],
dma_addr_t addr, u32 offset, u8 coef, int idx)
static void ioat3_dma_unmap(struct ioat2_dma_chan *ioat,
struct ioat_ring_ent *desc, int idx)
static bool desc_has_ext(struct ioat_ring_ent *desc)
static void __cleanup(struct ioat2_dma_chan *ioat, unsigned long phys_complete)
static void ioat3_cleanup(struct ioat2_dma_chan *ioat)
static void ioat3_cleanup_event(unsigned long data)
static void ioat3_restart_channel(struct ioat2_dma_chan *ioat)
static void ioat3_timer_event(unsigned long data)
static enum dma_status
ioat3_tx_status(struct dma_chan *c, dma_cookie_t cookie,
struct dma_tx_state *txstate)
static struct dma_async_tx_descriptor *
ioat3_prep_memset_lock(struct dma_chan *c, dma_addr_t dest, int value,
size_t len, unsigned long flags)
static struct dma_async_tx_descriptor *
__ioat3_prep_xor_lock(struct dma_chan *c, enum sum_check_flags *result,
dma_addr_t dest, dma_addr_t *src, unsigned int src_cnt,
size_t len, unsigned long flags)
static struct dma_async_tx_descriptor *
ioat3_prep_xor(struct dma_chan *chan, dma_addr_t dest, dma_addr_t *src,
unsigned int src_cnt, size_t len, unsigned long flags)
struct dma_async_tx_descriptor *
ioat3_prep_xor_val(struct dma_chan *chan, dma_addr_t *src,
unsigned int src_cnt, size_t len,
enum sum_check_flags *result, unsigned long flags)
static void
dump_pq_desc_dbg(struct ioat2_dma_chan *ioat, struct ioat_ring_ent *desc, struct ioat_ring_ent *ext)
static struct dma_async_tx_descriptor *
__ioat3_prep_pq_lock(struct dma_chan *c, enum sum_check_flags *result,
const dma_addr_t *dst, const dma_addr_t *src,
unsigned int src_cnt, const unsigned char *scf,
size_t len, unsigned long flags)
static struct dma_async_tx_descriptor *
ioat3_prep_pq(struct dma_chan *chan, dma_addr_t *dst, dma_addr_t *src,
unsigned int src_cnt, const unsigned char *scf, size_t len,
unsigned long flags)
struct dma_async_tx_descriptor *
ioat3_prep_pq_val(struct dma_chan *chan, dma_addr_t *pq, dma_addr_t *src,
unsigned int src_cnt, const unsigned char *scf, size_t len,
enum sum_check_flags *pqres, unsigned long flags)
static struct dma_async_tx_descriptor *
ioat3_prep_pqxor(struct dma_chan *chan, dma_addr_t dst, dma_addr_t *src,
unsigned int src_cnt, size_t len, unsigned long flags)
struct dma_async_tx_descriptor *
ioat3_prep_pqxor_val(struct dma_chan *chan, dma_addr_t *src,
unsigned int src_cnt, size_t len,
enum sum_check_flags *result, unsigned long flags)
static struct dma_async_tx_descriptor *
ioat3_prep_interrupt_lock(struct dma_chan *c, unsigned long flags)
static void __devinit ioat3_dma_test_callback(void *dma_async_param)
#define IOAT_NUM_SRC_TEST 6
static int __devinit ioat_xor_val_self_test(struct ioatdma_device *device)
static int __devinit ioat3_dma_self_test(struct ioatdma_device *device)
static int ioat3_reset_hw(struct ioat_chan_common *chan)
int __devinit ioat3_dma_probe(struct ioatdma_device *device, int dca)
