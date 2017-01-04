#define IPQ_QMAX_DEFAULT 1024
#define IPQ_PROC_FS_NAME "ip6_queue"
#define NET_IPQ_QMAX_NAME "ip6_queue_maxlen"
typedef int (*ipq_cmpfn)(struct nf_queue_entry *, unsigned long);
static unsigned char copy_mode __read_mostly = IPQ_COPY_NONE;
static unsigned int queue_maxlen __read_mostly = IPQ_QMAX_DEFAULT;
static DEFINE_SPINLOCK(queue_lock);
static int peer_pid __read_mostly;
static unsigned int copy_range __read_mostly;
static unsigned int queue_total;
static unsigned int queue_dropped = 0;
static unsigned int queue_user_dropped = 0;
static struct sock *ipqnl __read_mostly;
static LIST_HEAD(queue_list);
static DEFINE_MUTEX(ipqnl_mutex);
static inline void
__ipq_enqueue_entry(struct nf_queue_entry *entry)
static inline int
__ipq_set_mode(unsigned char mode, unsigned int range)
static void __ipq_flush(ipq_cmpfn cmpfn, unsigned long data);
static inline void
__ipq_reset(void)
static struct nf_queue_entry *
ipq_find_dequeue_entry(unsigned long id)
static void
__ipq_flush(ipq_cmpfn cmpfn, unsigned long data)
static void
ipq_flush(ipq_cmpfn cmpfn, unsigned long data)
static struct sk_buff *
ipq_build_packet_message(struct nf_queue_entry *entry, int *errp)
static int
ipq_enqueue_packet(struct nf_queue_entry *entry, unsigned int queuenum)
static int
ipq_mangle_ipv6(ipq_verdict_msg_t *v, struct nf_queue_entry *e)
static int
ipq_set_verdict(struct ipq_verdict_msg *vmsg, unsigned int len)
static int
ipq_set_mode(unsigned char mode, unsigned int range)
static int
ipq_receive_peer(struct ipq_peer_msg *pmsg,
unsigned char type, unsigned int len)
static int
dev_cmp(struct nf_queue_entry *entry, unsigned long ifindex)
static void
ipq_dev_drop(int ifindex)
#define RCV_SKB_FAIL(err) do  while (0)
static inline void
__ipq_rcv_skb(struct sk_buff *skb)
static void
ipq_rcv_skb(struct sk_buff *skb)
static int
ipq_rcv_dev_event(struct notifier_block *this,
unsigned long event, void *ptr)
static struct notifier_block ipq_dev_notifier = ;
static int
ipq_rcv_nl_event(struct notifier_block *this,
unsigned long event, void *ptr)
static struct notifier_block ipq_nl_notifier = ;
static struct ctl_table_header *ipq_sysctl_header;
static ctl_table ipq_table[] = ;
static int ip6_queue_show(struct seq_file *m, void *v)
static int ip6_queue_open(struct inode *inode, struct file *file)
static const struct file_operations ip6_queue_proc_fops = ;
static const struct nf_queue_handler nfqh = ;
static int __init ip6_queue_init(void)
static void __exit ip6_queue_fini(void)
MODULE_DESCRIPTION("IPv6 packet queue handler");
MODULE_LICENSE("GPL");
MODULE_ALIAS_NET_PF_PROTO(PF_NETLINK, NETLINK_IP6_FW);
module_init(ip6_queue_init);
module_exit(ip6_queue_fini);
