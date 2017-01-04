struct hmac_ctx ;
static inline void *align_ptr(void *p, unsigned int align)
static inline struct hmac_ctx *hmac_ctx(struct crypto_shash *tfm)
static int hmac_setkey(struct crypto_shash *parent,
const u8 *inkey, unsigned int keylen)
static int hmac_export(struct shash_desc *pdesc, void *out)
static int hmac_import(struct shash_desc *pdesc, const void *in)
static int hmac_init(struct shash_desc *pdesc)
static int hmac_update(struct shash_desc *pdesc,
const u8 *data, unsigned int nbytes)
static int hmac_final(struct shash_desc *pdesc, u8 *out)
static int hmac_finup(struct shash_desc *pdesc, const u8 *data,
unsigned int nbytes, u8 *out)
static int hmac_init_tfm(struct crypto_tfm *tfm)
static void hmac_exit_tfm(struct crypto_tfm *tfm)
static int hmac_create(struct crypto_template *tmpl, struct rtattr **tb)
static struct crypto_template hmac_tmpl = ;
static int __init hmac_module_init(void)
static void __exit hmac_module_exit(void)
module_init(hmac_module_init);
module_exit(hmac_module_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("HMAC hash algorithm");
