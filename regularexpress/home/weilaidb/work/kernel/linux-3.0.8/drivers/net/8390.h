#define _8390_h
#define TX_PAGES 12
#define ETHER_ADDR_LEN 6
struct e8390_pkt_hdr ;
extern int ei_debug;
#define ei_debug 1
extern void ei_poll(struct net_device *dev);
extern void eip_poll(struct net_device *dev);
extern void NS8390_init(struct net_device *dev, int startp);
extern int ei_open(struct net_device *dev);
extern int ei_close(struct net_device *dev);
extern irqreturn_t ei_interrupt(int irq, void *dev_id);
extern void ei_tx_timeout(struct net_device *dev);
extern netdev_tx_t ei_start_xmit(struct sk_buff *skb, struct net_device *dev);
extern void ei_set_multicast_list(struct net_device *dev);
extern struct net_device_stats *ei_get_stats(struct net_device *dev);
extern const struct net_device_ops ei_netdev_ops;
extern struct net_device *__alloc_ei_netdev(int size);
static inline struct net_device *alloc_ei_netdev(void)
extern void NS8390p_init(struct net_device *dev, int startp);
extern int eip_open(struct net_device *dev);
extern int eip_close(struct net_device *dev);
extern irqreturn_t eip_interrupt(int irq, void *dev_id);
extern void eip_tx_timeout(struct net_device *dev);
extern netdev_tx_t eip_start_xmit(struct sk_buff *skb, struct net_device *dev);
extern void eip_set_multicast_list(struct net_device *dev);
extern struct net_device_stats *eip_get_stats(struct net_device *dev);
extern const struct net_device_ops eip_netdev_ops;
extern struct net_device *__alloc_eip_netdev(int size);
static inline struct net_device *alloc_eip_netdev(void)
struct ei_device ;
#define MAX_SERVICE 12
#define TX_TIMEOUT (20*HZ/100)
#define ei_status (*(struct ei_device *)netdev_priv(dev))
#define E8390_TX_IRQ_MASK	0xa
#define E8390_RX_IRQ_MASK	0x5
#define E8390_RXCONFIG		(ei_status.rxcr_base | 0x04)
#define E8390_RXOFF		(ei_status.rxcr_base | 0x20)
#define E8390_RXCONFIG		0x4
#define E8390_RXOFF		0x20
#define E8390_TXCONFIG		0x00
#define E8390_TXOFF		0x02
#define E8390_STOP	0x01
#define E8390_START	0x02
#define E8390_TRANS	0x04
#define E8390_RREAD	0x08
#define E8390_RWRITE	0x10
#define E8390_NODMA	0x20
#define E8390_PAGE0	0x00
#define E8390_PAGE1	0x40
#define E8390_PAGE2	0x80
#define ei_inb(_p)	inb(_p)
#define ei_outb(_v,_p)	outb(_v,_p)
#define ei_inb_p(_p)	inb(_p)
#define ei_outb_p(_v,_p) outb(_v,_p)
#define EI_SHIFT(x)	(x)
#define E8390_CMD	EI_SHIFT(0x00)
#define EN0_CLDALO	EI_SHIFT(0x01)
#define EN0_STARTPG	EI_SHIFT(0x01)
#define EN0_CLDAHI	EI_SHIFT(0x02)
#define EN0_STOPPG	EI_SHIFT(0x02)
#define EN0_BOUNDARY	EI_SHIFT(0x03)
#define EN0_TSR		EI_SHIFT(0x04)
#define EN0_TPSR	EI_SHIFT(0x04)
#define EN0_NCR		EI_SHIFT(0x05)
#define EN0_TCNTLO	EI_SHIFT(0x05)
#define EN0_FIFO	EI_SHIFT(0x06)
#define EN0_TCNTHI	EI_SHIFT(0x06)
#define EN0_ISR		EI_SHIFT(0x07)
#define EN0_CRDALO	EI_SHIFT(0x08)
#define EN0_RSARLO	EI_SHIFT(0x08)
#define EN0_CRDAHI	EI_SHIFT(0x09)
#define EN0_RSARHI	EI_SHIFT(0x09)
#define EN0_RCNTLO	EI_SHIFT(0x0a)
#define EN0_RCNTHI	EI_SHIFT(0x0b)
#define EN0_RSR		EI_SHIFT(0x0c)
#define EN0_RXCR	EI_SHIFT(0x0c)
#define EN0_TXCR	EI_SHIFT(0x0d)
#define EN0_COUNTER0	EI_SHIFT(0x0d)
#define EN0_DCFG	EI_SHIFT(0x0e)
#define EN0_COUNTER1	EI_SHIFT(0x0e)
#define EN0_IMR		EI_SHIFT(0x0f)
#define EN0_COUNTER2	EI_SHIFT(0x0f)
#define ENISR_RX	0x01
#define ENISR_TX	0x02
#define ENISR_RX_ERR	0x04
#define ENISR_TX_ERR	0x08
#define ENISR_OVER	0x10
#define ENISR_COUNTERS	0x20
#define ENISR_RDC	0x40
#define ENISR_RESET	0x80
#define ENISR_ALL	0x3f
#define ENDCFG_WTS	0x01
#define ENDCFG_BOS	0x02
#define EN1_PHYS   EI_SHIFT(0x01)
#define EN1_PHYS_SHIFT(i)  EI_SHIFT(i+1)
#define EN1_CURPAG EI_SHIFT(0x07)
#define EN1_MULT   EI_SHIFT(0x08)
#define EN1_MULT_SHIFT(i)  EI_SHIFT(8+i)
#define ENRSR_RXOK	0x01
#define ENRSR_CRC	0x02
#define ENRSR_FAE	0x04
#define ENRSR_FO	0x08
#define ENRSR_MPA	0x10
#define ENRSR_PHY	0x20
#define ENRSR_DIS	0x40
#define ENRSR_DEF	0x80
#define ENTSR_PTX 0x01
#define ENTSR_ND  0x02
#define ENTSR_COL 0x04
#define ENTSR_ABT 0x08
#define ENTSR_CRS 0x10
#define ENTSR_FU  0x20
#define ENTSR_CDH 0x40
#define ENTSR_OWC 0x80
