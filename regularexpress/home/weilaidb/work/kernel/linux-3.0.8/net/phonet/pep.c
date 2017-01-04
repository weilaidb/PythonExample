#define CREDITS_MAX	10
#define CREDITS_THR	7
#define pep_sb_size(s) (((s) + 5) & ~3)
static unsigned char *pep_get_sb(struct sk_buff *skb, u8 *ptype, u8 *plen,
void *buf)
static struct sk_buff *pep_alloc_skb(struct sock *sk, const void *payload,
int len, gfp_t priority)
static int pep_reply(struct sock *sk, struct sk_buff *oskb, u8 code,
const void *data, int len, gfp_t priority)
static int pep_indicate(struct sock *sk, u8 id, u8 code,
const void *data, int len, gfp_t priority)
#define PAD 0x00
static int pipe_handler_request(struct sock *sk, u8 id, u8 code,
const void *data, int len)
static int pipe_handler_send_created_ind(struct sock *sk)
static int pep_accept_conn(struct sock *sk, struct sk_buff *skb)
static int pep_reject_conn(struct sock *sk, struct sk_buff *skb, u8 code,
gfp_t priority)
static int pep_ctrlreq_error(struct sock *sk, struct sk_buff *oskb, u8 code,
gfp_t priority)
static int pipe_snd_status(struct sock *sk, u8 type, u8 status, gfp_t priority)
static void pipe_grant_credits(struct sock *sk, gfp_t priority)
static int pipe_rcv_status(struct sock *sk, struct sk_buff *skb)
static int pipe_rcv_created(struct sock *sk, struct sk_buff *skb)
static int pipe_do_rcv(struct sock *sk, struct sk_buff *skb)
static void pipe_destruct(struct sock *sk)
static u8 pipe_negotiate_fc(const u8 *fcs, unsigned n)
static int pep_connresp_rcv(struct sock *sk, struct sk_buff *skb)
static int pipe_handler_do_rcv(struct sock *sk, struct sk_buff *skb)
static struct sock *pep_find_pipe(const struct hlist_head *hlist,
const struct sockaddr_pn *dst,
u8 pipe_handle)
static int pep_do_rcv(struct sock *sk, struct sk_buff *skb)
static int pipe_do_remove(struct sock *sk)
static void pep_sock_close(struct sock *sk, long timeout)
static struct sock *pep_sock_accept(struct sock *sk, int flags, int *errp)
static int pep_sock_connect(struct sock *sk, struct sockaddr *addr, int len)
static int pep_ioctl(struct sock *sk, int cmd, unsigned long arg)
static int pep_init(struct sock *sk)
static int pep_setsockopt(struct sock *sk, int level, int optname,
char __user *optval, unsigned int optlen)
static int pep_getsockopt(struct sock *sk, int level, int optname,
char __user *optval, int __user *optlen)
static int pipe_skb_send(struct sock *sk, struct sk_buff *skb)
static int pep_sendmsg(struct kiocb *iocb, struct sock *sk,
struct msghdr *msg, size_t len)
int pep_writeable(struct sock *sk)
int pep_write(struct sock *sk, struct sk_buff *skb)
struct sk_buff *pep_read(struct sock *sk)
static int pep_recvmsg(struct kiocb *iocb, struct sock *sk,
struct msghdr *msg, size_t len, int noblock,
int flags, int *addr_len)
static void pep_sock_unhash(struct sock *sk)
static struct proto pep_proto = ;
static struct phonet_protocol pep_pn_proto = ;
static int __init pep_register(void)
static void __exit pep_unregister(void)
module_init(pep_register);
module_exit(pep_unregister);
MODULE_AUTHOR("Remi Denis-Courmont, Nokia");
MODULE_DESCRIPTION("Phonet pipe protocol");
MODULE_LICENSE("GPL");
MODULE_ALIAS_NET_PF_PROTO(PF_PHONET, PN_PROTO_PIPE);
