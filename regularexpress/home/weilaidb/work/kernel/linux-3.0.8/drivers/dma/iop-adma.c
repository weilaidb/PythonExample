#define to_iop_adma_chan(chan) container_of(chan, struct iop_adma_chan, common)
#define to_iop_adma_device(dev) \
container_of(dev, struct iop_adma_device, common)
#define tx_to_iop_adma_slot(tx) \
container_of(tx, struct iop_adma_desc_slot, async_tx)
static void iop_adma_free_slots(struct iop_adma_desc_slot *slot)
static void
iop_desc_unmap(struct iop_adma_chan *iop_chan, struct iop_adma_desc_slot *desc)
static void
iop_desc_unmap_pq(struct iop_adma_chan *iop_chan, struct iop_adma_desc_slot *desc)
static dma_cookie_t
iop_adma_run_tx_complete_actions(struct iop_adma_desc_slot *desc,
struct iop_adma_chan *iop_chan, dma_cookie_t cookie)
static int
iop_adma_clean_slot(struct iop_adma_desc_slot *desc,
struct iop_adma_chan *iop_chan)
static void __iop_adma_slot_cleanup(struct iop_adma_chan *iop_chan)
static void
iop_adma_slot_cleanup(struct iop_adma_chan *iop_chan)
static void iop_adma_tasklet(unsigned long data)
static struct iop_adma_desc_slot *
iop_adma_alloc_slots(struct iop_adma_chan *iop_chan, int num_slots,
int slots_per_op)
static dma_cookie_t
iop_desc_assign_cookie(struct iop_adma_chan *iop_chan,
struct iop_adma_desc_slot *desc)
static void iop_adma_check_threshold(struct iop_adma_chan *iop_chan)
static dma_cookie_t
iop_adma_tx_submit(struct dma_async_tx_descriptor *tx)
static void iop_chan_start_null_memcpy(struct iop_adma_chan *iop_chan);
static void iop_chan_start_null_xor(struct iop_adma_chan *iop_chan);
static int iop_adma_alloc_chan_resources(struct dma_chan *chan)
static struct dma_async_tx_descriptor *
iop_adma_prep_dma_interrupt(struct dma_chan *chan, unsigned long flags)
static struct dma_async_tx_descriptor *
iop_adma_prep_dma_memcpy(struct dma_chan *chan, dma_addr_t dma_dest,
dma_addr_t dma_src, size_t len, unsigned long flags)
static struct dma_async_tx_descriptor *
iop_adma_prep_dma_memset(struct dma_chan *chan, dma_addr_t dma_dest,
int value, size_t len, unsigned long flags)
static struct dma_async_tx_descriptor *
iop_adma_prep_dma_xor(struct dma_chan *chan, dma_addr_t dma_dest,
dma_addr_t *dma_src, unsigned int src_cnt, size_t len,
unsigned long flags)
static struct dma_async_tx_descriptor *
iop_adma_prep_dma_xor_val(struct dma_chan *chan, dma_addr_t *dma_src,
unsigned int src_cnt, size_t len, u32 *result,
unsigned long flags)
static struct dma_async_tx_descriptor *
iop_adma_prep_dma_pq(struct dma_chan *chan, dma_addr_t *dst, dma_addr_t *src,
unsigned int src_cnt, const unsigned char *scf, size_t len,
unsigned long flags)
static struct dma_async_tx_descriptor *
iop_adma_prep_dma_pq_val(struct dma_chan *chan, dma_addr_t *pq, dma_addr_t *src,
unsigned int src_cnt, const unsigned char *scf,
size_t len, enum sum_check_flags *pqres,
unsigned long flags)
static void iop_adma_free_chan_resources(struct dma_chan *chan)
static enum dma_status iop_adma_status(struct dma_chan *chan,
dma_cookie_t cookie,
struct dma_tx_state *txstate)
static irqreturn_t iop_adma_eot_handler(int irq, void *data)
static irqreturn_t iop_adma_eoc_handler(int irq, void *data)
static irqreturn_t iop_adma_err_handler(int irq, void *data)
static void iop_adma_issue_pending(struct dma_chan *chan)
#define IOP_ADMA_TEST_SIZE 2000
static int __devinit iop_adma_memcpy_self_test(struct iop_adma_device *device)
#define IOP_ADMA_NUM_SRC_TEST 4
static int __devinit
iop_adma_xor_val_self_test(struct iop_adma_device *device)
static int __devinit
iop_adma_pq_zero_sum_self_test(struct iop_adma_device *device)
static int __devexit iop_adma_remove(struct platform_device *dev)
static int __devinit iop_adma_probe(struct platform_device *pdev)
static void iop_chan_start_null_memcpy(struct iop_adma_chan *iop_chan)
static void iop_chan_start_null_xor(struct iop_adma_chan *iop_chan)
MODULE_ALIAS("platform:iop-adma");
static struct platform_driver iop_adma_driver = ;
static int __init iop_adma_init (void)
static void __exit iop_adma_exit (void)
module_exit(iop_adma_exit);
module_init(iop_adma_init);
MODULE_AUTHOR("Intel Corporation");
MODULE_DESCRIPTION("IOP ADMA Engine Driver");
MODULE_LICENSE("GPL");
