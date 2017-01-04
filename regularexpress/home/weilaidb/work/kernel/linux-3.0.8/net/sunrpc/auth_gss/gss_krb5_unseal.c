# define RPCDBG_FACILITY        RPCDBG_AUTH
static u32
gss_verify_mic_v1(struct krb5_ctx *ctx,
struct xdr_buf *message_buffer, struct xdr_netobj *read_token)
static u32
gss_verify_mic_v2(struct krb5_ctx *ctx,
struct xdr_buf *message_buffer, struct xdr_netobj *read_token)
u32
gss_verify_mic_kerberos(struct gss_ctx *gss_ctx,
struct xdr_buf *message_buffer,
struct xdr_netobj *read_token)
