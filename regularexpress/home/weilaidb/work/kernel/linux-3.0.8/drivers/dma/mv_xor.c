static void mv_xor_issue_pending(struct dma_chan *chan);
#define to_mv_xor_chan(chan)		\
container_of(chan, struct mv_xor_chan, common)
#define to_mv_xor_device(dev)		\
container_of(dev, struct mv_xor_device, common)
#define to_mv_xor_slot(tx)		\
container_of(tx, struct mv_xor_desc_slot, async_tx)
static void mv_desc_init(struct mv_xor_desc_slot *desc, unsigned long flags)
static u32 mv_desc_get_dest_addr(struct mv_xor_desc_slot *desc)
static u32 mv_desc_get_src_addr(struct mv_xor_desc_slot *desc,
int src_idx)
static void mv_desc_set_byte_count(struct mv_xor_desc_slot *desc,
u32 byte_count)
static void mv_desc_set_next_desc(struct mv_xor_desc_slot *desc,
u32 next_desc_addr)
static void mv_desc_clear_next_desc(struct mv_xor_desc_slot *desc)
static void mv_desc_set_block_fill_val(struct mv_xor_desc_slot *desc, u32 val)
static void mv_desc_set_dest_addr(struct mv_xor_desc_slot *desc,
dma_addr_t addr)
static int mv_chan_memset_slot_count(size_t len)
#define mv_chan_memcpy_slot_count(c) mv_chan_memset_slot_count(c)
static void mv_desc_set_src_addr(struct mv_xor_desc_slot *desc,
int index, dma_addr_t addr)
static u32 mv_chan_get_current_desc(struct mv_xor_chan *chan)
static void mv_chan_set_next_descriptor(struct mv_xor_chan *chan,
u32 next_desc_addr)
static void mv_chan_set_dest_pointer(struct mv_xor_chan *chan, u32 desc_addr)
static void mv_chan_set_block_size(struct mv_xor_chan *chan, u32 block_size)
static void mv_chan_set_value(struct mv_xor_chan *chan, u32 value)
static void mv_chan_unmask_interrupts(struct mv_xor_chan *chan)
static u32 mv_chan_get_intr_cause(struct mv_xor_chan *chan)
static int mv_is_err_intr(u32 intr_cause)
static void mv_xor_device_clear_eoc_cause(struct mv_xor_chan *chan)
static void mv_xor_device_clear_err_status(struct mv_xor_chan *chan)
static int mv_can_chain(struct mv_xor_desc_slot *desc)
static void mv_set_mode(struct mv_xor_chan *chan,
enum dma_transaction_type type)
static void mv_chan_activate(struct mv_xor_chan *chan)
static char mv_chan_is_busy(struct mv_xor_chan *chan)
static int mv_chan_xor_slot_count(size_t len, int src_cnt)
static void mv_xor_free_slots(struct mv_xor_chan *mv_chan,
struct mv_xor_desc_slot *slot)
static void mv_xor_start_new_chain(struct mv_xor_chan *mv_chan,
struct mv_xor_desc_slot *sw_desc)
static dma_cookie_t
mv_xor_run_tx_complete_actions(struct mv_xor_desc_slot *desc,
struct mv_xor_chan *mv_chan, dma_cookie_t cookie)
static int
mv_xor_clean_completed_slots(struct mv_xor_chan *mv_chan)
static int
mv_xor_clean_slot(struct mv_xor_desc_slot *desc,
struct mv_xor_chan *mv_chan)
static void __mv_xor_slot_cleanup(struct mv_xor_chan *mv_chan)
static void
mv_xor_slot_cleanup(struct mv_xor_chan *mv_chan)
static void mv_xor_tasklet(unsigned long data)
static struct mv_xor_desc_slot *
mv_xor_alloc_slots(struct mv_xor_chan *mv_chan, int num_slots,
int slots_per_op)
static dma_cookie_t
mv_desc_assign_cookie(struct mv_xor_chan *mv_chan,
struct mv_xor_desc_slot *desc)
static dma_cookie_t
mv_xor_tx_submit(struct dma_async_tx_descriptor *tx)
static int mv_xor_alloc_chan_resources(struct dma_chan *chan)
static struct dma_async_tx_descriptor *
mv_xor_prep_dma_memcpy(struct dma_chan *chan, dma_addr_t dest, dma_addr_t src,
size_t len, unsigned long flags)
static struct dma_async_tx_descriptor *
mv_xor_prep_dma_memset(struct dma_chan *chan, dma_addr_t dest, int value,
size_t len, unsigned long flags)
static struct dma_async_tx_descriptor *
mv_xor_prep_dma_xor(struct dma_chan *chan, dma_addr_t dest, dma_addr_t *src,
unsigned int src_cnt, size_t len, unsigned long flags)
static void mv_xor_free_chan_resources(struct dma_chan *chan)
static enum dma_status mv_xor_status(struct dma_chan *chan,
dma_cookie_t cookie,
struct dma_tx_state *txstate)
static void mv_dump_xor_regs(struct mv_xor_chan *chan)
static void mv_xor_err_interrupt_handler(struct mv_xor_chan *chan,
u32 intr_cause)
static irqreturn_t mv_xor_interrupt_handler(int irq, void *data)
static void mv_xor_issue_pending(struct dma_chan *chan)
#define MV_XOR_TEST_SIZE 2000
static int __devinit mv_xor_memcpy_self_test(struct mv_xor_device *device)
#define MV_XOR_NUM_SRC_TEST 4
static int __devinit
mv_xor_xor_self_test(struct mv_xor_device *device)
static int __devexit mv_xor_remove(struct platform_device *dev)
static int __devinit mv_xor_probe(struct platform_device *pdev)
static void
mv_xor_conf_mbus_windows(struct mv_xor_shared_private *msp,
struct mbus_dram_target_info *dram)
static struct platform_driver mv_xor_driver = ;
static int mv_xor_shared_probe(struct platform_device *pdev)
static int mv_xor_shared_remove(struct platform_device *pdev)
static struct platform_driver mv_xor_shared_driver = ;
static int __init mv_xor_init(void)
module_init(mv_xor_init);
MODULE_AUTHOR("Saeed Bishara <saeed@marvell.com>");
MODULE_DESCRIPTION("DMA engine driver for Marvell's XOR engine");
MODULE_LICENSE("GPL");
