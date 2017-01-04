#define TEGRA_USB_DMA_ALIGN 32
struct tegra_ehci_hcd ;
static void tegra_ehci_power_up(struct usb_hcd *hcd)
static void tegra_ehci_power_down(struct usb_hcd *hcd)
static int tegra_ehci_internal_port_reset(
struct ehci_hcd	*ehci,
u32 __iomem	*portsc_reg
)
static int tegra_ehci_hub_control(
struct usb_hcd	*hcd,
u16		typeReq,
u16		wValue,
u16		wIndex,
char		*buf,
u16		wLength
)
static void tegra_ehci_restart(struct usb_hcd *hcd)
static int tegra_usb_suspend(struct usb_hcd *hcd)
static int tegra_usb_resume(struct usb_hcd *hcd)
static void tegra_ehci_shutdown(struct usb_hcd *hcd)
static int tegra_ehci_setup(struct usb_hcd *hcd)
static int tegra_ehci_bus_suspend(struct usb_hcd *hcd)
static int tegra_ehci_bus_resume(struct usb_hcd *hcd)
struct temp_buffer ;
static void free_temp_buffer(struct urb *urb)
static int alloc_temp_buffer(struct urb *urb, gfp_t mem_flags)
static int tegra_ehci_map_urb_for_dma(struct usb_hcd *hcd, struct urb *urb,
gfp_t mem_flags)
static void tegra_ehci_unmap_urb_for_dma(struct usb_hcd *hcd, struct urb *urb)
static const struct hc_driver tegra_ehci_hc_driver = ;
static int tegra_ehci_probe(struct platform_device *pdev)
static int tegra_ehci_resume(struct platform_device *pdev)
static int tegra_ehci_suspend(struct platform_device *pdev, pm_message_t state)
static int tegra_ehci_remove(struct platform_device *pdev)
static void tegra_ehci_hcd_shutdown(struct platform_device *pdev)
static struct platform_driver tegra_ehci_driver = ;
