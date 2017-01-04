#define _CRYPTO_IF_ALG_H
#define ALG_MAX_PAGES			16
struct crypto_async_request;
struct alg_sock ;
struct af_alg_completion ;
struct af_alg_control ;
struct af_alg_type ;
struct af_alg_sgl ;
int af_alg_register_type(const struct af_alg_type *type);
int af_alg_unregister_type(const struct af_alg_type *type);
int af_alg_release(struct socket *sock);
int af_alg_accept(struct sock *sk, struct socket *newsock);
int af_alg_make_sg(struct af_alg_sgl *sgl, void __user *addr, int len,
int write);
void af_alg_free_sg(struct af_alg_sgl *sgl);
int af_alg_cmsg_send(struct msghdr *msg, struct af_alg_control *con);
int af_alg_wait_for_completion(int err, struct af_alg_completion *completion);
void af_alg_complete(struct crypto_async_request *req, int err);
static inline struct alg_sock *alg_sk(struct sock *sk)
static inline void af_alg_release_parent(struct sock *sk)
static inline void af_alg_init_completion(struct af_alg_completion *completion)
