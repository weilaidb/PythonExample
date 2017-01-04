#define __LINUX_EHCI_HCD_H
typedef __u32 __bitwise __hc32;
typedef __u16 __bitwise __hc16;
#define __hc32	__le32
#define __hc16	__le16
struct ehci_stats ;
#define	EHCI_MAX_ROOT_PORTS	15
struct ehci_hcd ;
static inline struct ehci_hcd *hcd_to_ehci (struct usb_hcd *hcd)
static inline struct usb_hcd *ehci_to_hcd (struct ehci_hcd *ehci)
static inline void
iaa_watchdog_start(struct ehci_hcd *ehci)
static inline void iaa_watchdog_done(struct ehci_hcd *ehci)
enum ehci_timer_action ;
static inline void
timer_action_done (struct ehci_hcd *ehci, enum ehci_timer_action action)
static void free_cached_lists(struct ehci_hcd *ehci);
#define	QTD_NEXT(ehci, dma)	cpu_to_hc32(ehci, (u32)dma)
struct ehci_qtd  __attribute__ ((aligned (32)));
#define QTD_MASK(ehci)	cpu_to_hc32 (ehci, ~0x1f)
#define IS_SHORT_READ(token) (QTD_LENGTH (token) != 0 && QTD_PID (token) == 1)
#define Q_NEXT_TYPE(ehci,dma)	((dma) & cpu_to_hc32(ehci, 3 << 1))
#define Q_TYPE_ITD	(0 << 1)
#define Q_TYPE_QH	(1 << 1)
#define Q_TYPE_SITD	(2 << 1)
#define Q_TYPE_FSTN	(3 << 1)
#define QH_NEXT(ehci,dma)	(cpu_to_hc32(ehci, (((u32)dma)&~0x01f)|Q_TYPE_QH))
#define EHCI_LIST_END(ehci)	cpu_to_hc32(ehci, 1)
union ehci_shadow ;
struct ehci_qh_hw  __attribute__ ((aligned(32)));
struct ehci_qh ;
struct ehci_iso_packet ;
struct ehci_iso_sched ;
struct ehci_iso_stream ;
struct ehci_itd  __attribute__ ((aligned (32)));
struct ehci_sitd  __attribute__ ((aligned (32)));
struct ehci_fstn  __attribute__ ((aligned (32)));
#define ehci_prepare_ports_for_controller_suspend(ehci, do_wakeup)	\
ehci_adjust_port_wakeup_flags(ehci, true, do_wakeup);
#define ehci_prepare_ports_for_controller_resume(ehci)			\
ehci_adjust_port_wakeup_flags(ehci, false, false);
#define	ehci_is_TDI(e)			(ehci_to_hcd(e)->has_tt)
static inline unsigned int
ehci_port_speed(struct ehci_hcd *ehci, unsigned int portsc)
#define	ehci_is_TDI(e)			(0)
#define	ehci_port_speed(ehci, portsc)	USB_PORT_STAT_HIGH_SPEED
#define	ehci_has_fsl_portno_bug(e)		((e)->has_fsl_port_bug)
#define	ehci_has_fsl_portno_bug(e)		(0)
#define ehci_big_endian_mmio(e)		((e)->big_endian_mmio)
#define ehci_big_endian_capbase(e)	((e)->big_endian_capbase)
#define ehci_big_endian_mmio(e)		0
#define ehci_big_endian_capbase(e)	0
#if defined(CONFIG_ARM) && defined(CONFIG_ARCH_IXP4XX)
#define readl_be(addr)		__raw_readl((__force unsigned *)addr)
#define writel_be(val, addr)	__raw_writel(val, (__force unsigned *)addr)
static inline unsigned int ehci_readl(const struct ehci_hcd *ehci,
__u32 __iomem * regs)
static inline void ehci_writel(const struct ehci_hcd *ehci,
const unsigned int val, __u32 __iomem *regs)
static inline void set_ohci_hcfs(struct ehci_hcd *ehci, int operational)
static inline void set_ohci_hcfs(struct ehci_hcd *ehci, int operational)
#define ehci_big_endian_desc(e)		((e)->big_endian_desc)
static inline __hc32 cpu_to_hc32 (const struct ehci_hcd *ehci, const u32 x)
static inline u32 hc32_to_cpu (const struct ehci_hcd *ehci, const __hc32 x)
static inline u32 hc32_to_cpup (const struct ehci_hcd *ehci, const __hc32 *x)
static inline __hc32 cpu_to_hc32 (const struct ehci_hcd *ehci, const u32 x)
static inline u32 hc32_to_cpu (const struct ehci_hcd *ehci, const __hc32 x)
static inline u32 hc32_to_cpup (const struct ehci_hcd *ehci, const __hc32 *x)
#define STUB_DEBUG_FILES
