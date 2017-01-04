struct ipcomp_tfms ;
static DEFINE_MUTEX(ipcomp_resource_mutex);
static void * __percpu *ipcomp_scratches;
static int ipcomp_scratch_users;
static LIST_HEAD(ipcomp_tfms_list);
static int ipcomp_decompress(struct xfrm_state *x, struct sk_buff *skb)
int ipcomp_input(struct xfrm_state *x, struct sk_buff *skb)
EXPORT_SYMBOL_GPL(ipcomp_input);
static int ipcomp_compress(struct xfrm_state *x, struct sk_buff *skb)
int ipcomp_output(struct xfrm_state *x, struct sk_buff *skb)
EXPORT_SYMBOL_GPL(ipcomp_output);
static void ipcomp_free_scratches(void)
static void * __percpu *ipcomp_alloc_scratches(void)
static void ipcomp_free_tfms(struct crypto_comp * __percpu *tfms)
static struct crypto_comp * __percpu *ipcomp_alloc_tfms(const char *alg_name)
static void ipcomp_free_data(struct ipcomp_data *ipcd)
void ipcomp_destroy(struct xfrm_state *x)
EXPORT_SYMBOL_GPL(ipcomp_destroy);
int ipcomp_init_state(struct xfrm_state *x)
EXPORT_SYMBOL_GPL(ipcomp_init_state);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("IP Payload Compression Protocol (IPComp) - RFC3173");
MODULE_AUTHOR("James Morris <jmorris@intercode.com.au>");
