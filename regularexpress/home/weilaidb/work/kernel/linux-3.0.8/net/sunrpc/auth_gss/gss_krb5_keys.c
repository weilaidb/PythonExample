# define RPCDBG_FACILITY        RPCDBG_AUTH
static void krb5_nfold(u32 inbits, const u8 *in,
u32 outbits, u8 *out)
u32 krb5_derive_key(const struct gss_krb5_enctype *gk5e,
const struct xdr_netobj *inkey,
struct xdr_netobj *outkey,
const struct xdr_netobj *in_constant,
gfp_t gfp_mask)
#define smask(step) ((1<<step)-1)
#define pstep(x, step) (((x)&smask(step))^(((x)>>step)&smask(step)))
#define parity_char(x) pstep(pstep(pstep((x), 4), 2), 1)
static void mit_des_fixup_key_parity(u8 key[8])
u32 gss_krb5_des3_make_key(const struct gss_krb5_enctype *gk5e,
struct xdr_netobj *randombits,
struct xdr_netobj *key)
u32 gss_krb5_aes_make_key(const struct gss_krb5_enctype *gk5e,
struct xdr_netobj *randombits,
struct xdr_netobj *key)
