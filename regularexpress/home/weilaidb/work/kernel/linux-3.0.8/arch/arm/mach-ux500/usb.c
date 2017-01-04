#define MUSB_DMA40_RX_CH
#define MUSB_DMA40_TX_CH
static struct stedma40_chan_cfg musb_dma_rx_ch[UX500_MUSB_DMA_NUM_RX_CHANNELS]
= ;
static struct stedma40_chan_cfg musb_dma_tx_ch[UX500_MUSB_DMA_NUM_TX_CHANNELS]
= ;
static void *ux500_dma_rx_param_array[UX500_MUSB_DMA_NUM_RX_CHANNELS] = ;
static void *ux500_dma_tx_param_array[UX500_MUSB_DMA_NUM_TX_CHANNELS] = ;
static struct ux500_musb_board_data musb_board_data = ;
static u64 ux500_musb_dmamask = DMA_BIT_MASK(32);
static struct musb_hdrc_config musb_hdrc_config = ;
static struct musb_hdrc_platform_data musb_platform_data = ;
static struct resource usb_resources[] = ;
struct platform_device ux500_musb_device = ;
static inline void ux500_usb_dma_update_rx_ch_config(int *src_dev_type)
static inline void ux500_usb_dma_update_tx_ch_config(int *dst_dev_type)
void ux500_add_usb(resource_size_t base, int irq, int *dma_rx_cfg,
int *dma_tx_cfg)
