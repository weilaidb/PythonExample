#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_AUTHOR("Patrick McHardy <kaber@trash.net>");
MODULE_AUTHOR("Jan Engelhardt <jengelh@medozas.de>");
MODULE_DESCRIPTION("Xtables: \"recently-seen\" host matching");
MODULE_LICENSE("GPL");
MODULE_ALIAS("ipt_recent");
MODULE_ALIAS("ip6t_recent");
static unsigned int ip_list_tot = 100;
static unsigned int ip_pkt_list_tot = 20;
static unsigned int ip_list_hash_size = 0;
static unsigned int ip_list_perms = 0644;
static unsigned int ip_list_uid = 0;
static unsigned int ip_list_gid = 0;
module_param(ip_list_tot, uint, 0400);
module_param(ip_pkt_list_tot, uint, 0400);
module_param(ip_list_hash_size, uint, 0400);
module_param(ip_list_perms, uint, 0400);
module_param(ip_list_uid, uint, S_IRUGO | S_IWUSR);
module_param(ip_list_gid, uint, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(ip_list_tot, "number of IPs to remember per list");
MODULE_PARM_DESC(ip_pkt_list_tot, "number of packets per IP address to remember (max. 255)");
MODULE_PARM_DESC(ip_list_hash_size, "size of hash table used to look up IPs");
MODULE_PARM_DESC(ip_list_perms, "permissions on /proc/net/xt_recent
static void recent_entry_reap(struct recent_table *t, unsigned long time)
static struct recent_entry *
recent_entry_init(struct recent_table *t, const union nf_inet_addr *addr,
u_int16_t family, u_int8_t ttl)
static void recent_entry_update(struct recent_table *t, struct recent_entry *e)
static struct recent_table *recent_table_lookup(struct recent_net *recent_net,
const char *name)
static void recent_table_flush(struct recent_table *t)
static bool
recent_mt(const struct sk_buff *skb, struct xt_action_param *par)
static int recent_mt_check(const struct xt_mtchk_param *par)
static void recent_mt_destroy(const struct xt_mtdtor_param *par)
struct recent_iter_state ;
static void *recent_seq_start(struct seq_file *seq, loff_t *pos)
__acquires(recent_lock)
static void *recent_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void recent_seq_stop(struct seq_file *s, void *v)
__releases(recent_lock)
static int recent_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations recent_seq_ops = ;
static int recent_seq_open(struct inode *inode, struct file *file)
static ssize_t
recent_mt_proc_write(struct file *file, const char __user *input,
size_t size, loff_t *loff)
static const struct file_operations recent_mt_fops = ;
static int __net_init recent_proc_net_init(struct net *net)
static void __net_exit recent_proc_net_exit(struct net *net)
static inline int recent_proc_net_init(struct net *net)
static inline void recent_proc_net_exit(struct net *net)
static int __net_init recent_net_init(struct net *net)
static void __net_exit recent_net_exit(struct net *net)
static struct pernet_operations recent_net_ops = ;
static struct xt_match recent_mt_reg[] __read_mostly = ;
static int __init recent_mt_init(void)
static void __exit recent_mt_exit(void)
module_init(recent_mt_init);
module_exit(recent_mt_exit);
