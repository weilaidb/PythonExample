#define CAN_DEV_H
enum can_mode ;
struct can_priv ;
#define get_can_dlc(i)	(min_t(__u8, (i), 8))
static inline int can_dropped_invalid_skb(struct net_device *dev,
struct sk_buff *skb)
struct net_device *alloc_candev(int sizeof_priv, unsigned int echo_skb_max);
void free_candev(struct net_device *dev);
int open_candev(struct net_device *dev);
void close_candev(struct net_device *dev);
int register_candev(struct net_device *dev);
void unregister_candev(struct net_device *dev);
int can_restart_now(struct net_device *dev);
void can_bus_off(struct net_device *dev);
void can_put_echo_skb(struct sk_buff *skb, struct net_device *dev,
unsigned int idx);
void can_get_echo_skb(struct net_device *dev, unsigned int idx);
void can_free_echo_skb(struct net_device *dev, unsigned int idx);
struct sk_buff *alloc_can_skb(struct net_device *dev, struct can_frame **cf);
struct sk_buff *alloc_can_err_skb(struct net_device *dev,
struct can_frame **cf);
