static int crypto_compress(struct crypto_tfm *tfm,
const u8 *src, unsigned int slen,
u8 *dst, unsigned int *dlen)
static int crypto_decompress(struct crypto_tfm *tfm,
const u8 *src, unsigned int slen,
u8 *dst, unsigned int *dlen)
int crypto_init_compress_flags(struct crypto_tfm *tfm, u32 flags)
int crypto_init_compress_ops(struct crypto_tfm *tfm)
void crypto_exit_compress_ops(struct crypto_tfm *tfm)
