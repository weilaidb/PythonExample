#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#if defined(CONFIG_IP6_NF_IPTABLES) || defined(CONFIG_IP6_NF_IPTABLES_MODULE)
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Harald Welte <laforge@netfilter.org>");
MODULE_AUTHOR("Jan Engelhardt <jengelh@medozas.de>");
MODULE_DESCRIPTION("Xtables: per hash-bucket rate-limit match");
MODULE_ALIAS("ipt_hashlimit");
MODULE_ALIAS("ip6t_hashlimit");
struct hashlimit_net ;
static int hashlimit_net_id;
static inline struct hashlimit_net *hashlimit_pernet(struct net *net)
static const struct file_operations dl_file_ops;
struct dsthash_dst ;
struct dsthash_ent ;
struct xt_hashlimit_htable ;
static DEFINE_MUTEX(hashlimit_mutex);
static struct kmem_cache *hashlimit_cachep __read_mostly;
static inline bool dst_cmp(const struct dsthash_ent *ent,
const struct dsthash_dst *b)
static u_int32_t
hash_dst(const struct xt_hashlimit_htable *ht, const struct dsthash_dst *dst)
static struct dsthash_ent *
dsthash_find(const struct xt_hashlimit_htable *ht,
const struct dsthash_dst *dst)
static struct dsthash_ent *
dsthash_alloc_init(struct xt_hashlimit_htable *ht,
const struct dsthash_dst *dst)
static void dsthash_free_rcu(struct rcu_head *head)
static inline void
dsthash_free(struct xt_hashlimit_htable *ht, struct dsthash_ent *ent)
static void htable_gc(unsigned long htlong);
static int htable_create(struct net *net, struct xt_hashlimit_mtinfo1 *minfo,
u_int8_t family)
static bool select_all(const struct xt_hashlimit_htable *ht,
const struct dsthash_ent *he)
static bool select_gc(const struct xt_hashlimit_htable *ht,
const struct dsthash_ent *he)
static void htable_selective_cleanup(struct xt_hashlimit_htable *ht,
bool (*select)(const struct xt_hashlimit_htable *ht,
const struct dsthash_ent *he))
static void htable_gc(unsigned long htlong)
static void htable_destroy(struct xt_hashlimit_htable *hinfo)
static struct xt_hashlimit_htable *htable_find_get(struct net *net,
const char *name,
u_int8_t family)
static void htable_put(struct xt_hashlimit_htable *hinfo)
#define MAX_CPJ (0xFFFFFFFF / (HZ*60*60*24))
#define _POW2_BELOW2(x) ((x)|((x)>>1))
#define _POW2_BELOW4(x) (_POW2_BELOW2(x)|_POW2_BELOW2((x)>>2))
#define _POW2_BELOW8(x) (_POW2_BELOW4(x)|_POW2_BELOW4((x)>>4))
#define _POW2_BELOW16(x) (_POW2_BELOW8(x)|_POW2_BELOW8((x)>>8))
#define _POW2_BELOW32(x) (_POW2_BELOW16(x)|_POW2_BELOW16((x)>>16))
#define POW2_BELOW32(x) ((_POW2_BELOW32(x)>>1) + 1)
#define CREDITS_PER_JIFFY POW2_BELOW32(MAX_CPJ)
static inline u_int32_t
user2credits(u_int32_t user)
static inline void rateinfo_recalc(struct dsthash_ent *dh, unsigned long now)
static inline __be32 maskl(__be32 a, unsigned int l)
#if defined(CONFIG_IP6_NF_IPTABLES) || defined(CONFIG_IP6_NF_IPTABLES_MODULE)
static void hashlimit_ipv6_mask(__be32 *i, unsigned int p)
static int
hashlimit_init_dst(const struct xt_hashlimit_htable *hinfo,
struct dsthash_dst *dst,
const struct sk_buff *skb, unsigned int protoff)
static bool
hashlimit_mt(const struct sk_buff *skb, struct xt_action_param *par)
static int hashlimit_mt_check(const struct xt_mtchk_param *par)
static void hashlimit_mt_destroy(const struct xt_mtdtor_param *par)
static struct xt_match hashlimit_mt_reg[] __read_mostly = ;
static void *dl_seq_start(struct seq_file *s, loff_t *pos)
__acquires(htable->lock)
static void *dl_seq_next(struct seq_file *s, void *v, loff_t *pos)
static void dl_seq_stop(struct seq_file *s, void *v)
__releases(htable->lock)
static int dl_seq_real_show(struct dsthash_ent *ent, u_int8_t family,
struct seq_file *s)
static int dl_seq_show(struct seq_file *s, void *v)
static const struct seq_operations dl_seq_ops = ;
static int dl_proc_open(struct inode *inode, struct file *file)
static const struct file_operations dl_file_ops = ;
static int __net_init hashlimit_proc_net_init(struct net *net)
static void __net_exit hashlimit_proc_net_exit(struct net *net)
static int __net_init hashlimit_net_init(struct net *net)
static void __net_exit hashlimit_net_exit(struct net *net)
static struct pernet_operations hashlimit_net_ops = ;
static int __init hashlimit_mt_init(void)
static void __exit hashlimit_mt_exit(void)
module_init(hashlimit_mt_init);
module_exit(hashlimit_mt_exit);
