# define RPCDBG_FACILITY        RPCDBG_AUTH
DEFINE_SPINLOCK(krb5_seq_lock);
static char *
setup_token(struct krb5_ctx *ctx, struct xdr_netobj *token)
static void *
setup_token_v2(struct krb5_ctx *ctx, struct xdr_netobj *token)
static u32
gss_get_mic_v1(struct krb5_ctx *ctx, struct xdr_buf *text,
struct xdr_netobj *token)
u32
gss_get_mic_v2(struct krb5_ctx *ctx, struct xdr_buf *text,
struct xdr_netobj *token)
u32
gss_get_mic_kerberos(struct gss_ctx *gss_ctx, struct xdr_buf *text,
struct xdr_netobj *token)
