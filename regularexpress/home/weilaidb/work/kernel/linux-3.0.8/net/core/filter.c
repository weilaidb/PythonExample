static void *__load_pointer(const struct sk_buff *skb, int k, unsigned int size)
static inline void *load_pointer(const struct sk_buff *skb, int k,
unsigned int size, void *buffer)
int sk_filter(struct sock *sk, struct sk_buff *skb)
EXPORT_SYMBOL(sk_filter);
unsigned int sk_run_filter(const struct sk_buff *skb,
const struct sock_filter *fentry)
EXPORT_SYMBOL(sk_run_filter);
static int check_load_and_stores(struct sock_filter *filter, int flen)
int sk_chk_filter(struct sock_filter *filter, int flen)
EXPORT_SYMBOL(sk_chk_filter);
void sk_filter_release_rcu(struct rcu_head *rcu)
EXPORT_SYMBOL(sk_filter_release_rcu);
int sk_attach_filter(struct sock_fprog *fprog, struct sock *sk)
EXPORT_SYMBOL_GPL(sk_attach_filter);
int sk_detach_filter(struct sock *sk)
EXPORT_SYMBOL_GPL(sk_detach_filter);
