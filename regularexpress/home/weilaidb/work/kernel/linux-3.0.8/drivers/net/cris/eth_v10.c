#define D(x)
static const char* cardname = "ETRAX 100LX built-in ethernet controller";
static struct sockaddr default_mac = ;
struct net_local ;
typedef struct etrax_eth_descr
etrax_eth_descr;
struct transceiver_ops
;
enum duplex
;
#define MAX_MEDIA_DATA_SIZE 1522
#define MIN_PACKET_LEN      46
#define ETHER_HEAD_LEN      14
#define MDIO_START                          0x1
#define MDIO_READ                           0x2
#define MDIO_WRITE                          0x1
#define MDIO_PREAMBLE              0xfffffffful
#define MDIO_AUX_CTRL_STATUS_REG           0x18
#define MDIO_BC_FULL_DUPLEX_IND             0x1
#define MDIO_BC_SPEED                       0x2
#define MDIO_TDK_DIAGNOSTIC_REG              18
#define MDIO_TDK_DIAGNOSTIC_RATE          0x400
#define MDIO_TDK_DIAGNOSTIC_DPLX          0x800
#define MDIO_INT_STATUS_REG_2			0x0011
#define MDIO_INT_FULL_DUPLEX_IND       (1 << 9)
#define MDIO_INT_SPEED                (1 << 14)
#define NET_FLASH_TIME                  (HZ/50)
#define NET_FLASH_PAUSE                (HZ/100)
#define NET_LINK_UP_CHECK_INTERVAL       (2*HZ)
#define NET_DUPLEX_CHECK_INTERVAL        (2*HZ)
#define NO_NETWORK_ACTIVITY 0
#define NETWORK_ACTIVITY    1
#define NBR_OF_RX_DESC     32
#define NBR_OF_TX_DESC     16
#define RX_COPYBREAK 256
#define RX_QUEUE_THRESHOLD  NBR_OF_RX_DESC/2
#define GET_BIT(bit,val)   (((val) >> (bit)) & 0x01)
#define SETF(var, reg, field, val) var = (var & ~IO_MASK_(reg##_, field##_)) | \
IO_FIELD_(reg##_, field##_, val)
#define SETS(var, reg, field, val) var = (var & ~IO_MASK_(reg##_, field##_)) | \
IO_STATE_(reg##_, field##_, _##val)
static etrax_eth_descr *myNextRxDesc;
static etrax_eth_descr *myLastRxDesc;
static etrax_eth_descr RxDescList[NBR_OF_RX_DESC] __attribute__ ((aligned(32)));
static etrax_eth_descr* myFirstTxDesc;
static etrax_eth_descr* myLastTxDesc;
static etrax_eth_descr* myNextTxDesc;
static etrax_eth_descr TxDescList[NBR_OF_TX_DESC] __attribute__ ((aligned(32)));
static unsigned int network_rec_config_shadow = 0;
static unsigned int network_tr_ctrl_shadow = 0;
static DEFINE_TIMER(speed_timer, NULL, 0, 0);
static DEFINE_TIMER(clear_led_timer, NULL, 0, 0);
static int current_speed;
static int current_speed_selection;
static unsigned long led_next_time;
static int led_active;
static int rx_queue_len;
static DEFINE_TIMER(duplex_timer, NULL, 0, 0);
static int full_duplex;
static enum duplex current_duplex;
static int etrax_ethernet_init(void);
static int e100_open(struct net_device *dev);
static int e100_set_mac_address(struct net_device *dev, void *addr);
static int e100_send_packet(struct sk_buff *skb, struct net_device *dev);
static irqreturn_t e100rxtx_interrupt(int irq, void *dev_id);
static irqreturn_t e100nw_interrupt(int irq, void *dev_id);
static void e100_rx(struct net_device *dev);
static int e100_close(struct net_device *dev);
static int e100_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd);
static int e100_set_config(struct net_device* dev, struct ifmap* map);
static void e100_tx_timeout(struct net_device *dev);
static struct net_device_stats *e100_get_stats(struct net_device *dev);
static void set_multicast_list(struct net_device *dev);
static void e100_hardware_send_packet(struct net_local* np, char *buf, int length);
static void update_rx_stats(struct net_device_stats *);
static void update_tx_stats(struct net_device_stats *);
static int e100_probe_transceiver(struct net_device* dev);
static void e100_check_speed(unsigned long priv);
static void e100_set_speed(struct net_device* dev, unsigned long speed);
static void e100_check_duplex(unsigned long priv);
static void e100_set_duplex(struct net_device* dev, enum duplex);
static void e100_negotiate(struct net_device* dev);
static int e100_get_mdio_reg(struct net_device *dev, int phy_id, int location);
static void e100_set_mdio_reg(struct net_device *dev, int phy_id, int location, int value);
static void e100_send_mdio_cmd(unsigned short cmd, int write_cmd);
static void e100_send_mdio_bit(unsigned char bit);
static unsigned char e100_receive_mdio_bit(void);
static void e100_reset_transceiver(struct net_device* net);
static void e100_clear_network_leds(unsigned long dummy);
static void e100_set_network_leds(int active);
static const struct ethtool_ops e100_ethtool_ops;
#if defined(CONFIG_ETRAX_NO_PHY)
static void dummy_check_speed(struct net_device* dev);
static void dummy_check_duplex(struct net_device* dev);
static void broadcom_check_speed(struct net_device* dev);
static void broadcom_check_duplex(struct net_device* dev);
static void tdk_check_speed(struct net_device* dev);
static void tdk_check_duplex(struct net_device* dev);
static void intel_check_speed(struct net_device* dev);
static void intel_check_duplex(struct net_device* dev);
static void generic_check_speed(struct net_device* dev);
static void generic_check_duplex(struct net_device* dev);
static void e100_netpoll(struct net_device* dev);
static int autoneg_normal = 1;
struct transceiver_ops transceivers[] =
;
struct transceiver_ops* transceiver = &transceivers[0];
static const struct net_device_ops e100_netdev_ops = ;
#define tx_done(dev) (*R_DMA_CH0_CMD == 0)
static int __init
etrax_ethernet_init(void)
static int
e100_set_mac_address(struct net_device *dev, void *p)
static int
e100_open(struct net_device *dev)
#if defined(CONFIG_ETRAX_NO_PHY)
static void
dummy_check_speed(struct net_device* dev)
static void
generic_check_speed(struct net_device* dev)
static void
tdk_check_speed(struct net_device* dev)
static void
broadcom_check_speed(struct net_device* dev)
static void
intel_check_speed(struct net_device* dev)
static void
e100_check_speed(unsigned long priv)
static void
e100_negotiate(struct net_device* dev)
static void
e100_set_speed(struct net_device* dev, unsigned long speed)
static void
e100_check_duplex(unsigned long priv)
#if defined(CONFIG_ETRAX_NO_PHY)
static void
dummy_check_duplex(struct net_device* dev)
static void
generic_check_duplex(struct net_device* dev)
static void
tdk_check_duplex(struct net_device* dev)
static void
broadcom_check_duplex(struct net_device* dev)
static void
intel_check_duplex(struct net_device* dev)
static void
e100_set_duplex(struct net_device* dev, enum duplex new_duplex)
static int
e100_probe_transceiver(struct net_device* dev)
static int
e100_get_mdio_reg(struct net_device *dev, int phy_id, int location)
static void
e100_set_mdio_reg(struct net_device *dev, int phy_id, int location, int value)
static void
e100_send_mdio_cmd(unsigned short cmd, int write_cmd)
static void
e100_send_mdio_bit(unsigned char bit)
static unsigned char
e100_receive_mdio_bit()
static void
e100_reset_transceiver(struct net_device* dev)
static void
e100_tx_timeout(struct net_device *dev)
static int
e100_send_packet(struct sk_buff *skb, struct net_device *dev)
static irqreturn_t
e100rxtx_interrupt(int irq, void *dev_id)
static irqreturn_t
e100nw_interrupt(int irq, void *dev_id)
static void
e100_rx(struct net_device *dev)
static int
e100_close(struct net_device *dev)
static int
e100_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
static int e100_get_settings(struct net_device *dev,
struct ethtool_cmd *cmd)
static int e100_set_settings(struct net_device *dev,
struct ethtool_cmd *ecmd)
static void e100_get_drvinfo(struct net_device *dev,
struct ethtool_drvinfo *info)
static int e100_nway_reset(struct net_device *dev)
static const struct ethtool_ops e100_ethtool_ops = ;
static int
e100_set_config(struct net_device *dev, struct ifmap *map)
static void
update_rx_stats(struct net_device_stats *es)
static void
update_tx_stats(struct net_device_stats *es)
static struct net_device_stats *
e100_get_stats(struct net_device *dev)
static void
set_multicast_list(struct net_device *dev)
void
e100_hardware_send_packet(struct net_local *np, char *buf, int length)
static void
e100_clear_network_leds(unsigned long dummy)
static void
e100_set_network_leds(int active)
static void
e100_netpoll(struct net_device* netdev)
static int
etrax_init_module(void)
static int __init
e100_boot_setup(char* str)
__setup("etrax100_eth=", e100_boot_setup);
module_init(etrax_init_module);
