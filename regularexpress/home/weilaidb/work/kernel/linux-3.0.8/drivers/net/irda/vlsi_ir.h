#define IRDA_VLSI_FIR_H
#define PCI_CLASS_WIRELESS_IRDA		0x0d00
#define PCI_CLASS_SUBCLASS_MASK		0xffff
enum vlsi_pci_regs ;
enum vlsi_pci_clkctl ;
#define DMA_MASK_USED_BY_HW	0xffffffff
#define DMA_MASK_MSTRPAGE	0x00ffffff
#define MSTRPAGE_VALUE		(DMA_MASK_MSTRPAGE >> 24)
enum vlsi_pci_irmisc ;
enum vlsi_pio_regs ;
enum vlsi_pio_irintr ;
#define IRINTR_INT_MASK		(IRINTR_ACTIVITY|IRINTR_RPKTINT|IRINTR_TPKTINT)
#define MAX_RING_DESCR		64
#define RINGPTR_RX_MASK		(MAX_RING_DESCR-1)
#define RINGPTR_TX_MASK		((MAX_RING_DESCR-1)<<8)
#define RINGPTR_GET_RX(p)	((p)&RINGPTR_RX_MASK)
#define RINGPTR_GET_TX(p)	(((p)&RINGPTR_TX_MASK)>>8)
#define BUS_TO_RINGBASE(p)	(((p)>>10)&0x3fff)
#define SIZE_TO_BITS(num)		((((num)-1)>>2)&0x0f)
#define TX_RX_TO_RINGSIZE(tx,rx)	((SIZE_TO_BITS(tx)<<12)|(SIZE_TO_BITS(rx)<<8))
#define RINGSIZE_TO_RXSIZE(rs)		((((rs)&0x0f00)>>6)+4)
#define RINGSIZE_TO_TXSIZE(rs)		((((rs)&0xf000)>>10)+4)
enum vlsi_pio_ircfg ;
enum vlsi_pio_irenable ;
#define	  IRENABLE_MASK	    0xff00
#define PHYCTL_BAUD_SHIFT	10
#define PHYCTL_BAUD_MASK	0xfc00
#define PHYCTL_PLSWID_SHIFT	5
#define PHYCTL_PLSWID_MASK	0x03e0
#define PHYCTL_PREAMB_SHIFT	0
#define PHYCTL_PREAMB_MASK	0x001f
#define PHYCTL_TO_BAUD(bwp)	(((bwp)&PHYCTL_BAUD_MASK)>>PHYCTL_BAUD_SHIFT)
#define PHYCTL_TO_PLSWID(bwp)	(((bwp)&PHYCTL_PLSWID_MASK)>>PHYCTL_PLSWID_SHIFT)
#define PHYCTL_TO_PREAMB(bwp)	(((bwp)&PHYCTL_PREAMB_MASK)>>PHYCTL_PREAMB_SHIFT)
#define BWP_TO_PHYCTL(b,w,p)	((((b)<<PHYCTL_BAUD_SHIFT)&PHYCTL_BAUD_MASK) \
| (((w)<<PHYCTL_PLSWID_SHIFT)&PHYCTL_PLSWID_MASK) \
| (((p)<<PHYCTL_PREAMB_SHIFT)&PHYCTL_PREAMB_MASK))
#define BAUD_BITS(br)		((115200/(br))-1)
static inline unsigned
calc_width_bits(unsigned baudrate, unsigned widthselect, unsigned clockselect)
#define PHYCTL_SIR(br,ws,cs)	BWP_TO_PHYCTL(BAUD_BITS(br),calc_width_bits((br),(ws),(cs)),0)
#define PHYCTL_MIR(cs)		BWP_TO_PHYCTL(0,((cs)?9:10),1)
#define PHYCTL_FIR		BWP_TO_PHYCTL(0,0,15)
#define MAX_PACKET_LENGTH	0x0fff
#define IRDA_MTU		2048
#define IRLAP_SKB_ALLOCSIZE	(1+1+IRDA_MTU)
#define XFER_BUF_SIZE		MAX_PACKET_LENGTH
#define RCVBCNT_MASK	0x0fff
struct ring_descr_hw  __packed;
#define rd_addr		rd_u.addr
#define rd_status	rd_u.rd_s.status
#define RD_ACTIVE		0x80
#define	RD_TX_DISCRC		0x40
#define	RD_TX_BADCRC		0x20
#define	RD_TX_PULSE		0x10
#define	RD_TX_FRCEUND		0x08
#define	RD_TX_CLRENTX		0x04
#define	RD_TX_UNDRN		0x01
#define RD_RX_PHYERR		0x40
#define RD_RX_CRCERR		0x20
#define RD_RX_LENGTH		0x10
#define RD_RX_OVER		0x08
#define RD_RX_SIRBAD		0x04
#define RD_RX_ERROR		0x7c
#define HW_RING_AREA_SIZE	(2 * MAX_RING_DESCR * sizeof(struct ring_descr_hw))
struct ring_descr ;
static inline int rd_is_active(struct ring_descr *rd)
static inline void rd_activate(struct ring_descr *rd)
static inline void rd_set_status(struct ring_descr *rd, u8 s)
static inline void rd_set_addr_status(struct ring_descr *rd, dma_addr_t a, u8 s)
static inline void rd_set_count(struct ring_descr *rd, u16 c)
static inline u8 rd_get_status(struct ring_descr *rd)
static inline dma_addr_t rd_get_addr(struct ring_descr *rd)
static inline u16 rd_get_count(struct ring_descr *rd)
struct vlsi_ring ;
static inline struct ring_descr *ring_last(struct vlsi_ring *r)
static inline struct ring_descr *ring_put(struct vlsi_ring *r)
static inline struct ring_descr *ring_first(struct vlsi_ring *r)
static inline struct ring_descr *ring_get(struct vlsi_ring *r)
typedef struct vlsi_irda_dev  vlsi_irda_dev_t;
#define VLSI_TX_DROP		0x0001
#define VLSI_TX_FIFO		0x0002
#define VLSI_RX_DROP		0x0100
#define VLSI_RX_OVER		0x0200
#define VLSI_RX_LENGTH  	0x0400
#define VLSI_RX_FRAME		0x0800
#define VLSI_RX_CRC		0x1000
