#define KMSG_COMPONENT "IPVS"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
EXPORT_SYMBOL(register_ip_vs_app);
EXPORT_SYMBOL(unregister_ip_vs_app);
EXPORT_SYMBOL(register_ip_vs_app_inc);
static DEFINE_MUTEX(__ip_vs_app_mutex);
static inline int ip_vs_app_get(struct ip_vs_app *app)
static inline void ip_vs_app_put(struct ip_vs_app *app)
static int
ip_vs_app_inc_new(struct net *net, struct ip_vs_app *app, __u16 proto,
__u16 port)
static void
ip_vs_app_inc_release(struct net *net, struct ip_vs_app *inc)
int ip_vs_app_inc_get(struct ip_vs_app *inc)
void ip_vs_app_inc_put(struct ip_vs_app *inc)
int
register_ip_vs_app_inc(struct net *net, struct ip_vs_app *app, __u16 proto,
__u16 port)
int register_ip_vs_app(struct net *net, struct ip_vs_app *app)
void unregister_ip_vs_app(struct net *net, struct ip_vs_app *app)
int ip_vs_bind_app(struct ip_vs_conn *cp,
struct ip_vs_protocol *pp)
void ip_vs_unbind_app(struct ip_vs_conn *cp)
static inline void vs_fix_seq(const struct ip_vs_seq *vseq, struct tcphdr *th)
static inline void
vs_fix_ack_seq(const struct ip_vs_seq *vseq, struct tcphdr *th)
static inline void vs_seq_update(struct ip_vs_conn *cp, struct ip_vs_seq *vseq,
unsigned flag, __u32 seq, int diff)
static inline int app_tcp_pkt_out(struct ip_vs_conn *cp, struct sk_buff *skb,
struct ip_vs_app *app)
int ip_vs_app_pkt_out(struct ip_vs_conn *cp, struct sk_buff *skb)
static inline int app_tcp_pkt_in(struct ip_vs_conn *cp, struct sk_buff *skb,
struct ip_vs_app *app)
int ip_vs_app_pkt_in(struct ip_vs_conn *cp, struct sk_buff *skb)
static struct ip_vs_app *ip_vs_app_idx(struct netns_ipvs *ipvs, loff_t pos)
static void *ip_vs_app_seq_start(struct seq_file *seq, loff_t *pos)
static void *ip_vs_app_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void ip_vs_app_seq_stop(struct seq_file *seq, void *v)
static int ip_vs_app_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations ip_vs_app_seq_ops = ;
static int ip_vs_app_open(struct inode *inode, struct file *file)
static const struct file_operations ip_vs_app_fops = ;
int __net_init __ip_vs_app_init(struct net *net)
void __net_exit __ip_vs_app_cleanup(struct net *net)
int __init ip_vs_app_init(void)
void ip_vs_app_cleanup(void)
