static int pn_backlog_rcv(struct sock *sk, struct sk_buff *skb);
static void pn_sock_close(struct sock *sk, long timeout)
static int pn_ioctl(struct sock *sk, int cmd, unsigned long arg)
static void pn_destruct(struct sock *sk)
static int pn_init(struct sock *sk)
static int pn_sendmsg(struct kiocb *iocb, struct sock *sk,
struct msghdr *msg, size_t len)
static int pn_recvmsg(struct kiocb *iocb, struct sock *sk,
struct msghdr *msg, size_t len, int noblock,
int flags, int *addr_len)
static int pn_backlog_rcv(struct sock *sk, struct sk_buff *skb)
static struct proto pn_proto = ;
static struct phonet_protocol pn_dgram_proto = ;
int __init isi_register(void)
void __exit isi_unregister(void)
