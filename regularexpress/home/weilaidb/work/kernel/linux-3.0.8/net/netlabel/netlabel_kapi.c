int netlbl_cfg_map_del(const char *domain,
u16 family,
const void *addr,
const void *mask,
struct netlbl_audit *audit_info)
int netlbl_cfg_unlbl_map_add(const char *domain,
u16 family,
const void *addr,
const void *mask,
struct netlbl_audit *audit_info)
int netlbl_cfg_unlbl_static_add(struct net *net,
const char *dev_name,
const void *addr,
const void *mask,
u16 family,
u32 secid,
struct netlbl_audit *audit_info)
int netlbl_cfg_unlbl_static_del(struct net *net,
const char *dev_name,
const void *addr,
const void *mask,
u16 family,
struct netlbl_audit *audit_info)
int netlbl_cfg_cipsov4_add(struct cipso_v4_doi *doi_def,
struct netlbl_audit *audit_info)
void netlbl_cfg_cipsov4_del(u32 doi, struct netlbl_audit *audit_info)
int netlbl_cfg_cipsov4_map_add(u32 doi,
const char *domain,
const struct in_addr *addr,
const struct in_addr *mask,
struct netlbl_audit *audit_info)
int netlbl_secattr_catmap_walk(struct netlbl_lsm_secattr_catmap *catmap,
u32 offset)
int netlbl_secattr_catmap_walk_rng(struct netlbl_lsm_secattr_catmap *catmap,
u32 offset)
int netlbl_secattr_catmap_setbit(struct netlbl_lsm_secattr_catmap *catmap,
u32 bit,
gfp_t flags)
int netlbl_secattr_catmap_setrng(struct netlbl_lsm_secattr_catmap *catmap,
u32 start,
u32 end,
gfp_t flags)
int netlbl_enabled(void)
int netlbl_sock_setattr(struct sock *sk,
u16 family,
const struct netlbl_lsm_secattr *secattr)
void netlbl_sock_delattr(struct sock *sk)
int netlbl_sock_getattr(struct sock *sk,
struct netlbl_lsm_secattr *secattr)
int netlbl_conn_setattr(struct sock *sk,
struct sockaddr *addr,
const struct netlbl_lsm_secattr *secattr)
int netlbl_req_setattr(struct request_sock *req,
const struct netlbl_lsm_secattr *secattr)
void netlbl_req_delattr(struct request_sock *req)
int netlbl_skbuff_setattr(struct sk_buff *skb,
u16 family,
const struct netlbl_lsm_secattr *secattr)
int netlbl_skbuff_getattr(const struct sk_buff *skb,
u16 family,
struct netlbl_lsm_secattr *secattr)
void netlbl_skbuff_err(struct sk_buff *skb, int error, int gateway)
void netlbl_cache_invalidate(void)
int netlbl_cache_add(const struct sk_buff *skb,
const struct netlbl_lsm_secattr *secattr)
struct audit_buffer *netlbl_audit_start(int type,
struct netlbl_audit *audit_info)
static int __init netlbl_init(void)
subsys_initcall(netlbl_init);
