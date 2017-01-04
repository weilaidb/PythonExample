static void init(struct crypto_tfm *tfm)
static void update(struct crypto_tfm *tfm,
struct scatterlist *sg, unsigned int nsg)
static void final(struct crypto_tfm *tfm, u8 *out)
static int setkey(struct crypto_tfm *tfm, const u8 *key, unsigned int keylen)
static void digest(struct crypto_tfm *tfm,
struct scatterlist *sg, unsigned int nsg, u8 *out)
int crypto_init_digest_flags(struct crypto_tfm *tfm, u32 flags)
int crypto_init_digest_ops(struct crypto_tfm *tfm)
void crypto_exit_digest_ops(struct crypto_tfm *tfm)
