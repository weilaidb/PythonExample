#define DRIVER_AUTHOR "Roman Weissgaerber, David Brownell"
#define DRIVER_DESC "USB 1.1 'Open' Host Controller (OHCI) Driver"
#undef OHCI_VERBOSE_DEBUG
#define	OHCI_CONTROL_INIT	OHCI_CTRL_CBSR
#define	OHCI_INTR_INIT \
(OHCI_INTR_MIE | OHCI_INTR_RHSC | OHCI_INTR_UE \
| OHCI_INTR_RD | OHCI_INTR_WDH)
#define	IR_DISABLE
#define	IR_DISABLE
static const char	hcd_name [] = "ohci_hcd";
#define	STATECHANGE_DELAY	msecs_to_jiffies(300)
static void ohci_dump (struct ohci_hcd *ohci, int verbose);
static int ohci_init (struct ohci_hcd *ohci);
static void ohci_stop (struct usb_hcd *hcd);
#if defined(CONFIG_PM) || defined(CONFIG_PCI)
static int ohci_restart (struct ohci_hcd *ohci);
static void sb800_prefetch(struct ohci_hcd *ohci, int on);
static inline void sb800_prefetch(struct ohci_hcd *ohci, int on)
#if defined(CONFIG_SA1111)
#define IRQ_NOTMINE	IRQ_HANDLED
#define IRQ_NOTMINE	IRQ_NONE
static int distrust_firmware = 1;
module_param (distrust_firmware, bool, 0);
MODULE_PARM_DESC (distrust_firmware,
"true to distrust firmware power/overcurrent setup");
static int no_handshake = 0;
module_param (no_handshake, bool, 0);
MODULE_PARM_DESC (no_handshake, "true (not default) disables BIOS handshake");
static int ohci_urb_enqueue (
struct usb_hcd	*hcd,
struct urb	*urb,
gfp_t		mem_flags
)
static int ohci_urb_dequeue(struct usb_hcd *hcd, struct urb *urb, int status)
static void
ohci_endpoint_disable (struct usb_hcd *hcd, struct usb_host_endpoint *ep)
static int ohci_get_frame (struct usb_hcd *hcd)
static void ohci_usb_reset (struct ohci_hcd *ohci)
static void
ohci_shutdown (struct usb_hcd *hcd)
static int check_ed(struct ohci_hcd *ohci, struct ed *ed)
static void unlink_watchdog_func(unsigned long _ohci)
static int ohci_init (struct ohci_hcd *ohci)
static int ohci_run (struct ohci_hcd *ohci)
static irqreturn_t ohci_irq (struct usb_hcd *hcd)
static void ohci_stop (struct usb_hcd *hcd)
#if defined(CONFIG_PM) || defined(CONFIG_PCI)
static int ohci_restart (struct ohci_hcd *ohci)
MODULE_AUTHOR (DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE ("GPL");
#define PCI_DRIVER		ohci_pci_driver
#if defined(CONFIG_ARCH_SA1100) && defined(CONFIG_SA1111)
#define SA1111_DRIVER		ohci_hcd_sa1111_driver
#if defined(CONFIG_ARCH_S3C2410) || defined(CONFIG_ARCH_S3C64XX)
#define PLATFORM_DRIVER		ohci_hcd_s3c2410_driver
#define OMAP1_PLATFORM_DRIVER	ohci_hcd_omap_driver
#define OMAP3_PLATFORM_DRIVER	ohci_hcd_omap3_driver
#if defined(CONFIG_PXA27x) || defined(CONFIG_PXA3xx)
#define PLATFORM_DRIVER		ohci_hcd_pxa27x_driver
#define PLATFORM_DRIVER		ohci_hcd_ep93xx_driver
#define PLATFORM_DRIVER		ohci_hcd_au1xxx_driver
#define PLATFORM_DRIVER		ohci_hcd_pnx8550_driver
#define PLATFORM_DRIVER		ohci_hcd_ppc_soc_driver
#define PLATFORM_DRIVER		ohci_hcd_at91_driver
#define PLATFORM_DRIVER		usb_hcd_pnx4008_driver
#define PLATFORM_DRIVER		ohci_hcd_da8xx_driver
#define PLATFORM_DRIVER		ohci_hcd_sh_driver
#define OF_PLATFORM_DRIVER	ohci_hcd_ppc_of_driver
#define PLATFORM_DRIVER		spear_ohci_hcd_driver
#define PS3_SYSTEM_BUS_DRIVER	ps3_ohci_driver
#define SSB_OHCI_DRIVER		ssb_ohci_driver
#define SM501_OHCI_DRIVER	ohci_hcd_sm501_driver
#define TMIO_OHCI_DRIVER	ohci_hcd_tmio_driver
#define PLATFORM_DRIVER	ohci_hcd_jz4740_driver
#define PLATFORM_DRIVER		ohci_octeon_driver
#define PLATFORM_DRIVER		ohci_hcd_cns3xxx_driver
#define PLATFORM_DRIVER		ohci_hcd_ath79_driver
#if	!defined(PCI_DRIVER) &&		\
!defined(PLATFORM_DRIVER) &&	\
!defined(OMAP1_PLATFORM_DRIVER) &&	\
!defined(OMAP3_PLATFORM_DRIVER) &&	\
!defined(OF_PLATFORM_DRIVER) &&	\
!defined(SA1111_DRIVER) &&	\
!defined(PS3_SYSTEM_BUS_DRIVER) && \
!defined(SM501_OHCI_DRIVER) && \
!defined(TMIO_OHCI_DRIVER) && \
!defined(SSB_OHCI_DRIVER)
#error "missing bus glue for ohci-hcd"
static int __init ohci_hcd_mod_init(void)
module_init(ohci_hcd_mod_init);
static void __exit ohci_hcd_mod_exit(void)
module_exit(ohci_hcd_mod_exit);
