static const struct crypto_type crypto_shash_type;
static int shash_no_setkey(struct crypto_shash *tfm, const u8 *key,
unsigned int keylen)
static int shash_setkey_unaligned(struct crypto_shash *tfm, const u8 *key,
unsigned int keylen)
int crypto_shash_setkey(struct crypto_shash *tfm, const u8 *key,
unsigned int keylen)
EXPORT_SYMBOL_GPL(crypto_shash_setkey);
static inline unsigned int shash_align_buffer_size(unsigned len,
unsigned long mask)
static int shash_update_unaligned(struct shash_desc *desc, const u8 *data,
unsigned int len)
int crypto_shash_update(struct shash_desc *desc, const u8 *data,
unsigned int len)
EXPORT_SYMBOL_GPL(crypto_shash_update);
static int shash_final_unaligned(struct shash_desc *desc, u8 *out)
int crypto_shash_final(struct shash_desc *desc, u8 *out)
EXPORT_SYMBOL_GPL(crypto_shash_final);
static int shash_finup_unaligned(struct shash_desc *desc, const u8 *data,
unsigned int len, u8 *out)
int crypto_shash_finup(struct shash_desc *desc, const u8 *data,
unsigned int len, u8 *out)
EXPORT_SYMBOL_GPL(crypto_shash_finup);
static int shash_digest_unaligned(struct shash_desc *desc, const u8 *data,
unsigned int len, u8 *out)
int crypto_shash_digest(struct shash_desc *desc, const u8 *data,
unsigned int len, u8 *out)
EXPORT_SYMBOL_GPL(crypto_shash_digest);
static int shash_default_export(struct shash_desc *desc, void *out)
static int shash_default_import(struct shash_desc *desc, const void *in)
static int shash_async_setkey(struct crypto_ahash *tfm, const u8 *key,
unsigned int keylen)
static int shash_async_init(struct ahash_request *req)
int shash_ahash_update(struct ahash_request *req, struct shash_desc *desc)
EXPORT_SYMBOL_GPL(shash_ahash_update);
static int shash_async_update(struct ahash_request *req)
static int shash_async_final(struct ahash_request *req)
int shash_ahash_finup(struct ahash_request *req, struct shash_desc *desc)
EXPORT_SYMBOL_GPL(shash_ahash_finup);
static int shash_async_finup(struct ahash_request *req)
int shash_ahash_digest(struct ahash_request *req, struct shash_desc *desc)
EXPORT_SYMBOL_GPL(shash_ahash_digest);
static int shash_async_digest(struct ahash_request *req)
static int shash_async_export(struct ahash_request *req, void *out)
static int shash_async_import(struct ahash_request *req, const void *in)
static void crypto_exit_shash_ops_async(struct crypto_tfm *tfm)
int crypto_init_shash_ops_async(struct crypto_tfm *tfm)
static int shash_compat_setkey(struct crypto_hash *tfm, const u8 *key,
unsigned int keylen)
static int shash_compat_init(struct hash_desc *hdesc)
static int shash_compat_update(struct hash_desc *hdesc, struct scatterlist *sg,
unsigned int len)
static int shash_compat_final(struct hash_desc *hdesc, u8 *out)
static int shash_compat_digest(struct hash_desc *hdesc, struct scatterlist *sg,
unsigned int nbytes, u8 *out)
static void crypto_exit_shash_ops_compat(struct crypto_tfm *tfm)
static int crypto_init_shash_ops_compat(struct crypto_tfm *tfm)
static int crypto_init_shash_ops(struct crypto_tfm *tfm, u32 type, u32 mask)
static unsigned int crypto_shash_ctxsize(struct crypto_alg *alg, u32 type,
u32 mask)
static int crypto_shash_init_tfm(struct crypto_tfm *tfm)
static unsigned int crypto_shash_extsize(struct crypto_alg *alg)
static void crypto_shash_show(struct seq_file *m, struct crypto_alg *alg)
__attribute__ ((unused));
static void crypto_shash_show(struct seq_file *m, struct crypto_alg *alg)
static const struct crypto_type crypto_shash_type = ;
struct crypto_shash *crypto_alloc_shash(const char *alg_name, u32 type,
u32 mask)
EXPORT_SYMBOL_GPL(crypto_alloc_shash);
static int shash_prepare_alg(struct shash_alg *alg)
int crypto_register_shash(struct shash_alg *alg)
EXPORT_SYMBOL_GPL(crypto_register_shash);
int crypto_unregister_shash(struct shash_alg *alg)
EXPORT_SYMBOL_GPL(crypto_unregister_shash);
int shash_register_instance(struct crypto_template *tmpl,
struct shash_instance *inst)
EXPORT_SYMBOL_GPL(shash_register_instance);
void shash_free_instance(struct crypto_instance *inst)
EXPORT_SYMBOL_GPL(shash_free_instance);
int crypto_init_shash_spawn(struct crypto_shash_spawn *spawn,
struct shash_alg *alg,
struct crypto_instance *inst)
EXPORT_SYMBOL_GPL(crypto_init_shash_spawn);
struct shash_alg *shash_attr_alg(struct rtattr *rta, u32 type, u32 mask)
EXPORT_SYMBOL_GPL(shash_attr_alg);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Synchronous cryptographic hash type");
