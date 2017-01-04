#define NFQNL_QMAX_DEFAULT 1024
struct nfqnl_instance ;
typedef int (*nfqnl_cmpfn)(struct nf_queue_entry *, unsigned long);
static DEFINE_SPINLOCK(instances_lock);
#define INSTANCE_BUCKETS	16
static struct hlist_head instance_table[INSTANCE_BUCKETS] __read_mostly;
static inline u_int8_t instance_hashfn(u_int16_t queue_num)
static struct nfqnl_instance *
instance_lookup(u_int16_t queue_num)
static struct nfqnl_instance *
instance_create(u_int16_t queue_num, int pid)
static void nfqnl_flush(struct nfqnl_instance *queue, nfqnl_cmpfn cmpfn,
unsigned long data);
static void
instance_destroy_rcu(struct rcu_head *head)
static void
__instance_destroy(struct nfqnl_instance *inst)
static void
instance_destroy(struct nfqnl_instance *inst)
static inline void
__enqueue_entry(struct nfqnl_instance *queue, struct nf_queue_entry *entry)
static struct nf_queue_entry *
find_dequeue_entry(struct nfqnl_instance *queue, unsigned int id)
static void
nfqnl_flush(struct nfqnl_instance *queue, nfqnl_cmpfn cmpfn, unsigned long data)
static struct sk_buff *
nfqnl_build_packet_message(struct nfqnl_instance *queue,
struct nf_queue_entry *entry)
static int
nfqnl_enqueue_packet(struct nf_queue_entry *entry, unsigned int queuenum)
static int
nfqnl_mangle(void *data, int data_len, struct nf_queue_entry *e)
static int
nfqnl_set_mode(struct nfqnl_instance *queue,
unsigned char mode, unsigned int range)
static int
dev_cmp(struct nf_queue_entry *entry, unsigned long ifindex)
static void
nfqnl_dev_drop(int ifindex)
#define RCV_SKB_FAIL(err) do  while (0)
static int
nfqnl_rcv_dev_event(struct notifier_block *this,
unsigned long event, void *ptr)
static struct notifier_block nfqnl_dev_notifier = ;
static int
nfqnl_rcv_nl_event(struct notifier_block *this,
unsigned long event, void *ptr)
static struct notifier_block nfqnl_rtnl_notifier = ;
static const struct nla_policy nfqa_verdict_policy[NFQA_MAX+1] = ;
static int
nfqnl_recv_verdict(struct sock *ctnl, struct sk_buff *skb,
const struct nlmsghdr *nlh,
const struct nlattr * const nfqa[])
static int
nfqnl_recv_unsupp(struct sock *ctnl, struct sk_buff *skb,
const struct nlmsghdr *nlh,
const struct nlattr * const nfqa[])
static const struct nla_policy nfqa_cfg_policy[NFQA_CFG_MAX+1] = ;
static const struct nf_queue_handler nfqh = ;
static int
nfqnl_recv_config(struct sock *ctnl, struct sk_buff *skb,
const struct nlmsghdr *nlh,
const struct nlattr * const nfqa[])
static const struct nfnl_callback nfqnl_cb[NFQNL_MSG_MAX] = ;
static const struct nfnetlink_subsystem nfqnl_subsys = ;
struct iter_state ;
static struct hlist_node *get_first(struct seq_file *seq)
static struct hlist_node *get_next(struct seq_file *seq, struct hlist_node *h)
static struct hlist_node *get_idx(struct seq_file *seq, loff_t pos)
static void *seq_start(struct seq_file *seq, loff_t *pos)
__acquires(instances_lock)
static void *seq_next(struct seq_file *s, void *v, loff_t *pos)
static void seq_stop(struct seq_file *s, void *v)
__releases(instances_lock)
static int seq_show(struct seq_file *s, void *v)
static const struct seq_operations nfqnl_seq_ops = ;
static int nfqnl_open(struct inode *inode, struct file *file)
static const struct file_operations nfqnl_file_ops = ;
static int __init nfnetlink_queue_init(void)
static void __exit nfnetlink_queue_fini(void)
MODULE_DESCRIPTION("netfilter packet queue handler");
MODULE_AUTHOR("Harald Welte <laforge@netfilter.org>");
MODULE_LICENSE("GPL");
MODULE_ALIAS_NFNL_SUBSYS(NFNL_SUBSYS_QUEUE);
module_init(nfnetlink_queue_init);
module_exit(nfnetlink_queue_fini);
