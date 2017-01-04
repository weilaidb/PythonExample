#undef DEBUG
#define DRIVER_VERSION "v2.8"
#define DRIVER_AUTHOR "Vojtech Pavlik <vojtech@suse.cz>"
#define DRIVER_DESC "CATC EL1210A NetMate USB Ethernet driver"
#define SHORT_DRIVER_DESC "EL1210A NetMate USB Ethernet"
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
static const char driver_name[] = "catc";
#define STATS_UPDATE		(HZ)
#define TX_TIMEOUT		(5*HZ)
#define PKT_SZ			1536
#define RX_MAX_BURST		15
#define TX_MAX_BURST		15
#define CTRL_QUEUE		16
#define RX_PKT_SZ		1600
enum control_requests ;
enum register_offsets ;
enum eth_stats ;
enum op_mode_bits ;
enum rx_filter_bits ;
enum led_values ;
enum link_status ;
#define CTRL_RUNNING	0
#define RX_RUNNING	1
#define TX_RUNNING	2
struct catc ;
#define catc_get_mac(catc, mac)				catc_ctrl_msg(catc, USB_DIR_IN,  GetMac, 0, 0, mac,  6)
#define catc_reset(catc)				catc_ctrl_msg(catc, USB_DIR_OUT, Reset, 0, 0, NULL, 0)
#define catc_set_reg(catc, reg, val)			catc_ctrl_msg(catc, USB_DIR_OUT, SetReg, val, reg, NULL, 0)
#define catc_get_reg(catc, reg, buf)			catc_ctrl_msg(catc, USB_DIR_IN,  GetReg, 0, reg, buf, 1)
#define catc_write_mem(catc, addr, buf, size)		catc_ctrl_msg(catc, USB_DIR_OUT, WriteMem, 0, addr, buf, size)
#define catc_read_mem(catc, addr, buf, size)		catc_ctrl_msg(catc, USB_DIR_IN,  ReadMem, 0, addr, buf, size)
#define f5u011_rxmode(catc, rxmode)			catc_ctrl_msg(catc, USB_DIR_OUT, SetRxMode, 0, 1, rxmode, 2)
#define f5u011_rxmode_async(catc, rxmode)		catc_ctrl_async(catc, USB_DIR_OUT, SetRxMode, 0, 1, &rxmode, 2, NULL)
#define f5u011_mchash_async(catc, hash)			catc_ctrl_async(catc, USB_DIR_OUT, SetRxMode, 0, 2, &hash, 8, NULL)
#define catc_set_reg_async(catc, reg, val)		catc_ctrl_async(catc, USB_DIR_OUT, SetReg, val, reg, NULL, 0, NULL)
#define catc_get_reg_async(catc, reg, cb)		catc_ctrl_async(catc, USB_DIR_IN, GetReg, 0, reg, NULL, 1, cb)
#define catc_write_mem_async(catc, addr, buf, size)	catc_ctrl_async(catc, USB_DIR_OUT, WriteMem, 0, addr, buf, size, NULL)
static void catc_rx_done(struct urb *urb)
static void catc_irq_done(struct urb *urb)
static int catc_tx_run(struct catc *catc)
static void catc_tx_done(struct urb *urb)
static netdev_tx_t catc_start_xmit(struct sk_buff *skb,
struct net_device *netdev)
static void catc_tx_timeout(struct net_device *netdev)
static int catc_ctrl_msg(struct catc *catc, u8 dir, u8 request, u16 value, u16 index, void *buf, int len)
static void catc_ctrl_run(struct catc *catc)
static void catc_ctrl_done(struct urb *urb)
static int catc_ctrl_async(struct catc *catc, u8 dir, u8 request, u16 value,
u16 index, void *buf, int len, void (*callback)(struct catc *catc, struct ctrl_queue *q))
static void catc_stats_done(struct catc *catc, struct ctrl_queue *q)
static void catc_stats_timer(unsigned long data)
static void catc_multicast(unsigned char *addr, u8 *multicast)
static void catc_set_multicast_list(struct net_device *netdev)
static void catc_get_drvinfo(struct net_device *dev,
struct ethtool_drvinfo *info)
static int catc_get_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static const struct ethtool_ops ops = ;
static int catc_open(struct net_device *netdev)
static int catc_stop(struct net_device *netdev)
static const struct net_device_ops catc_netdev_ops = ;
static int catc_probe(struct usb_interface *intf, const struct usb_device_id *id)
static void catc_disconnect(struct usb_interface *intf)
static struct usb_device_id catc_id_table [] = ;
MODULE_DEVICE_TABLE(usb, catc_id_table);
static struct usb_driver catc_driver = ;
static int __init catc_init(void)
static void __exit catc_exit(void)
module_init(catc_init);
module_exit(catc_exit);
