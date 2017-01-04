static void dwmac1000_core_init(void __iomem *ioaddr)
static int dwmac1000_rx_coe_supported(void __iomem *ioaddr)
static void dwmac1000_dump_regs(void __iomem *ioaddr)
static void dwmac1000_set_umac_addr(void __iomem *ioaddr, unsigned char *addr,
unsigned int reg_n)
static void dwmac1000_get_umac_addr(void __iomem *ioaddr, unsigned char *addr,
unsigned int reg_n)
static void dwmac1000_set_filter(struct net_device *dev)
static void dwmac1000_flow_ctrl(void __iomem *ioaddr, unsigned int duplex,
unsigned int fc, unsigned int pause_time)
static void dwmac1000_pmt(void __iomem *ioaddr, unsigned long mode)
static void dwmac1000_irq_status(void __iomem *ioaddr)
static const struct stmmac_ops dwmac1000_ops = ;
struct mac_device_info *dwmac1000_setup(void __iomem *ioaddr)
