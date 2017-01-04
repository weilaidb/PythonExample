#define __LINUX_NETFILTER_H
#define NF_DROP 0
#define NF_ACCEPT 1
#define NF_STOLEN 2
#define NF_QUEUE 3
#define NF_REPEAT 4
#define NF_STOP 5
#define NF_MAX_VERDICT NF_STOP
#define NF_VERDICT_MASK 0x000000ff
#define NF_VERDICT_FLAG_QUEUE_BYPASS	0x00008000
#define NF_VERDICT_QMASK 0xffff0000
#define NF_VERDICT_QBITS 16
#define NF_QUEUE_NR(x) ((((x) << 16) & NF_VERDICT_QMASK) | NF_QUEUE)
#define NF_DROP_ERR(x) (((-x) << 16) | NF_DROP)
#define NFC_UNKNOWN 0x4000
#define NFC_ALTERED 0x8000
#define NF_VERDICT_BITS 16
enum nf_inet_hooks ;
enum ;
union nf_inet_addr ;
static inline int NF_DROP_GETERR(int verdict)
static inline int nf_inet_addr_cmp(const union nf_inet_addr *a1,
const union nf_inet_addr *a2)
extern void netfilter_init(void);
#define NF_MAX_HOOKS 8
struct sk_buff;
typedef unsigned int nf_hookfn(unsigned int hooknum,
struct sk_buff *skb,
const struct net_device *in,
const struct net_device *out,
int (*okfn)(struct sk_buff *));
struct nf_hook_ops ;
struct nf_sockopt_ops ;
int nf_register_hook(struct nf_hook_ops *reg);
void nf_unregister_hook(struct nf_hook_ops *reg);
int nf_register_hooks(struct nf_hook_ops *reg, unsigned int n);
void nf_unregister_hooks(struct nf_hook_ops *reg, unsigned int n);
int nf_register_sockopt(struct nf_sockopt_ops *reg);
void nf_unregister_sockopt(struct nf_sockopt_ops *reg);
extern struct ctl_path nf_net_netfilter_sysctl_path[];
extern struct ctl_path nf_net_ipv4_netfilter_sysctl_path[];
extern struct list_head nf_hooks[NFPROTO_NUMPROTO][NF_MAX_HOOKS];
int nf_hook_slow(u_int8_t pf, unsigned int hook, struct sk_buff *skb,
struct net_device *indev, struct net_device *outdev,
int (*okfn)(struct sk_buff *), int thresh);
static inline int nf_hook_thresh(u_int8_t pf, unsigned int hook,
struct sk_buff *skb,
struct net_device *indev,
struct net_device *outdev,
int (*okfn)(struct sk_buff *), int thresh)
static inline int nf_hook(u_int8_t pf, unsigned int hook, struct sk_buff *skb,
struct net_device *indev, struct net_device *outdev,
int (*okfn)(struct sk_buff *))
static inline int
NF_HOOK_THRESH(uint8_t pf, unsigned int hook, struct sk_buff *skb,
struct net_device *in, struct net_device *out,
int (*okfn)(struct sk_buff *), int thresh)
static inline int
NF_HOOK_COND(uint8_t pf, unsigned int hook, struct sk_buff *skb,
struct net_device *in, struct net_device *out,
int (*okfn)(struct sk_buff *), bool cond)
static inline int
NF_HOOK(uint8_t pf, unsigned int hook, struct sk_buff *skb,
struct net_device *in, struct net_device *out,
int (*okfn)(struct sk_buff *))
int nf_setsockopt(struct sock *sk, u_int8_t pf, int optval, char __user *opt,
unsigned int len);
int nf_getsockopt(struct sock *sk, u_int8_t pf, int optval, char __user *opt,
int *len);
int compat_nf_setsockopt(struct sock *sk, u_int8_t pf, int optval,
char __user *opt, unsigned int len);
int compat_nf_getsockopt(struct sock *sk, u_int8_t pf, int optval,
char __user *opt, int *len);
extern int skb_make_writable(struct sk_buff *skb, unsigned int writable_len);
struct flowi;
struct nf_queue_entry;
struct nf_afinfo ;
extern const struct nf_afinfo __rcu *nf_afinfo[NFPROTO_NUMPROTO];
static inline const struct nf_afinfo *nf_get_afinfo(unsigned short family)
static inline __sum16
nf_checksum(struct sk_buff *skb, unsigned int hook, unsigned int dataoff,
u_int8_t protocol, unsigned short family)
static inline __sum16
nf_checksum_partial(struct sk_buff *skb, unsigned int hook,
unsigned int dataoff, unsigned int len,
u_int8_t protocol, unsigned short family)
extern int nf_register_afinfo(const struct nf_afinfo *afinfo);
extern void nf_unregister_afinfo(const struct nf_afinfo *afinfo);
extern void (*ip_nat_decode_session)(struct sk_buff *, struct flowi *);
static inline void
nf_nat_decode_session(struct sk_buff *skb, struct flowi *fl, u_int8_t family)
extern struct proc_dir_entry *proc_net_netfilter;
#define NF_HOOK(pf, hook, skb, indev, outdev, okfn) (okfn)(skb)
#define NF_HOOK_COND(pf, hook, skb, indev, outdev, okfn, cond) (okfn)(skb)
static inline int nf_hook_thresh(u_int8_t pf, unsigned int hook,
struct sk_buff *skb,
struct net_device *indev,
struct net_device *outdev,
int (*okfn)(struct sk_buff *), int thresh)
static inline int nf_hook(u_int8_t pf, unsigned int hook, struct sk_buff *skb,
struct net_device *indev, struct net_device *outdev,
int (*okfn)(struct sk_buff *))
struct flowi;
static inline void
nf_nat_decode_session(struct sk_buff *skb, struct flowi *fl, u_int8_t family)
#if defined(CONFIG_NF_CONNTRACK) || defined(CONFIG_NF_CONNTRACK_MODULE)
extern void (*ip_ct_attach)(struct sk_buff *, struct sk_buff *) __rcu;
extern void nf_ct_attach(struct sk_buff *, struct sk_buff *);
extern void (*nf_ct_destroy)(struct nf_conntrack *) __rcu;
static inline void nf_ct_attach(struct sk_buff *new, struct sk_buff *skb)
