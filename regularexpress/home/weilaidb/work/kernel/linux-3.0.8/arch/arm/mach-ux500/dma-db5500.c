static struct resource dma40_resources[] = ;
static struct stedma40_chan_cfg dma40_memcpy_conf_phy = ;
static struct stedma40_chan_cfg dma40_memcpy_conf_log = ;
static const dma_addr_t dma40_rx_map[DB5500_DMA_NR_DEV] = ;
static const dma_addr_t dma40_tx_map[DB5500_DMA_NR_DEV] = ;
static int dma40_memcpy_event[] = ;
static struct stedma40_platform_data dma40_plat_data = ;
static struct platform_device dma40_device = ;
void __init db5500_dma_init(void)
