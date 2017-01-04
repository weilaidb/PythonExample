#define __CXGB4_L2T_H
struct adapter;
struct l2t_data;
struct neighbour;
struct net_device;
struct file_operations;
struct cpl_l2t_write_rpl;
struct l2t_entry ;
typedef void (*arp_err_handler_t)(void *handle, struct sk_buff *skb);
struct l2t_skb_cb ;
#define L2T_SKB_CB(skb) ((struct l2t_skb_cb *)(skb)->cb)
static inline void t4_set_arp_err_handler(struct sk_buff *skb, void *handle,
arp_err_handler_t handler)
void cxgb4_l2t_release(struct l2t_entry *e);
int cxgb4_l2t_send(struct net_device *dev, struct sk_buff *skb,
struct l2t_entry *e);
struct l2t_entry *cxgb4_l2t_get(struct l2t_data *d, struct neighbour *neigh,
const struct net_device *physdev,
unsigned int priority);
void t4_l2t_update(struct adapter *adap, struct neighbour *neigh);
struct l2t_data *t4_init_l2t(void);
void do_l2t_write_rpl(struct adapter *p, const struct cpl_l2t_write_rpl *rpl);
extern const struct file_operations t4_l2t_fops;
