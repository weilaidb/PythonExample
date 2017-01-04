static const struct inet_diag_handler **inet_diag_table;
struct inet_diag_entry ;
static struct sock *idiagnl;
#define INET_DIAG_PUT(skb, attrtype, attrlen) \
RTA_DATA(__RTA_PUT(skb, attrtype, attrlen))
static DEFINE_MUTEX(inet_diag_table_mutex);
static const struct inet_diag_handler *inet_diag_lock_handler(int type)
static inline void inet_diag_unlock_handler(
const struct inet_diag_handler *handler)
static int inet_csk_diag_fill(struct sock *sk,
struct sk_buff *skb,
int ext, u32 pid, u32 seq, u16 nlmsg_flags,
const struct nlmsghdr *unlh)
static int inet_twsk_diag_fill(struct inet_timewait_sock *tw,
struct sk_buff *skb, int ext, u32 pid,
u32 seq, u16 nlmsg_flags,
const struct nlmsghdr *unlh)
static int sk_diag_fill(struct sock *sk, struct sk_buff *skb,
int ext, u32 pid, u32 seq, u16 nlmsg_flags,
const struct nlmsghdr *unlh)
static int inet_diag_get_exact(struct sk_buff *in_skb,
const struct nlmsghdr *nlh)
static int bitstring_match(const __be32 *a1, const __be32 *a2, int bits)
static int inet_diag_bc_run(const void *bc, int len,
const struct inet_diag_entry *entry)
static int valid_cc(const void *bc, int len, int cc)
static int inet_diag_bc_audit(const void *bytecode, int bytecode_len)
static int inet_csk_diag_dump(struct sock *sk,
struct sk_buff *skb,
struct netlink_callback *cb)
static int inet_twsk_diag_dump(struct inet_timewait_sock *tw,
struct sk_buff *skb,
struct netlink_callback *cb)
static int inet_diag_fill_req(struct sk_buff *skb, struct sock *sk,
struct request_sock *req, u32 pid, u32 seq,
const struct nlmsghdr *unlh)
static int inet_diag_dump_reqs(struct sk_buff *skb, struct sock *sk,
struct netlink_callback *cb)
static int inet_diag_dump(struct sk_buff *skb, struct netlink_callback *cb)
static int inet_diag_rcv_msg(struct sk_buff *skb, struct nlmsghdr *nlh)
static DEFINE_MUTEX(inet_diag_mutex);
static void inet_diag_rcv(struct sk_buff *skb)
int inet_diag_register(const struct inet_diag_handler *h)
EXPORT_SYMBOL_GPL(inet_diag_register);
void inet_diag_unregister(const struct inet_diag_handler *h)
EXPORT_SYMBOL_GPL(inet_diag_unregister);
static int __init inet_diag_init(void)
static void __exit inet_diag_exit(void)
module_init(inet_diag_init);
module_exit(inet_diag_exit);
MODULE_LICENSE("GPL");
MODULE_ALIAS_NET_PF_PROTO(PF_NETLINK, NETLINK_INET_DIAG);
