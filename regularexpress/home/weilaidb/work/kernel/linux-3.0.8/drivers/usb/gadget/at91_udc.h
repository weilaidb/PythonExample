#define AT91_UDC_H
#define AT91_UDP_FRM_NUM	0x00
#define     AT91_UDP_NUM	(0x7ff <<  0)
#define     AT91_UDP_FRM_ERR	(1     << 16)
#define     AT91_UDP_FRM_OK	(1     << 17)
#define AT91_UDP_GLB_STAT	0x04
#define     AT91_UDP_FADDEN	(1 <<  0)
#define     AT91_UDP_CONFG	(1 <<  1)
#define     AT91_UDP_ESR	(1 <<  2)
#define     AT91_UDP_RSMINPR	(1 <<  3)
#define     AT91_UDP_RMWUPE	(1 <<  4)
#define AT91_UDP_FADDR		0x08
#define     AT91_UDP_FADD	(0x7f << 0)
#define     AT91_UDP_FEN	(1    << 8)
#define AT91_UDP_IER		0x10
#define AT91_UDP_IDR		0x14
#define AT91_UDP_IMR		0x18
#define AT91_UDP_ISR		0x1c
#define     AT91_UDP_EP(n)	(1 << (n))
#define     AT91_UDP_RXSUSP	(1 <<  8)
#define     AT91_UDP_RXRSM	(1 <<  9)
#define     AT91_UDP_EXTRSM	(1 << 10)
#define     AT91_UDP_SOFINT	(1 << 11)
#define     AT91_UDP_ENDBUSRES	(1 << 12)
#define     AT91_UDP_WAKEUP	(1 << 13)
#define AT91_UDP_ICR		0x20
#define AT91_UDP_RST_EP		0x28
#define AT91_UDP_CSR(n)		(0x30+((n)*4))
#define     AT91_UDP_TXCOMP	(1 <<  0)
#define     AT91_UDP_RX_DATA_BK0 (1 <<  1)
#define     AT91_UDP_RXSETUP	(1 <<  2)
#define     AT91_UDP_STALLSENT	(1 <<  3)
#define     AT91_UDP_TXPKTRDY	(1 <<  4)
#define     AT91_UDP_FORCESTALL	(1 <<  5)
#define     AT91_UDP_RX_DATA_BK1 (1 <<  6)
#define     AT91_UDP_DIR	(1 <<  7)
#define     AT91_UDP_EPTYPE	(7 <<  8)
#define		AT91_UDP_EPTYPE_CTRL		(0 <<  8)
#define		AT91_UDP_EPTYPE_ISO_OUT		(1 <<  8)
#define		AT91_UDP_EPTYPE_BULK_OUT	(2 <<  8)
#define		AT91_UDP_EPTYPE_INT_OUT		(3 <<  8)
#define		AT91_UDP_EPTYPE_ISO_IN		(5 <<  8)
#define		AT91_UDP_EPTYPE_BULK_IN		(6 <<  8)
#define		AT91_UDP_EPTYPE_INT_IN		(7 <<  8)
#define     AT91_UDP_DTGLE	(1 << 11)
#define     AT91_UDP_EPEDS	(1 << 15)
#define     AT91_UDP_RXBYTECNT	(0x7ff << 16)
#define AT91_UDP_FDR(n)		(0x50+((n)*4))
#define AT91_UDP_TXVC		0x74
#define     AT91_UDP_TXVC_TXVDIS (1 << 8)
#define     AT91_UDP_TXVC_PUON   (1 << 9)
#define	NUM_ENDPOINTS	6
#define	MINIMUS_INTERRUPTUS \
(AT91_UDP_ENDBUSRES | AT91_UDP_RXRSM | AT91_UDP_RXSUSP)
struct at91_ep ;
struct at91_udc ;
static inline struct at91_udc *to_udc(struct usb_gadget *g)
struct at91_request ;
#    define VDBG		DBG
#    define VDBG(stuff...)	dowhile(0)
#    define PACKET		VDBG
#    define PACKET(stuff...)	dowhile(0)
#define ERR(stuff...)		pr_err("udc: " stuff)
#define WARNING(stuff...)	pr_warning("udc: " stuff)
#define INFO(stuff...)		pr_info("udc: " stuff)
#define DBG(stuff...)		pr_debug("udc: " stuff)
