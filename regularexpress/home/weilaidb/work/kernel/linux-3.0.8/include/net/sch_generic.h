#define __NET_SCHED_GENERIC_H
struct Qdisc_ops;
struct qdisc_walker;
struct tcf_walker;
struct module;
struct qdisc_rate_table ;
enum qdisc_state_t ;
enum qdisc___state_t ;
struct qdisc_size_table ;
struct Qdisc ;
static inline bool qdisc_is_running(const struct Qdisc *qdisc)
static inline bool qdisc_run_begin(struct Qdisc *qdisc)
static inline void qdisc_run_end(struct Qdisc *qdisc)
static inline bool qdisc_is_throttled(const struct Qdisc *qdisc)
static inline void qdisc_throttled(struct Qdisc *qdisc)
static inline void qdisc_unthrottled(struct Qdisc *qdisc)
struct Qdisc_class_ops ;
struct Qdisc_ops ;
struct tcf_result ;
struct tcf_proto_ops ;
struct tcf_proto ;
struct qdisc_skb_cb ;
static inline int qdisc_qlen(struct Qdisc *q)
static inline struct qdisc_skb_cb *qdisc_skb_cb(const struct sk_buff *skb)
static inline spinlock_t *qdisc_lock(struct Qdisc *qdisc)
static inline struct Qdisc *qdisc_root(struct Qdisc *qdisc)
static inline struct Qdisc *qdisc_root_sleeping(struct Qdisc *qdisc)
static inline spinlock_t *qdisc_root_lock(struct Qdisc *qdisc)
static inline spinlock_t *qdisc_root_sleeping_lock(struct Qdisc *qdisc)
static inline struct net_device *qdisc_dev(struct Qdisc *qdisc)
static inline void sch_tree_lock(struct Qdisc *q)
static inline void sch_tree_unlock(struct Qdisc *q)
#define tcf_tree_lock(tp)	sch_tree_lock((tp)->q)
#define tcf_tree_unlock(tp)	sch_tree_unlock((tp)->q)
extern struct Qdisc noop_qdisc;
extern struct Qdisc_ops noop_qdisc_ops;
extern struct Qdisc_ops pfifo_fast_ops;
extern struct Qdisc_ops mq_qdisc_ops;
struct Qdisc_class_common ;
struct Qdisc_class_hash ;
static inline unsigned int qdisc_class_hash(u32 id, u32 mask)
static inline struct Qdisc_class_common *
qdisc_class_find(struct Qdisc_class_hash *hash, u32 id)
extern int qdisc_class_hash_init(struct Qdisc_class_hash *);
extern void qdisc_class_hash_insert(struct Qdisc_class_hash *, struct Qdisc_class_common *);
extern void qdisc_class_hash_remove(struct Qdisc_class_hash *, struct Qdisc_class_common *);
extern void qdisc_class_hash_grow(struct Qdisc *, struct Qdisc_class_hash *);
extern void qdisc_class_hash_destroy(struct Qdisc_class_hash *);
extern void dev_init_scheduler(struct net_device *dev);
extern void dev_shutdown(struct net_device *dev);
extern void dev_activate(struct net_device *dev);
extern void dev_deactivate(struct net_device *dev);
extern void dev_deactivate_many(struct list_head *head);
extern struct Qdisc *dev_graft_qdisc(struct netdev_queue *dev_queue,
struct Qdisc *qdisc);
extern void qdisc_reset(struct Qdisc *qdisc);
extern void qdisc_destroy(struct Qdisc *qdisc);
extern void qdisc_tree_decrease_qlen(struct Qdisc *qdisc, unsigned int n);
extern struct Qdisc *qdisc_alloc(struct netdev_queue *dev_queue,
struct Qdisc_ops *ops);
extern struct Qdisc *qdisc_create_dflt(struct netdev_queue *dev_queue,
struct Qdisc_ops *ops, u32 parentid);
extern void __qdisc_calculate_pkt_len(struct sk_buff *skb,
const struct qdisc_size_table *stab);
extern void tcf_destroy(struct tcf_proto *tp);
extern void tcf_destroy_chain(struct tcf_proto **fl);
static inline void qdisc_reset_all_tx_gt(struct net_device *dev, unsigned int i)
static inline void qdisc_reset_all_tx(struct net_device *dev)
static inline bool qdisc_all_tx_empty(const struct net_device *dev)
static inline bool qdisc_tx_changing(struct net_device *dev)
static inline bool qdisc_tx_is_noop(const struct net_device *dev)
static inline unsigned int qdisc_pkt_len(const struct sk_buff *skb)
enum net_xmit_qdisc_t ;
#define net_xmit_drop_count(e)	((e) & __NET_XMIT_STOLEN ? 0 : 1)
#define net_xmit_drop_count(e)	(1)
static inline void qdisc_calculate_pkt_len(struct sk_buff *skb,
const struct Qdisc *sch)
static inline int qdisc_enqueue(struct sk_buff *skb, struct Qdisc *sch)
static inline int qdisc_enqueue_root(struct sk_buff *skb, struct Qdisc *sch)
static inline void bstats_update(struct gnet_stats_basic_packed *bstats,
const struct sk_buff *skb)
static inline void qdisc_bstats_update(struct Qdisc *sch,
const struct sk_buff *skb)
static inline int __qdisc_enqueue_tail(struct sk_buff *skb, struct Qdisc *sch,
struct sk_buff_head *list)
static inline int qdisc_enqueue_tail(struct sk_buff *skb, struct Qdisc *sch)
static inline struct sk_buff *__qdisc_dequeue_head(struct Qdisc *sch,
struct sk_buff_head *list)
static inline struct sk_buff *qdisc_dequeue_head(struct Qdisc *sch)
static inline unsigned int __qdisc_queue_drop_head(struct Qdisc *sch,
struct sk_buff_head *list)
static inline unsigned int qdisc_queue_drop_head(struct Qdisc *sch)
static inline struct sk_buff *__qdisc_dequeue_tail(struct Qdisc *sch,
struct sk_buff_head *list)
static inline struct sk_buff *qdisc_dequeue_tail(struct Qdisc *sch)
static inline struct sk_buff *qdisc_peek_head(struct Qdisc *sch)
static inline struct sk_buff *qdisc_peek_dequeued(struct Qdisc *sch)
static inline struct sk_buff *qdisc_dequeue_peeked(struct Qdisc *sch)
static inline void __qdisc_reset_queue(struct Qdisc *sch,
struct sk_buff_head *list)
static inline void qdisc_reset_queue(struct Qdisc *sch)
static inline unsigned int __qdisc_queue_drop(struct Qdisc *sch,
struct sk_buff_head *list)
static inline unsigned int qdisc_queue_drop(struct Qdisc *sch)
static inline int qdisc_drop(struct sk_buff *skb, struct Qdisc *sch)
static inline int qdisc_reshape_fail(struct sk_buff *skb, struct Qdisc *sch)
static inline u32 qdisc_l2t(struct qdisc_rate_table* rtab, unsigned int pktlen)
static inline struct sk_buff *skb_act_clone(struct sk_buff *skb, gfp_t gfp_mask,
int action)
