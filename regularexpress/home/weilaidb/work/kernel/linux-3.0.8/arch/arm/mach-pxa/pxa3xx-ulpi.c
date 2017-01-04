struct pxa3xx_u2d_ulpi ;
static struct pxa3xx_u2d_ulpi *u2d;
static inline u32 u2d_readl(u32 reg)
static inline void u2d_writel(u32 reg, u32 val)
#if defined(CONFIG_PXA310_ULPI)
enum u2d_ulpi_phy_mode ;
static inline enum u2d_ulpi_phy_mode pxa310_ulpi_get_phymode(void)
static int pxa310_ulpi_poll(void)
static int pxa310_ulpi_read(struct otg_transceiver *otg, u32 reg)
static int pxa310_ulpi_write(struct otg_transceiver *otg, u32 val, u32 reg)
struct otg_io_access_ops pxa310_ulpi_access_ops = ;
static void pxa310_otg_transceiver_rtsm(void)
static int pxa310_start_otg_host_transcvr(struct usb_bus *host)
static int pxa310_start_otg_hc(struct usb_bus *host)
static void pxa310_stop_otg_hc(void)
static void pxa310_u2d_setup_otg_hc(void)
static int pxa310_otg_init(struct pxa3xx_u2d_platform_data *pdata)
static void pxa310_otg_exit(void)
static inline void pxa310_u2d_setup_otg_hc(void)
static inline int pxa310_start_otg_hc(struct usb_bus *host)
static inline void pxa310_stop_otg_hc(void)
static inline int pxa310_otg_init(struct pxa3xx_u2d_platform_data *pdata)
static inline void pxa310_otg_exit(void)
int pxa3xx_u2d_start_hc(struct usb_bus *host)
void pxa3xx_u2d_stop_hc(struct usb_bus *host)
static int pxa3xx_u2d_probe(struct platform_device *pdev)
static int pxa3xx_u2d_remove(struct platform_device *pdev)
static struct platform_driver pxa3xx_u2d_ulpi_driver = ;
static int pxa3xx_u2d_ulpi_init(void)
module_init(pxa3xx_u2d_ulpi_init);
static void __exit pxa3xx_u2d_ulpi_exit(void)
module_exit(pxa3xx_u2d_ulpi_exit);
MODULE_DESCRIPTION("PXA3xx U2D ULPI driver");
MODULE_AUTHOR("Igor Grinberg");
MODULE_LICENSE("GPL v2");
