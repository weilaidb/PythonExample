static __inline__ int isdn_net_device_started(isdn_net_dev *n)
static __inline__ void isdn_net_device_wake_queue(isdn_net_local *lp)
static __inline__ void isdn_net_device_stop_queue(isdn_net_local *lp)
static __inline__ int isdn_net_device_busy(isdn_net_local *lp)
static __inline__ void isdn_net_inc_frame_cnt(isdn_net_local *lp)
static __inline__ void isdn_net_dec_frame_cnt(isdn_net_local *lp)
static __inline__ void isdn_net_zero_frame_cnt(isdn_net_local *lp)
#define ISDN_NET_TX_TIMEOUT (20*HZ)
static int isdn_net_force_dial_lp(isdn_net_local *);
static netdev_tx_t isdn_net_start_xmit(struct sk_buff *,
struct net_device *);
static void isdn_net_ciscohdlck_connected(isdn_net_local *lp);
static void isdn_net_ciscohdlck_disconnected(isdn_net_local *lp);
char *isdn_net_revision = "$Revision: 1.1.2.2 $";
static void
isdn_net_unreachable(struct net_device *dev, struct sk_buff *skb, char *reason)
static void
isdn_net_reset(struct net_device *dev)
static int
isdn_net_open(struct net_device *dev)
static void
isdn_net_bind_channel(isdn_net_local * lp, int idx)
static void
isdn_net_unbind_channel(isdn_net_local * lp)
static unsigned long last_jiffies = -HZ;
void
isdn_net_autohup(void)
static void isdn_net_lp_disconnected(isdn_net_local *lp)
int
isdn_net_stat_callback(int idx, isdn_ctrl *c)
void
isdn_net_dial(void)
void
isdn_net_hangup(struct net_device *d)
typedef struct  ip_ports;
static void
isdn_net_log_skb(struct sk_buff * skb, isdn_net_local * lp)
void isdn_net_write_super(isdn_net_local *lp, struct sk_buff *skb)
static void isdn_net_softint(struct work_struct *work)
void isdn_net_writebuf_skb(isdn_net_local *lp, struct sk_buff *skb)
static int
isdn_net_xmit(struct net_device *ndev, struct sk_buff *skb)
static void
isdn_net_adjust_hdr(struct sk_buff *skb, struct net_device *dev)
static void isdn_net_tx_timeout(struct net_device * ndev)
static netdev_tx_t
isdn_net_start_xmit(struct sk_buff *skb, struct net_device *ndev)
static int
isdn_net_close(struct net_device *dev)
static struct net_device_stats *
isdn_net_get_stats(struct net_device *dev)
static __be16
isdn_net_type_trans(struct sk_buff *skb, struct net_device *dev)
static struct sk_buff*
isdn_net_ciscohdlck_alloc_skb(isdn_net_local *lp, int len)
static int
isdn_ciscohdlck_dev_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
static int isdn_net_ioctl(struct net_device *dev,
struct ifreq *ifr, int cmd)
static void
isdn_net_ciscohdlck_slarp_send_keepalive(unsigned long data)
static void
isdn_net_ciscohdlck_slarp_send_request(isdn_net_local *lp)
static void
isdn_net_ciscohdlck_connected(isdn_net_local *lp)
static void
isdn_net_ciscohdlck_disconnected(isdn_net_local *lp)
static void
isdn_net_ciscohdlck_slarp_send_reply(isdn_net_local *lp)
static void
isdn_net_ciscohdlck_slarp_in(isdn_net_local *lp, struct sk_buff *skb)
static void
isdn_net_ciscohdlck_receive(isdn_net_local *lp, struct sk_buff *skb)
static void
isdn_net_receive(struct net_device *ndev, struct sk_buff *skb)
int
isdn_net_rcv_skb(int idx, struct sk_buff *skb)
static int isdn_net_header(struct sk_buff *skb, struct net_device *dev,
unsigned short type,
const void *daddr, const void *saddr, unsigned plen)
static int
isdn_net_rebuild_header(struct sk_buff *skb)
static int isdn_header_cache(const struct neighbour *neigh, struct hh_cache *hh)
static void isdn_header_cache_update(struct hh_cache *hh,
const struct net_device *dev,
const unsigned char *haddr)
static const struct header_ops isdn_header_ops = ;
static int
isdn_net_init(struct net_device *ndev)
static void
isdn_net_swapbind(int drvidx)
static void
isdn_net_swap_usage(int i1, int i2)
int
isdn_net_find_icall(int di, int ch, int idx, setup_parm *setup)
isdn_net_dev *
isdn_net_findif(char *name)
static int
isdn_net_force_dial_lp(isdn_net_local * lp)
int
isdn_net_dial_req(isdn_net_local * lp)
int
isdn_net_force_dial(char *name)
static const struct net_device_ops isdn_netdev_ops = ;
static void _isdn_setup(struct net_device *dev)
char *
isdn_net_new(char *name, struct net_device *master)
char *
isdn_net_newslave(char *parm)
int
isdn_net_setcfg(isdn_net_ioctl_cfg * cfg)
int
isdn_net_getcfg(isdn_net_ioctl_cfg * cfg)
int
isdn_net_addphone(isdn_net_ioctl_phone * phone)
int
isdn_net_getphones(isdn_net_ioctl_phone * phone, char __user *phones)
int
isdn_net_getpeer(isdn_net_ioctl_phone *phone, isdn_net_ioctl_phone __user *peer)
int
isdn_net_delphone(isdn_net_ioctl_phone * phone)
static int
isdn_net_rmallphone(isdn_net_dev * p)
int
isdn_net_force_hangup(char *name)
static int
isdn_net_realrm(isdn_net_dev * p, isdn_net_dev * q)
int
isdn_net_rm(char *name)
int
isdn_net_rmall(void)
