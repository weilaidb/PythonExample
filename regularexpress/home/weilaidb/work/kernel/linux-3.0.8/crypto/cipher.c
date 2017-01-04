static int setkey_unaligned(struct crypto_tfm *tfm, const u8 *key,
unsigned int keylen)
static int setkey(struct crypto_tfm *tfm, const u8 *key, unsigned int keylen)
static void cipher_crypt_unaligned(void (*fn)(struct crypto_tfm *, u8 *,
const u8 *),
struct crypto_tfm *tfm,
u8 *dst, const u8 *src)
static void cipher_encrypt_unaligned(struct crypto_tfm *tfm,
u8 *dst, const u8 *src)
static void cipher_decrypt_unaligned(struct crypto_tfm *tfm,
u8 *dst, const u8 *src)
int crypto_init_cipher_ops(struct crypto_tfm *tfm)
void crypto_exit_cipher_ops(struct crypto_tfm *tfm)
