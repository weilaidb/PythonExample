#define NFULNL_NLBUFSIZ_DEFAULT	NLMSG_GOODSIZE
#define NFULNL_TIMEOUT_DEFAULT 	100
#define NFULNL_QTHRESH_DEFAULT 	100
#define NFULNL_COPY_RANGE_MAX	0xFFFF
#define PRINTR(x, args...)	do  while (0);
struct nfulnl_instance ;
static DEFINE_SPINLOCK(instances_lock);
static atomic_t global_seq;
#define INSTANCE_BUCKETS	16
static struct hlist_head instance_table[INSTANCE_BUCKETS];
static unsigned int hash_init;
static inline u_int8_t instance_hashfn(u_int16_t group_num)
static struct nfulnl_instance *
__instance_lookup(u_int16_t group_num)
static inline void
instance_get(struct nfulnl_instance *inst)
static struct nfulnl_instance *
instance_lookup_get(u_int16_t group_num)
static void nfulnl_instance_free_rcu(struct rcu_head *head)
static void
instance_put(struct nfulnl_instance *inst)
static void nfulnl_timer(unsigned long data);
static struct nfulnl_instance *
instance_create(u_int16_t group_num, int pid)
static void __nfulnl_flush(struct nfulnl_instance *inst);
static void
__instance_destroy(struct nfulnl_instance *inst)
static inline void
instance_destroy(struct nfulnl_instance *inst)
static int
nfulnl_set_mode(struct nfulnl_instance *inst, u_int8_t mode,
unsigned int range)
static int
nfulnl_set_nlbufsiz(struct nfulnl_instance *inst, u_int32_t nlbufsiz)
static int
nfulnl_set_timeout(struct nfulnl_instance *inst, u_int32_t timeout)
static int
nfulnl_set_qthresh(struct nfulnl_instance *inst, u_int32_t qthresh)
static int
nfulnl_set_flags(struct nfulnl_instance *inst, u_int16_t flags)
static struct sk_buff *
nfulnl_alloc_skb(unsigned int inst_size, unsigned int pkt_size)
static int
__nfulnl_send(struct nfulnl_instance *inst)
static void
__nfulnl_flush(struct nfulnl_instance *inst)
static void
nfulnl_timer(unsigned long data)
static inline int
__build_packet_message(struct nfulnl_instance *inst,
const struct sk_buff *skb,
unsigned int data_len,
u_int8_t pf,
unsigned int hooknum,
const struct net_device *indev,
const struct net_device *outdev,
const char *prefix, unsigned int plen)
#define RCV_SKB_FAIL(err) do  while (0)
static struct nf_loginfo default_loginfo = ;
void
nfulnl_log_packet(u_int8_t pf,
unsigned int hooknum,
const struct sk_buff *skb,
const struct net_device *in,
const struct net_device *out,
const struct nf_loginfo *li_user,
const char *prefix)
EXPORT_SYMBOL_GPL(nfulnl_log_packet);
static int
nfulnl_rcv_nl_event(struct notifier_block *this,
unsigned long event, void *ptr)
static struct notifier_block nfulnl_rtnl_notifier = ;
static int
nfulnl_recv_unsupp(struct sock *ctnl, struct sk_buff *skb,
const struct nlmsghdr *nlh,
const struct nlattr * const nfqa[])
static struct nf_logger nfulnl_logger __read_mostly = ;
static const struct nla_policy nfula_cfg_policy[NFULA_CFG_MAX+1] = ;
static int
nfulnl_recv_config(struct sock *ctnl, struct sk_buff *skb,
const struct nlmsghdr *nlh,
const struct nlattr * const nfula[])
static const struct nfnl_callback nfulnl_cb[NFULNL_MSG_MAX] = ;
static const struct nfnetlink_subsystem nfulnl_subsys = ;
struct iter_state ;
static struct hlist_node *get_first(struct iter_state *st)
static struct hlist_node *get_next(struct iter_state *st, struct hlist_node *h)
static struct hlist_node *get_idx(struct iter_state *st, loff_t pos)
static void *seq_start(struct seq_file *seq, loff_t *pos)
__acquires(rcu_bh)
static void *seq_next(struct seq_file *s, void *v, loff_t *pos)
static void seq_stop(struct seq_file *s, void *v)
__releases(rcu_bh)
static int seq_show(struct seq_file *s, void *v)
static const struct seq_operations nful_seq_ops = ;
static int nful_open(struct inode *inode, struct file *file)
static const struct file_operations nful_file_ops = ;
static int __init nfnetlink_log_init(void)
static void __exit nfnetlink_log_fini(void)
MODULE_DESCRIPTION("netfilter userspace logging");
MODULE_AUTHOR("Harald Welte <laforge@netfilter.org>");
MODULE_LICENSE("GPL");
MODULE_ALIAS_NFNL_SUBSYS(NFNL_SUBSYS_ULOG);
module_init(nfnetlink_log_init);
module_exit(nfnetlink_log_fini);
