#define __HDLC_H
#define HDLC_MAX_MTU 1500
struct hdlc_proto ;
typedef struct hdlc_device  hdlc_device;
int hdlc_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd);
#define register_hdlc_device(dev)	register_netdev(dev)
void unregister_hdlc_device(struct net_device *dev);
void register_hdlc_protocol(struct hdlc_proto *proto);
void unregister_hdlc_protocol(struct hdlc_proto *proto);
struct net_device *alloc_hdlcdev(void *priv);
static inline struct hdlc_device* dev_to_hdlc(struct net_device *dev)
static __inline__ void debug_frame(const struct sk_buff *skb)
int hdlc_open(struct net_device *dev);
void hdlc_close(struct net_device *dev);
int hdlc_change_mtu(struct net_device *dev, int new_mtu);
netdev_tx_t hdlc_start_xmit(struct sk_buff *skb, struct net_device *dev);
int attach_hdlc_protocol(struct net_device *dev, struct hdlc_proto *proto,
size_t size);
void detach_hdlc_protocol(struct net_device *dev);
static __inline__ __be16 hdlc_type_trans(struct sk_buff *skb,
struct net_device *dev)
