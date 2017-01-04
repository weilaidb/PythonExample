static struct usb_device_id zd1201_table[] = ;
static int ap;
#define ZD1201_VERSION	"0.15"
MODULE_AUTHOR("Jeroen Vreeken <pe1rxq@amsat.org>");
MODULE_DESCRIPTION("Driver for ZyDAS ZD1201 based USB Wireless adapters");
MODULE_VERSION(ZD1201_VERSION);
MODULE_LICENSE("GPL");
module_param(ap, int, 0);
MODULE_PARM_DESC(ap, "If non-zero Access Point firmware will be loaded");
MODULE_DEVICE_TABLE(usb, zd1201_table);
static int zd1201_fw_upload(struct usb_device *dev, int apfw)
MODULE_FIRMWARE("zd1201-ap.fw");
MODULE_FIRMWARE("zd1201.fw");
static void zd1201_usbfree(struct urb *urb)
static int zd1201_docmd(struct zd1201 *zd, int cmd, int parm0,
int parm1, int parm2)
static void zd1201_usbtx(struct urb *urb)
static void zd1201_usbrx(struct urb *urb)
static int zd1201_getconfig(struct zd1201 *zd, int rid, void *riddata,
unsigned int riddatalen)
static int zd1201_setconfig(struct zd1201 *zd, int rid, void *buf, int len, int wait)
static inline int zd1201_getconfig16(struct zd1201 *zd, int rid, short *val)
static inline int zd1201_setconfig16(struct zd1201 *zd, int rid, short val)
static int zd1201_drvr_start(struct zd1201 *zd)
static int zd1201_enable(struct zd1201 *zd)
static int zd1201_disable(struct zd1201 *zd)
static int zd1201_mac_reset(struct zd1201 *zd)
static int zd1201_join(struct zd1201 *zd, char *essid, int essidlen)
static int zd1201_net_open(struct net_device *dev)
static int zd1201_net_stop(struct net_device *dev)
static netdev_tx_t zd1201_hard_start_xmit(struct sk_buff *skb,
struct net_device *dev)
static void zd1201_tx_timeout(struct net_device *dev)
static int zd1201_set_mac_address(struct net_device *dev, void *p)
static struct iw_statistics *zd1201_get_wireless_stats(struct net_device *dev)
static void zd1201_set_multicast(struct net_device *dev)
static int zd1201_config_commit(struct net_device *dev,
struct iw_request_info *info, struct iw_point *data, char *essid)
static int zd1201_get_name(struct net_device *dev,
struct iw_request_info *info, char *name, char *extra)
static int zd1201_set_freq(struct net_device *dev,
struct iw_request_info *info, struct iw_freq *freq, char *extra)
static int zd1201_get_freq(struct net_device *dev,
struct iw_request_info *info, struct iw_freq *freq, char *extra)
static int zd1201_set_mode(struct net_device *dev,
struct iw_request_info *info, __u32 *mode, char *extra)
static int zd1201_get_mode(struct net_device *dev,
struct iw_request_info *info, __u32 *mode, char *extra)
static int zd1201_get_range(struct net_device *dev,
struct iw_request_info *info, struct iw_point *wrq, char *extra)
static int zd1201_get_wap(struct net_device *dev,
struct iw_request_info *info, struct sockaddr *ap_addr, char *extra)
static int zd1201_set_scan(struct net_device *dev,
struct iw_request_info *info, struct iw_point *srq, char *extra)
static int zd1201_get_scan(struct net_device *dev,
struct iw_request_info *info, struct iw_point *srq, char *extra)
static int zd1201_set_essid(struct net_device *dev,
struct iw_request_info *info, struct iw_point *data, char *essid)
static int zd1201_get_essid(struct net_device *dev,
struct iw_request_info *info, struct iw_point *data, char *essid)
static int zd1201_get_nick(struct net_device *dev, struct iw_request_info *info,
struct iw_point *data, char *nick)
static int zd1201_set_rate(struct net_device *dev,
struct iw_request_info *info, struct iw_param *rrq, char *extra)
static int zd1201_get_rate(struct net_device *dev,
struct iw_request_info *info, struct iw_param *rrq, char *extra)
static int zd1201_set_rts(struct net_device *dev, struct iw_request_info *info,
struct iw_param *rts, char *extra)
static int zd1201_get_rts(struct net_device *dev, struct iw_request_info *info,
struct iw_param *rts, char *extra)
static int zd1201_set_frag(struct net_device *dev, struct iw_request_info *info,
struct iw_param *frag, char *extra)
static int zd1201_get_frag(struct net_device *dev, struct iw_request_info *info,
struct iw_param *frag, char *extra)
static int zd1201_set_retry(struct net_device *dev,
struct iw_request_info *info, struct iw_param *rrq, char *extra)
static int zd1201_get_retry(struct net_device *dev,
struct iw_request_info *info, struct iw_param *rrq, char *extra)
static int zd1201_set_encode(struct net_device *dev,
struct iw_request_info *info, struct iw_point *erq, char *key)
static int zd1201_get_encode(struct net_device *dev,
struct iw_request_info *info, struct iw_point *erq, char *key)
static int zd1201_set_power(struct net_device *dev,
struct iw_request_info *info, struct iw_param *vwrq, char *extra)
static int zd1201_get_power(struct net_device *dev,
struct iw_request_info *info, struct iw_param *vwrq, char *extra)
static const iw_handler zd1201_iw_handler[] =
;
static int zd1201_set_hostauth(struct net_device *dev,
struct iw_request_info *info, struct iw_param *rrq, char *extra)
static int zd1201_get_hostauth(struct net_device *dev,
struct iw_request_info *info, struct iw_param *rrq, char *extra)
static int zd1201_auth_sta(struct net_device *dev,
struct iw_request_info *info, struct sockaddr *sta, char *extra)
static int zd1201_set_maxassoc(struct net_device *dev,
struct iw_request_info *info, struct iw_param *rrq, char *extra)
static int zd1201_get_maxassoc(struct net_device *dev,
struct iw_request_info *info, struct iw_param *rrq, char *extra)
static const iw_handler zd1201_private_handler[] = ;
static const struct iw_priv_args zd1201_private_args[] = ;
static const struct iw_handler_def zd1201_iw_handlers = ;
static const struct net_device_ops zd1201_netdev_ops = ;
static int zd1201_probe(struct usb_interface *interface,
const struct usb_device_id *id)
static void zd1201_disconnect(struct usb_interface *interface)
static int zd1201_suspend(struct usb_interface *interface,
pm_message_t message)
static int zd1201_resume(struct usb_interface *interface)
#define zd1201_suspend NULL
#define zd1201_resume  NULL
static struct usb_driver zd1201_usb = ;
static int __init zd1201_init(void)
static void __exit zd1201_cleanup(void)
module_init(zd1201_init);
module_exit(zd1201_cleanup);
