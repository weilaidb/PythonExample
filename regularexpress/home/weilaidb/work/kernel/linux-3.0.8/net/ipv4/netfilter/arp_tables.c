#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_LICENSE("GPL");
MODULE_AUTHOR("David S. Miller <davem@redhat.com>");
MODULE_DESCRIPTION("arptables core");
#define dprintf(format, args...)  printk(format , ## args)
#define dprintf(format, args...)
#define duprintf(format, args...) printk(format , ## args)
#define duprintf(format, args...)
#define ARP_NF_ASSERT(x)	WARN_ON(!(x))
#define ARP_NF_ASSERT(x)
void *arpt_alloc_initial_table(const struct xt_table *info)
EXPORT_SYMBOL_GPL(arpt_alloc_initial_table);
static inline int arp_devaddr_compare(const struct arpt_devaddr_info *ap,
const char *hdr_addr, int len)
static unsigned long ifname_compare(const char *_a, const char *_b, const char *_mask)
static inline int arp_packet_match(const struct arphdr *arphdr,
struct net_device *dev,
const char *indev,
const char *outdev,
const struct arpt_arp *arpinfo)
static inline int arp_checkentry(const struct arpt_arp *arp)
static unsigned int
arpt_error(struct sk_buff *skb, const struct xt_action_param *par)
static inline const struct xt_entry_target *
arpt_get_target_c(const struct arpt_entry *e)
static inline struct arpt_entry *
get_entry(const void *base, unsigned int offset)
static inline __pure
struct arpt_entry *arpt_next_entry(const struct arpt_entry *entry)
unsigned int arpt_do_table(struct sk_buff *skb,
unsigned int hook,
const struct net_device *in,
const struct net_device *out,
struct xt_table *table)
static inline bool unconditional(const struct arpt_arp *arp)
static int mark_source_chains(const struct xt_table_info *newinfo,
unsigned int valid_hooks, void *entry0)
static inline int check_entry(const struct arpt_entry *e, const char *name)
static inline int check_target(struct arpt_entry *e, const char *name)
static inline int
find_check_entry(struct arpt_entry *e, const char *name, unsigned int size)
static bool check_underflow(const struct arpt_entry *e)
static inline int check_entry_size_and_hooks(struct arpt_entry *e,
struct xt_table_info *newinfo,
const unsigned char *base,
const unsigned char *limit,
const unsigned int *hook_entries,
const unsigned int *underflows,
unsigned int valid_hooks)
static inline void cleanup_entry(struct arpt_entry *e)
static int translate_table(struct xt_table_info *newinfo, void *entry0,
const struct arpt_replace *repl)
static void get_counters(const struct xt_table_info *t,
struct xt_counters counters[])
static struct xt_counters *alloc_counters(const struct xt_table *table)
static int copy_entries_to_user(unsigned int total_size,
const struct xt_table *table,
void __user *userptr)
static void compat_standard_from_user(void *dst, const void *src)
static int compat_standard_to_user(void __user *dst, const void *src)
static int compat_calc_entry(const struct arpt_entry *e,
const struct xt_table_info *info,
const void *base, struct xt_table_info *newinfo)
static int compat_table_info(const struct xt_table_info *info,
struct xt_table_info *newinfo)
static int get_info(struct net *net, void __user *user,
const int *len, int compat)
static int get_entries(struct net *net, struct arpt_get_entries __user *uptr,
const int *len)
static int __do_replace(struct net *net, const char *name,
unsigned int valid_hooks,
struct xt_table_info *newinfo,
unsigned int num_counters,
void __user *counters_ptr)
static int do_replace(struct net *net, const void __user *user,
unsigned int len)
static int do_add_counters(struct net *net, const void __user *user,
unsigned int len, int compat)
static inline void compat_release_entry(struct compat_arpt_entry *e)
static inline int
check_compat_entry_size_and_hooks(struct compat_arpt_entry *e,
struct xt_table_info *newinfo,
unsigned int *size,
const unsigned char *base,
const unsigned char *limit,
const unsigned int *hook_entries,
const unsigned int *underflows,
const char *name)
static int
compat_copy_entry_from_user(struct compat_arpt_entry *e, void **dstptr,
unsigned int *size, const char *name,
struct xt_table_info *newinfo, unsigned char *base)
static int translate_compat_table(const char *name,
unsigned int valid_hooks,
struct xt_table_info **pinfo,
void **pentry0,
unsigned int total_size,
unsigned int number,
unsigned int *hook_entries,
unsigned int *underflows)
struct compat_arpt_replace ;
static int compat_do_replace(struct net *net, void __user *user,
unsigned int len)
static int compat_do_arpt_set_ctl(struct sock *sk, int cmd, void __user *user,
unsigned int len)
static int compat_copy_entry_to_user(struct arpt_entry *e, void __user **dstptr,
compat_uint_t *size,
struct xt_counters *counters,
unsigned int i)
static int compat_copy_entries_to_user(unsigned int total_size,
struct xt_table *table,
void __user *userptr)
struct compat_arpt_get_entries ;
static int compat_get_entries(struct net *net,
struct compat_arpt_get_entries __user *uptr,
int *len)
static int do_arpt_get_ctl(struct sock *, int, void __user *, int *);
static int compat_do_arpt_get_ctl(struct sock *sk, int cmd, void __user *user,
int *len)
static int do_arpt_set_ctl(struct sock *sk, int cmd, void __user *user, unsigned int len)
static int do_arpt_get_ctl(struct sock *sk, int cmd, void __user *user, int *len)
struct xt_table *arpt_register_table(struct net *net,
const struct xt_table *table,
const struct arpt_replace *repl)
void arpt_unregister_table(struct xt_table *table)
static struct xt_target arpt_builtin_tg[] __read_mostly = ;
static struct nf_sockopt_ops arpt_sockopts = ;
static int __net_init arp_tables_net_init(struct net *net)
static void __net_exit arp_tables_net_exit(struct net *net)
static struct pernet_operations arp_tables_net_ops = ;
static int __init arp_tables_init(void)
static void __exit arp_tables_fini(void)
EXPORT_SYMBOL(arpt_register_table);
EXPORT_SYMBOL(arpt_unregister_table);
EXPORT_SYMBOL(arpt_do_table);
module_init(arp_tables_init);
module_exit(arp_tables_fini);
