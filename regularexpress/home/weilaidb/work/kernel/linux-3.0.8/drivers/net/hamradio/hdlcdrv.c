#define KISS_VERBOSE
#define PARAM_TXDELAY   1
#define PARAM_PERSIST   2
#define PARAM_SLOTTIME  3
#define PARAM_TXTAIL    4
#define PARAM_FULLDUP   5
#define PARAM_HARDWARE  6
#define PARAM_RETURN    255
static inline void append_crc_ccitt(unsigned char *buffer, int len)
static inline int check_crc_ccitt(const unsigned char *buf, int cnt)
#define tenms_to_2flags(s,tenms) ((tenms * s->par.bitrate) / 100 / 16)
static int hdlc_rx_add_bytes(struct hdlcdrv_state *s, unsigned int bits,
int num)
static void hdlc_rx_flag(struct net_device *dev, struct hdlcdrv_state *s)
void hdlcdrv_receiver(struct net_device *dev, struct hdlcdrv_state *s)
static inline void do_kiss_params(struct hdlcdrv_state *s,
unsigned char *data, unsigned long len)
void hdlcdrv_transmitter(struct net_device *dev, struct hdlcdrv_state *s)
static void start_tx(struct net_device *dev, struct hdlcdrv_state *s)
void hdlcdrv_arbitrate(struct net_device *dev, struct hdlcdrv_state *s)
static netdev_tx_t hdlcdrv_send_packet(struct sk_buff *skb,
struct net_device *dev)
static int hdlcdrv_set_mac_address(struct net_device *dev, void *addr)
static int hdlcdrv_open(struct net_device *dev)
static int hdlcdrv_close(struct net_device *dev)
static int hdlcdrv_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
static const struct net_device_ops hdlcdrv_netdev = ;
static void hdlcdrv_setup(struct net_device *dev)
struct net_device *hdlcdrv_register(const struct hdlcdrv_ops *ops,
unsigned int privsize, const char *ifname,
unsigned int baseaddr, unsigned int irq,
unsigned int dma)
void hdlcdrv_unregister(struct net_device *dev)
EXPORT_SYMBOL(hdlcdrv_receiver);
EXPORT_SYMBOL(hdlcdrv_transmitter);
EXPORT_SYMBOL(hdlcdrv_arbitrate);
EXPORT_SYMBOL(hdlcdrv_register);
EXPORT_SYMBOL(hdlcdrv_unregister);
static int __init hdlcdrv_init_driver(void)
static void __exit hdlcdrv_cleanup_driver(void)
MODULE_AUTHOR("Thomas M. Sailer, sailer@ife.ee.ethz.ch, hb9jnx@hb9w.che.eu");
MODULE_DESCRIPTION("Packet Radio network interface HDLC encoder/decoder");
MODULE_LICENSE("GPL");
module_init(hdlcdrv_init_driver);
module_exit(hdlcdrv_cleanup_driver);
