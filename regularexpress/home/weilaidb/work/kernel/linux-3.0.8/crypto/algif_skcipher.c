struct skcipher_sg_list ;
struct skcipher_ctx ;
#define MAX_SGL_ENTS ((PAGE_SIZE - sizeof(struct skcipher_sg_list)) / \
sizeof(struct scatterlist) - 1)
static inline int skcipher_sndbuf(struct sock *sk)
static inline bool skcipher_writable(struct sock *sk)
static int skcipher_alloc_sgl(struct sock *sk)
static void skcipher_pull_sgl(struct sock *sk, int used)
static void skcipher_free_sgl(struct sock *sk)
static int skcipher_wait_for_wmem(struct sock *sk, unsigned flags)
static void skcipher_wmem_wakeup(struct sock *sk)
static int skcipher_wait_for_data(struct sock *sk, unsigned flags)
static void skcipher_data_wakeup(struct sock *sk)
static int skcipher_sendmsg(struct kiocb *unused, struct socket *sock,
struct msghdr *msg, size_t size)
static ssize_t skcipher_sendpage(struct socket *sock, struct page *page,
int offset, size_t size, int flags)
static int skcipher_recvmsg(struct kiocb *unused, struct socket *sock,
struct msghdr *msg, size_t ignored, int flags)
static unsigned int skcipher_poll(struct file *file, struct socket *sock,
poll_table *wait)
static struct proto_ops algif_skcipher_ops = ;
static void *skcipher_bind(const char *name, u32 type, u32 mask)
static void skcipher_release(void *private)
static int skcipher_setkey(void *private, const u8 *key, unsigned int keylen)
static void skcipher_sock_destruct(struct sock *sk)
static int skcipher_accept_parent(void *private, struct sock *sk)
static const struct af_alg_type algif_type_skcipher = ;
static int __init algif_skcipher_init(void)
static void __exit algif_skcipher_exit(void)
module_init(algif_skcipher_init);
module_exit(algif_skcipher_exit);
MODULE_LICENSE("GPL");
