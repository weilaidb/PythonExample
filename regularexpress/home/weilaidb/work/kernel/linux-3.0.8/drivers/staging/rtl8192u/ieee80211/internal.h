#define _CRYPTO_INTERNAL_H
extern enum km_type crypto_km_types[];
static inline enum km_type crypto_kmap_type(int out)
static inline void *crypto_kmap(struct page *page, int out)
static inline void crypto_kunmap(void *vaddr, int out)
static inline void crypto_yield(struct crypto_tfm *tfm)
static inline void *crypto_tfm_ctx(struct crypto_tfm *tfm)
struct crypto_alg *crypto_alg_lookup(const char *name);
void crypto_alg_autoload(const char *name);
struct crypto_alg *crypto_alg_mod_lookup(const char *name);
static inline struct crypto_alg *crypto_alg_mod_lookup(const char *name)
int crypto_alloc_hmac_block(struct crypto_tfm *tfm);
void crypto_free_hmac_block(struct crypto_tfm *tfm);
static inline int crypto_alloc_hmac_block(struct crypto_tfm *tfm)
static inline void crypto_free_hmac_block(struct crypto_tfm *tfm)
void __init crypto_init_proc(void);
static inline void crypto_init_proc(void)
int crypto_init_digest_flags(struct crypto_tfm *tfm, u32 flags);
int crypto_init_cipher_flags(struct crypto_tfm *tfm, u32 flags);
int crypto_init_compress_flags(struct crypto_tfm *tfm, u32 flags);
int crypto_init_digest_ops(struct crypto_tfm *tfm);
int crypto_init_cipher_ops(struct crypto_tfm *tfm);
int crypto_init_compress_ops(struct crypto_tfm *tfm);
void crypto_exit_digest_ops(struct crypto_tfm *tfm);
void crypto_exit_cipher_ops(struct crypto_tfm *tfm);
void crypto_exit_compress_ops(struct crypto_tfm *tfm);
