#define DRIVER_VERSION "v0.6.14 (2006/09/27)"
#define DRIVER_AUTHOR "Petko Manolov <petkan@users.sourceforge.net>"
#define DRIVER_DESC "Pegasus/Pegasus II USB Ethernet driver"
static const char driver_name[] = "pegasus";
#undef	PEGASUS_WRITE_EEPROM
#define	BMSR_MEDIA	(BMSR_10HALF | BMSR_10FULL | BMSR_100HALF | \
BMSR_100FULL | BMSR_ANEGCAPABLE)
static int loopback;
static int mii_mode;
static char *devid;
static struct usb_eth_dev usb_dev_id[] = ;
static struct usb_device_id pegasus_ids[] = ;
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
module_param(loopback, bool, 0);
module_param(mii_mode, bool, 0);
module_param(devid, charp, 0);
MODULE_PARM_DESC(loopback, "Enable MAC loopback mode (bit 0)");
MODULE_PARM_DESC(mii_mode, "Enable HomePNA mode (bit 0),default=MII mode = 0");
MODULE_PARM_DESC(devid, "The format is: 'DEV_name:VendorID:DeviceID:Flags'");
static int msg_level = -1;
module_param(msg_level, int, 0);
MODULE_PARM_DESC(msg_level, "Override default message level");
MODULE_DEVICE_TABLE(usb, pegasus_ids);
static const struct net_device_ops pegasus_netdev_ops;
static int update_eth_regs_async(pegasus_t *);
static void ctrl_callback(struct urb *urb)
static int get_registers(pegasus_t *pegasus, __u16 indx, __u16 size,
void *data)
static int set_registers(pegasus_t *pegasus, __u16 indx, __u16 size,
void *data)
static int set_register(pegasus_t *pegasus, __u16 indx, __u8 data)
static int update_eth_regs_async(pegasus_t *pegasus)
static int read_mii_word(pegasus_t *pegasus, __u8 phy, __u8 indx, __u16 *regd)
static int mdio_read(struct net_device *dev, int phy_id, int loc)
static int write_mii_word(pegasus_t *pegasus, __u8 phy, __u8 indx, __u16 regd)
static void mdio_write(struct net_device *dev, int phy_id, int loc, int val)
static int read_eprom_word(pegasus_t *pegasus, __u8 index, __u16 *retdata)
static inline void enable_eprom_write(pegasus_t *pegasus)
static inline void disable_eprom_write(pegasus_t *pegasus)
static int write_eprom_word(pegasus_t *pegasus, __u8 index, __u16 data)
static inline void get_node_id(pegasus_t *pegasus, __u8 *id)
static void set_ethernet_addr(pegasus_t *pegasus)
static inline int reset_mac(pegasus_t *pegasus)
static int enable_net_traffic(struct net_device *dev, struct usb_device *usb)
static void fill_skb_pool(pegasus_t *pegasus)
static void free_skb_pool(pegasus_t *pegasus)
static inline struct sk_buff *pull_skb(pegasus_t * pegasus)
static void read_bulk_callback(struct urb *urb)
static void rx_fixup(unsigned long data)
static void write_bulk_callback(struct urb *urb)
static void intr_callback(struct urb *urb)
static void pegasus_tx_timeout(struct net_device *net)
static netdev_tx_t pegasus_start_xmit(struct sk_buff *skb,
struct net_device *net)
static struct net_device_stats *pegasus_netdev_stats(struct net_device *dev)
static inline void disable_net_traffic(pegasus_t *pegasus)
static inline void get_interrupt_interval(pegasus_t *pegasus)
static void set_carrier(struct net_device *net)
static void free_all_urbs(pegasus_t *pegasus)
static void unlink_all_urbs(pegasus_t *pegasus)
static int alloc_urbs(pegasus_t *pegasus)
static int pegasus_open(struct net_device *net)
static int pegasus_close(struct net_device *net)
static void pegasus_get_drvinfo(struct net_device *dev,
struct ethtool_drvinfo *info)
#define	WOL_SUPPORTED	(WAKE_MAGIC|WAKE_PHY)
static void
pegasus_get_wol(struct net_device *dev, struct ethtool_wolinfo *wol)
static int
pegasus_set_wol(struct net_device *dev, struct ethtool_wolinfo *wol)
static inline void pegasus_reset_wol(struct net_device *dev)
static int
pegasus_get_settings(struct net_device *dev, struct ethtool_cmd *ecmd)
static int
pegasus_set_settings(struct net_device *dev, struct ethtool_cmd *ecmd)
static int pegasus_nway_reset(struct net_device *dev)
static u32 pegasus_get_link(struct net_device *dev)
static u32 pegasus_get_msglevel(struct net_device *dev)
static void pegasus_set_msglevel(struct net_device *dev, u32 v)
static const struct ethtool_ops ops = ;
static int pegasus_ioctl(struct net_device *net, struct ifreq *rq, int cmd)
static void pegasus_set_multicast(struct net_device *net)
static __u8 mii_phy_probe(pegasus_t *pegasus)
static inline void setup_pegasus_II(pegasus_t *pegasus)
static int pegasus_count;
static struct workqueue_struct *pegasus_workqueue;
#define CARRIER_CHECK_DELAY (2 * HZ)
static void check_carrier(struct work_struct *work)
static int pegasus_blacklisted(struct usb_device *udev)
static void pegasus_dec_workqueue(void)
static int pegasus_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static void pegasus_disconnect(struct usb_interface *intf)
static int pegasus_suspend(struct usb_interface *intf, pm_message_t message)
static int pegasus_resume(struct usb_interface *intf)
static const struct net_device_ops pegasus_netdev_ops = ;
static struct usb_driver pegasus_driver = ;
static void __init parse_id(char *id)
static int __init pegasus_init(void)
static void __exit pegasus_exit(void)
module_init(pegasus_init);
module_exit(pegasus_exit);
