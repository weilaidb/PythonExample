#define APB_DMA_GEN				0x000
#define GEN_ENABLE				(1<<31)
#define APB_DMA_CNTRL				0x010
#define APB_DMA_IRQ_MASK			0x01c
#define APB_DMA_IRQ_MASK_SET			0x020
#define APB_DMA_CHAN_CSR			0x000
#define CSR_ENB					(1<<31)
#define CSR_IE_EOC				(1<<30)
#define CSR_HOLD				(1<<29)
#define CSR_DIR					(1<<28)
#define CSR_ONCE				(1<<27)
#define CSR_FLOW				(1<<21)
#define CSR_REQ_SEL_SHIFT			16
#define CSR_REQ_SEL_MASK			(0x1F<<CSR_REQ_SEL_SHIFT)
#define CSR_REQ_SEL_INVALID			(31<<CSR_REQ_SEL_SHIFT)
#define CSR_WCOUNT_SHIFT			2
#define CSR_WCOUNT_MASK				0xFFFC
#define APB_DMA_CHAN_STA				0x004
#define STA_BUSY				(1<<31)
#define STA_ISE_EOC				(1<<30)
#define STA_HALT				(1<<29)
#define STA_PING_PONG				(1<<28)
#define STA_COUNT_SHIFT				2
#define STA_COUNT_MASK				0xFFFC
#define APB_DMA_CHAN_AHB_PTR				0x010
#define APB_DMA_CHAN_AHB_SEQ				0x014
#define AHB_SEQ_INTR_ENB			(1<<31)
#define AHB_SEQ_BUS_WIDTH_SHIFT			28
#define AHB_SEQ_BUS_WIDTH_MASK			(0x7<<AHB_SEQ_BUS_WIDTH_SHIFT)
#define AHB_SEQ_BUS_WIDTH_8			(0<<AHB_SEQ_BUS_WIDTH_SHIFT)
#define AHB_SEQ_BUS_WIDTH_16			(1<<AHB_SEQ_BUS_WIDTH_SHIFT)
#define AHB_SEQ_BUS_WIDTH_32			(2<<AHB_SEQ_BUS_WIDTH_SHIFT)
#define AHB_SEQ_BUS_WIDTH_64			(3<<AHB_SEQ_BUS_WIDTH_SHIFT)
#define AHB_SEQ_BUS_WIDTH_128			(4<<AHB_SEQ_BUS_WIDTH_SHIFT)
#define AHB_SEQ_DATA_SWAP			(1<<27)
#define AHB_SEQ_BURST_MASK			(0x7<<24)
#define AHB_SEQ_BURST_1				(4<<24)
#define AHB_SEQ_BURST_4				(5<<24)
#define AHB_SEQ_BURST_8				(6<<24)
#define AHB_SEQ_DBL_BUF				(1<<19)
#define AHB_SEQ_WRAP_SHIFT			16
#define AHB_SEQ_WRAP_MASK			(0x7<<AHB_SEQ_WRAP_SHIFT)
#define APB_DMA_CHAN_APB_PTR				0x018
#define APB_DMA_CHAN_APB_SEQ				0x01c
#define APB_SEQ_BUS_WIDTH_SHIFT			28
#define APB_SEQ_BUS_WIDTH_MASK			(0x7<<APB_SEQ_BUS_WIDTH_SHIFT)
#define APB_SEQ_BUS_WIDTH_8			(0<<APB_SEQ_BUS_WIDTH_SHIFT)
#define APB_SEQ_BUS_WIDTH_16			(1<<APB_SEQ_BUS_WIDTH_SHIFT)
#define APB_SEQ_BUS_WIDTH_32			(2<<APB_SEQ_BUS_WIDTH_SHIFT)
#define APB_SEQ_BUS_WIDTH_64			(3<<APB_SEQ_BUS_WIDTH_SHIFT)
#define APB_SEQ_BUS_WIDTH_128			(4<<APB_SEQ_BUS_WIDTH_SHIFT)
#define APB_SEQ_DATA_SWAP			(1<<27)
#define APB_SEQ_WRAP_SHIFT			16
#define APB_SEQ_WRAP_MASK			(0x7<<APB_SEQ_WRAP_SHIFT)
#define TEGRA_SYSTEM_DMA_CH_NR			16
#define TEGRA_SYSTEM_DMA_AVP_CH_NUM		4
#define TEGRA_SYSTEM_DMA_CH_MIN			0
#define TEGRA_SYSTEM_DMA_CH_MAX	\
(TEGRA_SYSTEM_DMA_CH_NR - TEGRA_SYSTEM_DMA_AVP_CH_NUM - 1)
#define NV_DMA_MAX_TRASFER_SIZE 0x10000
const unsigned int ahb_addr_wrap_table[8] = ;
const unsigned int apb_addr_wrap_table[8] = ;
const unsigned int bus_width_table[5] = ;
#define TEGRA_DMA_NAME_SIZE 16
struct tegra_dma_channel ;
#define  NV_DMA_MAX_CHANNELS  32
static bool tegra_dma_initialized;
static DEFINE_MUTEX(tegra_dma_lock);
static DECLARE_BITMAP(channel_usage, NV_DMA_MAX_CHANNELS);
static struct tegra_dma_channel dma_channels[NV_DMA_MAX_CHANNELS];
static void tegra_dma_update_hw(struct tegra_dma_channel *ch,
struct tegra_dma_req *req);
static void tegra_dma_update_hw_partial(struct tegra_dma_channel *ch,
struct tegra_dma_req *req);
static void tegra_dma_stop(struct tegra_dma_channel *ch);
void tegra_dma_flush(struct tegra_dma_channel *ch)
EXPORT_SYMBOL(tegra_dma_flush);
void tegra_dma_dequeue(struct tegra_dma_channel *ch)
void tegra_dma_stop(struct tegra_dma_channel *ch)
int tegra_dma_cancel(struct tegra_dma_channel *ch)
int tegra_dma_dequeue_req(struct tegra_dma_channel *ch,
struct tegra_dma_req *_req)
EXPORT_SYMBOL(tegra_dma_dequeue_req);
bool tegra_dma_is_empty(struct tegra_dma_channel *ch)
EXPORT_SYMBOL(tegra_dma_is_empty);
bool tegra_dma_is_req_inflight(struct tegra_dma_channel *ch,
struct tegra_dma_req *_req)
EXPORT_SYMBOL(tegra_dma_is_req_inflight);
int tegra_dma_enqueue_req(struct tegra_dma_channel *ch,
struct tegra_dma_req *req)
EXPORT_SYMBOL(tegra_dma_enqueue_req);
struct tegra_dma_channel *tegra_dma_allocate_channel(int mode)
EXPORT_SYMBOL(tegra_dma_allocate_channel);
void tegra_dma_free_channel(struct tegra_dma_channel *ch)
EXPORT_SYMBOL(tegra_dma_free_channel);
static void tegra_dma_update_hw_partial(struct tegra_dma_channel *ch,
struct tegra_dma_req *req)
static void tegra_dma_update_hw(struct tegra_dma_channel *ch,
struct tegra_dma_req *req)
static void handle_oneshot_dma(struct tegra_dma_channel *ch)
static void handle_continuous_dma(struct tegra_dma_channel *ch)
static irqreturn_t dma_isr(int irq, void *data)
static irqreturn_t dma_thread_fn(int irq, void *data)
int __init tegra_dma_init(void)
postcore_initcall(tegra_dma_init);
static u32 apb_dma[5*TEGRA_SYSTEM_DMA_CH_NR + 3];
void tegra_dma_suspend(void)
void tegra_dma_resume(void)
