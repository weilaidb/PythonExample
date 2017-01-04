static HLIST_HEAD(raw_head);
static DEFINE_RWLOCK(raw_lock);
static void raw_hash(struct sock *sk)
static void raw_unhash(struct sock *sk)
static void raw_close(struct sock *sk, long timeout)
static int raw_bind(struct sock *sk, struct sockaddr *uaddr, int len)
static int raw_connect(struct sock *sk, struct sockaddr *uaddr,
int addr_len)
static int raw_disconnect(struct sock *sk, int flags)
static int raw_sendmsg(struct kiocb *iocb, struct sock *sk, struct msghdr *msg,
size_t size)
static int raw_recvmsg(struct kiocb *iocb, struct sock *sk, struct msghdr *msg,
size_t len, int noblock, int flags, int *addr_len)
static int raw_rcv_skb(struct sock *sk, struct sk_buff *skb)
void ieee802154_raw_deliver(struct net_device *dev, struct sk_buff *skb)
static int raw_getsockopt(struct sock *sk, int level, int optname,
char __user *optval, int __user *optlen)
static int raw_setsockopt(struct sock *sk, int level, int optname,
char __user *optval, unsigned int optlen)
struct proto ieee802154_raw_prot = ;
