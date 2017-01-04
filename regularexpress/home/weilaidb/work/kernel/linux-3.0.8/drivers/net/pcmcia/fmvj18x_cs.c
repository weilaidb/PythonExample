#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define DRV_NAME	"fmvj18x_cs"
#define DRV_VERSION	"2.9"
MODULE_DESCRIPTION("fmvj18x and compatible PCMCIA ethernet driver");
MODULE_LICENSE("GPL");
#define INT_MODULE_PARM(n, v) static int n = v; module_param(n, int, 0)
INT_MODULE_PARM(sram_config, 0);
static int fmvj18x_config(struct pcmcia_device *link);
static int fmvj18x_get_hwinfo(struct pcmcia_device *link, u_char *node_id);
static int fmvj18x_setup_mfc(struct pcmcia_device *link);
static void fmvj18x_release(struct pcmcia_device *link);
static void fmvj18x_detach(struct pcmcia_device *p_dev);
static int fjn_config(struct net_device *dev, struct ifmap *map);
static int fjn_open(struct net_device *dev);
static int fjn_close(struct net_device *dev);
static netdev_tx_t fjn_start_xmit(struct sk_buff *skb,
struct net_device *dev);
static irqreturn_t fjn_interrupt(int irq, void *dev_id);
static void fjn_rx(struct net_device *dev);
static void fjn_reset(struct net_device *dev);
static void set_rx_mode(struct net_device *dev);
static void fjn_tx_timeout(struct net_device *dev);
static const struct ethtool_ops netdev_ethtool_ops;
typedef enum  cardtype_t;
typedef struct local_info_t  local_info_t;
#define MC_FILTERBREAK 64
#define TX_STATUS               0
#define RX_STATUS               1
#define TX_INTR                 2
#define RX_INTR                 3
#define TX_MODE                 4
#define RX_MODE                 5
#define CONFIG_0                6
#define CONFIG_1                7
#define NODE_ID                 8
#define MAR_ADR                 8
#define DATAPORT                8
#define TX_START               10
#define COL_CTRL               11
#define BMPR12                 12
#define BMPR13                 13
#define RX_SKIP                14
#define LAN_CTRL               16
#define MAC_ID               0x1a
#define UNGERMANN_MAC_ID     0x18
#define ENA_TMT_OK           0x80
#define ENA_TMT_REC          0x20
#define ENA_COL              0x04
#define ENA_16_COL           0x02
#define ENA_TBUS_ERR         0x01
#define ENA_PKT_RDY          0x80
#define ENA_BUS_ERR          0x40
#define ENA_LEN_ERR          0x08
#define ENA_ALG_ERR          0x04
#define ENA_CRC_ERR          0x02
#define ENA_OVR_FLO          0x01
#define F_TMT_RDY            0x80
#define F_NET_BSY            0x40
#define F_TMT_OK             0x20
#define F_SRT_PKT            0x10
#define F_COL_ERR            0x04
#define F_16_COL             0x02
#define F_TBUS_ERR           0x01
#define F_PKT_RDY            0x80
#define F_BUS_ERR            0x40
#define F_LEN_ERR            0x08
#define F_ALG_ERR            0x04
#define F_CRC_ERR            0x02
#define F_OVR_FLO            0x01
#define F_BUF_EMP            0x40
#define F_SKP_PKT            0x05
#define D_TX_INTR  ( ENA_TMT_OK )
#define D_RX_INTR  ( ENA_PKT_RDY | ENA_LEN_ERR \
| ENA_ALG_ERR | ENA_CRC_ERR | ENA_OVR_FLO )
#define TX_STAT_M  ( F_TMT_RDY )
#define RX_STAT_M  ( F_PKT_RDY | F_LEN_ERR \
| F_ALG_ERR | F_CRC_ERR | F_OVR_FLO )
#define D_TX_MODE            0x06
#define ID_MATCHED           0x02
#define RECV_ALL             0x03
#define CONFIG0_DFL          0x5a
#define CONFIG0_DFL_1        0x5e
#define CONFIG0_RST          0xda
#define CONFIG0_RST_1        0xde
#define BANK_0               0xa0
#define BANK_1               0xa4
#define BANK_2               0xa8
#define CHIP_OFF             0x80
#define DO_TX                0x80
#define SEND_PKT             0x81
#define AUTO_MODE            0x07
#define MANU_MODE            0x03
#define TDK_AUTO_MODE        0x47
#define TDK_MANU_MODE        0x43
#define INTR_OFF             0x0d
#define INTR_ON              0x1d
#define TX_TIMEOUT		((400*HZ)/1000)
#define BANK_0U              0x20
#define BANK_1U              0x24
#define BANK_2U              0x28
static const struct net_device_ops fjn_netdev_ops = ;
static int fmvj18x_probe(struct pcmcia_device *link)
static void fmvj18x_detach(struct pcmcia_device *link)
static int mfc_try_io_port(struct pcmcia_device *link)
static int ungermann_try_io_port(struct pcmcia_device *link)
static int fmvj18x_ioprobe(struct pcmcia_device *p_dev, void *priv_data)
static int fmvj18x_config(struct pcmcia_device *link)
static int fmvj18x_get_hwinfo(struct pcmcia_device *link, u_char *node_id)
static int fmvj18x_setup_mfc(struct pcmcia_device *link)
static void fmvj18x_release(struct pcmcia_device *link)
static int fmvj18x_suspend(struct pcmcia_device *link)
static int fmvj18x_resume(struct pcmcia_device *link)
static const struct pcmcia_device_id fmvj18x_ids[] = ;
MODULE_DEVICE_TABLE(pcmcia, fmvj18x_ids);
static struct pcmcia_driver fmvj18x_cs_driver = ;
static int __init init_fmvj18x_cs(void)
static void __exit exit_fmvj18x_cs(void)
module_init(init_fmvj18x_cs);
module_exit(exit_fmvj18x_cs);
static irqreturn_t fjn_interrupt(int dummy, void *dev_id)
static void fjn_tx_timeout(struct net_device *dev)
static netdev_tx_t fjn_start_xmit(struct sk_buff *skb,
struct net_device *dev)
static void fjn_reset(struct net_device *dev)
static void fjn_rx(struct net_device *dev)
static void netdev_get_drvinfo(struct net_device *dev,
struct ethtool_drvinfo *info)
static const struct ethtool_ops netdev_ethtool_ops = ;
static int fjn_config(struct net_device *dev, struct ifmap *map)
static int fjn_open(struct net_device *dev)
static int fjn_close(struct net_device *dev)
static void set_rx_mode(struct net_device *dev)
