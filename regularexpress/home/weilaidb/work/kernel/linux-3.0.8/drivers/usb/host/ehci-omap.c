#define EHCI_INSNREG04					(0xA0)
#define EHCI_INSNREG04_DISABLE_UNSUSPEND		(1 << 5)
#define	EHCI_INSNREG05_ULPI				(0xA4)
#define	EHCI_INSNREG05_ULPI_CONTROL_SHIFT		31
#define	EHCI_INSNREG05_ULPI_PORTSEL_SHIFT		24
#define	EHCI_INSNREG05_ULPI_OPSEL_SHIFT			22
#define	EHCI_INSNREG05_ULPI_REGADD_SHIFT		16
#define	EHCI_INSNREG05_ULPI_EXTREGADD_SHIFT		8
#define	EHCI_INSNREG05_ULPI_WRDATA_SHIFT		0
static const struct hc_driver ehci_omap_hc_driver;
static inline void ehci_write(void __iomem *base, u32 reg, u32 val)
static inline u32 ehci_read(void __iomem *base, u32 reg)
static void omap_ehci_soft_phy_reset(struct platform_device *pdev, u8 port)
static int ehci_hcd_omap_probe(struct platform_device *pdev)
static int ehci_hcd_omap_remove(struct platform_device *pdev)
static void ehci_hcd_omap_shutdown(struct platform_device *pdev)
static struct platform_driver ehci_hcd_omap_driver = ;
static const struct hc_driver ehci_omap_hc_driver = ;
MODULE_ALIAS("platform:omap-ehci");
MODULE_AUTHOR("Texas Instruments, Inc.");
MODULE_AUTHOR("Felipe Balbi <felipe.balbi@nokia.com>");
