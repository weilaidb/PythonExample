#define __MUSB_CORE_H__
struct musb;
struct musb_hw_ep;
struct musb_ep;
#define MUSB_HWVERS_MAJOR(x)	((x >> 10) & 0x1f)
#define MUSB_HWVERS_MINOR(x)	(x & 0x3ff)
#define MUSB_HWVERS_RC		0x8000
#define MUSB_HWVERS_1300	0x52C
#define MUSB_HWVERS_1400	0x590
#define MUSB_HWVERS_1800	0x720
#define MUSB_HWVERS_1900	0x784
#define MUSB_HWVERS_2000	0x800
#define	is_peripheral_enabled(musb)	((musb)->board_mode != MUSB_HOST)
#define	is_host_enabled(musb)		((musb)->board_mode != MUSB_PERIPHERAL)
#define	is_otg_enabled(musb)		((musb)->board_mode == MUSB_OTG)
#define is_peripheral_active(m)		(!(m)->is_host)
#define is_host_active(m)		((m)->is_host)
#define	is_peripheral_enabled(musb)	is_peripheral_capable()
#define	is_host_enabled(musb)		is_host_capable()
#define	is_otg_enabled(musb)		0
#define	is_peripheral_active(musb)	is_peripheral_capable()
#define	is_host_active(musb)		is_host_capable()
#if defined(CONFIG_USB_MUSB_OTG) || defined(CONFIG_USB_MUSB_PERIPHERAL)
#error bogus Kconfig output ... select CONFIG_USB_GADGET_MUSB_HDRC
#define clk_get(dev, id)	NULL
#define clk_put(clock)		do  while (0)
#define clk_enable(clock)	do  while (0)
#define clk_disable(clock)	do  while (0)
#define MUSB_CONFIG_PROC_FS
#define	is_peripheral_capable()	(1)
extern irqreturn_t musb_g_ep0_irq(struct musb *);
extern void musb_g_tx(struct musb *, u8);
extern void musb_g_rx(struct musb *, u8);
extern void musb_g_reset(struct musb *);
extern void musb_g_suspend(struct musb *);
extern void musb_g_resume(struct musb *);
extern void musb_g_wakeup(struct musb *);
extern void musb_g_disconnect(struct musb *);
#define	is_peripheral_capable()	(0)
static inline irqreturn_t musb_g_ep0_irq(struct musb *m)
static inline void musb_g_reset(struct musb *m)
static inline void musb_g_suspend(struct musb *m)
static inline void musb_g_resume(struct musb *m)
static inline void musb_g_wakeup(struct musb *m)
static inline void musb_g_disconnect(struct musb *m)
#define	is_host_capable()	(1)
extern irqreturn_t musb_h_ep0_irq(struct musb *);
extern void musb_host_tx(struct musb *, u8);
extern void musb_host_rx(struct musb *, u8);
#define	is_host_capable()	(0)
static inline irqreturn_t musb_h_ep0_irq(struct musb *m)
static inline void musb_host_tx(struct musb *m, u8 e)
static inline void musb_host_rx(struct musb *m, u8 e)
#define MUSB_C_NUM_EPS ((u8)16)
#define MUSB_MAX_END0_PACKET ((u16)MUSB_EP0_FIFOSIZE)
enum musb_h_ep0_state  __attribute__ ((packed));
enum musb_g_ep0_state  __attribute__ ((packed));
#define OTG_TIME_A_WAIT_VRISE	100
#define OTG_TIME_A_WAIT_BCON	1100
#define OTG_TIME_A_AIDL_BDIS	200
#define OTG_TIME_B_ASE0_BRST	100
#if defined(CONFIG_ARCH_DAVINCI) || defined(CONFIG_SOC_OMAP2430) \
|| defined(CONFIG_SOC_OMAP3430) || defined(CONFIG_BLACKFIN) \
|| defined(CONFIG_ARCH_OMAP4)
#define	MUSB_FLAT_REG
#if	defined(CONFIG_USB_MUSB_TUSB6010)
#define musb_ep_select(_mbase, _epnum) \
musb_writeb((_mbase), MUSB_INDEX, (_epnum))
#define	MUSB_EP_OFFSET			MUSB_TUSB_OFFSET
#elif	defined(MUSB_FLAT_REG)
#define musb_ep_select(_mbase, _epnum)	(((void)(_mbase)), ((void)(_epnum)))
#define	MUSB_EP_OFFSET			MUSB_FLAT_OFFSET
#define musb_ep_select(_mbase, _epnum) \
musb_writeb((_mbase), MUSB_INDEX, (_epnum))
#define	MUSB_EP_OFFSET			MUSB_INDEXED_OFFSET
#define MUSB_HST_MODE(_musb)\
#define MUSB_DEV_MODE(_musb) \
#define test_devctl_hst_mode(_x) \
(musb_readb((_x)->mregs, MUSB_DEVCTL)&MUSB_DEVCTL_HM)
#define MUSB_MODE(musb) ((musb)->is_host ? "Host" : "Peripheral")
struct musb_platform_ops ;
struct musb_hw_ep ;
static inline struct musb_request *next_in_request(struct musb_hw_ep *hw_ep)
static inline struct musb_request *next_out_request(struct musb_hw_ep *hw_ep)
struct musb_csr_regs ;
struct musb_context_registers ;
struct musb ;
static inline struct musb *gadget_to_musb(struct usb_gadget *g)
static inline int musb_read_fifosize(struct musb *musb,
struct musb_hw_ep *hw_ep, u8 epnum)
static inline void musb_configure_ep0(struct musb *musb)
static inline int musb_read_fifosize(struct musb *musb,
struct musb_hw_ep *hw_ep, u8 epnum)
static inline void musb_configure_ep0(struct musb *musb)
extern const char musb_driver_name[];
extern void musb_start(struct musb *musb);
extern void musb_stop(struct musb *musb);
extern void musb_write_fifo(struct musb_hw_ep *ep, u16 len, const u8 *src);
extern void musb_read_fifo(struct musb_hw_ep *ep, u16 len, u8 *dst);
extern void musb_load_testpacket(struct musb *);
extern irqreturn_t musb_interrupt(struct musb *);
extern void musb_hnp_stop(struct musb *musb);
static inline void musb_platform_set_vbus(struct musb *musb, int is_on)
static inline void musb_platform_enable(struct musb *musb)
static inline void musb_platform_disable(struct musb *musb)
static inline int musb_platform_set_mode(struct musb *musb, u8 mode)
static inline void musb_platform_try_idle(struct musb *musb,
unsigned long timeout)
static inline int musb_platform_get_vbus_status(struct musb *musb)
static inline int musb_platform_init(struct musb *musb)
static inline int musb_platform_exit(struct musb *musb)
