#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define UDC_EP_REG_SHIFT	0x20
#define UDC_EPCTL_ADDR		0x00
#define UDC_EPSTS_ADDR		0x04
#define UDC_BUFIN_FRAMENUM_ADDR	0x08
#define UDC_BUFOUT_MAXPKT_ADDR	0x0C
#define UDC_SUBPTR_ADDR		0x10
#define UDC_DESPTR_ADDR		0x14
#define UDC_CONFIRM_ADDR	0x18
#define UDC_DEVCFG_ADDR		0x400
#define UDC_DEVCTL_ADDR		0x404
#define UDC_DEVSTS_ADDR		0x408
#define UDC_DEVIRQSTS_ADDR	0x40C
#define UDC_DEVIRQMSK_ADDR	0x410
#define UDC_EPIRQSTS_ADDR	0x414
#define UDC_EPIRQMSK_ADDR	0x418
#define UDC_DEVLPM_ADDR		0x41C
#define UDC_CSR_BUSY_ADDR	0x4f0
#define UDC_SRST_ADDR		0x4fc
#define UDC_CSR_ADDR		0x500
#define UDC_EPCTL_MRXFLUSH		(1 << 12)
#define UDC_EPCTL_RRDY			(1 << 9)
#define UDC_EPCTL_CNAK			(1 << 8)
#define UDC_EPCTL_SNAK			(1 << 7)
#define UDC_EPCTL_NAK			(1 << 6)
#define UDC_EPCTL_P			(1 << 3)
#define UDC_EPCTL_F			(1 << 1)
#define UDC_EPCTL_S			(1 << 0)
#define UDC_EPCTL_ET_SHIFT		4
#define UDC_EPCTL_ET_MASK		0x00000030
#define UDC_EPCTL_ET_CONTROL		0
#define UDC_EPCTL_ET_ISO		1
#define UDC_EPCTL_ET_BULK		2
#define UDC_EPCTL_ET_INTERRUPT		3
#define UDC_EPSTS_XFERDONE		(1 << 27)
#define UDC_EPSTS_RSS			(1 << 26)
#define UDC_EPSTS_RCS			(1 << 25)
#define UDC_EPSTS_TXEMPTY		(1 << 24)
#define UDC_EPSTS_TDC			(1 << 10)
#define UDC_EPSTS_HE			(1 << 9)
#define UDC_EPSTS_MRXFIFO_EMP		(1 << 8)
#define UDC_EPSTS_BNA			(1 << 7)
#define UDC_EPSTS_IN			(1 << 6)
#define UDC_EPSTS_OUT_SHIFT		4
#define UDC_EPSTS_OUT_MASK		0x00000030
#define UDC_EPSTS_ALL_CLR_MASK		0x1F0006F0
#define UDC_EPSTS_OUT_SETUP		2
#define UDC_EPSTS_OUT_DATA		1
#define UDC_DEVCFG_CSR_PRG		(1 << 17)
#define UDC_DEVCFG_SP			(1 << 3)
#define UDC_DEVCFG_SPD_HS		0x0
#define UDC_DEVCFG_SPD_FS		0x1
#define UDC_DEVCFG_SPD_LS		0x2
#define UDC_DEVCTL_THLEN_SHIFT		24
#define UDC_DEVCTL_BRLEN_SHIFT		16
#define UDC_DEVCTL_CSR_DONE		(1 << 13)
#define UDC_DEVCTL_SD			(1 << 10)
#define UDC_DEVCTL_MODE			(1 << 9)
#define UDC_DEVCTL_BREN			(1 << 8)
#define UDC_DEVCTL_THE			(1 << 7)
#define UDC_DEVCTL_DU			(1 << 4)
#define UDC_DEVCTL_TDE			(1 << 3)
#define UDC_DEVCTL_RDE			(1 << 2)
#define UDC_DEVCTL_RES			(1 << 0)
#define UDC_DEVSTS_TS_SHIFT		18
#define UDC_DEVSTS_ENUM_SPEED_SHIFT	13
#define UDC_DEVSTS_ALT_SHIFT		8
#define UDC_DEVSTS_INTF_SHIFT		4
#define UDC_DEVSTS_CFG_SHIFT		0
#define UDC_DEVSTS_TS_MASK		0xfffc0000
#define UDC_DEVSTS_ENUM_SPEED_MASK	0x00006000
#define UDC_DEVSTS_ALT_MASK		0x00000f00
#define UDC_DEVSTS_INTF_MASK		0x000000f0
#define UDC_DEVSTS_CFG_MASK		0x0000000f
#define UDC_DEVSTS_ENUM_SPEED_FULL	1
#define UDC_DEVSTS_ENUM_SPEED_HIGH	0
#define UDC_DEVSTS_ENUM_SPEED_LOW	2
#define UDC_DEVSTS_ENUM_SPEED_FULLX	3
#define UDC_DEVINT_RWKP			(1 << 7)
#define UDC_DEVINT_ENUM			(1 << 6)
#define UDC_DEVINT_SOF			(1 << 5)
#define UDC_DEVINT_US			(1 << 4)
#define UDC_DEVINT_UR			(1 << 3)
#define UDC_DEVINT_ES			(1 << 2)
#define UDC_DEVINT_SI			(1 << 1)
#define UDC_DEVINT_SC			(1 << 0)
#define UDC_DEVINT_MSK			0x7f
#define UDC_EPINT_IN_SHIFT		0
#define UDC_EPINT_OUT_SHIFT		16
#define UDC_EPINT_IN_EP0		(1 << 0)
#define UDC_EPINT_OUT_EP0		(1 << 16)
#define UDC_EPINT_MSK_DISABLE_ALL	0xffffffff
#define UDC_CSR_BUSY			(1 << 0)
#define UDC_PSRST			(1 << 1)
#define UDC_SRST			(1 << 0)
#define UDC_CSR_NE_NUM_SHIFT		0
#define UDC_CSR_NE_DIR_SHIFT		4
#define UDC_CSR_NE_TYPE_SHIFT		5
#define UDC_CSR_NE_CFG_SHIFT		7
#define UDC_CSR_NE_INTF_SHIFT		11
#define UDC_CSR_NE_ALT_SHIFT		15
#define UDC_CSR_NE_MAX_PKT_SHIFT	19
#define UDC_CSR_NE_NUM_MASK		0x0000000f
#define UDC_CSR_NE_DIR_MASK		0x00000010
#define UDC_CSR_NE_TYPE_MASK		0x00000060
#define UDC_CSR_NE_CFG_MASK		0x00000780
#define UDC_CSR_NE_INTF_MASK		0x00007800
#define UDC_CSR_NE_ALT_MASK		0x00078000
#define UDC_CSR_NE_MAX_PKT_MASK		0x3ff80000
#define PCH_UDC_CSR(ep)	(UDC_CSR_ADDR + ep*4)
#define PCH_UDC_EPINT(in, num)\
(1 << (num + (in ? UDC_EPINT_IN_SHIFT : UDC_EPINT_OUT_SHIFT)))
#define UDC_EP0IN_IDX		0
#define UDC_EP0OUT_IDX		1
#define UDC_EPIN_IDX(ep)	(ep * 2)
#define UDC_EPOUT_IDX(ep)	(ep * 2 + 1)
#define PCH_UDC_EP0		0
#define PCH_UDC_EP1		1
#define PCH_UDC_EP2		2
#define PCH_UDC_EP3		3
#define PCH_UDC_EP_NUM		32
#define PCH_UDC_USED_EP_NUM	4
#define PCH_UDC_BRLEN		0x0F
#define PCH_UDC_THLEN		0x1F
#define UDC_EP0IN_BUFF_SIZE	16
#define UDC_EPIN_BUFF_SIZE	256
#define UDC_EP0OUT_BUFF_SIZE	16
#define UDC_EPOUT_BUFF_SIZE	256
#define UDC_EP0IN_MAX_PKT_SIZE	64
#define UDC_EP0OUT_MAX_PKT_SIZE	64
#define UDC_BULK_MAX_PKT_SIZE	512
#define DMA_DIR_RX		1
#define DMA_DIR_TX		2
#define DMA_ADDR_INVALID	(~(dma_addr_t)0)
#define UDC_DMA_MAXPACKET	65536
struct pch_udc_data_dma_desc ;
struct pch_udc_stp_dma_desc  __attribute((packed));
#define PCH_UDC_BUFF_STS	0xC0000000
#define PCH_UDC_BS_HST_RDY	0x00000000
#define PCH_UDC_BS_DMA_BSY	0x40000000
#define PCH_UDC_BS_DMA_DONE	0x80000000
#define PCH_UDC_BS_HST_BSY	0xC0000000
#define PCH_UDC_RXTX_STS	0x30000000
#define PCH_UDC_RTS_SUCC	0x00000000
#define PCH_UDC_RTS_DESERR	0x10000000
#define PCH_UDC_RTS_BUFERR	0x30000000
#define PCH_UDC_DMA_LAST	0x08000000
#define PCH_UDC_RXTX_BYTES	0x0000ffff
struct pch_udc_cfg_data ;
struct pch_udc_ep ;
struct pch_udc_dev ;
#define PCH_UDC_PCI_BAR			1
#define PCI_DEVICE_ID_INTEL_EG20T_UDC	0x8808
#define PCI_VENDOR_ID_ROHM		0x10DB
#define PCI_DEVICE_ID_ML7213_IOH_UDC	0x801D
static const char	ep0_string[] = "ep0in";
static DEFINE_SPINLOCK(udc_stall_spinlock);
struct pch_udc_dev *pch_udc;
static int speed_fs;
module_param_named(speed_fs, speed_fs, bool, S_IRUGO);
MODULE_PARM_DESC(speed_fs, "true for Full speed operation");
struct pch_udc_request ;
static inline u32 pch_udc_readl(struct pch_udc_dev *dev, unsigned long reg)
static inline void pch_udc_writel(struct pch_udc_dev *dev,
unsigned long val, unsigned long reg)
static inline void pch_udc_bit_set(struct pch_udc_dev *dev,
unsigned long reg,
unsigned long bitmask)
static inline void pch_udc_bit_clr(struct pch_udc_dev *dev,
unsigned long reg,
unsigned long bitmask)
static inline u32 pch_udc_ep_readl(struct pch_udc_ep *ep, unsigned long reg)
static inline void pch_udc_ep_writel(struct pch_udc_ep *ep,
unsigned long val, unsigned long reg)
static inline void pch_udc_ep_bit_set(struct pch_udc_ep *ep,
unsigned long reg,
unsigned long bitmask)
static inline void pch_udc_ep_bit_clr(struct pch_udc_ep *ep,
unsigned long reg,
unsigned long bitmask)
static void pch_udc_csr_busy(struct pch_udc_dev *dev)
static void pch_udc_write_csr(struct pch_udc_dev *dev, unsigned long val,
unsigned int ep)
static u32 pch_udc_read_csr(struct pch_udc_dev *dev, unsigned int ep)
static inline void pch_udc_rmt_wakeup(struct pch_udc_dev *dev)
static inline int pch_udc_get_frame(struct pch_udc_dev *dev)
static inline void pch_udc_clear_selfpowered(struct pch_udc_dev *dev)
static inline void pch_udc_set_selfpowered(struct pch_udc_dev *dev)
static inline void pch_udc_set_disconnect(struct pch_udc_dev *dev)
static void pch_udc_clear_disconnect(struct pch_udc_dev *dev)
static inline void pch_udc_vbus_session(struct pch_udc_dev *dev,
int is_active)
static void pch_udc_ep_set_stall(struct pch_udc_ep *ep)
static inline void pch_udc_ep_clear_stall(struct pch_udc_ep *ep)
static inline void pch_udc_ep_set_trfr_type(struct pch_udc_ep *ep,
u8 type)
static void pch_udc_ep_set_bufsz(struct pch_udc_ep *ep,
u32 buf_size, u32 ep_in)
static void pch_udc_ep_set_maxpkt(struct pch_udc_ep *ep, u32 pkt_size)
static inline void pch_udc_ep_set_subptr(struct pch_udc_ep *ep, u32 addr)
static inline void pch_udc_ep_set_ddptr(struct pch_udc_ep *ep, u32 addr)
static inline void pch_udc_ep_set_pd(struct pch_udc_ep *ep)
static inline void pch_udc_ep_set_rrdy(struct pch_udc_ep *ep)
static inline void pch_udc_ep_clear_rrdy(struct pch_udc_ep *ep)
static inline void pch_udc_set_dma(struct pch_udc_dev *dev, int dir)
static inline void pch_udc_clear_dma(struct pch_udc_dev *dev, int dir)
static inline void pch_udc_set_csr_done(struct pch_udc_dev *dev)
static inline void pch_udc_disable_interrupts(struct pch_udc_dev *dev,
u32 mask)
static inline void pch_udc_enable_interrupts(struct pch_udc_dev *dev,
u32 mask)
static inline void pch_udc_disable_ep_interrupts(struct pch_udc_dev *dev,
u32 mask)
static inline void pch_udc_enable_ep_interrupts(struct pch_udc_dev *dev,
u32 mask)
static inline u32 pch_udc_read_device_interrupts(struct pch_udc_dev *dev)
static inline void pch_udc_write_device_interrupts(struct pch_udc_dev *dev,
u32 val)
static inline u32 pch_udc_read_ep_interrupts(struct pch_udc_dev *dev)
static inline void pch_udc_write_ep_interrupts(struct pch_udc_dev *dev,
u32 val)
static inline u32 pch_udc_read_device_status(struct pch_udc_dev *dev)
static inline u32 pch_udc_read_ep_control(struct pch_udc_ep *ep)
static inline void pch_udc_clear_ep_control(struct pch_udc_ep *ep)
static inline u32 pch_udc_read_ep_status(struct pch_udc_ep *ep)
static inline void pch_udc_clear_ep_status(struct pch_udc_ep *ep,
u32 stat)
static inline void pch_udc_ep_set_nak(struct pch_udc_ep *ep)
static void pch_udc_ep_clear_nak(struct pch_udc_ep *ep)
static void pch_udc_ep_fifo_flush(struct pch_udc_ep *ep, int dir)
static void pch_udc_ep_enable(struct pch_udc_ep *ep,
struct pch_udc_cfg_data *cfg,
const struct usb_endpoint_descriptor *desc)
static void pch_udc_ep_disable(struct pch_udc_ep *ep)
static void pch_udc_wait_ep_stall(struct pch_udc_ep *ep)
static void pch_udc_init(struct pch_udc_dev *dev)
static void pch_udc_exit(struct pch_udc_dev *dev)
static int pch_udc_pcd_get_frame(struct usb_gadget *gadget)
static int pch_udc_pcd_wakeup(struct usb_gadget *gadget)
static int pch_udc_pcd_selfpowered(struct usb_gadget *gadget, int value)
static int pch_udc_pcd_pullup(struct usb_gadget *gadget, int is_on)
static int pch_udc_pcd_vbus_session(struct usb_gadget *gadget, int is_active)
static int pch_udc_pcd_vbus_draw(struct usb_gadget *gadget, unsigned int mA)
static const struct usb_gadget_ops pch_udc_ops = ;
static void complete_req(struct pch_udc_ep *ep, struct pch_udc_request *req,
int status)
static void empty_req_queue(struct pch_udc_ep *ep)
static void pch_udc_free_dma_chain(struct pch_udc_dev *dev,
struct pch_udc_request *req)
static int pch_udc_create_dma_chain(struct pch_udc_ep *ep,
struct pch_udc_request *req,
unsigned long buf_len,
gfp_t gfp_flags)
static int prepare_dma(struct pch_udc_ep *ep, struct pch_udc_request *req,
gfp_t gfp)
static void process_zlp(struct pch_udc_ep *ep, struct pch_udc_request *req)
static void pch_udc_start_rxrequest(struct pch_udc_ep *ep,
struct pch_udc_request *req)
static int pch_udc_pcd_ep_enable(struct usb_ep *usbep,
const struct usb_endpoint_descriptor *desc)
static int pch_udc_pcd_ep_disable(struct usb_ep *usbep)
static struct usb_request *pch_udc_alloc_request(struct usb_ep *usbep,
gfp_t gfp)
static void pch_udc_free_request(struct usb_ep *usbep,
struct usb_request *usbreq)
static int pch_udc_pcd_queue(struct usb_ep *usbep, struct usb_request *usbreq,
gfp_t gfp)
static int pch_udc_pcd_dequeue(struct usb_ep *usbep,
struct usb_request *usbreq)
static int pch_udc_pcd_set_halt(struct usb_ep *usbep, int halt)
static int pch_udc_pcd_set_wedge(struct usb_ep *usbep)
static void pch_udc_pcd_fifo_flush(struct usb_ep *usbep)
static const struct usb_ep_ops pch_udc_ep_ops = ;
static void pch_udc_init_setup_buff(struct pch_udc_stp_dma_desc *td_stp)
static void pch_udc_start_next_txrequest(struct pch_udc_ep *ep)
static void pch_udc_complete_transfer(struct pch_udc_ep *ep)
static void pch_udc_complete_receiver(struct pch_udc_ep *ep)
static void pch_udc_svc_data_in(struct pch_udc_dev *dev, int ep_num)
static void pch_udc_svc_data_out(struct pch_udc_dev *dev, int ep_num)
static void pch_udc_svc_control_in(struct pch_udc_dev *dev)
static void pch_udc_svc_control_out(struct pch_udc_dev *dev)
static void pch_udc_postsvc_epinters(struct pch_udc_dev *dev, int ep_num)
static void pch_udc_read_all_epstatus(struct pch_udc_dev *dev, u32 ep_intr)
static void pch_udc_activate_control_ep(struct pch_udc_dev *dev)
static void pch_udc_svc_ur_interrupt(struct pch_udc_dev *dev)
static void pch_udc_svc_enum_interrupt(struct pch_udc_dev *dev)
static void pch_udc_svc_intf_interrupt(struct pch_udc_dev *dev)
static void pch_udc_svc_cfg_interrupt(struct pch_udc_dev *dev)
static void pch_udc_dev_isr(struct pch_udc_dev *dev, u32 dev_intr)
static irqreturn_t pch_udc_isr(int irq, void *pdev)
static void pch_udc_setup_ep0(struct pch_udc_dev *dev)
static void gadget_release(struct device *pdev)
static void pch_udc_pcd_reinit(struct pch_udc_dev *dev)
static int pch_udc_pcd_init(struct pch_udc_dev *dev)
static int init_dma_pools(struct pch_udc_dev *dev)
int usb_gadget_probe_driver(struct usb_gadget_driver *driver,
int (*bind)(struct usb_gadget *))
EXPORT_SYMBOL(usb_gadget_probe_driver);
int usb_gadget_unregister_driver(struct usb_gadget_driver *driver)
EXPORT_SYMBOL(usb_gadget_unregister_driver);
static void pch_udc_shutdown(struct pci_dev *pdev)
static void pch_udc_remove(struct pci_dev *pdev)
static int pch_udc_suspend(struct pci_dev *pdev, pm_message_t state)
static int pch_udc_resume(struct pci_dev *pdev)
#define pch_udc_suspend	NULL
#define pch_udc_resume	NULL
static int pch_udc_probe(struct pci_dev *pdev,
const struct pci_device_id *id)
static DEFINE_PCI_DEVICE_TABLE(pch_udc_pcidev_id) = ;
MODULE_DEVICE_TABLE(pci, pch_udc_pcidev_id);
static struct pci_driver pch_udc_driver = ;
static int __init pch_udc_pci_init(void)
module_init(pch_udc_pci_init);
static void __exit pch_udc_pci_exit(void)
module_exit(pch_udc_pci_exit);
MODULE_DESCRIPTION("Intel EG20T USB Device Controller");
MODULE_AUTHOR("OKI SEMICONDUCTOR, <toshiharu-linux@dsn.okisemi.com>");
MODULE_LICENSE("GPL");
