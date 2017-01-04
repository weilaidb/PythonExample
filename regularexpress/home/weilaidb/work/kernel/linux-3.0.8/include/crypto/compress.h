#define _CRYPTO_COMPRESS_H
struct comp_request ;
enum zlib_comp_params ;
#define ZLIB_COMP_MAX	(__ZLIB_COMP_MAX - 1)
enum zlib_decomp_params ;
#define ZLIB_DECOMP_MAX	(__ZLIB_DECOMP_MAX - 1)
struct crypto_pcomp ;
struct pcomp_alg ;
extern struct crypto_pcomp *crypto_alloc_pcomp(const char *alg_name, u32 type,
u32 mask);
static inline struct crypto_tfm *crypto_pcomp_tfm(struct crypto_pcomp *tfm)
static inline void crypto_free_pcomp(struct crypto_pcomp *tfm)
static inline struct pcomp_alg *__crypto_pcomp_alg(struct crypto_alg *alg)
static inline struct pcomp_alg *crypto_pcomp_alg(struct crypto_pcomp *tfm)
static inline int crypto_compress_setup(struct crypto_pcomp *tfm,
void *params, unsigned int len)
static inline int crypto_compress_init(struct crypto_pcomp *tfm)
static inline int crypto_compress_update(struct crypto_pcomp *tfm,
struct comp_request *req)
static inline int crypto_compress_final(struct crypto_pcomp *tfm,
struct comp_request *req)
static inline int crypto_decompress_setup(struct crypto_pcomp *tfm,
void *params, unsigned int len)
static inline int crypto_decompress_init(struct crypto_pcomp *tfm)
static inline int crypto_decompress_update(struct crypto_pcomp *tfm,
struct comp_request *req)
static inline int crypto_decompress_final(struct crypto_pcomp *tfm,
struct comp_request *req)
