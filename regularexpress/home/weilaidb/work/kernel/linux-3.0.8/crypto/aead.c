static int setkey_unaligned(struct crypto_aead *tfm, const u8 *key,
unsigned int keylen)
static int setkey(struct crypto_aead *tfm, const u8 *key, unsigned int keylen)
int crypto_aead_setauthsize(struct crypto_aead *tfm, unsigned int authsize)
EXPORT_SYMBOL_GPL(crypto_aead_setauthsize);
static unsigned int crypto_aead_ctxsize(struct crypto_alg *alg, u32 type,
u32 mask)
static int no_givcrypt(struct aead_givcrypt_request *req)
static int crypto_init_aead_ops(struct crypto_tfm *tfm, u32 type, u32 mask)
static void crypto_aead_show(struct seq_file *m, struct crypto_alg *alg)
__attribute__ ((unused));
static void crypto_aead_show(struct seq_file *m, struct crypto_alg *alg)
const struct crypto_type crypto_aead_type = ;
EXPORT_SYMBOL_GPL(crypto_aead_type);
static int aead_null_givencrypt(struct aead_givcrypt_request *req)
static int aead_null_givdecrypt(struct aead_givcrypt_request *req)
static int crypto_init_nivaead_ops(struct crypto_tfm *tfm, u32 type, u32 mask)
static void crypto_nivaead_show(struct seq_file *m, struct crypto_alg *alg)
__attribute__ ((unused));
static void crypto_nivaead_show(struct seq_file *m, struct crypto_alg *alg)
const struct crypto_type crypto_nivaead_type = ;
EXPORT_SYMBOL_GPL(crypto_nivaead_type);
static int crypto_grab_nivaead(struct crypto_aead_spawn *spawn,
const char *name, u32 type, u32 mask)
struct crypto_instance *aead_geniv_alloc(struct crypto_template *tmpl,
struct rtattr **tb, u32 type,
u32 mask)
EXPORT_SYMBOL_GPL(aead_geniv_alloc);
void aead_geniv_free(struct crypto_instance *inst)
EXPORT_SYMBOL_GPL(aead_geniv_free);
int aead_geniv_init(struct crypto_tfm *tfm)
EXPORT_SYMBOL_GPL(aead_geniv_init);
void aead_geniv_exit(struct crypto_tfm *tfm)
EXPORT_SYMBOL_GPL(aead_geniv_exit);
static int crypto_nivaead_default(struct crypto_alg *alg, u32 type, u32 mask)
static struct crypto_alg *crypto_lookup_aead(const char *name, u32 type,
u32 mask)
int crypto_grab_aead(struct crypto_aead_spawn *spawn, const char *name,
u32 type, u32 mask)
EXPORT_SYMBOL_GPL(crypto_grab_aead);
struct crypto_aead *crypto_alloc_aead(const char *alg_name, u32 type, u32 mask)
EXPORT_SYMBOL_GPL(crypto_alloc_aead);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Authenticated Encryption with Associated Data (AEAD)");
