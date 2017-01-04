struct alg_type_list ;
static atomic_long_t alg_memory_allocated;
static struct proto alg_proto = ;
static LIST_HEAD(alg_types);
static DECLARE_RWSEM(alg_types_sem);
static const struct af_alg_type *alg_get_type(const char *name)
int af_alg_register_type(const struct af_alg_type *type)
EXPORT_SYMBOL_GPL(af_alg_register_type);
int af_alg_unregister_type(const struct af_alg_type *type)
EXPORT_SYMBOL_GPL(af_alg_unregister_type);
static void alg_do_release(const struct af_alg_type *type, void *private)
int af_alg_release(struct socket *sock)
EXPORT_SYMBOL_GPL(af_alg_release);
static int alg_bind(struct socket *sock, struct sockaddr *uaddr, int addr_len)
static int alg_setkey(struct sock *sk, char __user *ukey,
unsigned int keylen)
static int alg_setsockopt(struct socket *sock, int level, int optname,
char __user *optval, unsigned int optlen)
int af_alg_accept(struct sock *sk, struct socket *newsock)
EXPORT_SYMBOL_GPL(af_alg_accept);
static int alg_accept(struct socket *sock, struct socket *newsock, int flags)
static const struct proto_ops alg_proto_ops = ;
static void alg_sock_destruct(struct sock *sk)
static int alg_create(struct net *net, struct socket *sock, int protocol,
int kern)
static const struct net_proto_family alg_family = ;
int af_alg_make_sg(struct af_alg_sgl *sgl, void __user *addr, int len,
int write)
EXPORT_SYMBOL_GPL(af_alg_make_sg);
void af_alg_free_sg(struct af_alg_sgl *sgl)
EXPORT_SYMBOL_GPL(af_alg_free_sg);
int af_alg_cmsg_send(struct msghdr *msg, struct af_alg_control *con)
EXPORT_SYMBOL_GPL(af_alg_cmsg_send);
int af_alg_wait_for_completion(int err, struct af_alg_completion *completion)
EXPORT_SYMBOL_GPL(af_alg_wait_for_completion);
void af_alg_complete(struct crypto_async_request *req, int err)
EXPORT_SYMBOL_GPL(af_alg_complete);
static int __init af_alg_init(void)
static void __exit af_alg_exit(void)
module_init(af_alg_init);
module_exit(af_alg_exit);
MODULE_LICENSE("GPL");
MODULE_ALIAS_NETPROTO(AF_ALG);
