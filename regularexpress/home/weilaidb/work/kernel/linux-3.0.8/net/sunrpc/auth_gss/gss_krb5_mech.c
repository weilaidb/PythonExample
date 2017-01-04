# define RPCDBG_FACILITY	RPCDBG_AUTH
static struct gss_api_mech gss_kerberos_mech;
static const struct gss_krb5_enctype supported_gss_krb5_enctypes[] = ;
static const int num_supported_enctypes =
ARRAY_SIZE(supported_gss_krb5_enctypes);
static int
supported_gss_krb5_enctype(int etype)
static const struct gss_krb5_enctype *
get_gss_krb5_enctype(int etype)
static const void *
simple_get_bytes(const void *p, const void *end, void *res, int len)
static const void *
simple_get_netobj(const void *p, const void *end, struct xdr_netobj *res)
static inline const void *
get_key(const void *p, const void *end,
struct krb5_ctx *ctx, struct crypto_blkcipher **res)
static int
gss_import_v1_context(const void *p, const void *end, struct krb5_ctx *ctx)
struct crypto_blkcipher *
context_v2_alloc_cipher(struct krb5_ctx *ctx, const char *cname, u8 *key)
static inline void
set_cdata(u8 cdata[GSS_KRB5_K5CLENGTH], u32 usage, u8 seed)
static int
context_derive_keys_des3(struct krb5_ctx *ctx, gfp_t gfp_mask)
static int
context_derive_keys_rc4(struct krb5_ctx *ctx)
static int
context_derive_keys_new(struct krb5_ctx *ctx, gfp_t gfp_mask)
static int
gss_import_v2_context(const void *p, const void *end, struct krb5_ctx *ctx,
gfp_t gfp_mask)
static int
gss_import_sec_context_kerberos(const void *p, size_t len,
struct gss_ctx *ctx_id,
gfp_t gfp_mask)
static void
gss_delete_sec_context_kerberos(void *internal_ctx)
static const struct gss_api_ops gss_kerberos_ops = ;
static struct pf_desc gss_kerberos_pfs[] = ;
static struct gss_api_mech gss_kerberos_mech = ;
static int __init init_kerberos_module(void)
static void __exit cleanup_kerberos_module(void)
MODULE_LICENSE("GPL");
module_init(init_kerberos_module);
module_exit(cleanup_kerberos_module);
