#define __LINUX_USB_GADGET_PXA27X_H
#define UDCCR		0x0000
#define UDCICR0		0x0004
#define UDCICR1		0x0008
#define UDCISR0		0x000C
#define UDCISR1		0x0010
#define UDCFNR		0x0014
#define UDCOTGICR	0x0018
#define UP2OCR		0x0020
#define UP3OCR		0x0024
#define UDCCSRn(x)	(0x0100 + ((x)<<2))
#define UDCBCRn(x)	(0x0200 + ((x)<<2))
#define UDCDRn(x)	(0x0300 + ((x)<<2))
#define UDCCRn(x)	(0x0400 + ((x)<<2))
#define UDCCR_OEN	(1 << 31)
#define UDCCR_AALTHNP	(1 << 30)
#define UDCCR_AHNP	(1 << 29)
#define UDCCR_BHNP	(1 << 28)
#define UDCCR_DWRE	(1 << 16)
#define UDCCR_ACN	(0x03 << 11)
#define UDCCR_ACN_S	11
#define UDCCR_AIN	(0x07 << 8)
#define UDCCR_AIN_S	8
#define UDCCR_AAISN	(0x07 << 5)
#define UDCCR_AAISN_S	5
#define UDCCR_SMAC	(1 << 4)
#define UDCCR_EMCE	(1 << 3)
#define UDCCR_UDR	(1 << 2)
#define UDCCR_UDA	(1 << 1)
#define UDCCR_UDE	(1 << 0)
#define UDCICR_INT(n, intr) (((intr) & 0x03) << (((n) & 0x0F) * 2))
#define UDCICR1_IECC	(1 << 31)
#define UDCICR1_IESOF	(1 << 30)
#define UDCICR1_IERU	(1 << 29)
#define UDCICR1_IESU	(1 << 28)
#define UDCICR1_IERS	(1 << 27)
#define UDCICR_FIFOERR	(1 << 1)
#define UDCICR_PKTCOMPL	(1 << 0)
#define UDCICR_INT_MASK	(UDCICR_FIFOERR | UDCICR_PKTCOMPL)
#define UDCISR_INT(n, intr) (((intr) & 0x03) << (((n) & 0x0F) * 2))
#define UDCISR1_IRCC	(1 << 31)
#define UDCISR1_IRSOF	(1 << 30)
#define UDCISR1_IRRU	(1 << 29)
#define UDCISR1_IRSU	(1 << 28)
#define UDCISR1_IRRS	(1 << 27)
#define UDCISR_INT_MASK	(UDCICR_FIFOERR | UDCICR_PKTCOMPL)
#define UDCOTGICR_IESF	(1 << 24)
#define UDCOTGICR_IEXR	(1 << 17)
#define UDCOTGICR_IEXF	(1 << 16)
#define UDCOTGICR_IEVV40R (1 << 9)
#define UDCOTGICR_IEVV40F (1 << 8)
#define UDCOTGICR_IEVV44R (1 << 7)
#define UDCOTGICR_IEVV44F (1 << 6)
#define UDCOTGICR_IESVR	(1 << 5)
#define UDCOTGICR_IESVF	(1 << 4)
#define UDCOTGICR_IESDR	(1 << 3)
#define UDCOTGICR_IESDF	(1 << 2)
#define UDCOTGICR_IEIDR	(1 << 1)
#define UDCOTGICR_IEIDF	(1 << 0)
#define UP2OCR_CPVEN	(1 << 0)
#define UP2OCR_CPVPE	(1 << 1)
#define UP2OCR_DPPDE	(1 << 2)
#define UP2OCR_DMPDE	(1 << 3)
#define UP2OCR_DPPUE	(1 << 4)
#define UP2OCR_DMPUE	(1 << 5)
#define UP2OCR_DPPUBE	(1 << 6)
#define UP2OCR_DMPUBE	(1 << 7)
#define UP2OCR_EXSP	(1 << 8)
#define UP2OCR_EXSUS	(1 << 9)
#define UP2OCR_IDON	(1 << 10)
#define UP2OCR_HXS	(1 << 16)
#define UP2OCR_HXOE	(1 << 17)
#define UP2OCR_SEOS	(1 << 24)
#define UDCCSR0_ACM	(1 << 9)
#define UDCCSR0_AREN	(1 << 8)
#define UDCCSR0_SA	(1 << 7)
#define UDCCSR0_RNE	(1 << 6)
#define UDCCSR0_FST	(1 << 5)
#define UDCCSR0_SST	(1 << 4)
#define UDCCSR0_DME	(1 << 3)
#define UDCCSR0_FTF	(1 << 2)
#define UDCCSR0_IPR	(1 << 1)
#define UDCCSR0_OPC	(1 << 0)
#define UDCCSR_DPE	(1 << 9)
#define UDCCSR_FEF	(1 << 8)
#define UDCCSR_SP	(1 << 7)
#define UDCCSR_BNE	(1 << 6)
#define UDCCSR_BNF	(1 << 6)
#define UDCCSR_FST	(1 << 5)
#define UDCCSR_SST	(1 << 4)
#define UDCCSR_DME	(1 << 3)
#define UDCCSR_TRN	(1 << 2)
#define UDCCSR_PC	(1 << 1)
#define UDCCSR_FS	(1 << 0)
#define UDCCONR_CN	(0x03 << 25)
#define UDCCONR_CN_S	25
#define UDCCONR_IN	(0x07 << 22)
#define UDCCONR_IN_S	22
#define UDCCONR_AISN	(0x07 << 19)
#define UDCCONR_AISN_S	19
#define UDCCONR_EN	(0x0f << 15)
#define UDCCONR_EN_S	15
#define UDCCONR_ET	(0x03 << 13)
#define UDCCONR_ET_S	13
#define UDCCONR_ET_INT	(0x03 << 13)
#define UDCCONR_ET_BULK	(0x02 << 13)
#define UDCCONR_ET_ISO	(0x01 << 13)
#define UDCCONR_ET_NU	(0x00 << 13)
#define UDCCONR_ED	(1 << 12)
#define UDCCONR_MPS	(0x3ff << 2)
#define UDCCONR_MPS_S	2
#define UDCCONR_DE	(1 << 1)
#define UDCCONR_EE	(1 << 0)
#define UDCCR_MASK_BITS (UDCCR_OEN | UDCCR_SMAC | UDCCR_UDR | UDCCR_UDE)
#define UDCCSR_WR_MASK	(UDCCSR_DME | UDCCSR_FST)
#define UDC_FNR_MASK	(0x7ff)
#define UDC_BCR_MASK	(0x3ff)
#define ofs_UDCCR(ep)	(UDCCRn(ep->idx))
#define ofs_UDCCSR(ep)	(UDCCSRn(ep->idx))
#define ofs_UDCBCR(ep)	(UDCBCRn(ep->idx))
#define ofs_UDCDR(ep)	(UDCDRn(ep->idx))
#define udc_ep_readl(ep, reg)	\
__raw_readl((ep)->dev->regs + ofs_##reg(ep))
#define udc_ep_writel(ep, reg, value)	\
__raw_writel((value), ep->dev->regs + ofs_##reg(ep))
#define udc_ep_readb(ep, reg)	\
__raw_readb((ep)->dev->regs + ofs_##reg(ep))
#define udc_ep_writeb(ep, reg, value)	\
__raw_writeb((value), ep->dev->regs + ofs_##reg(ep))
#define udc_readl(dev, reg)	\
__raw_readl((dev)->regs + (reg))
#define udc_writel(udc, reg, value)	\
__raw_writel((value), (udc)->regs + (reg))
#define UDCCSR_MASK		(UDCCSR_FST | UDCCSR_DME)
#define UDCCISR0_EP_MASK	~0
#define UDCCISR1_EP_MASK	0xffff
#define UDCCSR0_CTRL_REQ_MASK	(UDCCSR0_OPC | UDCCSR0_SA | UDCCSR0_RNE)
#define EPIDX(ep)	(ep->idx)
#define EPADDR(ep)	(ep->addr)
#define EPXFERTYPE(ep)	(ep->type)
#define EPNAME(ep)	(ep->name)
#define is_ep0(ep)	(!ep->idx)
#define EPXFERTYPE_is_ISO(ep) (EPXFERTYPE(ep) == USB_ENDPOINT_XFER_ISOC)
#define USB_EP_DEF(addr, bname, dir, type, maxpkt) \
#define USB_EP_BULK(addr, bname, dir) \
USB_EP_DEF(addr, bname, dir, USB_ENDPOINT_XFER_BULK, BULK_FIFO_SIZE)
#define USB_EP_ISO(addr, bname, dir) \
USB_EP_DEF(addr, bname, dir, USB_ENDPOINT_XFER_ISOC, ISO_FIFO_SIZE)
#define USB_EP_INT(addr, bname, dir) \
USB_EP_DEF(addr, bname, dir, USB_ENDPOINT_XFER_INT, INT_FIFO_SIZE)
#define USB_EP_IN_BULK(n)	USB_EP_BULK(n, "ep" #n "in-bulk", 1)
#define USB_EP_OUT_BULK(n)	USB_EP_BULK(n, "ep" #n "out-bulk", 0)
#define USB_EP_IN_ISO(n)	USB_EP_ISO(n,  "ep" #n "in-iso", 1)
#define USB_EP_OUT_ISO(n)	USB_EP_ISO(n,  "ep" #n "out-iso", 0)
#define USB_EP_IN_INT(n)	USB_EP_INT(n,  "ep" #n "in-int", 1)
#define USB_EP_CTRL		USB_EP_DEF(0,  "ep0", 0, 0, EP0_FIFO_SIZE)
#define PXA_EP_DEF(_idx, _addr, dir, _type, maxpkt, _config, iface, altset) \
#define PXA_EP_BULK(_idx, addr, dir, config, iface, alt) \
PXA_EP_DEF(_idx, addr, dir, USB_ENDPOINT_XFER_BULK, BULK_FIFO_SIZE, \
config, iface, alt)
#define PXA_EP_ISO(_idx, addr, dir, config, iface, alt) \
PXA_EP_DEF(_idx, addr, dir, USB_ENDPOINT_XFER_ISOC, ISO_FIFO_SIZE, \
config, iface, alt)
#define PXA_EP_INT(_idx, addr, dir, config, iface, alt) \
PXA_EP_DEF(_idx, addr, dir, USB_ENDPOINT_XFER_INT, INT_FIFO_SIZE, \
config, iface, alt)
#define PXA_EP_IN_BULK(i, adr, c, f, a)		PXA_EP_BULK(i, adr, 1, c, f, a)
#define PXA_EP_OUT_BULK(i, adr, c, f, a)	PXA_EP_BULK(i, adr, 0, c, f, a)
#define PXA_EP_IN_ISO(i, adr, c, f, a)		PXA_EP_ISO(i, adr, 1, c, f, a)
#define PXA_EP_OUT_ISO(i, adr, c, f, a)		PXA_EP_ISO(i, adr, 0, c, f, a)
#define PXA_EP_IN_INT(i, adr, c, f, a)		PXA_EP_INT(i, adr, 1, c, f, a)
#define PXA_EP_CTRL	PXA_EP_DEF(0, 0, 0, 0, EP0_FIFO_SIZE, 0, 0, 0)
struct pxa27x_udc;
struct stats ;
struct udc_usb_ep ;
struct pxa_ep ;
struct pxa27x_request ;
enum ep0_state ;
static char *ep0_state_name[] = ;
#define EP0_STNAME(udc) ep0_state_name[(udc)->ep0state]
#define EP0_FIFO_SIZE	16U
#define BULK_FIFO_SIZE	64U
#define ISO_FIFO_SIZE	256U
#define INT_FIFO_SIZE	16U
struct udc_stats ;
#define NR_USB_ENDPOINTS (1 + 5)
#define NR_PXA_ENDPOINTS (1 + 14)
struct pxa_udc ;
static inline struct pxa_udc *to_gadget_udc(struct usb_gadget *gadget)
#define ep_dbg(ep, fmt, arg...) \
dev_dbg(ep->dev->dev, "%s:%s: " fmt, EPNAME(ep), __func__, ## arg)
#define ep_vdbg(ep, fmt, arg...) \
dev_vdbg(ep->dev->dev, "%s:%s: " fmt, EPNAME(ep), __func__, ## arg)
#define ep_err(ep, fmt, arg...) \
dev_err(ep->dev->dev, "%s:%s: " fmt, EPNAME(ep), __func__, ## arg)
#define ep_info(ep, fmt, arg...) \
dev_info(ep->dev->dev, "%s:%s: " fmt, EPNAME(ep), __func__, ## arg)
#define ep_warn(ep, fmt, arg...) \
dev_warn(ep->dev->dev, "%s:%s:" fmt, EPNAME(ep), __func__, ## arg)
