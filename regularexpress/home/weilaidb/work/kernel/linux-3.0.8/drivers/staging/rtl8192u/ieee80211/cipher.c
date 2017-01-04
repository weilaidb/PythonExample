typedef void (cryptfn_t)(void *, u8 *, const u8 *);
typedef void (procfn_t)(struct crypto_tfm *, u8 *,
u8*, cryptfn_t, int enc, void *, int);
static inline void xor_64(u8 *a, const u8 *b)
static inline void xor_128(u8 *a, const u8 *b)
static int crypt(struct crypto_tfm *tfm,
struct scatterlist *dst,
struct scatterlist *src,
unsigned int nbytes, cryptfn_t crfn,
procfn_t prfn, int enc, void *info)
static void cbc_process(struct crypto_tfm *tfm, u8 *dst, u8 *src,
cryptfn_t fn, int enc, void *info, int in_place)
static void ecb_process(struct crypto_tfm *tfm, u8 *dst, u8 *src,
cryptfn_t fn, int enc, void *info, int in_place)
static int setkey(struct crypto_tfm *tfm, const u8 *key, unsigned int keylen)
static int ecb_encrypt(struct crypto_tfm *tfm,
struct scatterlist *dst,
struct scatterlist *src, unsigned int nbytes)
static int ecb_decrypt(struct crypto_tfm *tfm,
struct scatterlist *dst,
struct scatterlist *src,
unsigned int nbytes)
static int cbc_encrypt(struct crypto_tfm *tfm,
struct scatterlist *dst,
struct scatterlist *src,
unsigned int nbytes)
static int cbc_encrypt_iv(struct crypto_tfm *tfm,
struct scatterlist *dst,
struct scatterlist *src,
unsigned int nbytes, u8 *iv)
static int cbc_decrypt(struct crypto_tfm *tfm,
struct scatterlist *dst,
struct scatterlist *src,
unsigned int nbytes)
static int cbc_decrypt_iv(struct crypto_tfm *tfm,
struct scatterlist *dst,
struct scatterlist *src,
unsigned int nbytes, u8 *iv)
static int nocrypt(struct crypto_tfm *tfm,
struct scatterlist *dst,
struct scatterlist *src,
unsigned int nbytes)
static int nocrypt_iv(struct crypto_tfm *tfm,
struct scatterlist *dst,
struct scatterlist *src,
unsigned int nbytes, u8 *iv)
int crypto_init_cipher_flags(struct crypto_tfm *tfm, u32 flags)
int crypto_init_cipher_ops(struct crypto_tfm *tfm)
void crypto_exit_cipher_ops(struct crypto_tfm *tfm)
