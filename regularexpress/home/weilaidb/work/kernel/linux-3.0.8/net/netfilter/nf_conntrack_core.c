#define NF_CONNTRACK_VERSION	"0.5.0"
int (*nfnetlink_parse_nat_setup_hook)(struct nf_conn *ct,
enum nf_nat_manip_type manip,
const struct nlattr *attr) __read_mostly;
EXPORT_SYMBOL_GPL(nfnetlink_parse_nat_setup_hook);
DEFINE_SPINLOCK(nf_conntrack_lock);
EXPORT_SYMBOL_GPL(nf_conntrack_lock);
unsigned int nf_conntrack_htable_size __read_mostly;
EXPORT_SYMBOL_GPL(nf_conntrack_htable_size);
unsigned int nf_conntrack_max __read_mostly;
EXPORT_SYMBOL_GPL(nf_conntrack_max);
DEFINE_PER_CPU(struct nf_conn, nf_conntrack_untracked);
EXPORT_PER_CPU_SYMBOL(nf_conntrack_untracked);
unsigned int nf_conntrack_hash_rnd __read_mostly;
static u32 hash_conntrack_raw(const struct nf_conntrack_tuple *tuple, u16 zone)
static u32 __hash_bucket(u32 hash, unsigned int size)
static u32 hash_bucket(u32 hash, const struct net *net)
static u_int32_t __hash_conntrack(const struct nf_conntrack_tuple *tuple,
u16 zone, unsigned int size)
static inline u_int32_t hash_conntrack(const struct net *net, u16 zone,
const struct nf_conntrack_tuple *tuple)
bool
nf_ct_get_tuple(const struct sk_buff *skb,
unsigned int nhoff,
unsigned int dataoff,
u_int16_t l3num,
u_int8_t protonum,
struct nf_conntrack_tuple *tuple,
const struct nf_conntrack_l3proto *l3proto,
const struct nf_conntrack_l4proto *l4proto)
EXPORT_SYMBOL_GPL(nf_ct_get_tuple);
bool nf_ct_get_tuplepr(const struct sk_buff *skb, unsigned int nhoff,
u_int16_t l3num, struct nf_conntrack_tuple *tuple)
EXPORT_SYMBOL_GPL(nf_ct_get_tuplepr);
bool
nf_ct_invert_tuple(struct nf_conntrack_tuple *inverse,
const struct nf_conntrack_tuple *orig,
const struct nf_conntrack_l3proto *l3proto,
const struct nf_conntrack_l4proto *l4proto)
EXPORT_SYMBOL_GPL(nf_ct_invert_tuple);
static void
clean_from_lists(struct nf_conn *ct)
static void
destroy_conntrack(struct nf_conntrack *nfct)
void nf_ct_delete_from_lists(struct nf_conn *ct)
EXPORT_SYMBOL_GPL(nf_ct_delete_from_lists);
static void death_by_event(unsigned long ul_conntrack)
void nf_ct_insert_dying_list(struct nf_conn *ct)
EXPORT_SYMBOL_GPL(nf_ct_insert_dying_list);
static void death_by_timeout(unsigned long ul_conntrack)
static struct nf_conntrack_tuple_hash *
____nf_conntrack_find(struct net *net, u16 zone,
const struct nf_conntrack_tuple *tuple, u32 hash)
struct nf_conntrack_tuple_hash *
__nf_conntrack_find(struct net *net, u16 zone,
const struct nf_conntrack_tuple *tuple)
EXPORT_SYMBOL_GPL(__nf_conntrack_find);
static struct nf_conntrack_tuple_hash *
__nf_conntrack_find_get(struct net *net, u16 zone,
const struct nf_conntrack_tuple *tuple, u32 hash)
struct nf_conntrack_tuple_hash *
nf_conntrack_find_get(struct net *net, u16 zone,
const struct nf_conntrack_tuple *tuple)
EXPORT_SYMBOL_GPL(nf_conntrack_find_get);
static void __nf_conntrack_hash_insert(struct nf_conn *ct,
unsigned int hash,
unsigned int repl_hash)
void nf_conntrack_hash_insert(struct nf_conn *ct)
EXPORT_SYMBOL_GPL(nf_conntrack_hash_insert);
int
__nf_conntrack_confirm(struct sk_buff *skb)
EXPORT_SYMBOL_GPL(__nf_conntrack_confirm);
int
nf_conntrack_tuple_taken(const struct nf_conntrack_tuple *tuple,
const struct nf_conn *ignored_conntrack)
EXPORT_SYMBOL_GPL(nf_conntrack_tuple_taken);
#define NF_CT_EVICTION_RANGE	8
static noinline int early_drop(struct net *net, unsigned int hash)
void init_nf_conntrack_hash_rnd(void)
static struct nf_conn *
__nf_conntrack_alloc(struct net *net, u16 zone,
const struct nf_conntrack_tuple *orig,
const struct nf_conntrack_tuple *repl,
gfp_t gfp, u32 hash)
struct nf_conn *nf_conntrack_alloc(struct net *net, u16 zone,
const struct nf_conntrack_tuple *orig,
const struct nf_conntrack_tuple *repl,
gfp_t gfp)
EXPORT_SYMBOL_GPL(nf_conntrack_alloc);
void nf_conntrack_free(struct nf_conn *ct)
EXPORT_SYMBOL_GPL(nf_conntrack_free);
static struct nf_conntrack_tuple_hash *
init_conntrack(struct net *net, struct nf_conn *tmpl,
const struct nf_conntrack_tuple *tuple,
struct nf_conntrack_l3proto *l3proto,
struct nf_conntrack_l4proto *l4proto,
struct sk_buff *skb,
unsigned int dataoff, u32 hash)
static inline struct nf_conn *
resolve_normal_ct(struct net *net, struct nf_conn *tmpl,
struct sk_buff *skb,
unsigned int dataoff,
u_int16_t l3num,
u_int8_t protonum,
struct nf_conntrack_l3proto *l3proto,
struct nf_conntrack_l4proto *l4proto,
int *set_reply,
enum ip_conntrack_info *ctinfo)
unsigned int
nf_conntrack_in(struct net *net, u_int8_t pf, unsigned int hooknum,
struct sk_buff *skb)
EXPORT_SYMBOL_GPL(nf_conntrack_in);
bool nf_ct_invert_tuplepr(struct nf_conntrack_tuple *inverse,
const struct nf_conntrack_tuple *orig)
EXPORT_SYMBOL_GPL(nf_ct_invert_tuplepr);
void nf_conntrack_alter_reply(struct nf_conn *ct,
const struct nf_conntrack_tuple *newreply)
EXPORT_SYMBOL_GPL(nf_conntrack_alter_reply);
void __nf_ct_refresh_acct(struct nf_conn *ct,
enum ip_conntrack_info ctinfo,
const struct sk_buff *skb,
unsigned long extra_jiffies,
int do_acct)
EXPORT_SYMBOL_GPL(__nf_ct_refresh_acct);
bool __nf_ct_kill_acct(struct nf_conn *ct,
enum ip_conntrack_info ctinfo,
const struct sk_buff *skb,
int do_acct)
EXPORT_SYMBOL_GPL(__nf_ct_kill_acct);
static struct nf_ct_ext_type nf_ct_zone_extend __read_mostly = ;
#if defined(CONFIG_NF_CT_NETLINK) || defined(CONFIG_NF_CT_NETLINK_MODULE)
int nf_ct_port_tuple_to_nlattr(struct sk_buff *skb,
const struct nf_conntrack_tuple *tuple)
EXPORT_SYMBOL_GPL(nf_ct_port_tuple_to_nlattr);
const struct nla_policy nf_ct_port_nla_policy[CTA_PROTO_MAX+1] = ;
EXPORT_SYMBOL_GPL(nf_ct_port_nla_policy);
int nf_ct_port_nlattr_to_tuple(struct nlattr *tb[],
struct nf_conntrack_tuple *t)
EXPORT_SYMBOL_GPL(nf_ct_port_nlattr_to_tuple);
int nf_ct_port_nlattr_tuple_size(void)
EXPORT_SYMBOL_GPL(nf_ct_port_nlattr_tuple_size);
static void nf_conntrack_attach(struct sk_buff *nskb, struct sk_buff *skb)
static struct nf_conn *
get_next_corpse(struct net *net, int (*iter)(struct nf_conn *i, void *data),
void *data, unsigned int *bucket)
void nf_ct_iterate_cleanup(struct net *net,
int (*iter)(struct nf_conn *i, void *data),
void *data)
EXPORT_SYMBOL_GPL(nf_ct_iterate_cleanup);
struct __nf_ct_flush_report ;
static int kill_report(struct nf_conn *i, void *data)
static int kill_all(struct nf_conn *i, void *data)
void nf_ct_free_hashtable(void *hash, unsigned int size)
EXPORT_SYMBOL_GPL(nf_ct_free_hashtable);
void nf_conntrack_flush_report(struct net *net, u32 pid, int report)
EXPORT_SYMBOL_GPL(nf_conntrack_flush_report);
static void nf_ct_release_dying_list(struct net *net)
static int untrack_refs(void)
static void nf_conntrack_cleanup_init_net(void)
static void nf_conntrack_cleanup_net(struct net *net)
void nf_conntrack_cleanup(struct net *net)
void *nf_ct_alloc_hashtable(unsigned int *sizep, int nulls)
EXPORT_SYMBOL_GPL(nf_ct_alloc_hashtable);
int nf_conntrack_set_hashsize(const char *val, struct kernel_param *kp)
EXPORT_SYMBOL_GPL(nf_conntrack_set_hashsize);
module_param_call(hashsize, nf_conntrack_set_hashsize, param_get_uint,
&nf_conntrack_htable_size, 0600);
void nf_ct_untracked_status_or(unsigned long bits)
EXPORT_SYMBOL_GPL(nf_ct_untracked_status_or);
static int nf_conntrack_init_init_net(void)
#define UNCONFIRMED_NULLS_VAL	((1<<30)+0)
#define DYING_NULLS_VAL		((1<<30)+1)
static int nf_conntrack_init_net(struct net *net)
s16 (*nf_ct_nat_offset)(const struct nf_conn *ct,
enum ip_conntrack_dir dir,
u32 seq);
EXPORT_SYMBOL_GPL(nf_ct_nat_offset);
int nf_conntrack_init(struct net *net)
