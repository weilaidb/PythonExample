#undef DWMAC_DMA_DEBUG
#define DWMAC_LIB_DBG(fmt, args...)  printk(fmt, ## args)
#define DWMAC_LIB_DBG(fmt, args...)  do  while (0)
void dwmac_enable_dma_transmission(void __iomem *ioaddr)
void dwmac_enable_dma_irq(void __iomem *ioaddr)
void dwmac_disable_dma_irq(void __iomem *ioaddr)
void dwmac_dma_start_tx(void __iomem *ioaddr)
void dwmac_dma_stop_tx(void __iomem *ioaddr)
void dwmac_dma_start_rx(void __iomem *ioaddr)
void dwmac_dma_stop_rx(void __iomem *ioaddr)
static void show_tx_process_state(unsigned int status)
static void show_rx_process_state(unsigned int status)
int dwmac_dma_interrupt(void __iomem *ioaddr,
struct stmmac_extra_stats *x)
void dwmac_dma_flush_tx_fifo(void __iomem *ioaddr)
void stmmac_set_mac_addr(void __iomem *ioaddr, u8 addr[6],
unsigned int high, unsigned int low)
void stmmac_get_mac_addr(void __iomem *ioaddr, unsigned char *addr,
unsigned int high, unsigned int low)
