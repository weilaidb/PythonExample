#define OMAP1510_LB_MEMSIZE	32
#define OMAP1510_LB_CLOCK_DIV	0xfffec10c
#define OMAP1510_LB_MMU_CTL	0xfffec208
#define OMAP1510_LB_MMU_LCK	0xfffec224
#define OMAP1510_LB_MMU_LD_TLB	0xfffec228
#define OMAP1510_LB_MMU_CAM_H	0xfffec22c
#define OMAP1510_LB_MMU_CAM_L	0xfffec230
#define OMAP1510_LB_MMU_RAM_H	0xfffec234
#define OMAP1510_LB_MMU_RAM_L	0xfffec238
#error "This file is OMAP bus glue.  CONFIG_OMAP must be defined."
#define LOW	0
#define HIGH	1
#define GPIO1	1
static inline int tps65010_set_gpio_out_value(unsigned gpio, unsigned value)
extern int usb_disabled(void);
extern int ocpi_enable(void);
static struct clk *usb_host_ck;
static struct clk *usb_dc_ck;
static int host_enabled;
static int host_initialized;
static void omap_ohci_clock_power(int on)
static int omap_ohci_transceiver_power(int on)
static int omap_1510_local_bus_power(int on)
static int omap_1510_local_bus_init(void)
#define omap_1510_local_bus_power(x)
#define omap_1510_local_bus_init()
static void start_hnp(struct ohci_hcd *ohci)
static int ohci_omap_init(struct usb_hcd *hcd)
static void ohci_omap_stop(struct usb_hcd *hcd)
static int usb_hcd_omap_probe (const struct hc_driver *driver,
struct platform_device *pdev)
static inline void
usb_hcd_omap_remove (struct usb_hcd *hcd, struct platform_device *pdev)
static int
ohci_omap_start (struct usb_hcd *hcd)
static const struct hc_driver ohci_omap_hc_driver = ;
static int ohci_hcd_omap_drv_probe(struct platform_device *dev)
static int ohci_hcd_omap_drv_remove(struct platform_device *dev)
static int ohci_omap_suspend(struct platform_device *dev, pm_message_t message)
static int ohci_omap_resume(struct platform_device *dev)
static struct platform_driver ohci_hcd_omap_driver = ;
MODULE_ALIAS("platform:ohci");
