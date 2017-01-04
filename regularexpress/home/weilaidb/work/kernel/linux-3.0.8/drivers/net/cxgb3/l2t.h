#define _CHELSIO_L2T_H
enum ;
struct neighbour;
struct sk_buff;
struct l2t_entry ;
struct l2t_data ;
typedef void (*arp_failure_handler_func)(struct t3cdev * dev,
struct sk_buff * skb);
struct l2t_skb_cb ;
#define L2T_SKB_CB(skb) ((struct l2t_skb_cb *)(skb)->cb)
static inline void set_arp_failure_handler(struct sk_buff *skb,
arp_failure_handler_func hnd)
#define L2DATA(cdev) (rcu_dereference((cdev)->l2opt))
#define W_TCB_L2T_IX    0
#define S_TCB_L2T_IX    7
#define M_TCB_L2T_IX    0x7ffULL
#define V_TCB_L2T_IX(x) ((x) << S_TCB_L2T_IX)
void t3_l2e_free(struct l2t_data *d, struct l2t_entry *e);
void t3_l2t_update(struct t3cdev *dev, struct neighbour *neigh);
struct l2t_entry *t3_l2t_get(struct t3cdev *cdev, struct neighbour *neigh,
struct net_device *dev);
int t3_l2t_send_slow(struct t3cdev *dev, struct sk_buff *skb,
struct l2t_entry *e);
void t3_l2t_send_event(struct t3cdev *dev, struct l2t_entry *e);
struct l2t_data *t3_init_l2t(unsigned int l2t_capacity);
void t3_free_l2t(struct l2t_data *d);
int cxgb3_ofld_send(struct t3cdev *dev, struct sk_buff *skb);
static inline int l2t_send(struct t3cdev *dev, struct sk_buff *skb,
struct l2t_entry *e)
static inline void l2t_release(struct t3cdev *t, struct l2t_entry *e)
static inline void l2t_hold(struct l2t_data *d, struct l2t_entry *e)
