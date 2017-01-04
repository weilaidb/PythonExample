#define VLAN_NONE 0xfff
static inline unsigned int vlan_prio(const struct l2t_entry *e)
static inline unsigned int arp_hash(u32 key, int ifindex,
const struct l2t_data *d)
static inline void neigh_replace(struct l2t_entry *e, struct neighbour *n)
static int setup_l2e_send_pending(struct t3cdev *dev, struct sk_buff *skb,
struct l2t_entry *e)
static inline void arpq_enqueue(struct l2t_entry *e, struct sk_buff *skb)
int t3_l2t_send_slow(struct t3cdev *dev, struct sk_buff *skb,
struct l2t_entry *e)
EXPORT_SYMBOL(t3_l2t_send_slow);
void t3_l2t_send_event(struct t3cdev *dev, struct l2t_entry *e)
EXPORT_SYMBOL(t3_l2t_send_event);
static struct l2t_entry *alloc_l2e(struct l2t_data *d)
void t3_l2e_free(struct l2t_data *d, struct l2t_entry *e)
EXPORT_SYMBOL(t3_l2e_free);
static inline void reuse_entry(struct l2t_entry *e, struct neighbour *neigh)
struct l2t_entry *t3_l2t_get(struct t3cdev *cdev, struct neighbour *neigh,
struct net_device *dev)
EXPORT_SYMBOL(t3_l2t_get);
static void handle_failed_resolution(struct t3cdev *dev, struct sk_buff_head *arpq)
void t3_l2t_update(struct t3cdev *dev, struct neighbour *neigh)
struct l2t_data *t3_init_l2t(unsigned int l2t_capacity)
void t3_free_l2t(struct l2t_data *d)
