#define CONFIG_SBMAC_COALESCE
#define TX_TIMEOUT  (2*HZ)
MODULE_AUTHOR("Mitch Lichtenberg (Broadcom Corp.)");
MODULE_DESCRIPTION("Broadcom SiByte SOC GB Ethernet driver");
static int debug = 1;
module_param(debug, int, S_IRUGO);
MODULE_PARM_DESC(debug, "Debug messages");
static int int_pktcnt_tx = 255;
module_param(int_pktcnt_tx, int, S_IRUGO);
MODULE_PARM_DESC(int_pktcnt_tx, "TX packet count");
static int int_timeout_tx = 255;
module_param(int_timeout_tx, int, S_IRUGO);
MODULE_PARM_DESC(int_timeout_tx, "TX timeout value");
static int int_pktcnt_rx = 64;
module_param(int_pktcnt_rx, int, S_IRUGO);
MODULE_PARM_DESC(int_pktcnt_rx, "RX packet count");
static int int_timeout_rx = 64;
module_param(int_timeout_rx, int, S_IRUGO);
MODULE_PARM_DESC(int_timeout_rx, "RX timeout value");
#if defined(CONFIG_SIBYTE_BCM1x55) || defined(CONFIG_SIBYTE_BCM1x80)
#define R_MAC_DMA_OODPKTLOST_RX	R_MAC_DMA_OODPKTLOST
#elif defined(CONFIG_SIBYTE_SB1250) || defined(CONFIG_SIBYTE_BCM112X)
#error invalid SiByte MAC configuration
#if defined(CONFIG_SIBYTE_BCM1x55) || defined(CONFIG_SIBYTE_BCM1x80)
#define UNIT_INT(n)		(K_BCM1480_INT_MAC_0 + ((n) * 2))
#elif defined(CONFIG_SIBYTE_SB1250) || defined(CONFIG_SIBYTE_BCM112X)
#define UNIT_INT(n)		(K_INT_MAC_0 + (n))
#error invalid SiByte MAC configuration
#define SBMAC_PHY_INT			K_INT_PHY
#define SBMAC_PHY_INT			PHY_POLL
enum sbmac_speed ;
enum sbmac_duplex ;
enum sbmac_fc ;
enum sbmac_state ;
#define SBDMA_NEXTBUF(d,f) ((((d)->f+1) == (d)->sbdma_dscrtable_end) ? \
(d)->sbdma_dscrtable : (d)->f+1)
#define NUMCACHEBLKS(x) (((x)+SMP_CACHE_BYTES-1)/SMP_CACHE_BYTES)
#define SBMAC_MAX_TXDESCR	256
#define SBMAC_MAX_RXDESCR	256
#define ETHER_ADDR_LEN		6
#define ENET_PACKET_SIZE	1518
struct sbdmadscr ;
struct sbmacdma ;
struct sbmac_softc ;
static void sbdma_initctx(struct sbmacdma *d, struct sbmac_softc *s, int chan,
int txrx, int maxdescr);
static void sbdma_channel_start(struct sbmacdma *d, int rxtx);
static int sbdma_add_rcvbuffer(struct sbmac_softc *sc, struct sbmacdma *d,
struct sk_buff *m);
static int sbdma_add_txbuffer(struct sbmacdma *d, struct sk_buff *m);
static void sbdma_emptyring(struct sbmacdma *d);
static void sbdma_fillring(struct sbmac_softc *sc, struct sbmacdma *d);
static int sbdma_rx_process(struct sbmac_softc *sc, struct sbmacdma *d,
int work_to_do, int poll);
static void sbdma_tx_process(struct sbmac_softc *sc, struct sbmacdma *d,
int poll);
static int sbmac_initctx(struct sbmac_softc *s);
static void sbmac_channel_start(struct sbmac_softc *s);
static void sbmac_channel_stop(struct sbmac_softc *s);
static enum sbmac_state sbmac_set_channel_state(struct sbmac_softc *,
enum sbmac_state);
static void sbmac_promiscuous_mode(struct sbmac_softc *sc, int onoff);
static uint64_t sbmac_addr2reg(unsigned char *ptr);
static irqreturn_t sbmac_intr(int irq, void *dev_instance);
static int sbmac_start_tx(struct sk_buff *skb, struct net_device *dev);
static void sbmac_setmulti(struct sbmac_softc *sc);
static int sbmac_init(struct platform_device *pldev, long long base);
static int sbmac_set_speed(struct sbmac_softc *s, enum sbmac_speed speed);
static int sbmac_set_duplex(struct sbmac_softc *s, enum sbmac_duplex duplex,
enum sbmac_fc fc);
static int sbmac_open(struct net_device *dev);
static void sbmac_tx_timeout (struct net_device *dev);
static void sbmac_set_rx_mode(struct net_device *dev);
static int sbmac_mii_ioctl(struct net_device *dev, struct ifreq *rq, int cmd);
static int sbmac_close(struct net_device *dev);
static int sbmac_poll(struct napi_struct *napi, int budget);
static void sbmac_mii_poll(struct net_device *dev);
static int sbmac_mii_probe(struct net_device *dev);
static void sbmac_mii_sync(void __iomem *sbm_mdio);
static void sbmac_mii_senddata(void __iomem *sbm_mdio, unsigned int data,
int bitcnt);
static int sbmac_mii_read(struct mii_bus *bus, int phyaddr, int regidx);
static int sbmac_mii_write(struct mii_bus *bus, int phyaddr, int regidx,
u16 val);
static char sbmac_string[] = "sb1250-mac";
static char sbmac_mdio_string[] = "sb1250-mac-mdio";
#define	MII_COMMAND_START	0x01
#define	MII_COMMAND_READ	0x02
#define	MII_COMMAND_WRITE	0x01
#define	MII_COMMAND_ACK		0x02
#define M_MAC_MDIO_DIR_OUTPUT	0
#define ENABLE 		1
#define DISABLE		0
static void sbmac_mii_sync(void __iomem *sbm_mdio)
static void sbmac_mii_senddata(void __iomem *sbm_mdio, unsigned int data,
int bitcnt)
static int sbmac_mii_read(struct mii_bus *bus, int phyaddr, int regidx)
static int sbmac_mii_write(struct mii_bus *bus, int phyaddr, int regidx,
u16 regval)
static void sbdma_initctx(struct sbmacdma *d, struct sbmac_softc *s, int chan,
int txrx, int maxdescr)
static void sbdma_channel_start(struct sbmacdma *d, int rxtx)
static void sbdma_channel_stop(struct sbmacdma *d)
static inline void sbdma_align_skb(struct sk_buff *skb,
unsigned int power2, unsigned int offset)
static int sbdma_add_rcvbuffer(struct sbmac_softc *sc, struct sbmacdma *d,
struct sk_buff *sb)
static int sbdma_add_txbuffer(struct sbmacdma *d, struct sk_buff *sb)
static void sbdma_emptyring(struct sbmacdma *d)
static void sbdma_fillring(struct sbmac_softc *sc, struct sbmacdma *d)
static void sbmac_netpoll(struct net_device *netdev)
static int sbdma_rx_process(struct sbmac_softc *sc, struct sbmacdma *d,
int work_to_do, int poll)
static void sbdma_tx_process(struct sbmac_softc *sc, struct sbmacdma *d,
int poll)
static int sbmac_initctx(struct sbmac_softc *s)
static void sbdma_uninitctx(struct sbmacdma *d)
static void sbmac_uninitctx(struct sbmac_softc *sc)
static void sbmac_channel_start(struct sbmac_softc *s)
static void sbmac_channel_stop(struct sbmac_softc *s)
static enum sbmac_state sbmac_set_channel_state(struct sbmac_softc *sc,
enum sbmac_state state)
static void sbmac_promiscuous_mode(struct sbmac_softc *sc,int onoff)
static void sbmac_set_iphdr_offset(struct sbmac_softc *sc)
static uint64_t sbmac_addr2reg(unsigned char *ptr)
static int sbmac_set_speed(struct sbmac_softc *s, enum sbmac_speed speed)
static int sbmac_set_duplex(struct sbmac_softc *s, enum sbmac_duplex duplex,
enum sbmac_fc fc)
static irqreturn_t sbmac_intr(int irq,void *dev_instance)
static int sbmac_start_tx(struct sk_buff *skb, struct net_device *dev)
static void sbmac_setmulti(struct sbmac_softc *sc)
static int sb1250_change_mtu(struct net_device *_dev, int new_mtu)
static const struct net_device_ops sbmac_netdev_ops = ;
static int sbmac_init(struct platform_device *pldev, long long base)
static int sbmac_open(struct net_device *dev)
static int sbmac_mii_probe(struct net_device *dev)
static void sbmac_mii_poll(struct net_device *dev)
static void sbmac_tx_timeout (struct net_device *dev)
static void sbmac_set_rx_mode(struct net_device *dev)
static int sbmac_mii_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
static int sbmac_close(struct net_device *dev)
static int sbmac_poll(struct napi_struct *napi, int budget)
static int __devinit sbmac_probe(struct platform_device *pldev)
static int __exit sbmac_remove(struct platform_device *pldev)
static struct platform_driver sbmac_driver = ;
static int __init sbmac_init_module(void)
static void __exit sbmac_cleanup_module(void)
module_init(sbmac_init_module);
module_exit(sbmac_cleanup_module);
