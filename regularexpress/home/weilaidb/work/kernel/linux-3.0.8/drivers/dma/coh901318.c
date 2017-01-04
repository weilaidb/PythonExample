#define COHC_2_DEV(cohc) (&cohc->chan.dev->device)
#define COH_DBG(x) ()
#define COH_DBG(x) ()
struct coh901318_desc ;
struct coh901318_base ;
struct coh901318_chan ;
static void coh901318_list_print(struct coh901318_chan *cohc,
struct coh901318_lli *lli)
#define COH901318_DEBUGFS_ASSIGN(x, y) (x = y)
static struct coh901318_base *debugfs_dma_base;
static struct dentry *dma_dentry;
static int coh901318_debugfs_open(struct inode *inode, struct file *file)
static int coh901318_debugfs_read(struct file *file, char __user *buf,
size_t count, loff_t *f_pos)
static const struct file_operations coh901318_debugfs_status_operations = ;
static int __init init_coh901318_debugfs(void)
static void __exit exit_coh901318_debugfs(void)
module_init(init_coh901318_debugfs);
module_exit(exit_coh901318_debugfs);
#define COH901318_DEBUGFS_ASSIGN(x, y)
static inline struct coh901318_chan *to_coh901318_chan(struct dma_chan *chan)
static inline dma_addr_t
cohc_dev_addr(struct coh901318_chan *cohc)
static inline const struct coh901318_params *
cohc_chan_param(struct coh901318_chan *cohc)
static inline const struct coh_dma_channel *
cohc_chan_conf(struct coh901318_chan *cohc)
static void enable_powersave(struct coh901318_chan *cohc)
static void disable_powersave(struct coh901318_chan *cohc)
static inline int coh901318_set_ctrl(struct coh901318_chan *cohc, u32 control)
static inline int coh901318_set_conf(struct coh901318_chan *cohc, u32 conf)
static int coh901318_start(struct coh901318_chan *cohc)
static int coh901318_prep_linked_list(struct coh901318_chan *cohc,
struct coh901318_lli *lli)
static dma_cookie_t
coh901318_assign_cookie(struct coh901318_chan *cohc,
struct coh901318_desc *cohd)
static struct coh901318_desc *
coh901318_desc_get(struct coh901318_chan *cohc)
static void
coh901318_desc_free(struct coh901318_chan *cohc, struct coh901318_desc *cohd)
static void
coh901318_desc_submit(struct coh901318_chan *cohc, struct coh901318_desc *desc)
static struct coh901318_desc *
coh901318_first_active_get(struct coh901318_chan *cohc)
static void
coh901318_desc_remove(struct coh901318_desc *cohd)
static void
coh901318_desc_queue(struct coh901318_chan *cohc, struct coh901318_desc *desc)
static struct coh901318_desc *
coh901318_first_queued(struct coh901318_chan *cohc)
static inline u32 coh901318_get_bytes_in_lli(struct coh901318_lli *in_lli)
static u32 coh901318_get_bytes_left(struct dma_chan *chan)
static void coh901318_pause(struct dma_chan *chan)
static void coh901318_resume(struct dma_chan *chan)
bool coh901318_filter_id(struct dma_chan *chan, void *chan_id)
EXPORT_SYMBOL(coh901318_filter_id);
static int coh901318_config(struct coh901318_chan *cohc,
struct coh901318_params *param)
static struct coh901318_desc *coh901318_queue_start(struct coh901318_chan *cohc)
static void dma_tasklet(unsigned long data)
static void dma_tc_handle(struct coh901318_chan *cohc)
static irqreturn_t dma_irq_handler(int irq, void *dev_id)
static int coh901318_alloc_chan_resources(struct dma_chan *chan)
static void
coh901318_free_chan_resources(struct dma_chan *chan)
static dma_cookie_t
coh901318_tx_submit(struct dma_async_tx_descriptor *tx)
static struct dma_async_tx_descriptor *
coh901318_prep_memcpy(struct dma_chan *chan, dma_addr_t dest, dma_addr_t src,
size_t size, unsigned long flags)
static struct dma_async_tx_descriptor *
coh901318_prep_slave_sg(struct dma_chan *chan, struct scatterlist *sgl,
unsigned int sg_len, enum dma_data_direction direction,
unsigned long flags)
static enum dma_status
coh901318_tx_status(struct dma_chan *chan, dma_cookie_t cookie,
struct dma_tx_state *txstate)
static void
coh901318_issue_pending(struct dma_chan *chan)
struct burst_table ;
static const struct burst_table burst_sizes[] = ;
static void coh901318_dma_set_runtimeconfig(struct dma_chan *chan,
struct dma_slave_config *config)
static int
coh901318_control(struct dma_chan *chan, enum dma_ctrl_cmd cmd,
unsigned long arg)
void coh901318_base_init(struct dma_device *dma, const int *pick_chans,
struct coh901318_base *base)
static int __init coh901318_probe(struct platform_device *pdev)
static int __exit coh901318_remove(struct platform_device *pdev)
static struct platform_driver coh901318_driver = ;
int __init coh901318_init(void)
subsys_initcall(coh901318_init);
void __exit coh901318_exit(void)
module_exit(coh901318_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Per Friden");
