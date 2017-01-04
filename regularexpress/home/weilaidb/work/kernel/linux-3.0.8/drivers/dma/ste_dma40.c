#define D40_NAME "dma40"
#define D40_PHY_CHAN -1
#define D40_CHAN_POS(chan)  (2 * (chan / 2))
#define D40_CHAN_POS_MASK(chan) (0x3 << D40_CHAN_POS(chan))
#define D40_SUSPEND_MAX_IT 500
#define LCLA_ALIGNMENT 0x40000
#define D40_LCLA_LINK_PER_EVENT_GRP 128
#define D40_LCLA_END D40_LCLA_LINK_PER_EVENT_GRP
#define MAX_LCLA_ALLOC_ATTEMPTS 256
#define D40_ALLOC_FREE		(1 << 31)
#define D40_ALLOC_PHY		(1 << 30)
#define D40_ALLOC_LOG_FREE	0
#define D40_HW_DESIGNER 0x8
enum d40_command ;
struct d40_lli_pool ;
struct d40_desc ;
struct d40_lcla_pool ;
struct d40_phy_res ;
struct d40_base;
struct d40_chan ;
struct d40_base ;
struct d40_interrupt_lookup ;
struct d40_reg_val ;
static struct device *chan2dev(struct d40_chan *d40c)
static bool chan_is_physical(struct d40_chan *chan)
static bool chan_is_logical(struct d40_chan *chan)
static void __iomem *chan_base(struct d40_chan *chan)
#define d40_err(dev, format, arg...)		\
dev_err(dev, "[%s] " format, __func__, ## arg)
#define chan_err(d40c, format, arg...)		\
d40_err(chan2dev(d40c), format, ## arg)
static int d40_pool_lli_alloc(struct d40_chan *d40c, struct d40_desc *d40d,
int lli_len)
static void d40_pool_lli_free(struct d40_chan *d40c, struct d40_desc *d40d)
static int d40_lcla_alloc_one(struct d40_chan *d40c,
struct d40_desc *d40d)
static int d40_lcla_free_all(struct d40_chan *d40c,
struct d40_desc *d40d)
static void d40_desc_remove(struct d40_desc *d40d)
static struct d40_desc *d40_desc_get(struct d40_chan *d40c)
static void d40_desc_free(struct d40_chan *d40c, struct d40_desc *d40d)
static void d40_desc_submit(struct d40_chan *d40c, struct d40_desc *desc)
static void d40_phy_lli_load(struct d40_chan *chan, struct d40_desc *desc)
static void d40_log_lli_to_lcxa(struct d40_chan *chan, struct d40_desc *desc)
static void d40_desc_load(struct d40_chan *d40c, struct d40_desc *d40d)
static struct d40_desc *d40_first_active_get(struct d40_chan *d40c)
static void d40_desc_queue(struct d40_chan *d40c, struct d40_desc *desc)
static struct d40_desc *d40_first_queued(struct d40_chan *d40c)
static int d40_psize_2_burst_size(bool is_log, int psize)
static int d40_size_2_dmalen(int size, u32 data_width1, u32 data_width2)
static int d40_sg_2_dmalen(struct scatterlist *sgl, int sg_len,
u32 data_width1, u32 data_width2)
static int d40_channel_execute_command(struct d40_chan *d40c,
enum d40_command command)
static void d40_term_all(struct d40_chan *d40c)
static void __d40_config_set_event(struct d40_chan *d40c, bool enable,
u32 event, int reg)
static void d40_config_set_event(struct d40_chan *d40c, bool do_enable)
static u32 d40_chan_has_events(struct d40_chan *d40c)
static u32 d40_get_prmo(struct d40_chan *d40c)
static void d40_config_write(struct d40_chan *d40c)
static u32 d40_residue(struct d40_chan *d40c)
static bool d40_tx_is_linked(struct d40_chan *d40c)
static int d40_pause(struct d40_chan *d40c)
static int d40_resume(struct d40_chan *d40c)
static int d40_terminate_all(struct d40_chan *chan)
static dma_cookie_t d40_tx_submit(struct dma_async_tx_descriptor *tx)
static int d40_start(struct d40_chan *d40c)
static struct d40_desc *d40_queue_start(struct d40_chan *d40c)
static void dma_tc_handle(struct d40_chan *d40c)
static void dma_tasklet(unsigned long data)
static irqreturn_t d40_handle_interrupt(int irq, void *data)
static int d40_validate_conf(struct d40_chan *d40c,
struct stedma40_chan_cfg *conf)
static bool d40_alloc_mask_set(struct d40_phy_res *phy, bool is_src,
int log_event_line, bool is_log)
static bool d40_alloc_mask_free(struct d40_phy_res *phy, bool is_src,
int log_event_line)
static int d40_allocate_channel(struct d40_chan *d40c)
static int d40_config_memcpy(struct d40_chan *d40c)
static int d40_free_dma(struct d40_chan *d40c)
static bool d40_is_paused(struct d40_chan *d40c)
static u32 stedma40_residue(struct dma_chan *chan)
static int
d40_prep_sg_log(struct d40_chan *chan, struct d40_desc *desc,
struct scatterlist *sg_src, struct scatterlist *sg_dst,
unsigned int sg_len, dma_addr_t src_dev_addr,
dma_addr_t dst_dev_addr)
static int
d40_prep_sg_phy(struct d40_chan *chan, struct d40_desc *desc,
struct scatterlist *sg_src, struct scatterlist *sg_dst,
unsigned int sg_len, dma_addr_t src_dev_addr,
dma_addr_t dst_dev_addr)
static struct d40_desc *
d40_prep_desc(struct d40_chan *chan, struct scatterlist *sg,
unsigned int sg_len, unsigned long dma_flags)
static dma_addr_t
d40_get_dev_addr(struct d40_chan *chan, enum dma_data_direction direction)
static struct dma_async_tx_descriptor *
d40_prep_sg(struct dma_chan *dchan, struct scatterlist *sg_src,
struct scatterlist *sg_dst, unsigned int sg_len,
enum dma_data_direction direction, unsigned long dma_flags)
bool stedma40_filter(struct dma_chan *chan, void *data)
EXPORT_SYMBOL(stedma40_filter);
static void __d40_set_prio_rt(struct d40_chan *d40c, int dev_type, bool src)
static void d40_set_prio_realtime(struct d40_chan *d40c)
static int d40_alloc_chan_resources(struct dma_chan *chan)
static void d40_free_chan_resources(struct dma_chan *chan)
static struct dma_async_tx_descriptor *d40_prep_memcpy(struct dma_chan *chan,
dma_addr_t dst,
dma_addr_t src,
size_t size,
unsigned long dma_flags)
static struct dma_async_tx_descriptor *
d40_prep_memcpy_sg(struct dma_chan *chan,
struct scatterlist *dst_sg, unsigned int dst_nents,
struct scatterlist *src_sg, unsigned int src_nents,
unsigned long dma_flags)
static struct dma_async_tx_descriptor *d40_prep_slave_sg(struct dma_chan *chan,
struct scatterlist *sgl,
unsigned int sg_len,
enum dma_data_direction direction,
unsigned long dma_flags)
static struct dma_async_tx_descriptor *
dma40_prep_dma_cyclic(struct dma_chan *chan, dma_addr_t dma_addr,
size_t buf_len, size_t period_len,
enum dma_data_direction direction)
static enum dma_status d40_tx_status(struct dma_chan *chan,
dma_cookie_t cookie,
struct dma_tx_state *txstate)
static void d40_issue_pending(struct dma_chan *chan)
static void d40_set_runtime_config(struct dma_chan *chan,
struct dma_slave_config *config)
static int d40_control(struct dma_chan *chan, enum dma_ctrl_cmd cmd,
unsigned long arg)
static void __init d40_chan_init(struct d40_base *base, struct dma_device *dma,
struct d40_chan *chans, int offset,
int num_chans)
static void d40_ops_init(struct d40_base *base, struct dma_device *dev)
static int __init d40_dmaengine_init(struct d40_base *base,
int num_reserved_chans)
static int __init d40_phy_res_init(struct d40_base *base)
static struct d40_base * __init d40_hw_detect_init(struct platform_device *pdev)
static void __init d40_hw_init(struct d40_base *base)
static int __init d40_lcla_allocate(struct d40_base *base)
static int __init d40_probe(struct platform_device *pdev)
static struct platform_driver d40_driver = ;
static int __init stedma40_init(void)
subsys_initcall(stedma40_init);
