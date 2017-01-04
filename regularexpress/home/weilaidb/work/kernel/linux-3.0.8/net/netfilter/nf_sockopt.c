static DEFINE_MUTEX(nf_sockopt_mutex);
static LIST_HEAD(nf_sockopts);
static inline int overlap(int min1, int max1, int min2, int max2)
int nf_register_sockopt(struct nf_sockopt_ops *reg)
EXPORT_SYMBOL(nf_register_sockopt);
void nf_unregister_sockopt(struct nf_sockopt_ops *reg)
EXPORT_SYMBOL(nf_unregister_sockopt);
static struct nf_sockopt_ops *nf_sockopt_find(struct sock *sk, u_int8_t pf,
int val, int get)
static int nf_sockopt(struct sock *sk, u_int8_t pf, int val,
char __user *opt, int *len, int get)
int nf_setsockopt(struct sock *sk, u_int8_t pf, int val, char __user *opt,
unsigned int len)
EXPORT_SYMBOL(nf_setsockopt);
int nf_getsockopt(struct sock *sk, u_int8_t pf, int val, char __user *opt,
int *len)
EXPORT_SYMBOL(nf_getsockopt);
static int compat_nf_sockopt(struct sock *sk, u_int8_t pf, int val,
char __user *opt, int *len, int get)
int compat_nf_setsockopt(struct sock *sk, u_int8_t pf,
int val, char __user *opt, unsigned int len)
EXPORT_SYMBOL(compat_nf_setsockopt);
int compat_nf_getsockopt(struct sock *sk, u_int8_t pf,
int val, char __user *opt, int *len)
EXPORT_SYMBOL(compat_nf_getsockopt);
