# define RPCDBG_FACILITY	RPCDBG_AUTH
static inline int
gss_krb5_padding(int blocksize, int length)
static inline void
gss_krb5_add_padding(struct xdr_buf *buf, int offset, int blocksize)
static inline int
gss_krb5_remove_padding(struct xdr_buf *buf, int blocksize)
void
gss_krb5_make_confounder(char *p, u32 conflen)
static u32
gss_wrap_kerberos_v1(struct krb5_ctx *kctx, int offset,
struct xdr_buf *buf, struct page **pages)
static u32
gss_unwrap_kerberos_v1(struct krb5_ctx *kctx, int offset, struct xdr_buf *buf)
static u32
rotate_left(struct krb5_ctx *kctx, u32 offset, struct xdr_buf *buf, u16 rrc)
static u32
gss_wrap_kerberos_v2(struct krb5_ctx *kctx, u32 offset,
struct xdr_buf *buf, struct page **pages)
static u32
gss_unwrap_kerberos_v2(struct krb5_ctx *kctx, int offset, struct xdr_buf *buf)
u32
gss_wrap_kerberos(struct gss_ctx *gctx, int offset,
struct xdr_buf *buf, struct page **pages)
u32
gss_unwrap_kerberos(struct gss_ctx *gctx, int offset, struct xdr_buf *buf)
