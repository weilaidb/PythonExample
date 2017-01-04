static void dwmac100_core_init(void __iomem *ioaddr)
static int dwmac100_rx_coe_supported(void __iomem *ioaddr)
static void dwmac100_dump_mac_regs(void __iomem *ioaddr)
static void dwmac100_irq_status(void __iomem *ioaddr)
static void dwmac100_set_umac_addr(void __iomem *ioaddr, unsigned char *addr,
unsigned int reg_n)
static void dwmac100_get_umac_addr(void __iomem *ioaddr, unsigned char *addr,
unsigned int reg_n)
static void dwmac100_set_filter(struct net_device *dev)
static void dwmac100_flow_ctrl(void __iomem *ioaddr, unsigned int duplex,
unsigned int fc, unsigned int pause_time)
static void dwmac100_pmt(void __iomem *ioaddr, unsigned long mode)
static const struct stmmac_ops dwmac100_ops = ;
struct mac_device_info *dwmac100_setup(void __iomem *ioaddr)
