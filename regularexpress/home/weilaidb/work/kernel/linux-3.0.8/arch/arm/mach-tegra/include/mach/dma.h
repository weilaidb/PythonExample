#define __MACH_TEGRA_DMA_H
#if defined(CONFIG_TEGRA_SYSTEM_DMA)
struct tegra_dma_req;
struct tegra_dma_channel;
#define TEGRA_DMA_REQ_SEL_CNTR			0
#define TEGRA_DMA_REQ_SEL_I2S_2			1
#define TEGRA_DMA_REQ_SEL_I2S_1			2
#define TEGRA_DMA_REQ_SEL_SPD_I			3
#define TEGRA_DMA_REQ_SEL_UI_I			4
#define TEGRA_DMA_REQ_SEL_MIPI			5
#define TEGRA_DMA_REQ_SEL_I2S2_2		6
#define TEGRA_DMA_REQ_SEL_I2S2_1		7
#define TEGRA_DMA_REQ_SEL_UARTA			8
#define TEGRA_DMA_REQ_SEL_UARTB			9
#define TEGRA_DMA_REQ_SEL_UARTC			10
#define TEGRA_DMA_REQ_SEL_SPI			11
#define TEGRA_DMA_REQ_SEL_AC97			12
#define TEGRA_DMA_REQ_SEL_ACMODEM		13
#define TEGRA_DMA_REQ_SEL_SL4B			14
#define TEGRA_DMA_REQ_SEL_SL2B1			15
#define TEGRA_DMA_REQ_SEL_SL2B2			16
#define TEGRA_DMA_REQ_SEL_SL2B3			17
#define TEGRA_DMA_REQ_SEL_SL2B4			18
#define TEGRA_DMA_REQ_SEL_UARTD			19
#define TEGRA_DMA_REQ_SEL_UARTE			20
#define TEGRA_DMA_REQ_SEL_I2C			21
#define TEGRA_DMA_REQ_SEL_I2C2			22
#define TEGRA_DMA_REQ_SEL_I2C3			23
#define TEGRA_DMA_REQ_SEL_DVC_I2C		24
#define TEGRA_DMA_REQ_SEL_OWR			25
#define TEGRA_DMA_REQ_SEL_INVALID		31
enum tegra_dma_mode ;
enum tegra_dma_req_error ;
enum tegra_dma_req_buff_status ;
struct tegra_dma_req ;
int tegra_dma_enqueue_req(struct tegra_dma_channel *ch,
struct tegra_dma_req *req);
int tegra_dma_dequeue_req(struct tegra_dma_channel *ch,
struct tegra_dma_req *req);
void tegra_dma_dequeue(struct tegra_dma_channel *ch);
void tegra_dma_flush(struct tegra_dma_channel *ch);
bool tegra_dma_is_req_inflight(struct tegra_dma_channel *ch,
struct tegra_dma_req *req);
bool tegra_dma_is_empty(struct tegra_dma_channel *ch);
struct tegra_dma_channel *tegra_dma_allocate_channel(int mode);
void tegra_dma_free_channel(struct tegra_dma_channel *ch);
int __init tegra_dma_init(void);
