#define WIRELESS_SPY
typedef struct iw_statistics iw_stats;
typedef u_char mac_addr[ETH_ALEN];
static int ray_config(struct pcmcia_device *link);
static void ray_release(struct pcmcia_device *link);
static void ray_detach(struct pcmcia_device *p_dev);
static int ray_dev_close(struct net_device *dev);
static int ray_dev_config(struct net_device *dev, struct ifmap *map);
static struct net_device_stats *ray_get_stats(struct net_device *dev);
static int ray_dev_init(struct net_device *dev);
static int ray_open(struct net_device *dev);
static netdev_tx_t ray_dev_start_xmit(struct sk_buff *skb,
struct net_device *dev);
static void set_multicast_list(struct net_device *dev);
static void ray_update_multi_list(struct net_device *dev, int all);
static int translate_frame(ray_dev_t *local, struct tx_msg __iomem *ptx,
unsigned char *data, int len);
static void ray_build_header(ray_dev_t *local, struct tx_msg __iomem *ptx,
UCHAR msg_type, unsigned char *data);
static void untranslate(ray_dev_t *local, struct sk_buff *skb, int len);
static iw_stats *ray_get_wireless_stats(struct net_device *dev);
static const struct iw_handler_def ray_handler_def;
static void authenticate(ray_dev_t *local);
static int build_auth_frame(ray_dev_t *local, UCHAR *dest, int auth_type);
static void authenticate_timeout(u_long);
static int get_free_ccs(ray_dev_t *local);
static int get_free_tx_ccs(ray_dev_t *local);
static void init_startup_params(ray_dev_t *local);
static int parse_addr(char *in_str, UCHAR *out);
static int ray_hw_xmit(unsigned char *data, int len, struct net_device *dev, UCHAR type);
static int ray_init(struct net_device *dev);
static int interrupt_ecf(ray_dev_t *local, int ccs);
static void ray_reset(struct net_device *dev);
static void ray_update_parm(struct net_device *dev, UCHAR objid, UCHAR *value, int len);
static void verify_dl_startup(u_long);
static irqreturn_t ray_interrupt(int reg, void *dev_id);
static void clear_interrupt(ray_dev_t *local);
static void rx_deauthenticate(ray_dev_t *local, struct rcs __iomem *prcs,
unsigned int pkt_addr, int rx_len);
static int copy_from_rx_buff(ray_dev_t *local, UCHAR *dest, int pkt_addr, int len);
static void ray_rx(struct net_device *dev, ray_dev_t *local, struct rcs __iomem *prcs);
static void release_frag_chain(ray_dev_t *local, struct rcs __iomem *prcs);
static void rx_authenticate(ray_dev_t *local, struct rcs __iomem *prcs,
unsigned int pkt_addr, int rx_len);
static void rx_data(struct net_device *dev, struct rcs __iomem *prcs,
unsigned int pkt_addr, int rx_len);
static void associate(ray_dev_t *local);
static int dl_startup_params(struct net_device *dev);
static void join_net(u_long local);
static void start_net(u_long local);
static int net_type = ADHOC;
static int hop_dwell = 128;
static int beacon_period = 256;
static int psm;
static char *essid;
static int translate = 1;
static int country = USA;
static int sniffer;
static int bc;
static char *phy_addr = NULL;
static unsigned int ray_mem_speed = 500;
static struct pcmcia_device *this_device = NULL;
MODULE_AUTHOR("Corey Thomas <corey@world.std.com>");
MODULE_DESCRIPTION("Raylink/WebGear wireless LAN driver");
MODULE_LICENSE("GPL");
module_param(net_type, int, 0);
module_param(hop_dwell, int, 0);
module_param(beacon_period, int, 0);
module_param(psm, int, 0);
module_param(essid, charp, 0);
module_param(translate, int, 0);
module_param(country, int, 0);
module_param(sniffer, int, 0);
module_param(bc, int, 0);
module_param(phy_addr, charp, 0);
module_param(ray_mem_speed, int, 0);
static const UCHAR b5_default_startup_parms[] = ;
static const UCHAR b4_default_startup_parms[] = ;
static const u8 eth2_llc[] = ;
static const char hop_pattern_length[] = ;
static const char rcsid[] =
"Raylink/WebGear wireless LAN - Corey <Thomas corey@world.std.com>";
static const struct net_device_ops ray_netdev_ops = ;
static int ray_probe(struct pcmcia_device *p_dev)
static void ray_detach(struct pcmcia_device *link)
#define MAX_TUPLE_SIZE 128
static int ray_config(struct pcmcia_device *link)
static inline struct ccs __iomem *ccs_base(ray_dev_t *dev)
static inline struct rcs __iomem *rcs_base(ray_dev_t *dev)
static int ray_init(struct net_device *dev)
static int dl_startup_params(struct net_device *dev)
static void init_startup_params(ray_dev_t *local)
else
local->sparm.b4.a_network_type = net_type & 0x01;
local->sparm.b4.a_acting_as_ap_status = TYPE_STA;
if (essid != NULL)
strncpy(local->sparm.b4.a_current_ess_id, essid, ESSID_SIZE);
}
static void verify_dl_startup(u_long data)
static void start_net(u_long data)
static void join_net(u_long data)
static void ray_release(struct pcmcia_device *link)
static int ray_suspend(struct pcmcia_device *link)
static int ray_resume(struct pcmcia_device *link)
static int ray_dev_init(struct net_device *dev)
static int ray_dev_config(struct net_device *dev, struct ifmap *map)
static netdev_tx_t ray_dev_start_xmit(struct sk_buff *skb,
struct net_device *dev)
static int ray_hw_xmit(unsigned char *data, int len, struct net_device *dev,
UCHAR msg_type)
static int translate_frame(ray_dev_t *local, struct tx_msg __iomem *ptx,
unsigned char *data, int len)
static void ray_build_header(ray_dev_t *local, struct tx_msg __iomem *ptx,
UCHAR msg_type, unsigned char *data)
static int ray_get_name(struct net_device *dev, struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ray_set_freq(struct net_device *dev, struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ray_get_freq(struct net_device *dev, struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ray_set_essid(struct net_device *dev, struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ray_get_essid(struct net_device *dev, struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ray_get_wap(struct net_device *dev, struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ray_set_rate(struct net_device *dev, struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ray_get_rate(struct net_device *dev, struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ray_set_rts(struct net_device *dev, struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ray_get_rts(struct net_device *dev, struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ray_set_frag(struct net_device *dev, struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ray_get_frag(struct net_device *dev, struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ray_set_mode(struct net_device *dev, struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ray_get_mode(struct net_device *dev, struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ray_get_range(struct net_device *dev, struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ray_set_framing(struct net_device *dev, struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ray_get_framing(struct net_device *dev, struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ray_get_country(struct net_device *dev, struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int ray_commit(struct net_device *dev, struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static iw_stats *ray_get_wireless_stats(struct net_device *dev)
static const iw_handler ray_handler[] = ;
#define SIOCSIPFRAMING	SIOCIWFIRSTPRIV
#define SIOCGIPFRAMING	SIOCIWFIRSTPRIV + 1
#define SIOCGIPCOUNTRY	SIOCIWFIRSTPRIV + 3
static const iw_handler ray_private_handler[] = ;
static const struct iw_priv_args ray_private_args[] = ;
static const struct iw_handler_def ray_handler_def = ;
static int ray_open(struct net_device *dev)
static int ray_dev_close(struct net_device *dev)
static void ray_reset(struct net_device *dev)
static int interrupt_ecf(ray_dev_t *local, int ccs)
static int get_free_tx_ccs(ray_dev_t *local)
static int get_free_ccs(ray_dev_t *local)
static void authenticate_timeout(u_long data)
static int parse_addr(char *in_str, UCHAR *out)
static struct net_device_stats *ray_get_stats(struct net_device *dev)
static void ray_update_parm(struct net_device *dev, UCHAR objid, UCHAR *value,
int len)
static void ray_update_multi_list(struct net_device *dev, int all)
static void set_multicast_list(struct net_device *dev)
static irqreturn_t ray_interrupt(int irq, void *dev_id)
static void ray_rx(struct net_device *dev, ray_dev_t *local,
struct rcs __iomem *prcs)
static void rx_data(struct net_device *dev, struct rcs __iomem *prcs,
unsigned int pkt_addr, int rx_len)
static void untranslate(ray_dev_t *local, struct sk_buff *skb, int len)
static int copy_from_rx_buff(ray_dev_t *local, UCHAR *dest, int pkt_addr,
int length)
static void release_frag_chain(ray_dev_t *local, struct rcs __iomem *prcs)
static void authenticate(ray_dev_t *local)
static void rx_authenticate(ray_dev_t *local, struct rcs __iomem *prcs,
unsigned int pkt_addr, int rx_len)
static void associate(ray_dev_t *local)
static void rx_deauthenticate(ray_dev_t *local, struct rcs __iomem *prcs,
unsigned int pkt_addr, int rx_len)
static void clear_interrupt(ray_dev_t *local)
#define MAXDATA (PAGE_SIZE - 80)
static const char *card_status[] = ;
static const char *nettype[] = ;
static const char *framing[] =
;
static int ray_cs_proc_show(struct seq_file *m, void *v)
static int ray_cs_proc_open(struct inode *inode, struct file *file)
static const struct file_operations ray_cs_proc_fops = ;
static int build_auth_frame(ray_dev_t *local, UCHAR *dest, int auth_type)
static ssize_t ray_cs_essid_proc_write(struct file *file,
const char __user *buffer, size_t count, loff_t *pos)
static const struct file_operations ray_cs_essid_proc_fops = ;
static ssize_t int_proc_write(struct file *file, const char __user *buffer,
size_t count, loff_t *pos)
static const struct file_operations int_proc_fops = ;
static const struct pcmcia_device_id ray_ids[] = ;
MODULE_DEVICE_TABLE(pcmcia, ray_ids);
static struct pcmcia_driver ray_driver = ;
static int __init init_ray_cs(void)
static void __exit exit_ray_cs(void)
module_init(init_ray_cs);
module_exit(exit_ray_cs);
