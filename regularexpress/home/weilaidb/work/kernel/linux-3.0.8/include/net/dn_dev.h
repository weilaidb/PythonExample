#define _NET_DN_DEV_H
struct dn_dev;
struct dn_ifaddr ;
#define DN_DEV_S_RU  0
#define DN_DEV_S_CR  1
#define DN_DEV_S_DS  2
#define DN_DEV_S_RI  3
#define DN_DEV_S_RV  4
#define DN_DEV_S_RC  5
#define DN_DEV_S_OF  6
#define DN_DEV_S_HA  7
struct dn_dev_parms ;
struct dn_dev ;
struct dn_short_packet  __packed;
struct dn_long_packet  __packed;
struct endnode_hello_message  __packed;
struct rtnode_hello_message  __packed;
extern void dn_dev_init(void);
extern void dn_dev_cleanup(void);
extern int dn_dev_ioctl(unsigned int cmd, void __user *arg);
extern void dn_dev_devices_off(void);
extern void dn_dev_devices_on(void);
extern void dn_dev_init_pkt(struct sk_buff *skb);
extern void dn_dev_veri_pkt(struct sk_buff *skb);
extern void dn_dev_hello(struct sk_buff *skb);
extern void dn_dev_up(struct net_device *);
extern void dn_dev_down(struct net_device *);
extern int dn_dev_set_default(struct net_device *dev, int force);
extern struct net_device *dn_dev_get_default(void);
extern int dn_dev_bind_default(__le16 *addr);
extern int register_dnaddr_notifier(struct notifier_block *nb);
extern int unregister_dnaddr_notifier(struct notifier_block *nb);
static inline int dn_dev_islocal(struct net_device *dev, __le16 addr)
