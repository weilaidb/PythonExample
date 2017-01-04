#define ARC4_MIN_KEY_SIZE	1
#define ARC4_MAX_KEY_SIZE	256
#define ARC4_BLOCK_SIZE		1
struct arc4_ctx ;
static int arc4_set_key(struct crypto_tfm *tfm, const u8 *in_key,
unsigned int key_len)
static void arc4_crypt(struct crypto_tfm *tfm, u8 *out, const u8 *in)
static struct crypto_alg arc4_alg = ;
static int __init arc4_init(void)
static void __exit arc4_exit(void)
module_init(arc4_init);
module_exit(arc4_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("ARC4 Cipher Algorithm");
MODULE_AUTHOR("Jon Oberheide <jon@oberheide.org>");
