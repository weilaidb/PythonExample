#define trunc_page(x)	((void *)(((unsigned long)(x)) & ~((unsigned long)(PAGE_SIZE - 1))))
#define round_page(x)	trunc_page(((unsigned long)(x)) + ((unsigned long)(PAGE_SIZE - 1)))
#define ENET_CRCPOLY 0x04c11db7
#define SUNHME_MULTICAST
#define N_RX_RING	64
#define N_TX_RING	32
#define MAX_TX_ACTIVE	1
#define ETHERCRC	4
#define ETHERMINPACKET	64
#define ETHERMTU	1500
#define RX_BUFLEN	(ETHERMTU + 14 + ETHERCRC + 2)
#define TX_TIMEOUT	HZ
#define TX_DMA_ERR	0x80
#define XXDEBUG(args)
struct bmac_data ;
static unsigned char *bmac_emergency_rxbuf;
#define PRIV_BYTES	(sizeof(struct bmac_data) \
+ (N_RX_RING + N_TX_RING + 4) * sizeof(struct dbdma_cmd) \
+ sizeof(struct sk_buff_head))
static int bmac_open(struct net_device *dev);
static int bmac_close(struct net_device *dev);
static int bmac_transmit_packet(struct sk_buff *skb, struct net_device *dev);
static void bmac_set_multicast(struct net_device *dev);
static void bmac_reset_and_enable(struct net_device *dev);
static void bmac_start_chip(struct net_device *dev);
static void bmac_init_chip(struct net_device *dev);
static void bmac_init_registers(struct net_device *dev);
static void bmac_enable_and_reset_chip(struct net_device *dev);
static int bmac_set_address(struct net_device *dev, void *addr);
static irqreturn_t bmac_misc_intr(int irq, void *dev_id);
static irqreturn_t bmac_txdma_intr(int irq, void *dev_id);
static irqreturn_t bmac_rxdma_intr(int irq, void *dev_id);
static void bmac_set_timeout(struct net_device *dev);
static void bmac_tx_timeout(unsigned long data);
static int bmac_output(struct sk_buff *skb, struct net_device *dev);
static void bmac_start(struct net_device *dev);
#define	DBDMA_SET(x)	( ((x) | (x) << 16) )
#define	DBDMA_CLEAR(x)	( (x) << 16)
static inline void
dbdma_st32(volatile __u32 __iomem *a, unsigned long x)
static inline unsigned long
dbdma_ld32(volatile __u32 __iomem *a)
static void
dbdma_continue(volatile struct dbdma_regs __iomem *dmap)
static void
dbdma_reset(volatile struct dbdma_regs __iomem *dmap)
static void
dbdma_setcmd(volatile struct dbdma_cmd *cp,
unsigned short cmd, unsigned count, unsigned long addr,
unsigned long cmd_dep)
static inline
void bmwrite(struct net_device *dev, unsigned long reg_offset, unsigned data )
static inline
unsigned short bmread(struct net_device *dev, unsigned long reg_offset )
static void
bmac_enable_and_reset_chip(struct net_device *dev)
#define MIFDELAY	udelay(10)
static unsigned int
bmac_mif_readbits(struct net_device *dev, int nb)
static void
bmac_mif_writebits(struct net_device *dev, unsigned int val, int nb)
static unsigned int
bmac_mif_read(struct net_device *dev, unsigned int addr)
static void
bmac_mif_write(struct net_device *dev, unsigned int addr, unsigned int val)
static void
bmac_init_registers(struct net_device *dev)
static void
bmac_start_chip(struct net_device *dev)
static void
bmac_init_phy(struct net_device *dev)
static void bmac_init_chip(struct net_device *dev)
static int bmac_suspend(struct macio_dev *mdev, pm_message_t state)
static int bmac_resume(struct macio_dev *mdev)
static int bmac_set_address(struct net_device *dev, void *addr)
static inline void bmac_set_timeout(struct net_device *dev)
static void
bmac_construct_xmt(struct sk_buff *skb, volatile struct dbdma_cmd *cp)
static void
bmac_construct_rxbuff(struct sk_buff *skb, volatile struct dbdma_cmd *cp)
static void
bmac_init_tx_ring(struct bmac_data *bp)
static int
bmac_init_rx_ring(struct bmac_data *bp)
static int bmac_transmit_packet(struct sk_buff *skb, struct net_device *dev)
static int rxintcount;
static irqreturn_t bmac_rxdma_intr(int irq, void *dev_id)
static int txintcount;
static irqreturn_t bmac_txdma_intr(int irq, void *dev_id)
static int reverse6[64] = ;
static unsigned int
crc416(unsigned int curval, unsigned short nxtval)
static unsigned int
bmac_crc(unsigned short *address)
static void
bmac_addhash(struct bmac_data *bp, unsigned char *addr)
static void
bmac_removehash(struct bmac_data *bp, unsigned char *addr)
static void
bmac_rx_off(struct net_device *dev)
unsigned short
bmac_rx_on(struct net_device *dev, int hash_enable, int promisc_enable)
static void
bmac_update_hash_table_mask(struct net_device *dev, struct bmac_data *bp)
static void bmac_set_multicast(struct net_device *dev)
static void bmac_set_multicast(struct net_device *dev)
static int miscintcount;
static irqreturn_t bmac_misc_intr(int irq, void *dev_id)
#define SROMAddressLength	5
#define DataInOn		0x0008
#define DataInOff		0x0000
#define Clk			0x0002
#define ChipSelect		0x0001
#define SDIShiftCount		3
#define SD0ShiftCount		2
#define	DelayValue		1000
#define SROMStartOffset		10
#define SROMReadCount		3
#define SROMAddressBits		6
#define EnetAddressOffset	20
static unsigned char
bmac_clock_out_bit(struct net_device *dev)
static void
bmac_clock_in_bit(struct net_device *dev, unsigned int val)
static void
reset_and_select_srom(struct net_device *dev)
static unsigned short
read_srom(struct net_device *dev, unsigned int addr, unsigned int addr_len)
static int
bmac_verify_checksum(struct net_device *dev)
static void
bmac_get_station_address(struct net_device *dev, unsigned char *ea)
static void bmac_reset_and_enable(struct net_device *dev)
static const struct ethtool_ops bmac_ethtool_ops = ;
static const struct net_device_ops bmac_netdev_ops = ;
static int __devinit bmac_probe(struct macio_dev *mdev, const struct of_device_id *match)
static int bmac_open(struct net_device *dev)
static int bmac_close(struct net_device *dev)
static void
bmac_start(struct net_device *dev)
static int
bmac_output(struct sk_buff *skb, struct net_device *dev)
static void bmac_tx_timeout(unsigned long data)
static int __devexit bmac_remove(struct macio_dev *mdev)
static struct of_device_id bmac_match[] =
;
MODULE_DEVICE_TABLE (of, bmac_match);
static struct macio_driver bmac_driver =
;
static int __init bmac_init(void)
static void __exit bmac_exit(void)
MODULE_AUTHOR("Randy Gobbel/Paul Mackerras");
MODULE_DESCRIPTION("PowerMac BMAC ethernet driver.");
MODULE_LICENSE("GPL");
module_init(bmac_init);
module_exit(bmac_exit);
