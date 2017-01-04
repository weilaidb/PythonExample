static HLIST_HEAD(dgram_head);
static DEFINE_RWLOCK(dgram_lock);
struct dgram_sock ;
static inline struct dgram_sock *dgram_sk(const struct sock *sk)
static void dgram_hash(struct sock *sk)
static void dgram_unhash(struct sock *sk)
static int dgram_init(struct sock *sk)
static void dgram_close(struct sock *sk, long timeout)
static int dgram_bind(struct sock *sk, struct sockaddr *uaddr, int len)
static int dgram_ioctl(struct sock *sk, int cmd, unsigned long arg)
static int dgram_connect(struct sock *sk, struct sockaddr *uaddr,
int len)
static int dgram_disconnect(struct sock *sk, int flags)
static int dgram_sendmsg(struct kiocb *iocb, struct sock *sk,
struct msghdr *msg, size_t size)
static int dgram_recvmsg(struct kiocb *iocb, struct sock *sk,
struct msghdr *msg, size_t len, int noblock, int flags,
int *addr_len)
static int dgram_rcv_skb(struct sock *sk, struct sk_buff *skb)
static inline int ieee802154_match_sock(u8 *hw_addr, u16 pan_id,
u16 short_addr, struct dgram_sock *ro)
int ieee802154_dgram_deliver(struct net_device *dev, struct sk_buff *skb)
static int dgram_getsockopt(struct sock *sk, int level, int optname,
char __user *optval, int __user *optlen)
static int dgram_setsockopt(struct sock *sk, int level, int optname,
char __user *optval, unsigned int optlen)
struct proto ieee802154_dgram_prot = ;
