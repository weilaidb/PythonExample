#define _NETLABEL_H
struct cipso_v4_doi;
#define NETLBL_PROTO_VERSION            3
#define NETLBL_NLTYPE_NONE              0
#define NETLBL_NLTYPE_MGMT              1
#define NETLBL_NLTYPE_MGMT_NAME         "NLBL_MGMT"
#define NETLBL_NLTYPE_RIPSO             2
#define NETLBL_NLTYPE_RIPSO_NAME        "NLBL_RIPSO"
#define NETLBL_NLTYPE_CIPSOV4           3
#define NETLBL_NLTYPE_CIPSOV4_NAME      "NLBL_CIPSOv4"
#define NETLBL_NLTYPE_CIPSOV6           4
#define NETLBL_NLTYPE_CIPSOV6_NAME      "NLBL_CIPSOv6"
#define NETLBL_NLTYPE_UNLABELED         5
#define NETLBL_NLTYPE_UNLABELED_NAME    "NLBL_UNLBL"
#define NETLBL_NLTYPE_ADDRSELECT        6
#define NETLBL_NLTYPE_ADDRSELECT_NAME   "NLBL_ADRSEL"
struct netlbl_audit ;
struct netlbl_lsm_cache ;
#define NETLBL_CATMAP_MAPTYPE           u64
#define NETLBL_CATMAP_MAPCNT            4
#define NETLBL_CATMAP_MAPSIZE           (sizeof(NETLBL_CATMAP_MAPTYPE) * 8)
#define NETLBL_CATMAP_SIZE              (NETLBL_CATMAP_MAPSIZE * \
NETLBL_CATMAP_MAPCNT)
#define NETLBL_CATMAP_BIT               (NETLBL_CATMAP_MAPTYPE)0x01
struct netlbl_lsm_secattr_catmap ;
struct netlbl_lsm_secattr ;
static inline struct netlbl_lsm_cache *netlbl_secattr_cache_alloc(gfp_t flags)
static inline void netlbl_secattr_cache_free(struct netlbl_lsm_cache *cache)
static inline struct netlbl_lsm_secattr_catmap *netlbl_secattr_catmap_alloc(
gfp_t flags)
static inline void netlbl_secattr_catmap_free(
struct netlbl_lsm_secattr_catmap *catmap)
static inline void netlbl_secattr_init(struct netlbl_lsm_secattr *secattr)
static inline void netlbl_secattr_destroy(struct netlbl_lsm_secattr *secattr)
static inline struct netlbl_lsm_secattr *netlbl_secattr_alloc(gfp_t flags)
static inline void netlbl_secattr_free(struct netlbl_lsm_secattr *secattr)
int netlbl_cfg_map_del(const char *domain,
u16 family,
const void *addr,
const void *mask,
struct netlbl_audit *audit_info);
int netlbl_cfg_unlbl_map_add(const char *domain,
u16 family,
const void *addr,
const void *mask,
struct netlbl_audit *audit_info);
int netlbl_cfg_unlbl_static_add(struct net *net,
const char *dev_name,
const void *addr,
const void *mask,
u16 family,
u32 secid,
struct netlbl_audit *audit_info);
int netlbl_cfg_unlbl_static_del(struct net *net,
const char *dev_name,
const void *addr,
const void *mask,
u16 family,
struct netlbl_audit *audit_info);
int netlbl_cfg_cipsov4_add(struct cipso_v4_doi *doi_def,
struct netlbl_audit *audit_info);
void netlbl_cfg_cipsov4_del(u32 doi, struct netlbl_audit *audit_info);
int netlbl_cfg_cipsov4_map_add(u32 doi,
const char *domain,
const struct in_addr *addr,
const struct in_addr *mask,
struct netlbl_audit *audit_info);
int netlbl_secattr_catmap_walk(struct netlbl_lsm_secattr_catmap *catmap,
u32 offset);
int netlbl_secattr_catmap_walk_rng(struct netlbl_lsm_secattr_catmap *catmap,
u32 offset);
int netlbl_secattr_catmap_setbit(struct netlbl_lsm_secattr_catmap *catmap,
u32 bit,
gfp_t flags);
int netlbl_secattr_catmap_setrng(struct netlbl_lsm_secattr_catmap *catmap,
u32 start,
u32 end,
gfp_t flags);
int netlbl_enabled(void);
int netlbl_sock_setattr(struct sock *sk,
u16 family,
const struct netlbl_lsm_secattr *secattr);
void netlbl_sock_delattr(struct sock *sk);
int netlbl_sock_getattr(struct sock *sk,
struct netlbl_lsm_secattr *secattr);
int netlbl_conn_setattr(struct sock *sk,
struct sockaddr *addr,
const struct netlbl_lsm_secattr *secattr);
int netlbl_req_setattr(struct request_sock *req,
const struct netlbl_lsm_secattr *secattr);
void netlbl_req_delattr(struct request_sock *req);
int netlbl_skbuff_setattr(struct sk_buff *skb,
u16 family,
const struct netlbl_lsm_secattr *secattr);
int netlbl_skbuff_getattr(const struct sk_buff *skb,
u16 family,
struct netlbl_lsm_secattr *secattr);
void netlbl_skbuff_err(struct sk_buff *skb, int error, int gateway);
void netlbl_cache_invalidate(void);
int netlbl_cache_add(const struct sk_buff *skb,
const struct netlbl_lsm_secattr *secattr);
struct audit_buffer *netlbl_audit_start(int type,
struct netlbl_audit *audit_info);
static inline int netlbl_cfg_map_del(const char *domain,
u16 family,
const void *addr,
const void *mask,
struct netlbl_audit *audit_info)
static inline int netlbl_cfg_unlbl_map_add(const char *domain,
u16 family,
void *addr,
void *mask,
struct netlbl_audit *audit_info)
static inline int netlbl_cfg_unlbl_static_add(struct net *net,
const char *dev_name,
const void *addr,
const void *mask,
u16 family,
u32 secid,
struct netlbl_audit *audit_info)
static inline int netlbl_cfg_unlbl_static_del(struct net *net,
const char *dev_name,
const void *addr,
const void *mask,
u16 family,
struct netlbl_audit *audit_info)
static inline int netlbl_cfg_cipsov4_add(struct cipso_v4_doi *doi_def,
struct netlbl_audit *audit_info)
static inline void netlbl_cfg_cipsov4_del(u32 doi,
struct netlbl_audit *audit_info)
static inline int netlbl_cfg_cipsov4_map_add(u32 doi,
const char *domain,
const struct in_addr *addr,
const struct in_addr *mask,
struct netlbl_audit *audit_info)
static inline int netlbl_secattr_catmap_walk(
struct netlbl_lsm_secattr_catmap *catmap,
u32 offset)
static inline int netlbl_secattr_catmap_walk_rng(
struct netlbl_lsm_secattr_catmap *catmap,
u32 offset)
static inline int netlbl_secattr_catmap_setbit(
struct netlbl_lsm_secattr_catmap *catmap,
u32 bit,
gfp_t flags)
static inline int netlbl_secattr_catmap_setrng(
struct netlbl_lsm_secattr_catmap *catmap,
u32 start,
u32 end,
gfp_t flags)
static inline int netlbl_enabled(void)
static inline int netlbl_sock_setattr(struct sock *sk,
u16 family,
const struct netlbl_lsm_secattr *secattr)
static inline void netlbl_sock_delattr(struct sock *sk)
static inline int netlbl_sock_getattr(struct sock *sk,
struct netlbl_lsm_secattr *secattr)
static inline int netlbl_conn_setattr(struct sock *sk,
struct sockaddr *addr,
const struct netlbl_lsm_secattr *secattr)
static inline int netlbl_req_setattr(struct request_sock *req,
const struct netlbl_lsm_secattr *secattr)
static inline void netlbl_req_delattr(struct request_sock *req)
static inline int netlbl_skbuff_setattr(struct sk_buff *skb,
u16 family,
const struct netlbl_lsm_secattr *secattr)
static inline int netlbl_skbuff_getattr(const struct sk_buff *skb,
u16 family,
struct netlbl_lsm_secattr *secattr)
static inline void netlbl_skbuff_err(struct sk_buff *skb,
int error,
int gateway)
static inline void netlbl_cache_invalidate(void)
static inline int netlbl_cache_add(const struct sk_buff *skb,
const struct netlbl_lsm_secattr *secattr)
static inline struct audit_buffer *netlbl_audit_start(int type,
struct netlbl_audit *audit_info)
