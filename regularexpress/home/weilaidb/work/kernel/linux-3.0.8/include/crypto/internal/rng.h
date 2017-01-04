#define _CRYPTO_INTERNAL_RNG_H
extern const struct crypto_type crypto_rng_type;
static inline void *crypto_rng_ctx(struct crypto_rng *tfm)
