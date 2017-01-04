#define CYCLOMX_X25_DEBUG 1
#define CYCX_X25_MAX_CMD_RETRY 5
#define CYCX_X25_CHAN_MTU 2048
struct cycx_x25_channel ;
static int cycx_wan_update(struct wan_device *wandev),
cycx_wan_new_if(struct wan_device *wandev, struct net_device *dev,
wanif_conf_t *conf),
cycx_wan_del_if(struct wan_device *wandev, struct net_device *dev);
static int cycx_netdevice_init(struct net_device *dev);
static int cycx_netdevice_open(struct net_device *dev);
static int cycx_netdevice_stop(struct net_device *dev);
static int cycx_netdevice_hard_header(struct sk_buff *skb,
struct net_device *dev, u16 type,
const void *daddr, const void *saddr,
unsigned len);
static int cycx_netdevice_rebuild_header(struct sk_buff *skb);
static netdev_tx_t cycx_netdevice_hard_start_xmit(struct sk_buff *skb,
struct net_device *dev);
static struct net_device_stats *
cycx_netdevice_get_stats(struct net_device *dev);
static void cycx_x25_irq_handler(struct cycx_device *card),
cycx_x25_irq_tx(struct cycx_device *card, struct cycx_x25_cmd *cmd),
cycx_x25_irq_rx(struct cycx_device *card, struct cycx_x25_cmd *cmd),
cycx_x25_irq_log(struct cycx_device *card,
struct cycx_x25_cmd *cmd),
cycx_x25_irq_stat(struct cycx_device *card,
struct cycx_x25_cmd *cmd),
cycx_x25_irq_connect_confirm(struct cycx_device *card,
struct cycx_x25_cmd *cmd),
cycx_x25_irq_disconnect_confirm(struct cycx_device *card,
struct cycx_x25_cmd *cmd),
cycx_x25_irq_connect(struct cycx_device *card,
struct cycx_x25_cmd *cmd),
cycx_x25_irq_disconnect(struct cycx_device *card,
struct cycx_x25_cmd *cmd),
cycx_x25_irq_spurious(struct cycx_device *card,
struct cycx_x25_cmd *cmd);
static int cycx_x25_configure(struct cycx_device *card,
struct cycx_x25_config *conf),
cycx_x25_get_stats(struct cycx_device *card),
cycx_x25_send(struct cycx_device *card, u8 link, u8 lcn, u8 bitm,
int len, void *buf),
cycx_x25_connect_response(struct cycx_device *card,
struct cycx_x25_channel *chan),
cycx_x25_disconnect_response(struct cycx_device *card, u8 link,
u8 lcn);
static int cycx_x25_chan_connect(struct net_device *dev),
cycx_x25_chan_send(struct net_device *dev, struct sk_buff *skb);
static void cycx_x25_chan_disconnect(struct net_device *dev),
cycx_x25_chan_send_event(struct net_device *dev, u8 event);
static void cycx_x25_set_chan_state(struct net_device *dev, u8 state),
cycx_x25_chan_timer(unsigned long d);
static void nibble_to_byte(u8 *s, u8 *d, u8 len, u8 nibble),
reset_timer(struct net_device *dev);
static u8 bps_to_speed_code(u32 bps);
static u8 cycx_log2(u32 n);
static unsigned dec_to_uint(u8 *str, int len);
static struct net_device *cycx_x25_get_dev_by_lcn(struct wan_device *wandev,
s16 lcn);
static struct net_device *
cycx_x25_get_dev_by_dte_addr(struct wan_device *wandev, char *dte);
static void cycx_x25_chan_setup(struct net_device *dev);
static void hex_dump(char *msg, unsigned char *p, int len);
static void cycx_x25_dump_config(struct cycx_x25_config *conf);
static void cycx_x25_dump_stats(struct cycx_x25_stats *stats);
static void cycx_x25_dump_devs(struct wan_device *wandev);
#define hex_dump(msg, p, len)
#define cycx_x25_dump_config(conf)
#define cycx_x25_dump_stats(stats)
#define cycx_x25_dump_devs(wandev)
int cycx_x25_wan_init(struct cycx_device *card, wandev_conf_t *conf)
static int cycx_wan_update(struct wan_device *wandev)
static int cycx_wan_new_if(struct wan_device *wandev, struct net_device *dev,
wanif_conf_t *conf)
static int cycx_wan_del_if(struct wan_device *wandev, struct net_device *dev)
static const struct header_ops cycx_header_ops = ;
static const struct net_device_ops cycx_netdev_ops = ;
static void cycx_x25_chan_setup(struct net_device *dev)
static int cycx_netdevice_init(struct net_device *dev)
static int cycx_netdevice_open(struct net_device *dev)
static int cycx_netdevice_stop(struct net_device *dev)
static int cycx_netdevice_hard_header(struct sk_buff *skb,
struct net_device *dev, u16 type,
const void *daddr, const void *saddr,
unsigned len)
static int cycx_netdevice_rebuild_header(struct sk_buff *skb)
static netdev_tx_t cycx_netdevice_hard_start_xmit(struct sk_buff *skb,
struct net_device *dev)
static struct net_device_stats *cycx_netdevice_get_stats(struct net_device *dev)
static void cycx_x25_irq_handler(struct cycx_device *card)
static void cycx_x25_irq_tx(struct cycx_device *card, struct cycx_x25_cmd *cmd)
static void cycx_x25_irq_rx(struct cycx_device *card, struct cycx_x25_cmd *cmd)
static void cycx_x25_irq_connect(struct cycx_device *card,
struct cycx_x25_cmd *cmd)
static void cycx_x25_irq_connect_confirm(struct cycx_device *card,
struct cycx_x25_cmd *cmd)
static void cycx_x25_irq_disconnect_confirm(struct cycx_device *card,
struct cycx_x25_cmd *cmd)
static void cycx_x25_irq_disconnect(struct cycx_device *card,
struct cycx_x25_cmd *cmd)
static void cycx_x25_irq_log(struct cycx_device *card, struct cycx_x25_cmd *cmd)
static void cycx_x25_irq_stat(struct cycx_device *card,
struct cycx_x25_cmd *cmd)
static void cycx_x25_irq_spurious(struct cycx_device *card,
struct cycx_x25_cmd *cmd)
static void hex_dump(char *msg, unsigned char *p, int len)
static int x25_exec(struct cycx_device *card, int command, int link,
void *d1, int len1, void *d2, int len2)
static int cycx_x25_configure(struct cycx_device *card,
struct cycx_x25_config *conf)
static int cycx_x25_get_stats(struct cycx_device *card)
static int byte_to_nibble(u8 *s, u8 *d, char *nibble)
static void nibble_to_byte(u8 *s, u8 *d, u8 len, u8 nibble)
static int x25_place_call(struct cycx_device *card,
struct cycx_x25_channel *chan)
static int cycx_x25_connect_response(struct cycx_device *card,
struct cycx_x25_channel *chan)
static int cycx_x25_disconnect_response(struct cycx_device *card, u8 link,
u8 lcn)
static int x25_clear_call(struct cycx_device *card, u8 link, u8 lcn, u8 cause,
u8 diagn)
static int cycx_x25_send(struct cycx_device *card, u8 link, u8 lcn, u8 bitm,
int len, void *buf)
static struct net_device *cycx_x25_get_dev_by_lcn(struct wan_device *wandev,
s16 lcn)
static struct net_device *
cycx_x25_get_dev_by_dte_addr(struct wan_device *wandev, char *dte)
static int cycx_x25_chan_connect(struct net_device *dev)
static void cycx_x25_chan_disconnect(struct net_device *dev)
static void cycx_x25_chan_timer(unsigned long d)
static void cycx_x25_set_chan_state(struct net_device *dev, u8 state)
static int cycx_x25_chan_send(struct net_device *dev, struct sk_buff *skb)
static void cycx_x25_chan_send_event(struct net_device *dev, u8 event)
static u8 bps_to_speed_code(u32 bps)
static u8 cycx_log2(u32 n)
static unsigned dec_to_uint(u8 *str, int len)
static void reset_timer(struct net_device *dev)
static void cycx_x25_dump_config(struct cycx_x25_config *conf)
static void cycx_x25_dump_stats(struct cycx_x25_stats *stats)
static void cycx_x25_dump_devs(struct wan_device *wandev)
