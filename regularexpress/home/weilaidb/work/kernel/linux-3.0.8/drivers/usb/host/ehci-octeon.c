#define OCTEON_EHCI_HCD_NAME "octeon-ehci"
void octeon2_usb_clocks_start(void);
void octeon2_usb_clocks_stop(void);
static void ehci_octeon_start(void)
static void ehci_octeon_stop(void)
static const struct hc_driver ehci_octeon_hc_driver = ;
static u64 ehci_octeon_dma_mask = DMA_BIT_MASK(64);
static int ehci_octeon_drv_probe(struct platform_device *pdev)
static int ehci_octeon_drv_remove(struct platform_device *pdev)
static struct platform_driver ehci_octeon_driver = ;
MODULE_ALIAS("platform:" OCTEON_EHCI_HCD_NAME);
