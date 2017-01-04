#if defined(CONFIG_INET_AH) || defined(CONFIG_INET_AH_MODULE) || defined(CONFIG_INET6_AH) || defined(CONFIG_INET6_AH_MODULE)
#if defined(CONFIG_INET_ESP) || defined(CONFIG_INET_ESP_MODULE) || defined(CONFIG_INET6_ESP) || defined(CONFIG_INET6_ESP_MODULE)
static struct xfrm_algo_desc aead_list[] = ;
static struct xfrm_algo_desc aalg_list[] = ;
static struct xfrm_algo_desc ealg_list[] = ;
static struct xfrm_algo_desc calg_list[] = ;
static inline int aead_entries(void)
static inline int aalg_entries(void)
static inline int ealg_entries(void)
static inline int calg_entries(void)
struct xfrm_algo_list ;
static const struct xfrm_algo_list xfrm_aead_list = ;
static const struct xfrm_algo_list xfrm_aalg_list = ;
static const struct xfrm_algo_list xfrm_ealg_list = ;
static const struct xfrm_algo_list xfrm_calg_list = ;
static struct xfrm_algo_desc *xfrm_find_algo(
const struct xfrm_algo_list *algo_list,
int match(const struct xfrm_algo_desc *entry, const void *data),
const void *data, int probe)
static int xfrm_alg_id_match(const struct xfrm_algo_desc *entry,
const void *data)
struct xfrm_algo_desc *xfrm_aalg_get_byid(int alg_id)
EXPORT_SYMBOL_GPL(xfrm_aalg_get_byid);
struct xfrm_algo_desc *xfrm_ealg_get_byid(int alg_id)
EXPORT_SYMBOL_GPL(xfrm_ealg_get_byid);
struct xfrm_algo_desc *xfrm_calg_get_byid(int alg_id)
EXPORT_SYMBOL_GPL(xfrm_calg_get_byid);
static int xfrm_alg_name_match(const struct xfrm_algo_desc *entry,
const void *data)
struct xfrm_algo_desc *xfrm_aalg_get_byname(const char *name, int probe)
EXPORT_SYMBOL_GPL(xfrm_aalg_get_byname);
struct xfrm_algo_desc *xfrm_ealg_get_byname(const char *name, int probe)
EXPORT_SYMBOL_GPL(xfrm_ealg_get_byname);
struct xfrm_algo_desc *xfrm_calg_get_byname(const char *name, int probe)
EXPORT_SYMBOL_GPL(xfrm_calg_get_byname);
struct xfrm_aead_name ;
static int xfrm_aead_name_match(const struct xfrm_algo_desc *entry,
const void *data)
struct xfrm_algo_desc *xfrm_aead_get_byname(const char *name, int icv_len, int probe)
EXPORT_SYMBOL_GPL(xfrm_aead_get_byname);
struct xfrm_algo_desc *xfrm_aalg_get_byidx(unsigned int idx)
EXPORT_SYMBOL_GPL(xfrm_aalg_get_byidx);
struct xfrm_algo_desc *xfrm_ealg_get_byidx(unsigned int idx)
EXPORT_SYMBOL_GPL(xfrm_ealg_get_byidx);
void xfrm_probe_algs(void)
EXPORT_SYMBOL_GPL(xfrm_probe_algs);
int xfrm_count_auth_supported(void)
EXPORT_SYMBOL_GPL(xfrm_count_auth_supported);
int xfrm_count_enc_supported(void)
EXPORT_SYMBOL_GPL(xfrm_count_enc_supported);
#if defined(CONFIG_INET_ESP) || defined(CONFIG_INET_ESP_MODULE) || defined(CONFIG_INET6_ESP) || defined(CONFIG_INET6_ESP_MODULE)
void *pskb_put(struct sk_buff *skb, struct sk_buff *tail, int len)
EXPORT_SYMBOL_GPL(pskb_put);
