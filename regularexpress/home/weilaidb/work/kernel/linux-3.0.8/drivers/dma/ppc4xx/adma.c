enum ppc_adma_init_code ;
static char *ppc_adma_errors[] = ;
static enum ppc_adma_init_code
ppc440spe_adma_devices[PPC440SPE_ADMA_ENGINES_NUM];
struct ppc_dma_chan_ref ;
struct list_head
ppc440spe_adma_chan_list = LIST_HEAD_INIT(ppc440spe_adma_chan_list);
static u32 do_xor_refetch;
static void *ppc440spe_dma_fifo_buf;
static struct ppc440spe_adma_desc_slot *chan_last_sub[3];
static struct ppc440spe_adma_desc_slot *chan_first_cdb[3];
static struct ppc440spe_adma_desc_slot *xor_last_linked;
static struct ppc440spe_adma_desc_slot *xor_last_submit;
static char ppc440spe_qword[16];
static atomic_t ppc440spe_adma_err_irq_ref;
static dcr_host_t ppc440spe_mq_dcr_host;
static unsigned int ppc440spe_mq_dcr_len;
static unsigned long ppc440spe_rxor_state;
static u32 ppc440spe_r6_enabled;
static struct ppc440spe_adma_chan *ppc440spe_r6_tchan;
static struct completion ppc440spe_r6_test_comp;
static int ppc440spe_adma_dma2rxor_prep_src(
struct ppc440spe_adma_desc_slot *desc,
struct ppc440spe_rxor *cursor, int index,
int src_cnt, u32 addr);
static void ppc440spe_adma_dma2rxor_set_src(
struct ppc440spe_adma_desc_slot *desc,
int index, dma_addr_t addr);
static void ppc440spe_adma_dma2rxor_set_mult(
struct ppc440spe_adma_desc_slot *desc,
int index, u8 mult);
#define ADMA_LL_DBG(x) ()
#define ADMA_LL_DBG(x) ()
static void print_cb(struct ppc440spe_adma_chan *chan, void *block)
static void print_cb_list(struct ppc440spe_adma_chan *chan,
struct ppc440spe_adma_desc_slot *iter)
static void prep_dma_xor_dbg(int id, dma_addr_t dst, dma_addr_t *src,
unsigned int src_cnt)
static void prep_dma_pq_dbg(int id, dma_addr_t *dst, dma_addr_t *src,
unsigned int src_cnt)
static void prep_dma_pqzero_sum_dbg(int id, dma_addr_t *src,
unsigned int src_cnt,
const unsigned char *scf)
static void ppc440spe_desc_init_interrupt(struct ppc440spe_adma_desc_slot *desc,
struct ppc440spe_adma_chan *chan)
static void ppc440spe_desc_init_null_xor(struct ppc440spe_adma_desc_slot *desc)
static void ppc440spe_desc_init_xor(struct ppc440spe_adma_desc_slot *desc,
int src_cnt, unsigned long flags)
static void ppc440spe_desc_init_dma2pq(struct ppc440spe_adma_desc_slot *desc,
int dst_cnt, int src_cnt, unsigned long flags)
#define DMA_CTRL_FLAGS_LAST	DMA_PREP_FENCE
#define DMA_PREP_ZERO_P		(DMA_CTRL_FLAGS_LAST << 1)
#define DMA_PREP_ZERO_Q		(DMA_PREP_ZERO_P << 1)
static void ppc440spe_desc_init_dma01pq(struct ppc440spe_adma_desc_slot *desc,
int dst_cnt, int src_cnt, unsigned long flags,
unsigned long op)
static void ppc440spe_desc_init_dma01pqzero_sum(
struct ppc440spe_adma_desc_slot *desc,
int dst_cnt, int src_cnt)
static void ppc440spe_desc_init_memcpy(struct ppc440spe_adma_desc_slot *desc,
unsigned long flags)
static void ppc440spe_desc_init_memset(struct ppc440spe_adma_desc_slot *desc,
int value, unsigned long flags)
static void ppc440spe_desc_set_src_addr(struct ppc440spe_adma_desc_slot *desc,
struct ppc440spe_adma_chan *chan,
int src_idx, dma_addr_t addrh,
dma_addr_t addrl)
static void ppc440spe_desc_set_src_mult(struct ppc440spe_adma_desc_slot *desc,
struct ppc440spe_adma_chan *chan, u32 mult_index,
int sg_index, unsigned char mult_value)
static void ppc440spe_desc_set_dest_addr(struct ppc440spe_adma_desc_slot *desc,
struct ppc440spe_adma_chan *chan,
dma_addr_t addrh, dma_addr_t addrl,
u32 dst_idx)
static void ppc440spe_desc_set_byte_count(struct ppc440spe_adma_desc_slot *desc,
struct ppc440spe_adma_chan *chan,
u32 byte_count)
static inline void ppc440spe_desc_set_rxor_block_size(u32 byte_count)
static void ppc440spe_desc_set_dcheck(struct ppc440spe_adma_desc_slot *desc,
struct ppc440spe_adma_chan *chan, u8 *qword)
static void ppc440spe_xor_set_link(struct ppc440spe_adma_desc_slot *prev_desc,
struct ppc440spe_adma_desc_slot *next_desc)
static void ppc440spe_desc_set_link(struct ppc440spe_adma_chan *chan,
struct ppc440spe_adma_desc_slot *prev_desc,
struct ppc440spe_adma_desc_slot *next_desc)
static u32 ppc440spe_desc_get_src_addr(struct ppc440spe_adma_desc_slot *desc,
struct ppc440spe_adma_chan *chan, int src_idx)
static u32 ppc440spe_desc_get_dest_addr(struct ppc440spe_adma_desc_slot *desc,
struct ppc440spe_adma_chan *chan, int idx)
static u32 ppc440spe_desc_get_src_num(struct ppc440spe_adma_desc_slot *desc,
struct ppc440spe_adma_chan *chan)
static u32 ppc440spe_desc_get_dst_num(struct ppc440spe_adma_desc_slot *desc,
struct ppc440spe_adma_chan *chan)
static inline u32 ppc440spe_desc_get_link(struct ppc440spe_adma_desc_slot *desc,
struct ppc440spe_adma_chan *chan)
static inline int ppc440spe_desc_is_aligned(
struct ppc440spe_adma_desc_slot *desc, int num_slots)
static int ppc440spe_chan_xor_slot_count(size_t len, int src_cnt,
int *slots_per_op)
static int ppc440spe_dma2_pq_slot_count(dma_addr_t *srcs,
int src_cnt, size_t len)
static u32
ppc440spe_chan_get_current_descriptor(struct ppc440spe_adma_chan *chan);
static void ppc440spe_chan_append(struct ppc440spe_adma_chan *chan);
static void ppc440spe_adma_device_clear_eot_status(
struct ppc440spe_adma_chan *chan)
static int ppc440spe_chan_is_busy(struct ppc440spe_adma_chan *chan)
static void ppc440spe_chan_set_first_xor_descriptor(
struct ppc440spe_adma_chan *chan,
struct ppc440spe_adma_desc_slot *next_desc)
static void ppc440spe_dma_put_desc(struct ppc440spe_adma_chan *chan,
struct ppc440spe_adma_desc_slot *desc)
static void ppc440spe_chan_append(struct ppc440spe_adma_chan *chan)
static u32
ppc440spe_chan_get_current_descriptor(struct ppc440spe_adma_chan *chan)
static void ppc440spe_chan_run(struct ppc440spe_adma_chan *chan)
static void ppc440spe_chan_start_null_xor(struct ppc440spe_adma_chan *chan);
static int ppc440spe_adma_alloc_chan_resources(struct dma_chan *chan);
static dma_cookie_t
ppc440spe_adma_tx_submit(struct dma_async_tx_descriptor *tx);
static void ppc440spe_adma_set_dest(struct ppc440spe_adma_desc_slot *tx,
dma_addr_t addr, int index);
static void
ppc440spe_adma_memcpy_xor_set_src(struct ppc440spe_adma_desc_slot *tx,
dma_addr_t addr, int index);
static void
ppc440spe_adma_pq_set_dest(struct ppc440spe_adma_desc_slot *tx,
dma_addr_t *paddr, unsigned long flags);
static void
ppc440spe_adma_pq_set_src(struct ppc440spe_adma_desc_slot *tx,
dma_addr_t addr, int index);
static void
ppc440spe_adma_pq_set_src_mult(struct ppc440spe_adma_desc_slot *tx,
unsigned char mult, int index, int dst_pos);
static void
ppc440spe_adma_pqzero_sum_set_dest(struct ppc440spe_adma_desc_slot *tx,
dma_addr_t paddr, dma_addr_t qaddr);
static struct page *ppc440spe_rxor_srcs[32];
static int ppc440spe_can_rxor(struct page **srcs, int src_cnt, size_t len)
static int ppc440spe_adma_estimate(struct dma_chan *chan,
enum dma_transaction_type cap, struct page **dst_lst, int dst_cnt,
struct page **src_lst, int src_cnt, size_t src_sz)
struct dma_chan *
ppc440spe_async_tx_find_best_channel(enum dma_transaction_type cap,
struct page **dst_lst, int dst_cnt, struct page **src_lst,
int src_cnt, size_t src_sz)
EXPORT_SYMBOL_GPL(ppc440spe_async_tx_find_best_channel);
static struct ppc440spe_adma_desc_slot *
ppc440spe_get_group_entry(struct ppc440spe_adma_desc_slot *tdesc, u32 entry_idx)
static void ppc440spe_adma_free_slots(struct ppc440spe_adma_desc_slot *slot,
struct ppc440spe_adma_chan *chan)
static void ppc440spe_adma_unmap(struct ppc440spe_adma_chan *chan,
struct ppc440spe_adma_desc_slot *desc)
static dma_cookie_t ppc440spe_adma_run_tx_complete_actions(
struct ppc440spe_adma_desc_slot *desc,
struct ppc440spe_adma_chan *chan,
dma_cookie_t cookie)
static int ppc440spe_adma_clean_slot(struct ppc440spe_adma_desc_slot *desc,
struct ppc440spe_adma_chan *chan)
static void __ppc440spe_adma_slot_cleanup(struct ppc440spe_adma_chan *chan)
static void ppc440spe_adma_tasklet(unsigned long data)
static void ppc440spe_adma_slot_cleanup(struct ppc440spe_adma_chan *chan)
static struct ppc440spe_adma_desc_slot *ppc440spe_adma_alloc_slots(
struct ppc440spe_adma_chan *chan, int num_slots,
int slots_per_op)
static int ppc440spe_adma_alloc_chan_resources(struct dma_chan *chan)
static dma_cookie_t ppc440spe_desc_assign_cookie(
struct ppc440spe_adma_chan *chan,
struct ppc440spe_adma_desc_slot *desc)
static void ppc440spe_rxor_set_region(struct ppc440spe_adma_desc_slot *desc,
u8 xor_arg_no, u32 mask)
static void ppc440spe_rxor_set_src(struct ppc440spe_adma_desc_slot *desc,
u8 xor_arg_no, dma_addr_t addr)
static void ppc440spe_rxor_set_mult(struct ppc440spe_adma_desc_slot *desc,
u8 xor_arg_no, u8 idx, u8 mult)
static void ppc440spe_adma_check_threshold(struct ppc440spe_adma_chan *chan)
static dma_cookie_t ppc440spe_adma_tx_submit(struct dma_async_tx_descriptor *tx)
static struct dma_async_tx_descriptor *ppc440spe_adma_prep_dma_interrupt(
struct dma_chan *chan, unsigned long flags)
static struct dma_async_tx_descriptor *ppc440spe_adma_prep_dma_memcpy(
struct dma_chan *chan, dma_addr_t dma_dest,
dma_addr_t dma_src, size_t len, unsigned long flags)
static struct dma_async_tx_descriptor *ppc440spe_adma_prep_dma_memset(
struct dma_chan *chan, dma_addr_t dma_dest, int value,
size_t len, unsigned long flags)
static struct dma_async_tx_descriptor *ppc440spe_adma_prep_dma_xor(
struct dma_chan *chan, dma_addr_t dma_dest,
dma_addr_t *dma_src, u32 src_cnt, size_t len,
unsigned long flags)
static inline void
ppc440spe_desc_set_xor_src_cnt(struct ppc440spe_adma_desc_slot *desc,
int src_cnt);
static void ppc440spe_init_rxor_cursor(struct ppc440spe_rxor *cursor);
static void ppc440spe_adma_init_dma2rxor_slot(
struct ppc440spe_adma_desc_slot *desc,
dma_addr_t *src, int src_cnt)
static struct ppc440spe_adma_desc_slot *ppc440spe_dma01_prep_mult(
struct ppc440spe_adma_chan *ppc440spe_chan,
dma_addr_t *dst, int dst_cnt, dma_addr_t *src, int src_cnt,
const unsigned char *scf, size_t len, unsigned long flags)
static struct ppc440spe_adma_desc_slot *ppc440spe_dma01_prep_sum_product(
struct ppc440spe_adma_chan *ppc440spe_chan,
dma_addr_t *dst, dma_addr_t *src, int src_cnt,
const unsigned char *scf, size_t len, unsigned long flags)
static struct ppc440spe_adma_desc_slot *ppc440spe_dma01_prep_pq(
struct ppc440spe_adma_chan *ppc440spe_chan,
dma_addr_t *dst, int dst_cnt, dma_addr_t *src, int src_cnt,
const unsigned char *scf, size_t len, unsigned long flags)
static struct ppc440spe_adma_desc_slot *ppc440spe_dma2_prep_pq(
struct ppc440spe_adma_chan *ppc440spe_chan,
dma_addr_t *dst, int dst_cnt, dma_addr_t *src, int src_cnt,
const unsigned char *scf, size_t len, unsigned long flags)
static struct dma_async_tx_descriptor *ppc440spe_adma_prep_dma_pq(
struct dma_chan *chan, dma_addr_t *dst, dma_addr_t *src,
unsigned int src_cnt, const unsigned char *scf,
size_t len, unsigned long flags)
static struct dma_async_tx_descriptor *ppc440spe_adma_prep_dma_pqzero_sum(
struct dma_chan *chan, dma_addr_t *pq, dma_addr_t *src,
unsigned int src_cnt, const unsigned char *scf, size_t len,
enum sum_check_flags *pqres, unsigned long flags)
static struct dma_async_tx_descriptor *ppc440spe_adma_prep_dma_xor_zero_sum(
struct dma_chan *chan, dma_addr_t *src, unsigned int src_cnt,
size_t len, enum sum_check_flags *result, unsigned long flags)
static void ppc440spe_adma_set_dest(struct ppc440spe_adma_desc_slot *sw_desc,
dma_addr_t addr, int index)
static void ppc440spe_adma_pq_zero_op(struct ppc440spe_adma_desc_slot *iter,
struct ppc440spe_adma_chan *chan, dma_addr_t addr)
static void ppc440spe_adma_pq_set_dest(struct ppc440spe_adma_desc_slot *sw_desc,
dma_addr_t *addrs, unsigned long flags)
static void ppc440spe_adma_pqzero_sum_set_dest(
struct ppc440spe_adma_desc_slot *sw_desc,
dma_addr_t paddr, dma_addr_t qaddr)
static inline void ppc440spe_desc_set_xor_src_cnt(
struct ppc440spe_adma_desc_slot *desc,
int src_cnt)
static void ppc440spe_adma_pq_set_src(struct ppc440spe_adma_desc_slot *sw_desc,
dma_addr_t addr, int index)
static void ppc440spe_adma_memcpy_xor_set_src(
struct ppc440spe_adma_desc_slot *sw_desc,
dma_addr_t addr, int index)
static void ppc440spe_adma_dma2rxor_inc_addr(
struct ppc440spe_adma_desc_slot *desc,
struct ppc440spe_rxor *cursor, int index, int src_cnt)
static int ppc440spe_adma_dma2rxor_prep_src(
struct ppc440spe_adma_desc_slot *hdesc,
struct ppc440spe_rxor *cursor, int index,
int src_cnt, u32 addr)
static void ppc440spe_adma_dma2rxor_set_src(
struct ppc440spe_adma_desc_slot *desc,
int index, dma_addr_t addr)
static void ppc440spe_adma_dma2rxor_set_mult(
struct ppc440spe_adma_desc_slot *desc,
int index, u8 mult)
static void ppc440spe_init_rxor_cursor(struct ppc440spe_rxor *cursor)
static void ppc440spe_adma_pq_set_src_mult(
struct ppc440spe_adma_desc_slot *sw_desc,
unsigned char mult, int index, int dst_pos)
static void ppc440spe_adma_free_chan_resources(struct dma_chan *chan)
static enum dma_status ppc440spe_adma_tx_status(struct dma_chan *chan,
dma_cookie_t cookie, struct dma_tx_state *txstate)
static irqreturn_t ppc440spe_adma_eot_handler(int irq, void *data)
static irqreturn_t ppc440spe_adma_err_handler(int irq, void *data)
static void ppc440spe_test_callback(void *unused)
static void ppc440spe_adma_issue_pending(struct dma_chan *chan)
static void ppc440spe_chan_start_null_xor(struct ppc440spe_adma_chan *chan)
static int ppc440spe_test_raid6(struct ppc440spe_adma_chan *chan)
static void ppc440spe_adma_init_capabilities(struct ppc440spe_adma_device *adev)
static int ppc440spe_adma_setup_irqs(struct ppc440spe_adma_device *adev,
struct ppc440spe_adma_chan *chan,
int *initcode)
static void ppc440spe_adma_release_irqs(struct ppc440spe_adma_device *adev,
struct ppc440spe_adma_chan *chan)
static int __devinit ppc440spe_adma_probe(struct platform_device *ofdev)
static int __devexit ppc440spe_adma_remove(struct platform_device *ofdev)
static ssize_t show_ppc440spe_devices(struct device_driver *dev, char *buf)
static ssize_t show_ppc440spe_r6enable(struct device_driver *dev, char *buf)
static ssize_t store_ppc440spe_r6enable(struct device_driver *dev,
const char *buf, size_t count)
static ssize_t show_ppc440spe_r6poly(struct device_driver *dev, char *buf)
static ssize_t store_ppc440spe_r6poly(struct device_driver *dev,
const char *buf, size_t count)
static DRIVER_ATTR(devices, S_IRUGO, show_ppc440spe_devices, NULL);
static DRIVER_ATTR(enable, S_IRUGO | S_IWUSR, show_ppc440spe_r6enable,
store_ppc440spe_r6enable);
static DRIVER_ATTR(poly, S_IRUGO | S_IWUSR, show_ppc440spe_r6poly,
store_ppc440spe_r6poly);
static int ppc440spe_configure_raid_devices(void)
static const struct of_device_id ppc440spe_adma_of_match[] __devinitconst = ;
MODULE_DEVICE_TABLE(of, ppc440spe_adma_of_match);
static struct platform_driver ppc440spe_adma_driver = ;
static __init int ppc440spe_adma_init(void)
static void __exit ppc440spe_adma_exit(void)
arch_initcall(ppc440spe_adma_init);
module_exit(ppc440spe_adma_exit);
MODULE_AUTHOR("Yuri Tikhonov <yur@emcraft.com>");
MODULE_DESCRIPTION("PPC440SPE ADMA Engine Driver");
MODULE_LICENSE("GPL");
