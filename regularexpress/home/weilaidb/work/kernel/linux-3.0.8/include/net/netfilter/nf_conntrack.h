#define _NF_CONNTRACK_H
union nf_conntrack_proto ;
union nf_conntrack_expect_proto ;
union nf_conntrack_help ;
#define NF_CT_ASSERT(x)		WARN_ON(!(x))
#define NF_CT_ASSERT(x)
struct nf_conntrack_helper;
#define NF_CT_MAX_EXPECT_CLASSES	4
struct nf_conn_help ;
struct nf_conn ;
static inline struct nf_conn *
nf_ct_tuplehash_to_ctrack(const struct nf_conntrack_tuple_hash *hash)
static inline u_int16_t nf_ct_l3num(const struct nf_conn *ct)
static inline u_int8_t nf_ct_protonum(const struct nf_conn *ct)
#define nf_ct_tuple(ct, dir) (&(ct)->tuplehash[dir].tuple)
#define master_ct(conntr) (conntr->master)
extern struct net init_net;
static inline struct net *nf_ct_net(const struct nf_conn *ct)
extern void
nf_conntrack_alter_reply(struct nf_conn *ct,
const struct nf_conntrack_tuple *newreply);
extern int
nf_conntrack_tuple_taken(const struct nf_conntrack_tuple *tuple,
const struct nf_conn *ignored_conntrack);
static inline struct nf_conn *
nf_ct_get(const struct sk_buff *skb, enum ip_conntrack_info *ctinfo)
static inline void nf_ct_put(struct nf_conn *ct)
extern int nf_ct_l3proto_try_module_get(unsigned short l3proto);
extern void nf_ct_l3proto_module_put(unsigned short l3proto);
extern void *nf_ct_alloc_hashtable(unsigned int *sizep, int nulls);
extern void nf_ct_free_hashtable(void *hash, unsigned int size);
extern struct nf_conntrack_tuple_hash *
__nf_conntrack_find(struct net *net, u16 zone,
const struct nf_conntrack_tuple *tuple);
extern void nf_conntrack_hash_insert(struct nf_conn *ct);
extern void nf_ct_delete_from_lists(struct nf_conn *ct);
extern void nf_ct_insert_dying_list(struct nf_conn *ct);
extern void nf_conntrack_flush_report(struct net *net, u32 pid, int report);
extern bool nf_ct_get_tuplepr(const struct sk_buff *skb,
unsigned int nhoff, u_int16_t l3num,
struct nf_conntrack_tuple *tuple);
extern bool nf_ct_invert_tuplepr(struct nf_conntrack_tuple *inverse,
const struct nf_conntrack_tuple *orig);
extern void __nf_ct_refresh_acct(struct nf_conn *ct,
enum ip_conntrack_info ctinfo,
const struct sk_buff *skb,
unsigned long extra_jiffies,
int do_acct);
static inline void nf_ct_refresh_acct(struct nf_conn *ct,
enum ip_conntrack_info ctinfo,
const struct sk_buff *skb,
unsigned long extra_jiffies)
static inline void nf_ct_refresh(struct nf_conn *ct,
const struct sk_buff *skb,
unsigned long extra_jiffies)
extern bool __nf_ct_kill_acct(struct nf_conn *ct,
enum ip_conntrack_info ctinfo,
const struct sk_buff *skb,
int do_acct);
static inline bool nf_ct_kill_acct(struct nf_conn *ct,
enum ip_conntrack_info ctinfo,
const struct sk_buff *skb)
static inline bool nf_ct_kill(struct nf_conn *ct)
extern s16 (*nf_ct_nat_offset)(const struct nf_conn *ct,
enum ip_conntrack_dir dir,
u32 seq);
DECLARE_PER_CPU(struct nf_conn, nf_conntrack_untracked);
static inline struct nf_conn *nf_ct_untracked_get(void)
extern void nf_ct_untracked_status_or(unsigned long bits);
extern void
nf_ct_iterate_cleanup(struct net *net, int (*iter)(struct nf_conn *i, void *data), void *data);
extern void nf_conntrack_free(struct nf_conn *ct);
extern struct nf_conn *
nf_conntrack_alloc(struct net *net, u16 zone,
const struct nf_conntrack_tuple *orig,
const struct nf_conntrack_tuple *repl,
gfp_t gfp);
static inline int nf_ct_is_template(const struct nf_conn *ct)
static inline int nf_ct_is_confirmed(struct nf_conn *ct)
static inline int nf_ct_is_dying(struct nf_conn *ct)
static inline int nf_ct_is_untracked(const struct nf_conn *ct)
static inline bool nf_is_loopback_packet(const struct sk_buff *skb)
extern int nf_conntrack_set_hashsize(const char *val, struct kernel_param *kp);
extern unsigned int nf_conntrack_htable_size;
extern unsigned int nf_conntrack_max;
extern unsigned int nf_conntrack_hash_rnd;
void init_nf_conntrack_hash_rnd(void);
#define NF_CT_STAT_INC(net, count)	\
__this_cpu_inc((net)->ct.stat->count)
#define NF_CT_STAT_INC_ATOMIC(net, count)		\
do  while (0)
#define MODULE_ALIAS_NFCT_HELPER(helper) \
MODULE_ALIAS("nfct-helper-" helper)
