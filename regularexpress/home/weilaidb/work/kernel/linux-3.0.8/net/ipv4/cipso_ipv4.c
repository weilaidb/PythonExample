static DEFINE_SPINLOCK(cipso_v4_doi_list_lock);
static LIST_HEAD(cipso_v4_doi_list);
int cipso_v4_cache_enabled = 1;
int cipso_v4_cache_bucketsize = 10;
#define CIPSO_V4_CACHE_BUCKETBITS     7
#define CIPSO_V4_CACHE_BUCKETS        (1 << CIPSO_V4_CACHE_BUCKETBITS)
#define CIPSO_V4_CACHE_REORDERLIMIT   10
struct cipso_v4_map_cache_bkt ;
struct cipso_v4_map_cache_entry ;
static struct cipso_v4_map_cache_bkt *cipso_v4_cache = NULL;
int cipso_v4_rbm_optfmt = 0;
int cipso_v4_rbm_strictvalid = 1;
#define CIPSO_V4_OPT_LEN_MAX          40
#define CIPSO_V4_HDR_LEN              6
#define CIPSO_V4_TAG_RBM_BLEN         4
#define CIPSO_V4_TAG_ENUM_BLEN        4
#define CIPSO_V4_TAG_RNG_BLEN         4
#define CIPSO_V4_TAG_RNG_CAT_MAX      8
#define CIPSO_V4_TAG_LOC_BLEN         6
static int cipso_v4_bitmap_walk(const unsigned char *bitmap,
u32 bitmap_len,
u32 offset,
u8 state)
static void cipso_v4_bitmap_setbit(unsigned char *bitmap,
u32 bit,
u8 state)
static void cipso_v4_cache_entry_free(struct cipso_v4_map_cache_entry *entry)
static u32 cipso_v4_map_cache_hash(const unsigned char *key, u32 key_len)
static int cipso_v4_cache_init(void)
void cipso_v4_cache_invalidate(void)
static int cipso_v4_cache_check(const unsigned char *key,
u32 key_len,
struct netlbl_lsm_secattr *secattr)
int cipso_v4_cache_add(const struct sk_buff *skb,
const struct netlbl_lsm_secattr *secattr)
static struct cipso_v4_doi *cipso_v4_doi_search(u32 doi)
int cipso_v4_doi_add(struct cipso_v4_doi *doi_def,
struct netlbl_audit *audit_info)
void cipso_v4_doi_free(struct cipso_v4_doi *doi_def)
static void cipso_v4_doi_free_rcu(struct rcu_head *entry)
int cipso_v4_doi_remove(u32 doi, struct netlbl_audit *audit_info)
struct cipso_v4_doi *cipso_v4_doi_getdef(u32 doi)
void cipso_v4_doi_putdef(struct cipso_v4_doi *doi_def)
int cipso_v4_doi_walk(u32 *skip_cnt,
int (*callback) (struct cipso_v4_doi *doi_def, void *arg),
void *cb_arg)
static int cipso_v4_map_lvl_valid(const struct cipso_v4_doi *doi_def, u8 level)
static int cipso_v4_map_lvl_hton(const struct cipso_v4_doi *doi_def,
u32 host_lvl,
u32 *net_lvl)
static int cipso_v4_map_lvl_ntoh(const struct cipso_v4_doi *doi_def,
u32 net_lvl,
u32 *host_lvl)
static int cipso_v4_map_cat_rbm_valid(const struct cipso_v4_doi *doi_def,
const unsigned char *bitmap,
u32 bitmap_len)
static int cipso_v4_map_cat_rbm_hton(const struct cipso_v4_doi *doi_def,
const struct netlbl_lsm_secattr *secattr,
unsigned char *net_cat,
u32 net_cat_len)
static int cipso_v4_map_cat_rbm_ntoh(const struct cipso_v4_doi *doi_def,
const unsigned char *net_cat,
u32 net_cat_len,
struct netlbl_lsm_secattr *secattr)
static int cipso_v4_map_cat_enum_valid(const struct cipso_v4_doi *doi_def,
const unsigned char *enumcat,
u32 enumcat_len)
static int cipso_v4_map_cat_enum_hton(const struct cipso_v4_doi *doi_def,
const struct netlbl_lsm_secattr *secattr,
unsigned char *net_cat,
u32 net_cat_len)
static int cipso_v4_map_cat_enum_ntoh(const struct cipso_v4_doi *doi_def,
const unsigned char *net_cat,
u32 net_cat_len,
struct netlbl_lsm_secattr *secattr)
static int cipso_v4_map_cat_rng_valid(const struct cipso_v4_doi *doi_def,
const unsigned char *rngcat,
u32 rngcat_len)
static int cipso_v4_map_cat_rng_hton(const struct cipso_v4_doi *doi_def,
const struct netlbl_lsm_secattr *secattr,
unsigned char *net_cat,
u32 net_cat_len)
static int cipso_v4_map_cat_rng_ntoh(const struct cipso_v4_doi *doi_def,
const unsigned char *net_cat,
u32 net_cat_len,
struct netlbl_lsm_secattr *secattr)
static void cipso_v4_gentag_hdr(const struct cipso_v4_doi *doi_def,
unsigned char *buf,
u32 len)
static int cipso_v4_gentag_rbm(const struct cipso_v4_doi *doi_def,
const struct netlbl_lsm_secattr *secattr,
unsigned char *buffer,
u32 buffer_len)
static int cipso_v4_parsetag_rbm(const struct cipso_v4_doi *doi_def,
const unsigned char *tag,
struct netlbl_lsm_secattr *secattr)
static int cipso_v4_gentag_enum(const struct cipso_v4_doi *doi_def,
const struct netlbl_lsm_secattr *secattr,
unsigned char *buffer,
u32 buffer_len)
static int cipso_v4_parsetag_enum(const struct cipso_v4_doi *doi_def,
const unsigned char *tag,
struct netlbl_lsm_secattr *secattr)
static int cipso_v4_gentag_rng(const struct cipso_v4_doi *doi_def,
const struct netlbl_lsm_secattr *secattr,
unsigned char *buffer,
u32 buffer_len)
static int cipso_v4_parsetag_rng(const struct cipso_v4_doi *doi_def,
const unsigned char *tag,
struct netlbl_lsm_secattr *secattr)
static int cipso_v4_gentag_loc(const struct cipso_v4_doi *doi_def,
const struct netlbl_lsm_secattr *secattr,
unsigned char *buffer,
u32 buffer_len)
static int cipso_v4_parsetag_loc(const struct cipso_v4_doi *doi_def,
const unsigned char *tag,
struct netlbl_lsm_secattr *secattr)
int cipso_v4_validate(const struct sk_buff *skb, unsigned char **option)
void cipso_v4_error(struct sk_buff *skb, int error, u32 gateway)
static int cipso_v4_genopt(unsigned char *buf, u32 buf_len,
const struct cipso_v4_doi *doi_def,
const struct netlbl_lsm_secattr *secattr)
static void opt_kfree_rcu(struct rcu_head *head)
int cipso_v4_sock_setattr(struct sock *sk,
const struct cipso_v4_doi *doi_def,
const struct netlbl_lsm_secattr *secattr)
int cipso_v4_req_setattr(struct request_sock *req,
const struct cipso_v4_doi *doi_def,
const struct netlbl_lsm_secattr *secattr)
static int cipso_v4_delopt(struct ip_options_rcu **opt_ptr)
void cipso_v4_sock_delattr(struct sock *sk)
void cipso_v4_req_delattr(struct request_sock *req)
static int cipso_v4_getattr(const unsigned char *cipso,
struct netlbl_lsm_secattr *secattr)
int cipso_v4_sock_getattr(struct sock *sk, struct netlbl_lsm_secattr *secattr)
int cipso_v4_skbuff_setattr(struct sk_buff *skb,
const struct cipso_v4_doi *doi_def,
const struct netlbl_lsm_secattr *secattr)
int cipso_v4_skbuff_delattr(struct sk_buff *skb)
int cipso_v4_skbuff_getattr(const struct sk_buff *skb,
struct netlbl_lsm_secattr *secattr)
static int __init cipso_v4_init(void)
subsys_initcall(cipso_v4_init);
