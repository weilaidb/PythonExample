static int dwmac1000_dma_init(void __iomem *ioaddr, int pbl, u32 dma_tx,
u32 dma_rx)
static void dwmac1000_dma_operation_mode(void __iomem *ioaddr, int txmode,
int rxmode)
static void dwmac1000_dma_diagnostic_fr(void *data,
struct stmmac_extra_stats *x, void __iomem *ioaddr)
static void dwmac1000_dump_dma_regs(void __iomem *ioaddr)
const struct stmmac_dma_ops dwmac1000_dma_ops = ;
