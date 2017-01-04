#if defined(CONFIG_IPV6) || defined(CONFIG_IPV6_MODULE)
static inline int aead_len(struct xfrm_algo_aead *alg)
static int verify_one_alg(struct nlattr **attrs, enum xfrm_attr_type_t type)
static int verify_auth_trunc(struct nlattr **attrs)
static int verify_aead(struct nlattr **attrs)
static void verify_one_addr(struct nlattr **attrs, enum xfrm_attr_type_t type,
xfrm_address_t **addrp)
static inline int verify_sec_ctx_len(struct nlattr **attrs)
static inline int verify_replay(struct xfrm_usersa_info *p,
struct nlattr **attrs)
static int verify_newsa_info(struct xfrm_usersa_info *p,
struct nlattr **attrs)
static int attach_one_algo(struct xfrm_algo **algpp, u8 *props,
struct xfrm_algo_desc *(*get_byname)(const char *, int),
struct nlattr *rta)
static int attach_auth(struct xfrm_algo_auth **algpp, u8 *props,
struct nlattr *rta)
static int attach_auth_trunc(struct xfrm_algo_auth **algpp, u8 *props,
struct nlattr *rta)
static int attach_aead(struct xfrm_algo_aead **algpp, u8 *props,
struct nlattr *rta)
static inline int xfrm_replay_verify_len(struct xfrm_replay_state_esn *replay_esn,
struct nlattr *rp)
static int xfrm_alloc_replay_state_esn(struct xfrm_replay_state_esn **replay_esn,
struct xfrm_replay_state_esn **preplay_esn,
struct nlattr *rta)
static inline int xfrm_user_sec_ctx_size(struct xfrm_sec_ctx *xfrm_ctx)
static void copy_from_user_state(struct xfrm_state *x, struct xfrm_usersa_info *p)
static void xfrm_update_ae_params(struct xfrm_state *x, struct nlattr **attrs)
static struct xfrm_state *xfrm_state_construct(struct net *net,
struct xfrm_usersa_info *p,
struct nlattr **attrs,
int *errp)
static int xfrm_add_sa(struct sk_buff *skb, struct nlmsghdr *nlh,
struct nlattr **attrs)
static struct xfrm_state *xfrm_user_state_lookup(struct net *net,
struct xfrm_usersa_id *p,
struct nlattr **attrs,
int *errp)
static int xfrm_del_sa(struct sk_buff *skb, struct nlmsghdr *nlh,
struct nlattr **attrs)
static void copy_to_user_state(struct xfrm_state *x, struct xfrm_usersa_info *p)
struct xfrm_dump_info ;
static int copy_sec_ctx(struct xfrm_sec_ctx *s, struct sk_buff *skb)
static int copy_to_user_auth(struct xfrm_algo_auth *auth, struct sk_buff *skb)
static int copy_to_user_state_extra(struct xfrm_state *x,
struct xfrm_usersa_info *p,
struct sk_buff *skb)
static int dump_one_state(struct xfrm_state *x, int count, void *ptr)
static int xfrm_dump_sa_done(struct netlink_callback *cb)
static int xfrm_dump_sa(struct sk_buff *skb, struct netlink_callback *cb)
static struct sk_buff *xfrm_state_netlink(struct sk_buff *in_skb,
struct xfrm_state *x, u32 seq)
static inline size_t xfrm_spdinfo_msgsize(void)
static int build_spdinfo(struct sk_buff *skb, struct net *net,
u32 pid, u32 seq, u32 flags)
static int xfrm_get_spdinfo(struct sk_buff *skb, struct nlmsghdr *nlh,
struct nlattr **attrs)
static inline size_t xfrm_sadinfo_msgsize(void)
static int build_sadinfo(struct sk_buff *skb, struct net *net,
u32 pid, u32 seq, u32 flags)
static int xfrm_get_sadinfo(struct sk_buff *skb, struct nlmsghdr *nlh,
struct nlattr **attrs)
static int xfrm_get_sa(struct sk_buff *skb, struct nlmsghdr *nlh,
struct nlattr **attrs)
static int verify_userspi_info(struct xfrm_userspi_info *p)
static int xfrm_alloc_userspi(struct sk_buff *skb, struct nlmsghdr *nlh,
struct nlattr **attrs)
static int verify_policy_dir(u8 dir)
static int verify_policy_type(u8 type)
static int verify_newpolicy_info(struct xfrm_userpolicy_info *p)
static int copy_from_user_sec_ctx(struct xfrm_policy *pol, struct nlattr **attrs)
static void copy_templates(struct xfrm_policy *xp, struct xfrm_user_tmpl *ut,
int nr)
static int validate_tmpl(int nr, struct xfrm_user_tmpl *ut, u16 family)
static int copy_from_user_tmpl(struct xfrm_policy *pol, struct nlattr **attrs)
static int copy_from_user_policy_type(u8 *tp, struct nlattr **attrs)
static void copy_from_user_policy(struct xfrm_policy *xp, struct xfrm_userpolicy_info *p)
static void copy_to_user_policy(struct xfrm_policy *xp, struct xfrm_userpolicy_info *p, int dir)
static struct xfrm_policy *xfrm_policy_construct(struct net *net, struct xfrm_userpolicy_info *p, struct nlattr **attrs, int *errp)
static int xfrm_add_policy(struct sk_buff *skb, struct nlmsghdr *nlh,
struct nlattr **attrs)
static int copy_to_user_tmpl(struct xfrm_policy *xp, struct sk_buff *skb)
static inline int copy_to_user_state_sec_ctx(struct xfrm_state *x, struct sk_buff *skb)
static inline int copy_to_user_sec_ctx(struct xfrm_policy *xp, struct sk_buff *skb)
static inline size_t userpolicy_type_attrsize(void)
static int copy_to_user_policy_type(u8 type, struct sk_buff *skb)
static inline int copy_to_user_policy_type(u8 type, struct sk_buff *skb)
static int dump_one_policy(struct xfrm_policy *xp, int dir, int count, void *ptr)
static int xfrm_dump_policy_done(struct netlink_callback *cb)
static int xfrm_dump_policy(struct sk_buff *skb, struct netlink_callback *cb)
static struct sk_buff *xfrm_policy_netlink(struct sk_buff *in_skb,
struct xfrm_policy *xp,
int dir, u32 seq)
static int xfrm_get_policy(struct sk_buff *skb, struct nlmsghdr *nlh,
struct nlattr **attrs)
static int xfrm_flush_sa(struct sk_buff *skb, struct nlmsghdr *nlh,
struct nlattr **attrs)
static inline size_t xfrm_aevent_msgsize(struct xfrm_state *x)
static int build_aevent(struct sk_buff *skb, struct xfrm_state *x, const struct km_event *c)
static int xfrm_get_ae(struct sk_buff *skb, struct nlmsghdr *nlh,
struct nlattr **attrs)
static int xfrm_new_ae(struct sk_buff *skb, struct nlmsghdr *nlh,
struct nlattr **attrs)
static int xfrm_flush_policy(struct sk_buff *skb, struct nlmsghdr *nlh,
struct nlattr **attrs)
static int xfrm_add_pol_expire(struct sk_buff *skb, struct nlmsghdr *nlh,
struct nlattr **attrs)
static int xfrm_add_sa_expire(struct sk_buff *skb, struct nlmsghdr *nlh,
struct nlattr **attrs)
static int xfrm_add_acquire(struct sk_buff *skb, struct nlmsghdr *nlh,
struct nlattr **attrs)
static int copy_from_user_migrate(struct xfrm_migrate *ma,
struct xfrm_kmaddress *k,
struct nlattr **attrs, int *num)
static int xfrm_do_migrate(struct sk_buff *skb, struct nlmsghdr *nlh,
struct nlattr **attrs)
static int xfrm_do_migrate(struct sk_buff *skb, struct nlmsghdr *nlh,
struct nlattr **attrs)
static int copy_to_user_migrate(const struct xfrm_migrate *m, struct sk_buff *skb)
static int copy_to_user_kmaddress(const struct xfrm_kmaddress *k, struct sk_buff *skb)
static inline size_t xfrm_migrate_msgsize(int num_migrate, int with_kma)
static int build_migrate(struct sk_buff *skb, const struct xfrm_migrate *m,
int num_migrate, const struct xfrm_kmaddress *k,
const struct xfrm_selector *sel, u8 dir, u8 type)
static int xfrm_send_migrate(const struct xfrm_selector *sel, u8 dir, u8 type,
const struct xfrm_migrate *m, int num_migrate,
const struct xfrm_kmaddress *k)
static int xfrm_send_migrate(const struct xfrm_selector *sel, u8 dir, u8 type,
const struct xfrm_migrate *m, int num_migrate,
const struct xfrm_kmaddress *k)
#define XMSGSIZE(type) sizeof(struct type)
static const int xfrm_msg_min[XFRM_NR_MSGTYPES] = ;
#undef XMSGSIZE
static const struct nla_policy xfrma_policy[XFRMA_MAX+1] = ;
static struct xfrm_link  xfrm_dispatch[XFRM_NR_MSGTYPES] = ;
static int xfrm_user_rcv_msg(struct sk_buff *skb, struct nlmsghdr *nlh)
static void xfrm_netlink_rcv(struct sk_buff *skb)
static inline size_t xfrm_expire_msgsize(void)
static int build_expire(struct sk_buff *skb, struct xfrm_state *x, const struct km_event *c)
static int xfrm_exp_state_notify(struct xfrm_state *x, const struct km_event *c)
static int xfrm_aevent_state_notify(struct xfrm_state *x, const struct km_event *c)
static int xfrm_notify_sa_flush(const struct km_event *c)
static inline size_t xfrm_sa_len(struct xfrm_state *x)
static int xfrm_notify_sa(struct xfrm_state *x, const struct km_event *c)
static int xfrm_send_state_notify(struct xfrm_state *x, const struct km_event *c)
static inline size_t xfrm_acquire_msgsize(struct xfrm_state *x,
struct xfrm_policy *xp)
static int build_acquire(struct sk_buff *skb, struct xfrm_state *x,
struct xfrm_tmpl *xt, struct xfrm_policy *xp,
int dir)
static int xfrm_send_acquire(struct xfrm_state *x, struct xfrm_tmpl *xt,
struct xfrm_policy *xp, int dir)
static struct xfrm_policy *xfrm_compile_policy(struct sock *sk, int opt,
u8 *data, int len, int *dir)
static inline size_t xfrm_polexpire_msgsize(struct xfrm_policy *xp)
static int build_polexpire(struct sk_buff *skb, struct xfrm_policy *xp,
int dir, const struct km_event *c)
static int xfrm_exp_policy_notify(struct xfrm_policy *xp, int dir, const struct km_event *c)
static int xfrm_notify_policy(struct xfrm_policy *xp, int dir, const struct km_event *c)
static int xfrm_notify_policy_flush(const struct km_event *c)
static int xfrm_send_policy_notify(struct xfrm_policy *xp, int dir, const struct km_event *c)
static inline size_t xfrm_report_msgsize(void)
static int build_report(struct sk_buff *skb, u8 proto,
struct xfrm_selector *sel, xfrm_address_t *addr)
static int xfrm_send_report(struct net *net, u8 proto,
struct xfrm_selector *sel, xfrm_address_t *addr)
static inline size_t xfrm_mapping_msgsize(void)
static int build_mapping(struct sk_buff *skb, struct xfrm_state *x,
xfrm_address_t *new_saddr, __be16 new_sport)
static int xfrm_send_mapping(struct xfrm_state *x, xfrm_address_t *ipaddr,
__be16 sport)
static struct xfrm_mgr netlink_mgr = ;
static int __net_init xfrm_user_net_init(struct net *net)
static void __net_exit xfrm_user_net_exit(struct list_head *net_exit_list)
static struct pernet_operations xfrm_user_net_ops = ;
static int __init xfrm_user_init(void)
static void __exit xfrm_user_exit(void)
module_init(xfrm_user_init);
module_exit(xfrm_user_exit);
MODULE_LICENSE("GPL");
MODULE_ALIAS_NET_PF_PROTO(PF_NETLINK, NETLINK_XFRM);
