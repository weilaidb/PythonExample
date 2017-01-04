asmlinkage void twofish_enc_blk(struct crypto_tfm *tfm, u8 *dst, const u8 *src);
asmlinkage void twofish_dec_blk(struct crypto_tfm *tfm, u8 *dst, const u8 *src);
static void twofish_encrypt(struct crypto_tfm *tfm, u8 *dst, const u8 *src)
static void twofish_decrypt(struct crypto_tfm *tfm, u8 *dst, const u8 *src)
static struct crypto_alg alg = ;
static int __init init(void)
static void __exit fini(void)
module_init(init);
module_exit(fini);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION ("Twofish Cipher Algorithm, asm optimized");
MODULE_ALIAS("twofish");
MODULE_ALIAS("twofish-asm");
