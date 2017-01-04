static inline int dev_requeue_skb(struct sk_buff *skb, struct Qdisc *q)
static inline struct sk_buff *dequeue_skb(struct Qdisc *q)
static inline int handle_dev_cpu_collision(struct sk_buff *skb,
struct netdev_queue *dev_queue,
struct Qdisc *q)
int sch_direct_xmit(struct sk_buff *skb, struct Qdisc *q,
struct net_device *dev, struct netdev_queue *txq,
spinlock_t *root_lock)
static inline int qdisc_restart(struct Qdisc *q)
void __qdisc_run(struct Qdisc *q)
unsigned long dev_trans_start(struct net_device *dev)
EXPORT_SYMBOL(dev_trans_start);
static void dev_watchdog(unsigned long arg)
void __netdev_watchdog_up(struct net_device *dev)
static void dev_watchdog_up(struct net_device *dev)
static void dev_watchdog_down(struct net_device *dev)
void netif_carrier_on(struct net_device *dev)
EXPORT_SYMBOL(netif_carrier_on);
void netif_carrier_off(struct net_device *dev)
EXPORT_SYMBOL(netif_carrier_off);
void netif_notify_peers(struct net_device *dev)
EXPORT_SYMBOL(netif_notify_peers);
static int noop_enqueue(struct sk_buff *skb, struct Qdisc * qdisc)
static struct sk_buff *noop_dequeue(struct Qdisc * qdisc)
struct Qdisc_ops noop_qdisc_ops __read_mostly = ;
static struct netdev_queue noop_netdev_queue = ;
struct Qdisc noop_qdisc = ;
EXPORT_SYMBOL(noop_qdisc);
static struct Qdisc_ops noqueue_qdisc_ops __read_mostly = ;
static struct Qdisc noqueue_qdisc;
static struct netdev_queue noqueue_netdev_queue = ;
static struct Qdisc noqueue_qdisc = ;
static const u8 prio2band[TC_PRIO_MAX + 1] = ;
#define PFIFO_FAST_BANDS 3
struct pfifo_fast_priv ;
static const int bitmap2band[] = ;
static inline struct sk_buff_head *band2list(struct pfifo_fast_priv *priv,
int band)
static int pfifo_fast_enqueue(struct sk_buff *skb, struct Qdisc *qdisc)
static struct sk_buff *pfifo_fast_dequeue(struct Qdisc *qdisc)
static struct sk_buff *pfifo_fast_peek(struct Qdisc *qdisc)
static void pfifo_fast_reset(struct Qdisc *qdisc)
static int pfifo_fast_dump(struct Qdisc *qdisc, struct sk_buff *skb)
static int pfifo_fast_init(struct Qdisc *qdisc, struct nlattr *opt)
struct Qdisc_ops pfifo_fast_ops __read_mostly = ;
EXPORT_SYMBOL(pfifo_fast_ops);
struct Qdisc *qdisc_alloc(struct netdev_queue *dev_queue,
struct Qdisc_ops *ops)
struct Qdisc *qdisc_create_dflt(struct netdev_queue *dev_queue,
struct Qdisc_ops *ops, unsigned int parentid)
EXPORT_SYMBOL(qdisc_create_dflt);
void qdisc_reset(struct Qdisc *qdisc)
EXPORT_SYMBOL(qdisc_reset);
static void qdisc_rcu_free(struct rcu_head *head)
void qdisc_destroy(struct Qdisc *qdisc)
EXPORT_SYMBOL(qdisc_destroy);
struct Qdisc *dev_graft_qdisc(struct netdev_queue *dev_queue,
struct Qdisc *qdisc)
EXPORT_SYMBOL(dev_graft_qdisc);
static void attach_one_default_qdisc(struct net_device *dev,
struct netdev_queue *dev_queue,
void *_unused)
static void attach_default_qdiscs(struct net_device *dev)
static void transition_one_qdisc(struct net_device *dev,
struct netdev_queue *dev_queue,
void *_need_watchdog)
void dev_activate(struct net_device *dev)
EXPORT_SYMBOL(dev_activate);
static void dev_deactivate_queue(struct net_device *dev,
struct netdev_queue *dev_queue,
void *_qdisc_default)
static bool some_qdisc_is_busy(struct net_device *dev)
void dev_deactivate_many(struct list_head *head)
void dev_deactivate(struct net_device *dev)
EXPORT_SYMBOL(dev_deactivate);
static void dev_init_scheduler_queue(struct net_device *dev,
struct netdev_queue *dev_queue,
void *_qdisc)
void dev_init_scheduler(struct net_device *dev)
static void shutdown_scheduler_queue(struct net_device *dev,
struct netdev_queue *dev_queue,
void *_qdisc_default)
void dev_shutdown(struct net_device *dev)
