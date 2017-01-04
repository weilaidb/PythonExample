#define DRV_MODULE_NAME		"w90p910-emc"
#define DRV_MODULE_VERSION	"0.1"
#define REG_CAMCMR		0x00
#define REG_CAMEN		0x04
#define REG_CAMM_BASE		0x08
#define REG_CAML_BASE		0x0c
#define REG_TXDLSA		0x88
#define REG_RXDLSA		0x8C
#define REG_MCMDR		0x90
#define REG_MIID		0x94
#define REG_MIIDA		0x98
#define REG_FFTCR		0x9C
#define REG_TSDR		0xa0
#define REG_RSDR		0xa4
#define REG_DMARFC		0xa8
#define REG_MIEN		0xac
#define REG_MISTA		0xb0
#define REG_CTXDSA		0xcc
#define REG_CTXBSA		0xd0
#define REG_CRXDSA		0xd4
#define REG_CRXBSA		0xd8
#define MCMDR_RXON		0x01
#define MCMDR_ACP		(0x01 << 3)
#define MCMDR_SPCRC		(0x01 << 5)
#define MCMDR_TXON		(0x01 << 8)
#define MCMDR_FDUP		(0x01 << 18)
#define MCMDR_ENMDC		(0x01 << 19)
#define MCMDR_OPMOD		(0x01 << 20)
#define SWR			(0x01 << 24)
#define CAMCMR_AUP		0x01
#define CAMCMR_AMP		(0x01 << 1)
#define CAMCMR_ABP		(0x01 << 2)
#define CAMCMR_CCAM		(0x01 << 3)
#define CAMCMR_ECMP		(0x01 << 4)
#define CAM0EN			0x01
#define MDCCR			(0x0a << 20)
#define PHYAD			(0x01 << 8)
#define PHYWR			(0x01 << 16)
#define PHYBUSY			(0x01 << 17)
#define PHYPRESP		(0x01 << 18)
#define CAM_ENTRY_SIZE		0x08
#define TXDS_TXCP		(0x01 << 19)
#define RXDS_CRCE		(0x01 << 17)
#define RXDS_PTLE		(0x01 << 19)
#define RXDS_RXGD		(0x01 << 20)
#define RXDS_ALIE		(0x01 << 21)
#define RXDS_RP			(0x01 << 22)
#define MISTA_EXDEF		(0x01 << 19)
#define MISTA_TXBERR		(0x01 << 24)
#define MISTA_TDU		(0x01 << 23)
#define MISTA_RDU		(0x01 << 10)
#define MISTA_RXBERR		(0x01 << 11)
#define ENSTART			0x01
#define ENRXINTR		0x01
#define ENRXGD			(0x01 << 4)
#define ENRXBERR		(0x01 << 11)
#define ENTXINTR		(0x01 << 16)
#define ENTXCP			(0x01 << 18)
#define ENTXABT			(0x01 << 21)
#define ENTXBERR		(0x01 << 24)
#define ENMDC			(0x01 << 19)
#define PHYBUSY			(0x01 << 17)
#define MDCCR_VAL		0xa00000
#define RX_OWEN_DMA		(0x01 << 31)
#define RX_OWEN_CPU		(~(0x03 << 30))
#define TX_OWEN_DMA		(0x01 << 31)
#define TX_OWEN_CPU		(~(0x01 << 31))
#define MACTXINTEN		0x04
#define CRCMODE			0x02
#define PADDINGMODE		0x01
#define TXTHD 			(0x03 << 8)
#define BLENGTH			(0x01 << 20)
#define RX_DESC_SIZE		50
#define TX_DESC_SIZE		10
#define MAX_RBUFF_SZ		0x600
#define MAX_TBUFF_SZ		0x600
#define TX_TIMEOUT		(HZ/2)
#define DELAY			1000
#define CAM0			0x0
static int w90p910_mdio_read(struct net_device *dev, int phy_id, int reg);
struct w90p910_rxbd ;
struct w90p910_txbd ;
struct recv_pdesc ;
struct tran_pdesc ;
struct  w90p910_ether ;
static void update_linkspeed_register(struct net_device *dev,
unsigned int speed, unsigned int duplex)
static void update_linkspeed(struct net_device *dev)
static void w90p910_check_link(unsigned long dev_id)
static void w90p910_write_cam(struct net_device *dev,
unsigned int x, unsigned char *pval)
static int w90p910_init_desc(struct net_device *dev)
static void w90p910_set_fifo_threshold(struct net_device *dev)
static void w90p910_return_default_idle(struct net_device *dev)
static void w90p910_trigger_rx(struct net_device *dev)
static void w90p910_trigger_tx(struct net_device *dev)
static void w90p910_enable_mac_interrupt(struct net_device *dev)
static void w90p910_get_and_clear_int(struct net_device *dev,
unsigned int *val)
static void w90p910_set_global_maccmd(struct net_device *dev)
static void w90p910_enable_cam(struct net_device *dev)
static void w90p910_enable_cam_command(struct net_device *dev)
static void w90p910_enable_tx(struct net_device *dev, unsigned int enable)
static void w90p910_enable_rx(struct net_device *dev, unsigned int enable)
static void w90p910_set_curdest(struct net_device *dev)
static void w90p910_reset_mac(struct net_device *dev)
static void w90p910_mdio_write(struct net_device *dev,
int phy_id, int reg, int data)
static int w90p910_mdio_read(struct net_device *dev, int phy_id, int reg)
static int w90p910_set_mac_address(struct net_device *dev, void *addr)
static int w90p910_ether_close(struct net_device *dev)
static struct net_device_stats *w90p910_ether_stats(struct net_device *dev)
static int w90p910_send_frame(struct net_device *dev,
unsigned char *data, int length)
static int w90p910_ether_start_xmit(struct sk_buff *skb, struct net_device *dev)
static irqreturn_t w90p910_tx_interrupt(int irq, void *dev_id)
static void netdev_rx(struct net_device *dev)
static irqreturn_t w90p910_rx_interrupt(int irq, void *dev_id)
static int w90p910_ether_open(struct net_device *dev)
static void w90p910_ether_set_multicast_list(struct net_device *dev)
static int w90p910_ether_ioctl(struct net_device *dev,
struct ifreq *ifr, int cmd)
static void w90p910_get_drvinfo(struct net_device *dev,
struct ethtool_drvinfo *info)
static int w90p910_get_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int w90p910_set_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int w90p910_nway_reset(struct net_device *dev)
static u32 w90p910_get_link(struct net_device *dev)
static const struct ethtool_ops w90p910_ether_ethtool_ops = ;
static const struct net_device_ops w90p910_ether_netdev_ops = ;
static void __init get_mac_address(struct net_device *dev)
static int w90p910_ether_setup(struct net_device *dev)
static int __devinit w90p910_ether_probe(struct platform_device *pdev)
static int __devexit w90p910_ether_remove(struct platform_device *pdev)
static struct platform_driver w90p910_ether_driver = ;
static int __init w90p910_ether_init(void)
static void __exit w90p910_ether_exit(void)
module_init(w90p910_ether_init);
module_exit(w90p910_ether_exit);
MODULE_AUTHOR("Wan ZongShun <mcuos.com@gmail.com>");
MODULE_DESCRIPTION("w90p910 MAC driver!");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:nuc900-emc");
