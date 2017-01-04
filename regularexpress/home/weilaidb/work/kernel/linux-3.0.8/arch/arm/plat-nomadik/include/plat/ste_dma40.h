#define STE_DMA40_H
#define STEDMA40_MAX_SEG_SIZE 0xFFFF
#define STEDMA40_DEV_DST_MEMORY (-1)
#define	STEDMA40_DEV_SRC_MEMORY (-1)
enum stedma40_mode ;
enum stedma40_mode_opt ;
#define STEDMA40_ESIZE_8_BIT  0x0
#define STEDMA40_ESIZE_16_BIT 0x1
#define STEDMA40_ESIZE_32_BIT 0x2
#define STEDMA40_ESIZE_64_BIT 0x3
#define STEDMA40_PSIZE_PHY_1  0x4
#define STEDMA40_PSIZE_PHY_2  0x0
#define STEDMA40_PSIZE_PHY_4  0x1
#define STEDMA40_PSIZE_PHY_8  0x2
#define STEDMA40_PSIZE_PHY_16 0x3
#define STEDMA40_PSIZE_LOG_1  STEDMA40_PSIZE_PHY_2
#define STEDMA40_PSIZE_LOG_4  STEDMA40_PSIZE_PHY_4
#define STEDMA40_PSIZE_LOG_8  STEDMA40_PSIZE_PHY_8
#define STEDMA40_PSIZE_LOG_16 STEDMA40_PSIZE_PHY_16
#define STEDMA40_MAX_PHYS 32
enum stedma40_flow_ctrl ;
enum stedma40_periph_data_width ;
enum stedma40_xfer_dir ;
struct stedma40_half_channel_info ;
struct stedma40_chan_cfg ;
struct stedma40_platform_data ;
bool stedma40_filter(struct dma_chan *chan, void *data);
static inline struct
dma_async_tx_descriptor *stedma40_slave_mem(struct dma_chan *chan,
dma_addr_t addr,
unsigned int size,
enum dma_data_direction direction,
unsigned long flags)
static inline bool stedma40_filter(struct dma_chan *chan, void *data)
static inline struct
dma_async_tx_descriptor *stedma40_slave_mem(struct dma_chan *chan,
dma_addr_t addr,
unsigned int size,
enum dma_data_direction direction,
unsigned long flags)
