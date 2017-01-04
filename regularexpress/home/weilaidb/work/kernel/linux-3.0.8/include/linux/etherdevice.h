#define _LINUX_ETHERDEVICE_H
extern __be16		eth_type_trans(struct sk_buff *skb, struct net_device *dev);
extern const struct header_ops eth_header_ops;
extern int eth_header(struct sk_buff *skb, struct net_device *dev,
unsigned short type,
const void *daddr, const void *saddr, unsigned len);
extern int eth_rebuild_header(struct sk_buff *skb);
extern int eth_header_parse(const struct sk_buff *skb, unsigned char *haddr);
extern int eth_header_cache(const struct neighbour *neigh, struct hh_cache *hh);
extern void eth_header_cache_update(struct hh_cache *hh,
const struct net_device *dev,
const unsigned char *haddr);
extern int eth_mac_addr(struct net_device *dev, void *p);
extern int eth_change_mtu(struct net_device *dev, int new_mtu);
extern int eth_validate_addr(struct net_device *dev);
extern struct net_device *alloc_etherdev_mqs(int sizeof_priv, unsigned int txqs,
unsigned int rxqs);
#define alloc_etherdev(sizeof_priv) alloc_etherdev_mq(sizeof_priv, 1)
#define alloc_etherdev_mq(sizeof_priv, count) alloc_etherdev_mqs(sizeof_priv, count, count)
static inline int is_zero_ether_addr(const u8 *addr)
static inline int is_multicast_ether_addr(const u8 *addr)
static inline int is_local_ether_addr(const u8 *addr)
static inline int is_broadcast_ether_addr(const u8 *addr)
static inline int is_unicast_ether_addr(const u8 *addr)
static inline int is_valid_ether_addr(const u8 *addr)
static inline void random_ether_addr(u8 *addr)
static inline void dev_hw_addr_random(struct net_device *dev, u8 *hwaddr)
static inline unsigned compare_ether_addr(const u8 *addr1, const u8 *addr2)
static inline unsigned long zap_last_2bytes(unsigned long value)
static inline unsigned compare_ether_addr_64bits(const u8 addr1[6+2],
const u8 addr2[6+2])
static inline bool is_etherdev_addr(const struct net_device *dev,
const u8 addr[6 + 2])
static inline unsigned long compare_ether_header(const void *a, const void *b)
