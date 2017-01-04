static const char *skcipher_default_geniv __read_mostly;
struct ablkcipher_buffer ;
enum ;
static inline void ablkcipher_buffer_write(struct ablkcipher_buffer *p)
void __ablkcipher_walk_complete(struct ablkcipher_walk *walk)
EXPORT_SYMBOL_GPL(__ablkcipher_walk_complete);
static inline void ablkcipher_queue_write(struct ablkcipher_walk *walk,
struct ablkcipher_buffer *p)
static inline u8 *ablkcipher_get_spot(u8 *start, unsigned int len)
static inline unsigned int ablkcipher_done_slow(struct ablkcipher_walk *walk,
unsigned int bsize)
static inline unsigned int ablkcipher_done_fast(struct ablkcipher_walk *walk,
unsigned int n)
static int ablkcipher_walk_next(struct ablkcipher_request *req,
struct ablkcipher_walk *walk);
int ablkcipher_walk_done(struct ablkcipher_request *req,
struct ablkcipher_walk *walk, int err)
EXPORT_SYMBOL_GPL(ablkcipher_walk_done);
static inline int ablkcipher_next_slow(struct ablkcipher_request *req,
struct ablkcipher_walk *walk,
unsigned int bsize,
unsigned int alignmask,
void **src_p, void **dst_p)
static inline int ablkcipher_copy_iv(struct ablkcipher_walk *walk,
struct crypto_tfm *tfm,
unsigned int alignmask)
static inline int ablkcipher_next_fast(struct ablkcipher_request *req,
struct ablkcipher_walk *walk)
static int ablkcipher_walk_next(struct ablkcipher_request *req,
struct ablkcipher_walk *walk)
static int ablkcipher_walk_first(struct ablkcipher_request *req,
struct ablkcipher_walk *walk)
int ablkcipher_walk_phys(struct ablkcipher_request *req,
struct ablkcipher_walk *walk)
EXPORT_SYMBOL_GPL(ablkcipher_walk_phys);
static int setkey_unaligned(struct crypto_ablkcipher *tfm, const u8 *key,
unsigned int keylen)
static int setkey(struct crypto_ablkcipher *tfm, const u8 *key,
unsigned int keylen)
static unsigned int crypto_ablkcipher_ctxsize(struct crypto_alg *alg, u32 type,
u32 mask)
int skcipher_null_givencrypt(struct skcipher_givcrypt_request *req)
int skcipher_null_givdecrypt(struct skcipher_givcrypt_request *req)
static int crypto_init_ablkcipher_ops(struct crypto_tfm *tfm, u32 type,
u32 mask)
static void crypto_ablkcipher_show(struct seq_file *m, struct crypto_alg *alg)
__attribute__ ((unused));
static void crypto_ablkcipher_show(struct seq_file *m, struct crypto_alg *alg)
const struct crypto_type crypto_ablkcipher_type = ;
EXPORT_SYMBOL_GPL(crypto_ablkcipher_type);
static int no_givdecrypt(struct skcipher_givcrypt_request *req)
static int crypto_init_givcipher_ops(struct crypto_tfm *tfm, u32 type,
u32 mask)
static void crypto_givcipher_show(struct seq_file *m, struct crypto_alg *alg)
__attribute__ ((unused));
static void crypto_givcipher_show(struct seq_file *m, struct crypto_alg *alg)
const struct crypto_type crypto_givcipher_type = ;
EXPORT_SYMBOL_GPL(crypto_givcipher_type);
const char *crypto_default_geniv(const struct crypto_alg *alg)
static int crypto_givcipher_default(struct crypto_alg *alg, u32 type, u32 mask)
static struct crypto_alg *crypto_lookup_skcipher(const char *name, u32 type,
u32 mask)
int crypto_grab_skcipher(struct crypto_skcipher_spawn *spawn, const char *name,
u32 type, u32 mask)
EXPORT_SYMBOL_GPL(crypto_grab_skcipher);
struct crypto_ablkcipher *crypto_alloc_ablkcipher(const char *alg_name,
u32 type, u32 mask)
EXPORT_SYMBOL_GPL(crypto_alloc_ablkcipher);
static int __init skcipher_module_init(void)
static void skcipher_module_exit(void)
module_init(skcipher_module_init);
module_exit(skcipher_module_exit);
