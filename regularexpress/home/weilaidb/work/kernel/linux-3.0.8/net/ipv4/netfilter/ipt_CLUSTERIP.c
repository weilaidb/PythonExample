#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define CLUSTERIP_VERSION "0.8"
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Harald Welte <laforge@netfilter.org>");
MODULE_DESCRIPTION("Xtables: CLUSTERIP target");
struct clusterip_config ;
static LIST_HEAD(clusterip_configs);
static DEFINE_SPINLOCK(clusterip_lock);
static const struct file_operations clusterip_proc_fops;
static struct proc_dir_entry *clusterip_procdir;
static inline void
clusterip_config_get(struct clusterip_config *c)
static void clusterip_config_rcu_free(struct rcu_head *head)
static inline void
clusterip_config_put(struct clusterip_config *c)
static inline void
clusterip_config_entry_put(struct clusterip_config *c)
static struct clusterip_config *
__clusterip_config_find(__be32 clusterip)
static inline struct clusterip_config *
clusterip_config_find_get(__be32 clusterip, int entry)
static void
clusterip_config_init_nodelist(struct clusterip_config *c,
const struct ipt_clusterip_tgt_info *i)
static struct clusterip_config *
clusterip_config_init(const struct ipt_clusterip_tgt_info *i, __be32 ip,
struct net_device *dev)
static int
clusterip_add_node(struct clusterip_config *c, u_int16_t nodenum)
static bool
clusterip_del_node(struct clusterip_config *c, u_int16_t nodenum)
static inline u_int32_t
clusterip_hashfn(const struct sk_buff *skb,
const struct clusterip_config *config)
static inline int
clusterip_responsible(const struct clusterip_config *config, u_int32_t hash)
static unsigned int
clusterip_tg(struct sk_buff *skb, const struct xt_action_param *par)
static int clusterip_tg_check(const struct xt_tgchk_param *par)
static void clusterip_tg_destroy(const struct xt_tgdtor_param *par)
struct compat_ipt_clusterip_tgt_info
;
static struct xt_target clusterip_tg_reg __read_mostly = ;
struct arp_payload  __packed;
static void arp_print(struct arp_payload *payload)
static unsigned int
arp_mangle(unsigned int hook,
struct sk_buff *skb,
const struct net_device *in,
const struct net_device *out,
int (*okfn)(struct sk_buff *))
static struct nf_hook_ops cip_arp_ops __read_mostly = ;
struct clusterip_seq_position ;
static void *clusterip_seq_start(struct seq_file *s, loff_t *pos)
static void *clusterip_seq_next(struct seq_file *s, void *v, loff_t *pos)
static void clusterip_seq_stop(struct seq_file *s, void *v)
static int clusterip_seq_show(struct seq_file *s, void *v)
static const struct seq_operations clusterip_seq_ops = ;
static int clusterip_proc_open(struct inode *inode, struct file *file)
static int clusterip_proc_release(struct inode *inode, struct file *file)
static ssize_t clusterip_proc_write(struct file *file, const char __user *input,
size_t size, loff_t *ofs)
static const struct file_operations clusterip_proc_fops = ;
static int __init clusterip_tg_init(void)
static void __exit clusterip_tg_exit(void)
module_init(clusterip_tg_init);
module_exit(clusterip_tg_exit);
