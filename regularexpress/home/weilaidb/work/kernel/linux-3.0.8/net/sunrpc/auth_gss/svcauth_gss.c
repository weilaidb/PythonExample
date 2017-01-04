# define RPCDBG_FACILITY	RPCDBG_AUTH
static int netobj_equal(struct xdr_netobj *a, struct xdr_netobj *b)
#define	RSI_HASHBITS	6
#define	RSI_HASHMAX	(1<<RSI_HASHBITS)
struct rsi ;
static struct cache_head *rsi_table[RSI_HASHMAX];
static struct cache_detail rsi_cache;
static struct rsi *rsi_update(struct rsi *new, struct rsi *old);
static struct rsi *rsi_lookup(struct rsi *item);
static void rsi_free(struct rsi *rsii)
static void rsi_put(struct kref *ref)
static inline int rsi_hash(struct rsi *item)
static int rsi_match(struct cache_head *a, struct cache_head *b)
static int dup_to_netobj(struct xdr_netobj *dst, char *src, int len)
static inline int dup_netobj(struct xdr_netobj *dst, struct xdr_netobj *src)
static void rsi_init(struct cache_head *cnew, struct cache_head *citem)
static void update_rsi(struct cache_head *cnew, struct cache_head *citem)
static struct cache_head *rsi_alloc(void)
static void rsi_request(struct cache_detail *cd,
struct cache_head *h,
char **bpp, int *blen)
static int rsi_upcall(struct cache_detail *cd, struct cache_head *h)
static int rsi_parse(struct cache_detail *cd,
char *mesg, int mlen)
static struct cache_detail rsi_cache = ;
static struct rsi *rsi_lookup(struct rsi *item)
static struct rsi *rsi_update(struct rsi *new, struct rsi *old)
#define	RSC_HASHBITS	10
#define	RSC_HASHMAX	(1<<RSC_HASHBITS)
#define GSS_SEQ_WIN	128
struct gss_svc_seq_data ;
struct rsc ;
static struct cache_head *rsc_table[RSC_HASHMAX];
static struct cache_detail rsc_cache;
static struct rsc *rsc_update(struct rsc *new, struct rsc *old);
static struct rsc *rsc_lookup(struct rsc *item);
static void rsc_free(struct rsc *rsci)
static void rsc_put(struct kref *ref)
static inline int
rsc_hash(struct rsc *rsci)
static int
rsc_match(struct cache_head *a, struct cache_head *b)
static void
rsc_init(struct cache_head *cnew, struct cache_head *ctmp)
static void
update_rsc(struct cache_head *cnew, struct cache_head *ctmp)
static struct cache_head *
rsc_alloc(void)
static int rsc_parse(struct cache_detail *cd,
char *mesg, int mlen)
static struct cache_detail rsc_cache = ;
static struct rsc *rsc_lookup(struct rsc *item)
static struct rsc *rsc_update(struct rsc *new, struct rsc *old)
static struct rsc *
gss_svc_searchbyctx(struct xdr_netobj *handle)
static int
gss_check_seq_num(struct rsc *rsci, int seq_num)
static inline u32 round_up_to_quad(u32 i)
static inline int
svc_safe_getnetobj(struct kvec *argv, struct xdr_netobj *o)
static inline int
svc_safe_putnetobj(struct kvec *resv, struct xdr_netobj *o)
static int
gss_verify_header(struct svc_rqst *rqstp, struct rsc *rsci,
__be32 *rpcstart, struct rpc_gss_wire_cred *gc, __be32 *authp)
static int
gss_write_null_verf(struct svc_rqst *rqstp)
static int
gss_write_verf(struct svc_rqst *rqstp, struct gss_ctx *ctx_id, u32 seq)
struct gss_domain ;
static struct auth_domain *
find_gss_auth_domain(struct gss_ctx *ctx, u32 svc)
static struct auth_ops svcauthops_gss;
u32 svcauth_gss_flavor(struct auth_domain *dom)
EXPORT_SYMBOL_GPL(svcauth_gss_flavor);
int
svcauth_gss_register_pseudoflavor(u32 pseudoflavor, char * name)
EXPORT_SYMBOL_GPL(svcauth_gss_register_pseudoflavor);
static inline int
read_u32_from_xdr_buf(struct xdr_buf *buf, int base, u32 *obj)
static int
unwrap_integ_data(struct xdr_buf *buf, u32 seq, struct gss_ctx *ctx)
static inline int
total_buf_len(struct xdr_buf *buf)
static void
fix_priv_head(struct xdr_buf *buf, int pad)
static int
unwrap_priv_data(struct svc_rqst *rqstp, struct xdr_buf *buf, u32 seq, struct gss_ctx *ctx)
struct gss_svc_data ;
char *svc_gss_principal(struct svc_rqst *rqstp)
EXPORT_SYMBOL_GPL(svc_gss_principal);
static int
svcauth_gss_set_client(struct svc_rqst *rqstp)
static inline int
gss_write_init_verf(struct svc_rqst *rqstp, struct rsi *rsip)
static int svcauth_gss_handle_init(struct svc_rqst *rqstp,
struct rpc_gss_wire_cred *gc, __be32 *authp)
static int
svcauth_gss_accept(struct svc_rqst *rqstp, __be32 *authp)
static __be32 *
svcauth_gss_prepare_to_wrap(struct xdr_buf *resbuf, struct gss_svc_data *gsd)
static inline int
svcauth_gss_wrap_resp_integ(struct svc_rqst *rqstp)
static inline int
svcauth_gss_wrap_resp_priv(struct svc_rqst *rqstp)
static int
svcauth_gss_release(struct svc_rqst *rqstp)
static void
svcauth_gss_domain_release(struct auth_domain *dom)
static struct auth_ops svcauthops_gss = ;
int
gss_svc_init(void)
void
gss_svc_shutdown(void)
