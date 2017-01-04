#define _CIPSO_IPV4_H
#define CIPSO_V4_DOI_UNKNOWN          0x00000000
#define CIPSO_V4_TAG_INVALID          0
#define CIPSO_V4_TAG_RBITMAP          1
#define CIPSO_V4_TAG_ENUM             2
#define CIPSO_V4_TAG_RANGE            5
#define CIPSO_V4_TAG_PBITMAP          6
#define CIPSO_V4_TAG_FREEFORM         7
#define CIPSO_V4_TAG_LOCAL            128
#define CIPSO_V4_MAP_UNKNOWN          0
#define CIPSO_V4_MAP_TRANS            1
#define CIPSO_V4_MAP_PASS             2
#define CIPSO_V4_MAP_LOCAL            3
#define CIPSO_V4_MAX_REM_LVLS         255
#define CIPSO_V4_INV_LVL              0x80000000
#define CIPSO_V4_MAX_LOC_LVLS         (CIPSO_V4_INV_LVL - 1)
#define CIPSO_V4_MAX_REM_CATS         65534
#define CIPSO_V4_INV_CAT              0x80000000
#define CIPSO_V4_MAX_LOC_CATS         (CIPSO_V4_INV_CAT - 1)
#define CIPSO_V4_TAG_MAXCNT           5
struct cipso_v4_doi ;
struct cipso_v4_std_map_tbl ;
extern int cipso_v4_cache_enabled;
extern int cipso_v4_cache_bucketsize;
extern int cipso_v4_rbm_optfmt;
extern int cipso_v4_rbm_strictvalid;
#define CIPSO_V4_OPTEXIST(x) (IPCB(x)->opt.cipso != 0)
#define CIPSO_V4_OPTPTR(x) (skb_network_header(x) + IPCB(x)->opt.cipso)
int cipso_v4_doi_add(struct cipso_v4_doi *doi_def,
struct netlbl_audit *audit_info);
void cipso_v4_doi_free(struct cipso_v4_doi *doi_def);
int cipso_v4_doi_remove(u32 doi, struct netlbl_audit *audit_info);
struct cipso_v4_doi *cipso_v4_doi_getdef(u32 doi);
void cipso_v4_doi_putdef(struct cipso_v4_doi *doi_def);
int cipso_v4_doi_walk(u32 *skip_cnt,
int (*callback) (struct cipso_v4_doi *doi_def, void *arg),
void *cb_arg);
static inline int cipso_v4_doi_add(struct cipso_v4_doi *doi_def,
struct netlbl_audit *audit_info)
static inline void cipso_v4_doi_free(struct cipso_v4_doi *doi_def)
static inline int cipso_v4_doi_remove(u32 doi,
struct netlbl_audit *audit_info)
static inline struct cipso_v4_doi *cipso_v4_doi_getdef(u32 doi)
static inline int cipso_v4_doi_walk(u32 *skip_cnt,
int (*callback) (struct cipso_v4_doi *doi_def, void *arg),
void *cb_arg)
static inline int cipso_v4_doi_domhsh_add(struct cipso_v4_doi *doi_def,
const char *domain)
static inline int cipso_v4_doi_domhsh_remove(struct cipso_v4_doi *doi_def,
const char *domain)
void cipso_v4_cache_invalidate(void);
int cipso_v4_cache_add(const struct sk_buff *skb,
const struct netlbl_lsm_secattr *secattr);
static inline void cipso_v4_cache_invalidate(void)
static inline int cipso_v4_cache_add(const struct sk_buff *skb,
const struct netlbl_lsm_secattr *secattr)
void cipso_v4_error(struct sk_buff *skb, int error, u32 gateway);
int cipso_v4_sock_setattr(struct sock *sk,
const struct cipso_v4_doi *doi_def,
const struct netlbl_lsm_secattr *secattr);
void cipso_v4_sock_delattr(struct sock *sk);
int cipso_v4_sock_getattr(struct sock *sk, struct netlbl_lsm_secattr *secattr);
int cipso_v4_req_setattr(struct request_sock *req,
const struct cipso_v4_doi *doi_def,
const struct netlbl_lsm_secattr *secattr);
void cipso_v4_req_delattr(struct request_sock *req);
int cipso_v4_skbuff_setattr(struct sk_buff *skb,
const struct cipso_v4_doi *doi_def,
const struct netlbl_lsm_secattr *secattr);
int cipso_v4_skbuff_delattr(struct sk_buff *skb);
int cipso_v4_skbuff_getattr(const struct sk_buff *skb,
struct netlbl_lsm_secattr *secattr);
int cipso_v4_validate(const struct sk_buff *skb, unsigned char **option);
static inline void cipso_v4_error(struct sk_buff *skb,
int error,
u32 gateway)
static inline int cipso_v4_sock_setattr(struct sock *sk,
const struct cipso_v4_doi *doi_def,
const struct netlbl_lsm_secattr *secattr)
static inline void cipso_v4_sock_delattr(struct sock *sk)
static inline int cipso_v4_sock_getattr(struct sock *sk,
struct netlbl_lsm_secattr *secattr)
static inline int cipso_v4_req_setattr(struct request_sock *req,
const struct cipso_v4_doi *doi_def,
const struct netlbl_lsm_secattr *secattr)
static inline void cipso_v4_req_delattr(struct request_sock *req)
static inline int cipso_v4_skbuff_setattr(struct sk_buff *skb,
const struct cipso_v4_doi *doi_def,
const struct netlbl_lsm_secattr *secattr)
static inline int cipso_v4_skbuff_delattr(struct sk_buff *skb)
static inline int cipso_v4_skbuff_getattr(const struct sk_buff *skb,
struct netlbl_lsm_secattr *secattr)
static inline int cipso_v4_validate(const struct sk_buff *skb,
unsigned char **option)
