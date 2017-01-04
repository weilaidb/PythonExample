static u_int32_t ks[12] = ;
struct xcbc_tfm_ctx ;
struct xcbc_desc_ctx ;
static int crypto_xcbc_digest_setkey(struct crypto_shash *parent,
const u8 *inkey, unsigned int keylen)
static int crypto_xcbc_digest_init(struct shash_desc *pdesc)
static int crypto_xcbc_digest_update(struct shash_desc *pdesc, const u8 *p,
unsigned int len)
static int crypto_xcbc_digest_final(struct shash_desc *pdesc, u8 *out)
static int xcbc_init_tfm(struct crypto_tfm *tfm)
;
static void xcbc_exit_tfm(struct crypto_tfm *tfm)
static int xcbc_create(struct crypto_template *tmpl, struct rtattr **tb)
static struct crypto_template crypto_xcbc_tmpl = ;
static int __init crypto_xcbc_module_init(void)
static void __exit crypto_xcbc_module_exit(void)
module_init(crypto_xcbc_module_init);
module_exit(crypto_xcbc_module_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("XCBC keyed hash algorithm");
