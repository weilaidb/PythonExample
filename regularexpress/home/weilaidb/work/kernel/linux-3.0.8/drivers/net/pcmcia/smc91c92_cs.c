#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static const char *if_names[] = ;
#define FIRMWARE_NAME		"ositech/Xilinx7OD.bin"
MODULE_DESCRIPTION("SMC 91c92 series PCMCIA ethernet driver");
MODULE_LICENSE("GPL");
MODULE_FIRMWARE(FIRMWARE_NAME);
#define INT_MODULE_PARM(n, v) static int n = v; module_param(n, int, 0)
INT_MODULE_PARM(if_port, 0);
#define DRV_NAME	"smc91c92_cs"
#define DRV_VERSION	"1.123"
#define TX_TIMEOUT		((400*HZ)/1000)
#define INTR_WORK		4
#define MEMORY_WAIT_TIME       	8
struct smc_private ;
#define MEGAHERTZ_ISR		0x0380
#define MOT_LAN			0x0000
#define MOT_UART		0x0020
#define MOT_EEPROM		0x20
#define MOT_NORMAL \
(COR_LEVEL_REQ | COR_FUNC_ENA | COR_ADDR_DECODE | COR_IREQ_ENA)
#define OSITECH_AUI_CTL		0x0c
#define OSITECH_PWRDOWN		0x0d
#define OSITECH_RESET		0x0e
#define OSITECH_ISR		0x0f
#define OSITECH_AUI_PWR		0x0c
#define OSITECH_RESET_ISR	0x0e
#define OSI_AUI_PWR		0x40
#define OSI_LAN_PWRDOWN		0x02
#define OSI_MODEM_PWRDOWN	0x01
#define OSI_LAN_RESET		0x02
#define OSI_MODEM_RESET		0x01
#define	BANK_SELECT		14
#define SMC_SELECT_BANK(x)
#define	TCR 		0
#define	 TCR_CLEAR	0
#define  TCR_ENABLE	0x0001
#define	 TCR_PAD_EN	0x0080
#define  TCR_MONCSN	0x0400
#define  TCR_FDUPLX	0x0800
#define	 TCR_NORMAL TCR_ENABLE | TCR_PAD_EN
#define EPH		2
#define  EPH_TX_SUC	0x0001
#define  EPH_SNGLCOL	0x0002
#define  EPH_MULCOL	0x0004
#define  EPH_LTX_MULT	0x0008
#define  EPH_16COL	0x0010
#define  EPH_SQET	0x0020
#define  EPH_LTX_BRD	0x0040
#define  EPH_TX_DEFR	0x0080
#define  EPH_LAT_COL	0x0200
#define  EPH_LOST_CAR	0x0400
#define  EPH_EXC_DEF	0x0800
#define  EPH_CTR_ROL	0x1000
#define  EPH_RX_OVRN	0x2000
#define  EPH_LINK_OK	0x4000
#define  EPH_TX_UNRN	0x8000
#define MEMINFO		8
#define MEMCFG		10
#define CONFIG			0
#define  CFG_MII_SELECT		0x8000
#define  CFG_NO_WAIT		0x1000
#define  CFG_FULL_STEP		0x0400
#define  CFG_SET_SQLCH		0x0200
#define  CFG_AUI_SELECT	 	0x0100
#define  CFG_16BIT		0x0080
#define  CFG_DIS_LINK		0x0040
#define  CFG_STATIC		0x0030
#define  CFG_IRQ_SEL_1		0x0004
#define  CFG_IRQ_SEL_0		0x0002
#define BASE_ADDR		2
#define	ADDR0			4
#define	GENERAL			10
#define	CONTROL			12
#define  CTL_STORE		0x0001
#define  CTL_RELOAD		0x0002
#define  CTL_EE_SELECT		0x0004
#define  CTL_TE_ENABLE		0x0020
#define  CTL_CR_ENABLE		0x0040
#define  CTL_LE_ENABLE		0x0080
#define  CTL_AUTO_RELEASE	0x0800
#define	 CTL_POWERDOWN		0x2000
#define MMU_CMD		0
#define	 MC_ALLOC	0x20
#define	 MC_RESET	0x40
#define  MC_RELEASE  	0x80
#define  MC_FREEPKT  	0xA0
#define  MC_ENQUEUE	0xC0
#define	PNR_ARR		2
#define FIFO_PORTS	4
#define  FP_RXEMPTY	0x8000
#define	POINTER		6
#define  PTR_AUTO_INC	0x0040
#define  PTR_READ	0x2000
#define	 PTR_AUTOINC 	0x4000
#define	 PTR_RCV	0x8000
#define	DATA_1		8
#define	INTERRUPT	12
#define  IM_RCV_INT		0x1
#define	 IM_TX_INT		0x2
#define	 IM_TX_EMPTY_INT	0x4
#define	 IM_ALLOC_INT		0x8
#define	 IM_RX_OVRN_INT		0x10
#define	 IM_EPH_INT		0x20
#define	RCR		4
enum RxCfg ;
#define  RCR_SOFTRESET	0x8000
#define	 RCR_STRIP_CRC	0x200
#define  RCR_ENABLE	0x100
#define  RCR_ALMUL	0x4
#define	 RCR_PROMISC	0x2
#define	 RCR_NORMAL	(RCR_STRIP_CRC | RCR_ENABLE)
#define  RCR_CLEAR	0x0
#define	COUNTER		6
#define	MULTICAST0	0
#define	MULTICAST2	2
#define	MULTICAST4	4
#define	MULTICAST6	6
#define MGMT    	8
#define REVISION	0x0a
#define TS_SUCCESS 0x0001
#define TS_16COL   0x0010
#define TS_LATCOL  0x0200
#define TS_LOSTCAR 0x0400
#define RS_ALGNERR	0x8000
#define RS_BADCRC	0x2000
#define RS_ODDFRAME	0x1000
#define RS_TOOLONG	0x0800
#define RS_TOOSHORT	0x0400
#define RS_MULTICAST	0x0001
#define RS_ERRORS	(RS_ALGNERR | RS_BADCRC | RS_TOOLONG | RS_TOOSHORT)
#define set_bits(v, p) outw(inw(p)|(v), (p))
#define mask_bits(v, p) outw(inw(p)&(v), (p))
static void smc91c92_detach(struct pcmcia_device *p_dev);
static int smc91c92_config(struct pcmcia_device *link);
static void smc91c92_release(struct pcmcia_device *link);
static int smc_open(struct net_device *dev);
static int smc_close(struct net_device *dev);
static int smc_ioctl(struct net_device *dev, struct ifreq *rq, int cmd);
static void smc_tx_timeout(struct net_device *dev);
static netdev_tx_t smc_start_xmit(struct sk_buff *skb,
struct net_device *dev);
static irqreturn_t smc_interrupt(int irq, void *dev_id);
static void smc_rx(struct net_device *dev);
static void set_rx_mode(struct net_device *dev);
static int s9k_config(struct net_device *dev, struct ifmap *map);
static void smc_set_xcvr(struct net_device *dev, int if_port);
static void smc_reset(struct net_device *dev);
static void media_check(u_long arg);
static void mdio_sync(unsigned int addr);
static int mdio_read(struct net_device *dev, int phy_id, int loc);
static void mdio_write(struct net_device *dev, int phy_id, int loc, int value);
static int smc_link_ok(struct net_device *dev);
static const struct ethtool_ops ethtool_ops;
static const struct net_device_ops smc_netdev_ops = ;
static int smc91c92_probe(struct pcmcia_device *link)
static void smc91c92_detach(struct pcmcia_device *link)
static int cvt_ascii_address(struct net_device *dev, char *s)
static int mhz_3288_power(struct pcmcia_device *link)
static int mhz_mfc_config_check(struct pcmcia_device *p_dev, void *priv_data)
static int mhz_mfc_config(struct pcmcia_device *link)
static int pcmcia_get_versmac(struct pcmcia_device *p_dev,
tuple_t *tuple,
void *priv)
;
static int mhz_setup(struct pcmcia_device *link)
;
static void mot_config(struct pcmcia_device *link)
static int mot_setup(struct pcmcia_device *link)
static int smc_configcheck(struct pcmcia_device *p_dev, void *priv_data)
static int smc_config(struct pcmcia_device *link)
static int smc_setup(struct pcmcia_device *link)
static int osi_config(struct pcmcia_device *link)
static int osi_load_firmware(struct pcmcia_device *link)
static int pcmcia_osi_mac(struct pcmcia_device *p_dev,
tuple_t *tuple,
void *priv)
;
static int osi_setup(struct pcmcia_device *link, u_short manfid, u_short cardid)
static int smc91c92_suspend(struct pcmcia_device *link)
static int smc91c92_resume(struct pcmcia_device *link)
static int check_sig(struct pcmcia_device *link)
static int smc91c92_config(struct pcmcia_device *link)
static void smc91c92_release(struct pcmcia_device *link)
#define MDIO_SHIFT_CLK		0x04
#define MDIO_DATA_OUT		0x01
#define MDIO_DIR_WRITE		0x08
#define MDIO_DATA_WRITE0	(MDIO_DIR_WRITE)
#define MDIO_DATA_WRITE1	(MDIO_DIR_WRITE | MDIO_DATA_OUT)
#define MDIO_DATA_READ		0x02
static void mdio_sync(unsigned int addr)
static int mdio_read(struct net_device *dev, int phy_id, int loc)
static void mdio_write(struct net_device *dev, int phy_id, int loc, int value)
static void smc_dump(struct net_device *dev)
static int smc_open(struct net_device *dev)
static int smc_close(struct net_device *dev)
static void smc_hardware_send_packet(struct net_device * dev)
static void smc_tx_timeout(struct net_device *dev)
static netdev_tx_t smc_start_xmit(struct sk_buff *skb,
struct net_device *dev)
static void smc_tx_err(struct net_device * dev)
static void smc_eph_irq(struct net_device *dev)
static irqreturn_t smc_interrupt(int irq, void *dev_id)
static void smc_rx(struct net_device *dev)
static void set_rx_mode(struct net_device *dev)
static int s9k_config(struct net_device *dev, struct ifmap *map)
static void smc_set_xcvr(struct net_device *dev, int if_port)
static void smc_reset(struct net_device *dev)
static void media_check(u_long arg)
static int smc_link_ok(struct net_device *dev)
static int smc_netdev_get_ecmd(struct net_device *dev, struct ethtool_cmd *ecmd)
static int smc_netdev_set_ecmd(struct net_device *dev, struct ethtool_cmd *ecmd)
static int check_if_running(struct net_device *dev)
static void smc_get_drvinfo(struct net_device *dev, struct ethtool_drvinfo *info)
static int smc_get_settings(struct net_device *dev, struct ethtool_cmd *ecmd)
static int smc_set_settings(struct net_device *dev, struct ethtool_cmd *ecmd)
static u32 smc_get_link(struct net_device *dev)
static int smc_nway_reset(struct net_device *dev)
static const struct ethtool_ops ethtool_ops = ;
static int smc_ioctl (struct net_device *dev, struct ifreq *rq, int cmd)
static const struct pcmcia_device_id smc91c92_ids[] = ;
MODULE_DEVICE_TABLE(pcmcia, smc91c92_ids);
static struct pcmcia_driver smc91c92_cs_driver = ;
static int __init init_smc91c92_cs(void)
static void __exit exit_smc91c92_cs(void)
module_init(init_smc91c92_cs);
module_exit(exit_smc91c92_cs);
