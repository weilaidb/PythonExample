#define _NF_INTERNALS_H
#define NFDEBUG(format, args...)  printk(KERN_DEBUG format , ## args)
#define NFDEBUG(format, args...)
extern unsigned int nf_iterate(struct list_head *head,
struct sk_buff *skb,
unsigned int hook,
const struct net_device *indev,
const struct net_device *outdev,
struct list_head **i,
int (*okfn)(struct sk_buff *),
int hook_thresh);
extern int nf_queue(struct sk_buff *skb,
struct list_head *elem,
u_int8_t pf, unsigned int hook,
struct net_device *indev,
struct net_device *outdev,
int (*okfn)(struct sk_buff *),
unsigned int queuenum);
extern int __init netfilter_queue_init(void);
extern int __init netfilter_log_init(void);
