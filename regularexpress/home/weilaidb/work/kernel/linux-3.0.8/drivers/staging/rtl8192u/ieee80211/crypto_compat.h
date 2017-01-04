static inline int crypto_cipher_encrypt(struct crypto_tfm *tfm,
struct scatterlist *dst,
struct scatterlist *src,
unsigned int nbytes)
static inline int crypto_cipher_decrypt(struct crypto_tfm *tfm,
struct scatterlist *dst,
struct scatterlist *src,
unsigned int nbytes)
struct crypto_tfm *crypto_alloc_tfm(const char *name, u32 flags)
