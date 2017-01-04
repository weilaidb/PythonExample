#define DRIVER_NAME	"pl08xdmac"
struct vendor_data ;
struct pl08x_lli ;
struct pl08x_driver_data ;
#define PL08X_BOUNDARY_SHIFT		(10)
#define PL08X_BOUNDARY_SIZE		(1 << PL08X_BOUNDARY_SHIFT)
#define PL08X_WQ_PERIODMIN	20
# define PL08X_LLI_TSFR_SIZE	0x2000
#define PL08X_MAX_ALLOCS	0x40
#define MAX_NUM_TSFR_LLIS	(PL08X_LLI_TSFR_SIZE/sizeof(struct pl08x_lli))
#define PL08X_ALIGN		8
static inline struct pl08x_dma_chan *to_pl08x_chan(struct dma_chan *chan)
static inline struct pl08x_txd *to_pl08x_txd(struct dma_async_tx_descriptor *tx)
static int pl08x_phy_channel_busy(struct pl08x_phy_chan *ch)
static void pl08x_start_txd(struct pl08x_dma_chan *plchan,
struct pl08x_txd *txd)
static void pl08x_pause_phy_chan(struct pl08x_phy_chan *ch)
static void pl08x_resume_phy_chan(struct pl08x_phy_chan *ch)
static void pl08x_terminate_phy_chan(struct pl08x_driver_data *pl08x,
struct pl08x_phy_chan *ch)
static inline u32 get_bytes_in_cctl(u32 cctl)
static u32 pl08x_getbytes_chan(struct pl08x_dma_chan *plchan)
static struct pl08x_phy_chan *
pl08x_get_phy_channel(struct pl08x_driver_data *pl08x,
struct pl08x_dma_chan *virt_chan)
static inline void pl08x_put_phy_channel(struct pl08x_driver_data *pl08x,
struct pl08x_phy_chan *ch)
static inline unsigned int pl08x_get_bytes_for_cctl(unsigned int coded)
static inline u32 pl08x_cctl_bits(u32 cctl, u8 srcwidth, u8 dstwidth,
size_t tsize)
struct pl08x_lli_build_data ;
static void pl08x_choose_master_bus(struct pl08x_lli_build_data *bd,
struct pl08x_bus_data **mbus, struct pl08x_bus_data **sbus, u32 cctl)
static void pl08x_fill_lli_for_desc(struct pl08x_lli_build_data *bd,
int num_llis, int len, u32 cctl)
static inline size_t pl08x_pre_boundary(u32 addr, size_t len)
static int pl08x_fill_llis_for_desc(struct pl08x_driver_data *pl08x,
struct pl08x_txd *txd)
static void pl08x_free_txd(struct pl08x_driver_data *pl08x,
struct pl08x_txd *txd)
static void pl08x_free_txd_list(struct pl08x_driver_data *pl08x,
struct pl08x_dma_chan *plchan)
static int pl08x_alloc_chan_resources(struct dma_chan *chan)
static void pl08x_free_chan_resources(struct dma_chan *chan)
static int prep_phy_channel(struct pl08x_dma_chan *plchan,
struct pl08x_txd *txd)
static void release_phy_channel(struct pl08x_dma_chan *plchan)
static dma_cookie_t pl08x_tx_submit(struct dma_async_tx_descriptor *tx)
static struct dma_async_tx_descriptor *pl08x_prep_dma_interrupt(
struct dma_chan *chan, unsigned long flags)
static enum dma_status
pl08x_dma_tx_status(struct dma_chan *chan,
dma_cookie_t cookie,
struct dma_tx_state *txstate)
struct burst_table ;
static const struct burst_table burst_sizes[] = ;
static int dma_set_runtime_config(struct dma_chan *chan,
struct dma_slave_config *config)
static void pl08x_issue_pending(struct dma_chan *chan)
static int pl08x_prep_channel_resources(struct pl08x_dma_chan *plchan,
struct pl08x_txd *txd)
static u32 pl08x_select_bus(struct pl08x_driver_data *pl08x, u8 src, u8 dst)
static struct pl08x_txd *pl08x_get_txd(struct pl08x_dma_chan *plchan,
unsigned long flags)
static struct dma_async_tx_descriptor *pl08x_prep_dma_memcpy(
struct dma_chan *chan, dma_addr_t dest, dma_addr_t src,
size_t len, unsigned long flags)
static struct dma_async_tx_descriptor *pl08x_prep_slave_sg(
struct dma_chan *chan, struct scatterlist *sgl,
unsigned int sg_len, enum dma_data_direction direction,
unsigned long flags)
static int pl08x_control(struct dma_chan *chan, enum dma_ctrl_cmd cmd,
unsigned long arg)
bool pl08x_filter_id(struct dma_chan *chan, void *chan_id)
static void pl08x_ensure_on(struct pl08x_driver_data *pl08x)
static void pl08x_unmap_buffers(struct pl08x_txd *txd)
static void pl08x_tasklet(unsigned long data)
static irqreturn_t pl08x_irq(int irq, void *dev)
static int pl08x_dma_init_virtual_channels(struct pl08x_driver_data *pl08x,
struct dma_device *dmadev,
unsigned int channels,
bool slave)
static void pl08x_free_virtual_channels(struct dma_device *dmadev)
static const char *pl08x_state_str(enum pl08x_dma_chan_state state)
static int pl08x_debugfs_show(struct seq_file *s, void *data)
static int pl08x_debugfs_open(struct inode *inode, struct file *file)
static const struct file_operations pl08x_debugfs_operations = ;
static void init_pl08x_debugfs(struct pl08x_driver_data *pl08x)
static inline void init_pl08x_debugfs(struct pl08x_driver_data *pl08x)
static int pl08x_probe(struct amba_device *adev, const struct amba_id *id)
static struct vendor_data vendor_pl080 = ;
static struct vendor_data vendor_pl081 = ;
static struct amba_id pl08x_ids[] = ;
static struct amba_driver pl08x_amba_driver = ;
static int __init pl08x_init(void)
subsys_initcall(pl08x_init);
