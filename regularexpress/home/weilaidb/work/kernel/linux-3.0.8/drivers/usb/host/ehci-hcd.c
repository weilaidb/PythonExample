#define DRIVER_AUTHOR "David Brownell"
#define DRIVER_DESC "USB 2.0 'Enhanced' Host Controller (EHCI) Driver"
static const char	hcd_name [] = "ehci_hcd";
#undef VERBOSE_DEBUG
#undef EHCI_URB_TRACE
#define EHCI_STATS
#define	EHCI_TUNE_CERR		3
#define	EHCI_TUNE_RL_HS		4
#define	EHCI_TUNE_RL_TT		0
#define	EHCI_TUNE_MULT_HS	1
#define	EHCI_TUNE_MULT_TT	1
#define	EHCI_TUNE_FLS		1
#define EHCI_IAA_MSECS		10
#define EHCI_IO_JIFFIES		(HZ/10)
#define EHCI_ASYNC_JIFFIES	(HZ/20)
#define EHCI_SHRINK_JIFFIES	(DIV_ROUND_UP(HZ, 200) + 1)
static int log2_irq_thresh = 0;
module_param (log2_irq_thresh, int, S_IRUGO);
MODULE_PARM_DESC (log2_irq_thresh, "log2 IRQ latency, 1-64 microframes");
static unsigned park = 0;
module_param (park, uint, S_IRUGO);
MODULE_PARM_DESC (park, "park setting; 1-3 back-to-back async packets");
static int ignore_oc = 0;
module_param (ignore_oc, bool, S_IRUGO);
MODULE_PARM_DESC (ignore_oc, "ignore bogus hardware overcurrent indications");
static unsigned int hird;
module_param(hird, int, S_IRUGO);
MODULE_PARM_DESC(hird, "host initiated resume duration, +1 for each 75us\n");
#define	INTR_MASK (STS_IAA | STS_FATAL | STS_PCD | STS_ERR | STS_INT)
static void
timer_action(struct ehci_hcd *ehci, enum ehci_timer_action action)
static int handshake (struct ehci_hcd *ehci, void __iomem *ptr,
u32 mask, u32 done, int usec)
static int tdi_in_host_mode (struct ehci_hcd *ehci)
static int ehci_halt (struct ehci_hcd *ehci)
static int handshake_on_error_set_halt(struct ehci_hcd *ehci, void __iomem *ptr,
u32 mask, u32 done, int usec)
static void tdi_reset (struct ehci_hcd *ehci)
static int ehci_reset (struct ehci_hcd *ehci)
static void ehci_quiesce (struct ehci_hcd *ehci)
static void end_unlink_async(struct ehci_hcd *ehci);
static void ehci_work(struct ehci_hcd *ehci);
static void ehci_iaa_watchdog(unsigned long param)
static void ehci_watchdog(unsigned long param)
static void ehci_turn_off_all_ports(struct ehci_hcd *ehci)
static void ehci_silence_controller(struct ehci_hcd *ehci)
static void ehci_shutdown(struct usb_hcd *hcd)
static void ehci_port_power (struct ehci_hcd *ehci, int is_on)
static void ehci_work (struct ehci_hcd *ehci)
static void ehci_stop (struct usb_hcd *hcd)
static int ehci_init(struct usb_hcd *hcd)
static int ehci_run (struct usb_hcd *hcd)
static irqreturn_t ehci_irq (struct usb_hcd *hcd)
static int ehci_urb_enqueue (
struct usb_hcd	*hcd,
struct urb	*urb,
gfp_t		mem_flags
)
static void unlink_async (struct ehci_hcd *ehci, struct ehci_qh *qh)
static int ehci_urb_dequeue(struct usb_hcd *hcd, struct urb *urb, int status)
static void
ehci_endpoint_disable (struct usb_hcd *hcd, struct usb_host_endpoint *ep)
static void
ehci_endpoint_reset(struct usb_hcd *hcd, struct usb_host_endpoint *ep)
static int ehci_get_frame (struct usb_hcd *hcd)
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_AUTHOR (DRIVER_AUTHOR);
MODULE_LICENSE ("GPL");
#define	PCI_DRIVER		ehci_pci_driver
#define	PLATFORM_DRIVER		ehci_fsl_driver
#define PLATFORM_DRIVER		ehci_mxc_driver
#define PLATFORM_DRIVER		ehci_hcd_sh_driver
#define	PLATFORM_DRIVER		ehci_hcd_au1xxx_driver
#define        PLATFORM_DRIVER         ehci_hcd_omap_driver
#define	PS3_SYSTEM_BUS_DRIVER	ps3_ehci_driver
#define OF_PLATFORM_DRIVER	ehci_hcd_ppc_of_driver
#define XILINX_OF_PLATFORM_DRIVER	ehci_hcd_xilinx_of_driver
#define	PLATFORM_DRIVER		ehci_orion_driver
#define	PLATFORM_DRIVER		ixp4xx_ehci_driver
#define	PLATFORM_DRIVER		ehci_hcd_w90x900_driver
#define	PLATFORM_DRIVER		ehci_atmel_driver
#define PLATFORM_DRIVER		ehci_octeon_driver
#define PLATFORM_DRIVER		cns3xxx_ehci_driver
#define	PLATFORM_DRIVER		vt8500_ehci_driver
#define PLATFORM_DRIVER		spear_ehci_hcd_driver
#define PLATFORM_DRIVER		ehci_msm_driver
#define	PLATFORM_DRIVER		ehci_hcd_msp_driver
#define PLATFORM_DRIVER		tegra_ehci_driver
#define PLATFORM_DRIVER		s5p_ehci_driver
#define PLATFORM_DRIVER		ehci_ath79_driver
#define PLATFORM_DRIVER		ehci_grlib_driver
#if !defined(PCI_DRIVER) && !defined(PLATFORM_DRIVER) && \
!defined(PS3_SYSTEM_BUS_DRIVER) && !defined(OF_PLATFORM_DRIVER) && \
!defined(XILINX_OF_PLATFORM_DRIVER)
#error "missing bus glue for ehci-hcd"
static int __init ehci_hcd_init(void)
module_init(ehci_hcd_init);
static void __exit ehci_hcd_cleanup(void)
module_exit(ehci_hcd_cleanup);
