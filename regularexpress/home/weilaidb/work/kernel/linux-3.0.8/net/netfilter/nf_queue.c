static const struct nf_queue_handler __rcu *queue_handler[NFPROTO_NUMPROTO] __read_mostly;
static DEFINE_MUTEX(queue_handler_mutex);
int nf_register_queue_handler(u_int8_t pf, const struct nf_queue_handler *qh)
EXPORT_SYMBOL(nf_register_queue_handler);
int nf_unregister_queue_handler(u_int8_t pf, const struct nf_queue_handler *qh)
EXPORT_SYMBOL(nf_unregister_queue_handler);
void nf_unregister_queue_handlers(const struct nf_queue_handler *qh)
EXPORT_SYMBOL_GPL(nf_unregister_queue_handlers);
static void nf_queue_entry_release_refs(struct nf_queue_entry *entry)
static int __nf_queue(struct sk_buff *skb,
struct list_head *elem,
u_int8_t pf, unsigned int hook,
struct net_device *indev,
struct net_device *outdev,
int (*okfn)(struct sk_buff *),
unsigned int queuenum)
int nf_queue(struct sk_buff *skb,
struct list_head *elem,
u_int8_t pf, unsigned int hook,
struct net_device *indev,
struct net_device *outdev,
int (*okfn)(struct sk_buff *),
unsigned int queuenum)
void nf_reinject(struct nf_queue_entry *entry, unsigned int verdict)
EXPORT_SYMBOL(nf_reinject);
static void *seq_start(struct seq_file *seq, loff_t *pos)
static void *seq_next(struct seq_file *s, void *v, loff_t *pos)
static void seq_stop(struct seq_file *s, void *v)
static int seq_show(struct seq_file *s, void *v)
static const struct seq_operations nfqueue_seq_ops = ;
static int nfqueue_open(struct inode *inode, struct file *file)
static const struct file_operations nfqueue_file_ops = ;
int __init netfilter_queue_init(void)
