enum ;
static int blkcipher_walk_next(struct blkcipher_desc *desc,
struct blkcipher_walk *walk);
static int blkcipher_walk_first(struct blkcipher_desc *desc,
struct blkcipher_walk *walk);
static inline void blkcipher_map_src(struct blkcipher_walk *walk)
static inline void blkcipher_map_dst(struct blkcipher_walk *walk)
static inline void blkcipher_unmap_src(struct blkcipher_walk *walk)
static inline void blkcipher_unmap_dst(struct blkcipher_walk *walk)
static inline u8 *blkcipher_get_spot(u8 *start, unsigned int len)
static inline unsigned int blkcipher_done_slow(struct crypto_blkcipher *tfm,
struct blkcipher_walk *walk,
unsigned int bsize)
static inline unsigned int blkcipher_done_fast(struct blkcipher_walk *walk,
unsigned int n)
int blkcipher_walk_done(struct blkcipher_desc *desc,
struct blkcipher_walk *walk, int err)
EXPORT_SYMBOL_GPL(blkcipher_walk_done);
static inline int blkcipher_next_slow(struct blkcipher_desc *desc,
struct blkcipher_walk *walk,
unsigned int bsize,
unsigned int alignmask)
static inline int blkcipher_next_copy(struct blkcipher_walk *walk)
static inline int blkcipher_next_fast(struct blkcipher_desc *desc,
struct blkcipher_walk *walk)
static int blkcipher_walk_next(struct blkcipher_desc *desc,
struct blkcipher_walk *walk)
static inline int blkcipher_copy_iv(struct blkcipher_walk *walk,
struct crypto_blkcipher *tfm,
unsigned int alignmask)
int blkcipher_walk_virt(struct blkcipher_desc *desc,
struct blkcipher_walk *walk)
EXPORT_SYMBOL_GPL(blkcipher_walk_virt);
int blkcipher_walk_phys(struct blkcipher_desc *desc,
struct blkcipher_walk *walk)
EXPORT_SYMBOL_GPL(blkcipher_walk_phys);
static int blkcipher_walk_first(struct blkcipher_desc *desc,
struct blkcipher_walk *walk)
int blkcipher_walk_virt_block(struct blkcipher_desc *desc,
struct blkcipher_walk *walk,
unsigned int blocksize)
EXPORT_SYMBOL_GPL(blkcipher_walk_virt_block);
static int setkey_unaligned(struct crypto_tfm *tfm, const u8 *key,
unsigned int keylen)
static int setkey(struct crypto_tfm *tfm, const u8 *key, unsigned int keylen)
static int async_setkey(struct crypto_ablkcipher *tfm, const u8 *key,
unsigned int keylen)
static int async_encrypt(struct ablkcipher_request *req)
static int async_decrypt(struct ablkcipher_request *req)
static unsigned int crypto_blkcipher_ctxsize(struct crypto_alg *alg, u32 type,
u32 mask)
static int crypto_init_blkcipher_ops_async(struct crypto_tfm *tfm)
static int crypto_init_blkcipher_ops_sync(struct crypto_tfm *tfm)
static int crypto_init_blkcipher_ops(struct crypto_tfm *tfm, u32 type, u32 mask)
static void crypto_blkcipher_show(struct seq_file *m, struct crypto_alg *alg)
__attribute__ ((unused));
static void crypto_blkcipher_show(struct seq_file *m, struct crypto_alg *alg)
const struct crypto_type crypto_blkcipher_type = ;
EXPORT_SYMBOL_GPL(crypto_blkcipher_type);
static int crypto_grab_nivcipher(struct crypto_skcipher_spawn *spawn,
const char *name, u32 type, u32 mask)
struct crypto_instance *skcipher_geniv_alloc(struct crypto_template *tmpl,
struct rtattr **tb, u32 type,
u32 mask)
EXPORT_SYMBOL_GPL(skcipher_geniv_alloc);
void skcipher_geniv_free(struct crypto_instance *inst)
EXPORT_SYMBOL_GPL(skcipher_geniv_free);
int skcipher_geniv_init(struct crypto_tfm *tfm)
EXPORT_SYMBOL_GPL(skcipher_geniv_init);
void skcipher_geniv_exit(struct crypto_tfm *tfm)
EXPORT_SYMBOL_GPL(skcipher_geniv_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Generic block chaining cipher type");
