static int dwmac100_dma_init(void __iomem *ioaddr, int pbl, u32 dma_tx,
u32 dma_rx)
static void dwmac100_dma_operation_mode(void __iomem *ioaddr, int txmode,
int rxmode)
static void dwmac100_dump_dma_regs(void __iomem *ioaddr)
static void dwmac100_dma_diagnostic_fr(void *data, struct stmmac_extra_stats *x,
void __iomem *ioaddr)
const struct stmmac_dma_ops dwmac100_dma_ops = ;
