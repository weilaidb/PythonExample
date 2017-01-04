#define OMAP_USBHS_DEVICE	"usbhs-omap"
static struct resource usbhs_resources[] = ;
static struct platform_device usbhs_device = ;
static struct usbhs_omap_platform_data		usbhs_data;
static struct ehci_hcd_omap_platform_data	ehci_data;
static struct ohci_hcd_omap_platform_data	ohci_data;
static void setup_ehci_io_mux(const enum usbhs_omap_port_mode *port_mode)
static void setup_4430ehci_io_mux(const enum usbhs_omap_port_mode *port_mode)
static void setup_ohci_io_mux(const enum usbhs_omap_port_mode *port_mode)
static void setup_4430ohci_io_mux(const enum usbhs_omap_port_mode *port_mode)
void __init usbhs_init(const struct usbhs_omap_board_data *pdata)
void __init usbhs_init(const struct usbhs_omap_board_data *pdata)
