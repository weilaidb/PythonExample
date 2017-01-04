static struct kmem_cache *qtd_cachep;
static struct kmem_cache *qh_cachep;
static struct kmem_cache *urb_listitem_cachep;
struct isp1760_hcd ;
static inline struct isp1760_hcd *hcd_to_priv(struct usb_hcd *hcd)
#define HC_LENGTH(p)		(((p)>>00)&0x00ff)
#define HC_VERSION(p)		(((p)>>16)&0xffff)
#define HCS_INDICATOR(p)	((p)&(1 << 16))
#define HCS_PPC(p)		((p)&(1 << 4))
#define HCS_N_PORTS(p)		(((p)>>0)&0xf)
#define HCC_ISOC_CACHE(p)       ((p)&(1 << 7))
#define HCC_ISOC_THRES(p)       (((p)>>4)&0x7)
#define CMD_LRESET	(1<<7)
#define CMD_RESET	(1<<1)
#define CMD_RUN		(1<<0)
#define STS_PCD		(1<<2)
#define FLAG_CF		(1<<0)
#define PORT_OWNER	(1<<13)
#define PORT_POWER	(1<<12)
#define PORT_USB11(x) (((x) & (3 << 10)) == (1 << 10))
#define PORT_RESET	(1<<8)
#define PORT_SUSPEND	(1<<7)
#define PORT_RESUME	(1<<6)
#define PORT_PE		(1<<2)
#define PORT_CSC	(1<<1)
#define PORT_CONNECT	(1<<0)
#define PORT_RWC_BITS   (PORT_CSC)
struct isp1760_qtd ;
struct isp1760_qh ;
struct urb_listitem ;
static u32 reg_read32(void __iomem *base, u32 reg)
static void reg_write32(void __iomem *base, u32 reg, u32 val)
static void bank_reads8(void __iomem *src_base, u32 src_offset, u32 bank_addr,
__u32 *dst, u32 bytes)
static void mem_reads8(void __iomem *src_base, u32 src_offset, void *dst,
u32 bytes)
static void mem_writes8(void __iomem *dst_base, u32 dst_offset,
__u32 const *src, u32 bytes)
static void ptd_read(void __iomem *base, u32 ptd_offset, u32 slot,
struct ptd *ptd)
static void ptd_write(void __iomem *base, u32 ptd_offset, u32 slot,
struct ptd *ptd)
static void init_memory(struct isp1760_hcd *priv)
static void alloc_mem(struct usb_hcd *hcd, struct isp1760_qtd *qtd)
static void free_mem(struct usb_hcd *hcd, struct isp1760_qtd *qtd)
static int handshake(struct usb_hcd *hcd, u32 reg,
u32 mask, u32 done, int usec)
static int ehci_reset(struct usb_hcd *hcd)
static struct isp1760_qh *qh_alloc(gfp_t flags)
static void qh_free(struct isp1760_qh *qh)
static int priv_init(struct usb_hcd *hcd)
static int isp1760_hc_setup(struct usb_hcd *hcd)
static void isp1760_init_maps(struct usb_hcd *hcd)
static void isp1760_enable_interrupts(struct usb_hcd *hcd)
static int isp1760_run(struct usb_hcd *hcd)
static u32 base_to_chip(u32 base)
static int last_qtd_of_urb(struct isp1760_qtd *qtd, struct isp1760_qh *qh)
#define	EHCI_TUNE_CERR		3
#define	EHCI_TUNE_RL_HS		4
#define	EHCI_TUNE_RL_TT		0
#define	EHCI_TUNE_MULT_HS	1
#define	EHCI_TUNE_MULT_TT	1
#define	EHCI_TUNE_FLS		2
static void create_ptd_atl(struct isp1760_qh *qh,
struct isp1760_qtd *qtd, struct ptd *ptd)
static void transform_add_int(struct isp1760_qh *qh,
struct isp1760_qtd *qtd, struct ptd *ptd)
static void create_ptd_int(struct isp1760_qh *qh,
struct isp1760_qtd *qtd, struct ptd *ptd)
static void isp1760_urb_done(struct usb_hcd *hcd, struct urb *urb)
__releases(priv->lock)
__acquires(priv->lock)
static struct isp1760_qtd *qtd_alloc(gfp_t flags, struct urb *urb,
u8 packet_type)
static void qtd_free(struct isp1760_qtd *qtd)
static void start_bus_transfer(struct usb_hcd *hcd, u32 ptd_offset, int slot,
struct slotinfo *slots, struct isp1760_qtd *qtd,
struct isp1760_qh *qh, struct ptd *ptd)
static int is_short_bulk(struct isp1760_qtd *qtd)
static void collect_qtds(struct usb_hcd *hcd, struct isp1760_qh *qh,
struct list_head *urb_list)
#define ENQUEUE_DEPTH	2
static void enqueue_qtds(struct usb_hcd *hcd, struct isp1760_qh *qh)
void schedule_ptds(struct usb_hcd *hcd)
#define PTD_STATE_QTD_DONE	1
#define PTD_STATE_QTD_RELOAD	2
#define PTD_STATE_URB_RETIRE	3
static int check_int_transfer(struct usb_hcd *hcd, struct ptd *ptd,
struct urb *urb)
static int check_atl_transfer(struct usb_hcd *hcd, struct ptd *ptd,
struct urb *urb)
static irqreturn_t isp1760_irq(struct usb_hcd *hcd)
static int qtd_fill(struct isp1760_qtd *qtd, void *databuffer, size_t len)
static void qtd_list_free(struct list_head *qtd_list)
#define max_packet(wMaxPacketSize) ((wMaxPacketSize) & 0x07ff)
static void packetize_urb(struct usb_hcd *hcd,
struct urb *urb, struct list_head *head, gfp_t flags)
static int isp1760_urb_enqueue(struct usb_hcd *hcd, struct urb *urb,
gfp_t mem_flags)
static void kill_transfer(struct usb_hcd *hcd, struct urb *urb,
struct isp1760_qh *qh)
static int isp1760_urb_dequeue(struct usb_hcd *hcd, struct urb *urb,
int status)
static void isp1760_endpoint_disable(struct usb_hcd *hcd,
struct usb_host_endpoint *ep)
static int isp1760_hub_status_data(struct usb_hcd *hcd, char *buf)
static void isp1760_hub_descriptor(struct isp1760_hcd *priv,
struct usb_hub_descriptor *desc)
#define	PORT_WAKE_BITS	(PORT_WKOC_E|PORT_WKDISC_E|PORT_WKCONN_E)
static int check_reset_complete(struct usb_hcd *hcd, int index,
int port_status)
static int isp1760_hub_control(struct usb_hcd *hcd, u16 typeReq,
u16 wValue, u16 wIndex, char *buf, u16 wLength)
static int isp1760_get_frame(struct usb_hcd *hcd)
static void isp1760_stop(struct usb_hcd *hcd)
static void isp1760_shutdown(struct usb_hcd *hcd)
static const struct hc_driver isp1760_hc_driver = ;
int __init init_kmem_once(void)
void deinit_kmem_cache(void)
struct usb_hcd *isp1760_register(phys_addr_t res_start, resource_size_t res_len,
int irq, unsigned long irqflags,
struct device *dev, const char *busname,
unsigned int devflags)
MODULE_DESCRIPTION("Driver for the ISP1760 USB-controller from NXP");
MODULE_AUTHOR("Sebastian Siewior <bigeasy@linuxtronix.de>");
MODULE_LICENSE("GPL v2");
