#define _X2KEY(x) ((x) == XFRM_INF ? 0 : (x))
#define _KEY2X(x) ((x) == 0 ? XFRM_INF : (x))
static int pfkey_net_id __read_mostly;
struct netns_pfkey ;
static DEFINE_MUTEX(pfkey_mutex);
#define DUMMY_MARK 0
static struct xfrm_mark dummy_mark = ;
struct pfkey_sock ;
static inline struct pfkey_sock *pfkey_sk(struct sock *sk)
static int pfkey_can_dump(const struct sock *sk)
static void pfkey_terminate_dump(struct pfkey_sock *pfk)
static void pfkey_sock_destruct(struct sock *sk)
static const struct proto_ops pfkey_ops;
static void pfkey_insert(struct sock *sk)
static void pfkey_remove(struct sock *sk)
static struct proto key_proto = ;
static int pfkey_create(struct net *net, struct socket *sock, int protocol,
int kern)
static int pfkey_release(struct socket *sock)
static int pfkey_broadcast_one(struct sk_buff *skb, struct sk_buff **skb2,
gfp_t allocation, struct sock *sk)
#define BROADCAST_ALL		0
#define BROADCAST_ONE		1
#define BROADCAST_REGISTERED	2
#define BROADCAST_PROMISC_ONLY	4
static int pfkey_broadcast(struct sk_buff *skb, gfp_t allocation,
int broadcast_flags, struct sock *one_sk,
struct net *net)
static int pfkey_do_dump(struct pfkey_sock *pfk)
static inline void pfkey_hdr_dup(struct sadb_msg *new,
const struct sadb_msg *orig)
static int pfkey_error(const struct sadb_msg *orig, int err, struct sock *sk)
static u8 sadb_ext_min_len[] = ;
static int verify_address_len(const void *p)
static inline int pfkey_sec_ctx_len(const struct sadb_x_sec_ctx *sec_ctx)
static inline int verify_sec_ctx_len(const void *p)
static inline struct xfrm_user_sec_ctx *pfkey_sadb2xfrm_user_sec_ctx(const struct sadb_x_sec_ctx *sec_ctx)
static int present_and_same_family(const struct sadb_address *src,
const struct sadb_address *dst)
static int parse_exthdrs(struct sk_buff *skb, const struct sadb_msg *hdr, void **ext_hdrs)
static uint16_t
pfkey_satype2proto(uint8_t satype)
static uint8_t
pfkey_proto2satype(uint16_t proto)
static uint8_t pfkey_proto_to_xfrm(uint8_t proto)
static uint8_t pfkey_proto_from_xfrm(uint8_t proto)
static inline int pfkey_sockaddr_len(sa_family_t family)
static
int pfkey_sockaddr_extract(const struct sockaddr *sa, xfrm_address_t *xaddr)
static
int pfkey_sadb_addr2xfrm_addr(const struct sadb_address *addr, xfrm_address_t *xaddr)
static struct  xfrm_state *pfkey_xfrm_state_lookup(struct net *net, const struct sadb_msg *hdr, void * const *ext_hdrs)
#define PFKEY_ALIGN8(a) (1 + (((a) - 1) | (8 - 1)))
static int
pfkey_sockaddr_size(sa_family_t family)
static inline int pfkey_mode_from_xfrm(int mode)
static inline int pfkey_mode_to_xfrm(int mode)
static unsigned int pfkey_sockaddr_fill(const xfrm_address_t *xaddr, __be16 port,
struct sockaddr *sa,
unsigned short family)
static struct sk_buff *__pfkey_xfrm_state2msg(const struct xfrm_state *x,
int add_keys, int hsc)
static inline struct sk_buff *pfkey_xfrm_state2msg(const struct xfrm_state *x)
static inline struct sk_buff *pfkey_xfrm_state2msg_expire(const struct xfrm_state *x,
int hsc)
static struct xfrm_state * pfkey_msg2xfrm_state(struct net *net,
const struct sadb_msg *hdr,
void * const *ext_hdrs)
static int pfkey_reserved(struct sock *sk, struct sk_buff *skb, const struct sadb_msg *hdr, void * const *ext_hdrs)
static int pfkey_getspi(struct sock *sk, struct sk_buff *skb, const struct sadb_msg *hdr, void * const *ext_hdrs)
static int pfkey_acquire(struct sock *sk, struct sk_buff *skb, const struct sadb_msg *hdr, void * const *ext_hdrs)
static inline int event2poltype(int event)
static inline int event2keytype(int event)
static int key_notify_sa(struct xfrm_state *x, const struct km_event *c)
static int pfkey_add(struct sock *sk, struct sk_buff *skb, const struct sadb_msg *hdr, void * const *ext_hdrs)
static int pfkey_delete(struct sock *sk, struct sk_buff *skb, const struct sadb_msg *hdr, void * const *ext_hdrs)
static int pfkey_get(struct sock *sk, struct sk_buff *skb, const struct sadb_msg *hdr, void * const *ext_hdrs)
static struct sk_buff *compose_sadb_supported(const struct sadb_msg *orig,
gfp_t allocation)
static int pfkey_register(struct sock *sk, struct sk_buff *skb, const struct sadb_msg *hdr, void * const *ext_hdrs)
static int unicast_flush_resp(struct sock *sk, const struct sadb_msg *ihdr)
static int key_notify_sa_flush(const struct km_event *c)
static int pfkey_flush(struct sock *sk, struct sk_buff *skb, const struct sadb_msg *hdr, void * const *ext_hdrs)
static int dump_sa(struct xfrm_state *x, int count, void *ptr)
static int pfkey_dump_sa(struct pfkey_sock *pfk)
static void pfkey_dump_sa_done(struct pfkey_sock *pfk)
static int pfkey_dump(struct sock *sk, struct sk_buff *skb, const struct sadb_msg *hdr, void * const *ext_hdrs)
static int pfkey_promisc(struct sock *sk, struct sk_buff *skb, const struct sadb_msg *hdr, void * const *ext_hdrs)
static int check_reqid(struct xfrm_policy *xp, int dir, int count, void *ptr)
static u32 gen_reqid(struct net *net)
static int
parse_ipsecrequest(struct xfrm_policy *xp, struct sadb_x_ipsecrequest *rq)
static int
parse_ipsecrequests(struct xfrm_policy *xp, struct sadb_x_policy *pol)
static inline int pfkey_xfrm_policy2sec_ctx_size(const struct xfrm_policy *xp)
static int pfkey_xfrm_policy2msg_size(const struct xfrm_policy *xp)
static struct sk_buff * pfkey_xfrm_policy2msg_prep(const struct xfrm_policy *xp)
static int pfkey_xfrm_policy2msg(struct sk_buff *skb, const struct xfrm_policy *xp, int dir)
static int key_notify_policy(struct xfrm_policy *xp, int dir, const struct km_event *c)
static int pfkey_spdadd(struct sock *sk, struct sk_buff *skb, const struct sadb_msg *hdr, void * const *ext_hdrs)
static int pfkey_spddelete(struct sock *sk, struct sk_buff *skb, const struct sadb_msg *hdr, void * const *ext_hdrs)
static int key_pol_get_resp(struct sock *sk, struct xfrm_policy *xp, const struct sadb_msg *hdr, int dir)
static int pfkey_sockaddr_pair_size(sa_family_t family)
static int parse_sockaddr_pair(struct sockaddr *sa, int ext_len,
xfrm_address_t *saddr, xfrm_address_t *daddr,
u16 *family)
static int ipsecrequests_to_migrate(struct sadb_x_ipsecrequest *rq1, int len,
struct xfrm_migrate *m)
static int pfkey_migrate(struct sock *sk, struct sk_buff *skb,
const struct sadb_msg *hdr, void * const *ext_hdrs)
static int pfkey_migrate(struct sock *sk, struct sk_buff *skb,
const struct sadb_msg *hdr, void * const *ext_hdrs)
static int pfkey_spdget(struct sock *sk, struct sk_buff *skb, const struct sadb_msg *hdr, void * const *ext_hdrs)
static int dump_sp(struct xfrm_policy *xp, int dir, int count, void *ptr)
static int pfkey_dump_sp(struct pfkey_sock *pfk)
static void pfkey_dump_sp_done(struct pfkey_sock *pfk)
static int pfkey_spddump(struct sock *sk, struct sk_buff *skb, const struct sadb_msg *hdr, void * const *ext_hdrs)
static int key_notify_policy_flush(const struct km_event *c)
static int pfkey_spdflush(struct sock *sk, struct sk_buff *skb, const struct sadb_msg *hdr, void * const *ext_hdrs)
typedef int (*pfkey_handler)(struct sock *sk, struct sk_buff *skb,
const struct sadb_msg *hdr, void * const *ext_hdrs);
static pfkey_handler pfkey_funcs[SADB_MAX + 1] = ;
static int pfkey_process(struct sock *sk, struct sk_buff *skb, const struct sadb_msg *hdr)
static struct sadb_msg *pfkey_get_base_msg(struct sk_buff *skb, int *errp)
static inline int aalg_tmpl_set(const struct xfrm_tmpl *t,
const struct xfrm_algo_desc *d)
static inline int ealg_tmpl_set(const struct xfrm_tmpl *t,
const struct xfrm_algo_desc *d)
static int count_ah_combs(const struct xfrm_tmpl *t)
static int count_esp_combs(const struct xfrm_tmpl *t)
static void dump_ah_combs(struct sk_buff *skb, const struct xfrm_tmpl *t)
static void dump_esp_combs(struct sk_buff *skb, const struct xfrm_tmpl *t)
static int key_notify_policy_expire(struct xfrm_policy *xp, const struct km_event *c)
static int key_notify_sa_expire(struct xfrm_state *x, const struct km_event *c)
static int pfkey_send_notify(struct xfrm_state *x, const struct km_event *c)
static int pfkey_send_policy_notify(struct xfrm_policy *xp, int dir, const struct km_event *c)
static u32 get_acqseq(void)
static int pfkey_send_acquire(struct xfrm_state *x, struct xfrm_tmpl *t, struct xfrm_policy *xp, int dir)
static struct xfrm_policy *pfkey_compile_policy(struct sock *sk, int opt,
u8 *data, int len, int *dir)
static int pfkey_send_new_mapping(struct xfrm_state *x, xfrm_address_t *ipaddr, __be16 sport)
static int set_sadb_address(struct sk_buff *skb, int sasize, int type,
const struct xfrm_selector *sel)
static int set_sadb_kmaddress(struct sk_buff *skb, const struct xfrm_kmaddress *k)
static int set_ipsecrequest(struct sk_buff *skb,
uint8_t proto, uint8_t mode, int level,
uint32_t reqid, uint8_t family,
const xfrm_address_t *src, const xfrm_address_t *dst)
static int pfkey_send_migrate(const struct xfrm_selector *sel, u8 dir, u8 type,
const struct xfrm_migrate *m, int num_bundles,
const struct xfrm_kmaddress *k)
static int pfkey_send_migrate(const struct xfrm_selector *sel, u8 dir, u8 type,
const struct xfrm_migrate *m, int num_bundles,
const struct xfrm_kmaddress *k)
static int pfkey_sendmsg(struct kiocb *kiocb,
struct socket *sock, struct msghdr *msg, size_t len)
static int pfkey_recvmsg(struct kiocb *kiocb,
struct socket *sock, struct msghdr *msg, size_t len,
int flags)
static const struct proto_ops pfkey_ops = ;
static const struct net_proto_family pfkey_family_ops = ;
static int pfkey_seq_show(struct seq_file *f, void *v)
static void *pfkey_seq_start(struct seq_file *f, loff_t *ppos)
__acquires(rcu)
static void *pfkey_seq_next(struct seq_file *f, void *v, loff_t *ppos)
static void pfkey_seq_stop(struct seq_file *f, void *v)
__releases(rcu)
static const struct seq_operations pfkey_seq_ops = ;
static int pfkey_seq_open(struct inode *inode, struct file *file)
static const struct file_operations pfkey_proc_ops = ;
static int __net_init pfkey_init_proc(struct net *net)
static void __net_exit pfkey_exit_proc(struct net *net)
static inline int pfkey_init_proc(struct net *net)
static inline void pfkey_exit_proc(struct net *net)
static struct xfrm_mgr pfkeyv2_mgr =
;
static int __net_init pfkey_net_init(struct net *net)
static void __net_exit pfkey_net_exit(struct net *net)
static struct pernet_operations pfkey_net_ops = ;
static void __exit ipsec_pfkey_exit(void)
static int __init ipsec_pfkey_init(void)
module_init(ipsec_pfkey_init);
module_exit(ipsec_pfkey_exit);
MODULE_LICENSE("GPL");
MODULE_ALIAS_NETPROTO(PF_KEY);
