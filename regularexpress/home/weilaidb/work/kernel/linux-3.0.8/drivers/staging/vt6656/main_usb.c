#undef __NO_VERSION__
static int          msglevel                =MSG_LEVEL_INFO;
#define DRIVER_AUTHOR "VIA Networking Technologies, Inc., <lyndonchen@vntek.com.tw>"
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION(DEVICE_FULL_DRV_NAM);
#define DEVICE_PARAM(N,D) \
static int N[MAX_UINTS]=OPTION_DEFAULT;\
module_param_array(N, int, NULL, 0);\
MODULE_PARM_DESC(N, D);
#define RX_DESC_MIN0     16
#define RX_DESC_MAX0     128
#define RX_DESC_DEF0     64
DEVICE_PARAM(RxDescriptors0,"Number of receive usb desc buffer");
#define TX_DESC_MIN0     16
#define TX_DESC_MAX0     128
#define TX_DESC_DEF0     64
DEVICE_PARAM(TxDescriptors0,"Number of transmit usb desc buffer");
#define CHANNEL_MIN     1
#define CHANNEL_MAX     14
#define CHANNEL_DEF     6
DEVICE_PARAM(Channel, "Channel number");
#define PREAMBLE_TYPE_DEF     1
DEVICE_PARAM(PreambleType, "Preamble Type");
#define RTS_THRESH_MIN     512
#define RTS_THRESH_MAX     2347
#define RTS_THRESH_DEF     2347
DEVICE_PARAM(RTSThreshold, "RTS threshold");
#define FRAG_THRESH_MIN     256
#define FRAG_THRESH_MAX     2346
#define FRAG_THRESH_DEF     2346
DEVICE_PARAM(FragThreshold, "Fragmentation threshold");
#define DATA_RATE_MIN     0
#define DATA_RATE_MAX     13
#define DATA_RATE_DEF     13
DEVICE_PARAM(ConnectionRate, "Connection data rate");
#define OP_MODE_MAX     2
#define OP_MODE_DEF     0
#define OP_MODE_MIN     0
DEVICE_PARAM(OPMode, "Infrastruct, adhoc, AP mode ");
#define PS_MODE_DEF     0
DEVICE_PARAM(PSMode, "Power saving mode");
#define SHORT_RETRY_MIN     0
#define SHORT_RETRY_MAX     31
#define SHORT_RETRY_DEF     8
DEVICE_PARAM(ShortRetryLimit, "Short frame retry limits");
#define LONG_RETRY_MIN     0
#define LONG_RETRY_MAX     15
#define LONG_RETRY_DEF     4
DEVICE_PARAM(LongRetryLimit, "long frame retry limits");
#define BBP_TYPE_MIN     0
#define BBP_TYPE_MAX     2
#define BBP_TYPE_DEF     2
DEVICE_PARAM(BasebandType, "baseband type");
#define X80211h_MODE_DEF     0
DEVICE_PARAM(b80211hEnable, "802.11h mode");
static struct usb_device_id vt6656_table[] __devinitdata = ;
static int vt6656_probe(struct usb_interface *intf,
const struct usb_device_id *id);
static void vt6656_disconnect(struct usb_interface *intf);
static int vt6656_suspend(struct usb_interface *intf, pm_message_t message);
static int vt6656_resume(struct usb_interface *intf);
static struct net_device_stats *device_get_stats(struct net_device *dev);
static int  device_open(struct net_device *dev);
static int  device_xmit(struct sk_buff *skb, struct net_device *dev);
static void device_set_multi(struct net_device *dev);
static int  device_close(struct net_device *dev);
static int  device_ioctl(struct net_device *dev, struct ifreq *rq, int cmd);
static BOOL device_init_registers(PSDevice pDevice, DEVICE_INIT_TYPE InitType);
static BOOL device_init_defrag_cb(PSDevice pDevice);
static void device_init_diversity_timer(PSDevice pDevice);
static int  device_dma0_tx_80211(struct sk_buff *skb, struct net_device *dev);
static int  ethtool_ioctl(struct net_device *dev, void *useraddr);
static void device_free_tx_bufs(PSDevice pDevice);
static void device_free_rx_bufs(PSDevice pDevice);
static void device_free_int_bufs(PSDevice pDevice);
static void device_free_frag_bufs(PSDevice pDevice);
static BOOL device_alloc_bufs(PSDevice pDevice);
static int Read_config_file(PSDevice pDevice);
static unsigned char *Config_FileOperation(PSDevice pDevice);
static int Config_FileGetParameter(unsigned char *string,
unsigned char *dest,
unsigned char *source);
static BOOL device_release_WPADEV(PSDevice pDevice);
static void usb_device_reset(PSDevice pDevice);
static void
device_set_options(PSDevice pDevice)
static void device_init_diversity_timer(PSDevice pDevice)
static BOOL device_init_registers(PSDevice pDevice, DEVICE_INIT_TYPE InitType)
static BOOL device_release_WPADEV(PSDevice pDevice)
static int vt6656_suspend(struct usb_interface *intf, pm_message_t message)
static int vt6656_resume(struct usb_interface *intf)
static const struct net_device_ops device_netdev_ops = ;
static int __devinit
vt6656_probe(struct usb_interface *intf, const struct usb_device_id *id)
static void device_free_tx_bufs(PSDevice pDevice)
static void device_free_rx_bufs(PSDevice pDevice)
static void usb_device_reset(PSDevice pDevice)
static void device_free_int_bufs(PSDevice pDevice)
static BOOL device_alloc_bufs(PSDevice pDevice)
static BOOL device_init_defrag_cb(PSDevice pDevice)
static void device_free_frag_bufs(PSDevice pDevice)
BOOL device_alloc_frag_buf(PSDevice pDevice, PSDeFragControlBlock pDeF)
static int  device_open(struct net_device *dev)
static int  device_close(struct net_device *dev)
static void __devexit vt6656_disconnect(struct usb_interface *intf)
static int device_dma0_tx_80211(struct sk_buff *skb, struct net_device *dev)
static int device_xmit(struct sk_buff *skb, struct net_device *dev)
static unsigned const ethernet_polynomial = 0x04c11db7U;
static inline u32 ether_crc(int length, unsigned char *data)
static unsigned char *kstrstr(const unsigned char *str1,
const unsigned char *str2)
static int Config_FileGetParameter(unsigned char *string,
unsigned char *dest,
unsigned char *source)
static unsigned char *Config_FileOperation(PSDevice pDevice)
static int Read_config_file(PSDevice pDevice)
static void device_set_multi(struct net_device *dev)
static struct net_device_stats *device_get_stats(struct net_device *dev)
static int  device_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
static int ethtool_ioctl(struct net_device *dev, void *useraddr)
MODULE_DEVICE_TABLE(usb, vt6656_table);
static struct usb_driver vt6656_driver = ;
static int __init vt6656_init_module(void)
static void __exit vt6656_cleanup_module(void)
module_init(vt6656_init_module);
module_exit(vt6656_cleanup_module);
