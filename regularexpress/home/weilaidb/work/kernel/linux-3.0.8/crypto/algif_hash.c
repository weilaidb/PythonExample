struct hash_ctx ;
static int hash_sendmsg(struct kiocb *unused, struct socket *sock,
struct msghdr *msg, size_t ignored)
static ssize_t hash_sendpage(struct socket *sock, struct page *page,
int offset, size_t size, int flags)
static int hash_recvmsg(struct kiocb *unused, struct socket *sock,
struct msghdr *msg, size_t len, int flags)
static int hash_accept(struct socket *sock, struct socket *newsock, int flags)
static struct proto_ops algif_hash_ops = ;
static void *hash_bind(const char *name, u32 type, u32 mask)
static void hash_release(void *private)
static int hash_setkey(void *private, const u8 *key, unsigned int keylen)
static void hash_sock_destruct(struct sock *sk)
static int hash_accept_parent(void *private, struct sock *sk)
static const struct af_alg_type algif_type_hash = ;
static int __init algif_hash_init(void)
static void __exit algif_hash_exit(void)
module_init(algif_hash_init);
module_exit(algif_hash_exit);
MODULE_LICENSE("GPL");
