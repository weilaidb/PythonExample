struct ip6_ra_chain *ip6_ra_chain;
DEFINE_RWLOCK(ip6_ra_lock);
int ip6_ra_control(struct sock *sk, int sel)
static
struct ipv6_txoptions *ipv6_update_options(struct sock *sk,
struct ipv6_txoptions *opt)
static int do_ipv6_setsockopt(struct sock *sk, int level, int optname,
char __user *optval, unsigned int optlen)
int ipv6_setsockopt(struct sock *sk, int level, int optname,
char __user *optval, unsigned int optlen)
EXPORT_SYMBOL(ipv6_setsockopt);
int compat_ipv6_setsockopt(struct sock *sk, int level, int optname,
char __user *optval, unsigned int optlen)
EXPORT_SYMBOL(compat_ipv6_setsockopt);
static int ipv6_getsockopt_sticky(struct sock *sk, struct ipv6_txoptions *opt,
int optname, char __user *optval, int len)
static int do_ipv6_getsockopt(struct sock *sk, int level, int optname,
char __user *optval, int __user *optlen, unsigned flags)
int ipv6_getsockopt(struct sock *sk, int level, int optname,
char __user *optval, int __user *optlen)
EXPORT_SYMBOL(ipv6_getsockopt);
int compat_ipv6_getsockopt(struct sock *sk, int level, int optname,
char __user *optval, int __user *optlen)
EXPORT_SYMBOL(compat_ipv6_getsockopt);
