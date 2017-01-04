static int dvb_net_debug;
module_param(dvb_net_debug, int, 0444);
MODULE_PARM_DESC(dvb_net_debug, "enable debug messages");
#define dprintk(x...) do  while (0)
static inline __u32 iov_crc32( __u32 c, struct kvec *iov, unsigned int cnt )
#define DVB_NET_MULTICAST_MAX 10
#undef ULE_DEBUG
#define MAC_ADDR_PRINTFMT "%.2x:%.2x:%.2x:%.2x:%.2x:%.2x"
#define MAX_ADDR_PRINTFMT_ARGS(macap) (macap)[0],(macap)[1],(macap)[2],(macap)[3],(macap)[4],(macap)[5]
#define isprint(c)	((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
static void hexdump( const unsigned char *buf, unsigned short len )
struct dvb_net_priv ;
static __be16 dvb_net_eth_type_trans(struct sk_buff *skb,
struct net_device *dev)
#define TS_SZ	188
#define TS_SYNC	0x47
#define TS_TEI	0x80
#define TS_SC	0xC0
#define TS_PUSI	0x40
#define TS_AF_A	0x20
#define TS_AF_D	0x10
#define ULE_TEST	0
#define ULE_BRIDGED	1
#define ULE_OPTEXTHDR_PADDING 0
static int ule_test_sndu( struct dvb_net_priv *p )
static int ule_bridged_sndu( struct dvb_net_priv *p )
static int ule_exthdr_padding(struct dvb_net_priv *p)
static int handle_one_ule_extension( struct dvb_net_priv *p )
static int handle_ule_extensions( struct dvb_net_priv *p )
static inline void reset_ule( struct dvb_net_priv *p )
static void dvb_net_ule( struct net_device *dev, const u8 *buf, size_t buf_len )
static int dvb_net_ts_callback(const u8 *buffer1, size_t buffer1_len,
const u8 *buffer2, size_t buffer2_len,
struct dmx_ts_feed *feed, enum dmx_success success)
static void dvb_net_sec(struct net_device *dev,
const u8 *pkt, int pkt_len)
if (pkt[5] & 0x02)
if (pkt[7])
if (!(skb = dev_alloc_skb(pkt_len - 4 - 12 + 14 + 2 - snap)))
skb_reserve(skb, 2);
skb->dev = dev;
eth = (u8 *) skb_put(skb, pkt_len - 12 - 4 + 14 - snap);
memcpy(eth + 14, pkt + 12 + snap, pkt_len - 12 - 4 - snap);
eth[0]=pkt[0x0b];
eth[1]=pkt[0x0a];
eth[2]=pkt[0x09];
eth[3]=pkt[0x08];
eth[4]=pkt[0x04];
eth[5]=pkt[0x03];
eth[6]=eth[7]=eth[8]=eth[9]=eth[10]=eth[11]=0;
if (snap)  else
skb->protocol = dvb_net_eth_type_trans(skb, dev);
stats->rx_packets++;
stats->rx_bytes+=skb->len;
netif_rx(skb);
}
static int dvb_net_sec_callback(const u8 *buffer1, size_t buffer1_len,
const u8 *buffer2, size_t buffer2_len,
struct dmx_section_filter *filter,
enum dmx_success success)
static int dvb_net_tx(struct sk_buff *skb, struct net_device *dev)
static u8 mask_normal[6]=;
static u8 mask_allmulti[6]=;
static u8 mac_allmulti[6]=;
static u8 mask_promisc[6]=;
static int dvb_net_filter_sec_set(struct net_device *dev,
struct dmx_section_filter **secfilter,
u8 *mac, u8 *mac_mask)
static int dvb_net_feed_start(struct net_device *dev)
static int dvb_net_feed_stop(struct net_device *dev)
static int dvb_set_mc_filter(struct net_device *dev, unsigned char *addr)
static void wq_set_multicast_list (struct work_struct *work)
static void dvb_net_set_multicast_list (struct net_device *dev)
static void wq_restart_net_feed (struct work_struct *work)
static int dvb_net_set_mac (struct net_device *dev, void *p)
static int dvb_net_open(struct net_device *dev)
static int dvb_net_stop(struct net_device *dev)
static const struct header_ops dvb_header_ops = ;
static const struct net_device_ops dvb_netdev_ops = ;
static void dvb_net_setup(struct net_device *dev)
static int get_if(struct dvb_net *dvbnet)
static int dvb_net_add_if(struct dvb_net *dvbnet, u16 pid, u8 feedtype)
static int dvb_net_remove_if(struct dvb_net *dvbnet, unsigned long num)
static int dvb_net_do_ioctl(struct file *file,
unsigned int cmd, void *parg)
static long dvb_net_ioctl(struct file *file,
unsigned int cmd, unsigned long arg)
static int dvb_net_close(struct inode *inode, struct file *file)
static const struct file_operations dvb_net_fops = ;
static struct dvb_device dvbdev_net = ;
void dvb_net_release (struct dvb_net *dvbnet)
EXPORT_SYMBOL(dvb_net_release);
int dvb_net_init (struct dvb_adapter *adap, struct dvb_net *dvbnet,
struct dmx_demux *dmx)
EXPORT_SYMBOL(dvb_net_init);
