#define _CRYPTO_RNG_H
extern struct crypto_rng *crypto_default_rng;
int crypto_get_default_rng(void);
void crypto_put_default_rng(void);
static inline struct crypto_rng *__crypto_rng_cast(struct crypto_tfm *tfm)
static inline struct crypto_rng *crypto_alloc_rng(const char *alg_name,
u32 type, u32 mask)
static inline struct crypto_tfm *crypto_rng_tfm(struct crypto_rng *tfm)
static inline struct rng_alg *crypto_rng_alg(struct crypto_rng *tfm)
static inline struct rng_tfm *crypto_rng_crt(struct crypto_rng *tfm)
static inline void crypto_free_rng(struct crypto_rng *tfm)
static inline int crypto_rng_get_bytes(struct crypto_rng *tfm,
u8 *rdata, unsigned int dlen)
static inline int crypto_rng_reset(struct crypto_rng *tfm,
u8 *seed, unsigned int slen)
static inline int crypto_rng_seedsize(struct crypto_rng *tfm)
