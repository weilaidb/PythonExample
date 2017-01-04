#define __LINUX_USB_GADGET_PXA25X_H
#define UFNRH_SIR	(1 << 7)
#define UFNRH_SIM	(1 << 6)
#define UFNRH_IPE14	(1 << 5)
#define UFNRH_IPE9	(1 << 4)
#define UFNRH_IPE4	(1 << 3)
#define	UDCCFR		UDC_RES2
#define UDCCFR_AREN	(1 << 7)
#define UDCCFR_ACM	(1 << 2)
#define	UDCCFR_MB1	(0xff & ~(UDCCFR_AREN|UDCCFR_ACM))
struct pxa25x_udc;
struct pxa25x_ep ;
struct pxa25x_request ;
enum ep0_state ;
#define EP0_FIFO_SIZE	((unsigned)16)
#define BULK_FIFO_SIZE	((unsigned)64)
#define ISO_FIFO_SIZE	((unsigned)256)
#define INT_FIFO_SIZE	((unsigned)8)
struct udc_stats ;
#define	PXA_UDC_NUM_ENDPOINTS	3
#define	PXA_UDC_NUM_ENDPOINTS	16
struct pxa25x_udc ;
static struct pxa25x_udc *the_controller;
#define DBG_NORMAL	1
#define DBG_VERBOSE	2
#define DBG_NOISY	3
#define DBG_VERY_NOISY	4
#define DMSG(stuff...)	pr_debug("udc: " stuff)
static int is_vbus_present(void);
static const char *state_name[] = ;
#    define UDC_DEBUG DBG_VERBOSE
#    define UDC_DEBUG DBG_NORMAL
static void __maybe_unused
dump_udccr(const char *label)
static void __maybe_unused
dump_udccs0(const char *label)
static void __maybe_unused
dump_state(struct pxa25x_udc *dev)
#define	dump_udccr(x)	dowhile(0)
#define	dump_udccs0(x)	dowhile(0)
#define	dump_state(x)	dowhile(0)
#define UDC_DEBUG ((unsigned)0)
#define DBG(lvl, stuff...) dowhile(0)
#define ERR(stuff...)		pr_err("udc: " stuff)
#define WARNING(stuff...)	pr_warning("udc: " stuff)
#define INFO(stuff...)		pr_info("udc: " stuff)
