#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Netfilter Core Team <coreteam@netfilter.org>");
MODULE_DESCRIPTION("IPv6 packet filter");
#define dprintf(format, args...) pr_info(format , ## args)
#define dprintf(format, args...)
#define duprintf(format, args...) pr_info(format , ## args)
#define duprintf(format, args...)
#define IP_NF_ASSERT(x)	WARN_ON(!(x))
#define IP_NF_ASSERT(x)
void *ip6t_alloc_initial_table(const struct xt_table *info)
EXPORT_SYMBOL_GPL(ip6t_alloc_initial_table);
int
ip6t_ext_hdr(u8 nexthdr)
static inline bool
ip6_packet_match(const struct sk_buff *skb,
const char *indev,
const char *outdev,
const struct ip6t_ip6 *ip6info,
unsigned int *protoff,
int *fragoff, bool *hotdrop)
static bool
ip6_checkentry(const struct ip6t_ip6 *ipv6)
static unsigned int
ip6t_error(struct sk_buff *skb, const struct xt_action_param *par)
static inline struct ip6t_entry *
get_entry(const void *base, unsigned int offset)
static inline bool unconditional(const struct ip6t_ip6 *ipv6)
static inline const struct xt_entry_target *
ip6t_get_target_c(const struct ip6t_entry *e)
#if defined(CONFIG_NETFILTER_XT_TARGET_TRACE) || \
defined(CONFIG_NETFILTER_XT_TARGET_TRACE_MODULE)
static const char *const hooknames[] = ;
enum nf_ip_trace_comments ;
static const char *const comments[] = ;
static struct nf_loginfo trace_loginfo = ;
static inline int
get_chainname_rulenum(const struct ip6t_entry *s, const struct ip6t_entry *e,
const char *hookname, const char **chainname,
const char **comment, unsigned int *rulenum)
static void trace_packet(const struct sk_buff *skb,
unsigned int hook,
const struct net_device *in,
const struct net_device *out,
const char *tablename,
const struct xt_table_info *private,
const struct ip6t_entry *e)
static inline __pure struct ip6t_entry *
ip6t_next_entry(const struct ip6t_entry *entry)
unsigned int
ip6t_do_table(struct sk_buff *skb,
unsigned int hook,
const struct net_device *in,
const struct net_device *out,
struct xt_table *table)
static int
mark_source_chains(const struct xt_table_info *newinfo,
unsigned int valid_hooks, void *entry0)
static void cleanup_match(struct xt_entry_match *m, struct net *net)
static int
check_entry(const struct ip6t_entry *e, const char *name)
static int check_match(struct xt_entry_match *m, struct xt_mtchk_param *par)
static int
find_check_match(struct xt_entry_match *m, struct xt_mtchk_param *par)
static int check_target(struct ip6t_entry *e, struct net *net, const char *name)
static int
find_check_entry(struct ip6t_entry *e, struct net *net, const char *name,
unsigned int size)
static bool check_underflow(const struct ip6t_entry *e)
static int
check_entry_size_and_hooks(struct ip6t_entry *e,
struct xt_table_info *newinfo,
const unsigned char *base,
const unsigned char *limit,
const unsigned int *hook_entries,
const unsigned int *underflows,
unsigned int valid_hooks)
static void cleanup_entry(struct ip6t_entry *e, struct net *net)
static int
translate_table(struct net *net, struct xt_table_info *newinfo, void *entry0,
const struct ip6t_replace *repl)
static void
get_counters(const struct xt_table_info *t,
struct xt_counters counters[])
static struct xt_counters *alloc_counters(const struct xt_table *table)
static int
copy_entries_to_user(unsigned int total_size,
const struct xt_table *table,
void __user *userptr)
static void compat_standard_from_user(void *dst, const void *src)
static int compat_standard_to_user(void __user *dst, const void *src)
static int compat_calc_entry(const struct ip6t_entry *e,
const struct xt_table_info *info,
const void *base, struct xt_table_info *newinfo)
static int compat_table_info(const struct xt_table_info *info,
struct xt_table_info *newinfo)
static int get_info(struct net *net, void __user *user,
const int *len, int compat)
static int
get_entries(struct net *net, struct ip6t_get_entries __user *uptr,
const int *len)
static int
__do_replace(struct net *net, const char *name, unsigned int valid_hooks,
struct xt_table_info *newinfo, unsigned int num_counters,
void __user *counters_ptr)
static int
do_replace(struct net *net, const void __user *user, unsigned int len)
static int
do_add_counters(struct net *net, const void __user *user, unsigned int len,
int compat)
struct compat_ip6t_replace ;
static int
compat_copy_entry_to_user(struct ip6t_entry *e, void __user **dstptr,
unsigned int *size, struct xt_counters *counters,
unsigned int i)
static int
compat_find_calc_match(struct xt_entry_match *m,
const char *name,
const struct ip6t_ip6 *ipv6,
unsigned int hookmask,
int *size)
static void compat_release_entry(struct compat_ip6t_entry *e)
static int
check_compat_entry_size_and_hooks(struct compat_ip6t_entry *e,
struct xt_table_info *newinfo,
unsigned int *size,
const unsigned char *base,
const unsigned char *limit,
const unsigned int *hook_entries,
const unsigned int *underflows,
const char *name)
static int
compat_copy_entry_from_user(struct compat_ip6t_entry *e, void **dstptr,
unsigned int *size, const char *name,
struct xt_table_info *newinfo, unsigned char *base)
static int compat_check_entry(struct ip6t_entry *e, struct net *net,
const char *name)
static int
translate_compat_table(struct net *net,
const char *name,
unsigned int valid_hooks,
struct xt_table_info **pinfo,
void **pentry0,
unsigned int total_size,
unsigned int number,
unsigned int *hook_entries,
unsigned int *underflows)
static int
compat_do_replace(struct net *net, void __user *user, unsigned int len)
static int
compat_do_ip6t_set_ctl(struct sock *sk, int cmd, void __user *user,
unsigned int len)
struct compat_ip6t_get_entries ;
static int
compat_copy_entries_to_user(unsigned int total_size, struct xt_table *table,
void __user *userptr)
static int
compat_get_entries(struct net *net, struct compat_ip6t_get_entries __user *uptr,
int *len)
static int do_ip6t_get_ctl(struct sock *, int, void __user *, int *);
static int
compat_do_ip6t_get_ctl(struct sock *sk, int cmd, void __user *user, int *len)
static int
do_ip6t_set_ctl(struct sock *sk, int cmd, void __user *user, unsigned int len)
static int
do_ip6t_get_ctl(struct sock *sk, int cmd, void __user *user, int *len)
struct xt_table *ip6t_register_table(struct net *net,
const struct xt_table *table,
const struct ip6t_replace *repl)
void ip6t_unregister_table(struct net *net, struct xt_table *table)
static inline bool
icmp6_type_code_match(u_int8_t test_type, u_int8_t min_code, u_int8_t max_code,
u_int8_t type, u_int8_t code,
bool invert)
static bool
icmp6_match(const struct sk_buff *skb, struct xt_action_param *par)
static int icmp6_checkentry(const struct xt_mtchk_param *par)
static struct xt_target ip6t_builtin_tg[] __read_mostly = ;
static struct nf_sockopt_ops ip6t_sockopts = ;
static struct xt_match ip6t_builtin_mt[] __read_mostly = ;
static int __net_init ip6_tables_net_init(struct net *net)
static void __net_exit ip6_tables_net_exit(struct net *net)
static struct pernet_operations ip6_tables_net_ops = ;
static int __init ip6_tables_init(void)
static void __exit ip6_tables_fini(void)
int ipv6_find_hdr(const struct sk_buff *skb, unsigned int *offset,
int target, unsigned short *fragoff)
EXPORT_SYMBOL(ip6t_register_table);
EXPORT_SYMBOL(ip6t_unregister_table);
EXPORT_SYMBOL(ip6t_do_table);
EXPORT_SYMBOL(ip6t_ext_hdr);
EXPORT_SYMBOL(ipv6_find_hdr);
module_init(ip6_tables_init);
module_exit(ip6_tables_fini);
