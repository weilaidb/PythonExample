struct ahash_request_priv ;
static inline struct ahash_alg *crypto_ahash_alg(struct crypto_ahash *hash)
static int hash_walk_next(struct crypto_hash_walk *walk)
static int hash_walk_new_entry(struct crypto_hash_walk *walk)
int crypto_hash_walk_done(struct crypto_hash_walk *walk, int err)
EXPORT_SYMBOL_GPL(crypto_hash_walk_done);
int crypto_hash_walk_first(struct ahash_request *req,
struct crypto_hash_walk *walk)
EXPORT_SYMBOL_GPL(crypto_hash_walk_first);
int crypto_hash_walk_first_compat(struct hash_desc *hdesc,
struct crypto_hash_walk *walk,
struct scatterlist *sg, unsigned int len)
static int ahash_setkey_unaligned(struct crypto_ahash *tfm, const u8 *key,
unsigned int keylen)
int crypto_ahash_setkey(struct crypto_ahash *tfm, const u8 *key,
unsigned int keylen)
EXPORT_SYMBOL_GPL(crypto_ahash_setkey);
static int ahash_nosetkey(struct crypto_ahash *tfm, const u8 *key,
unsigned int keylen)
static inline unsigned int ahash_align_buffer_size(unsigned len,
unsigned long mask)
static void ahash_op_unaligned_finish(struct ahash_request *req, int err)
static void ahash_op_unaligned_done(struct crypto_async_request *req, int err)
static int ahash_op_unaligned(struct ahash_request *req,
int (*op)(struct ahash_request *))
static int crypto_ahash_op(struct ahash_request *req,
int (*op)(struct ahash_request *))
int crypto_ahash_final(struct ahash_request *req)
EXPORT_SYMBOL_GPL(crypto_ahash_final);
int crypto_ahash_finup(struct ahash_request *req)
EXPORT_SYMBOL_GPL(crypto_ahash_finup);
int crypto_ahash_digest(struct ahash_request *req)
EXPORT_SYMBOL_GPL(crypto_ahash_digest);
static void ahash_def_finup_finish2(struct ahash_request *req, int err)
static void ahash_def_finup_done2(struct crypto_async_request *req, int err)
static int ahash_def_finup_finish1(struct ahash_request *req, int err)
static void ahash_def_finup_done1(struct crypto_async_request *req, int err)
static int ahash_def_finup(struct ahash_request *req)
static int ahash_no_export(struct ahash_request *req, void *out)
static int ahash_no_import(struct ahash_request *req, const void *in)
static int crypto_ahash_init_tfm(struct crypto_tfm *tfm)
static unsigned int crypto_ahash_extsize(struct crypto_alg *alg)
static void crypto_ahash_show(struct seq_file *m, struct crypto_alg *alg)
__attribute__ ((unused));
static void crypto_ahash_show(struct seq_file *m, struct crypto_alg *alg)
const struct crypto_type crypto_ahash_type = ;
EXPORT_SYMBOL_GPL(crypto_ahash_type);
struct crypto_ahash *crypto_alloc_ahash(const char *alg_name, u32 type,
u32 mask)
EXPORT_SYMBOL_GPL(crypto_alloc_ahash);
static int ahash_prepare_alg(struct ahash_alg *alg)
int crypto_register_ahash(struct ahash_alg *alg)
EXPORT_SYMBOL_GPL(crypto_register_ahash);
int crypto_unregister_ahash(struct ahash_alg *alg)
EXPORT_SYMBOL_GPL(crypto_unregister_ahash);
int ahash_register_instance(struct crypto_template *tmpl,
struct ahash_instance *inst)
EXPORT_SYMBOL_GPL(ahash_register_instance);
void ahash_free_instance(struct crypto_instance *inst)
EXPORT_SYMBOL_GPL(ahash_free_instance);
int crypto_init_ahash_spawn(struct crypto_ahash_spawn *spawn,
struct hash_alg_common *alg,
struct crypto_instance *inst)
EXPORT_SYMBOL_GPL(crypto_init_ahash_spawn);
struct hash_alg_common *ahash_attr_alg(struct rtattr *rta, u32 type, u32 mask)
EXPORT_SYMBOL_GPL(ahash_attr_alg);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Asynchronous cryptographic hash type");
