asmlinkage void aes_enc_blk(struct crypto_aes_ctx *ctx, u8 *out, const u8 *in);
asmlinkage void aes_dec_blk(struct crypto_aes_ctx *ctx, u8 *out, const u8 *in);
void crypto_aes_encrypt_x86(struct crypto_aes_ctx *ctx, u8 *dst, const u8 *src)
EXPORT_SYMBOL_GPL(crypto_aes_encrypt_x86);
void crypto_aes_decrypt_x86(struct crypto_aes_ctx *ctx, u8 *dst, const u8 *src)
EXPORT_SYMBOL_GPL(crypto_aes_decrypt_x86);
static void aes_encrypt(struct crypto_tfm *tfm, u8 *dst, const u8 *src)
static void aes_decrypt(struct crypto_tfm *tfm, u8 *dst, const u8 *src)
static struct crypto_alg aes_alg = ;
static int __init aes_init(void)
static void __exit aes_fini(void)
module_init(aes_init);
module_exit(aes_fini);
MODULE_DESCRIPTION("Rijndael (AES) Cipher Algorithm, asm optimized");
MODULE_LICENSE("GPL");
MODULE_ALIAS("aes");
MODULE_ALIAS("aes-asm");
