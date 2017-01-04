#define CRYPTD_MAX_CPU_QLEN 100
struct cryptd_cpu_queue ;
struct cryptd_queue ;
struct cryptd_instance_ctx ;
struct hashd_instance_ctx ;
struct aead_instance_ctx ;
struct cryptd_blkcipher_ctx ;
struct cryptd_blkcipher_request_ctx ;
struct cryptd_hash_ctx ;
struct cryptd_hash_request_ctx ;
struct cryptd_aead_ctx ;
struct cryptd_aead_request_ctx ;
static void cryptd_queue_worker(struct work_struct *work);
static int cryptd_init_queue(struct cryptd_queue *queue,
unsigned int max_cpu_qlen)
static void cryptd_fini_queue(struct cryptd_queue *queue)
static int cryptd_enqueue_request(struct cryptd_queue *queue,
struct crypto_async_request *request)
static void cryptd_queue_worker(struct work_struct *work)
static inline struct cryptd_queue *cryptd_get_queue(struct crypto_tfm *tfm)
static int cryptd_blkcipher_setkey(struct crypto_ablkcipher *parent,
const u8 *key, unsigned int keylen)
static void cryptd_blkcipher_crypt(struct ablkcipher_request *req,
struct crypto_blkcipher *child,
int err,
int (*crypt)(struct blkcipher_desc *desc,
struct scatterlist *dst,
struct scatterlist *src,
unsigned int len))
static void cryptd_blkcipher_encrypt(struct crypto_async_request *req, int err)
static void cryptd_blkcipher_decrypt(struct crypto_async_request *req, int err)
static int cryptd_blkcipher_enqueue(struct ablkcipher_request *req,
crypto_completion_t complete)
static int cryptd_blkcipher_encrypt_enqueue(struct ablkcipher_request *req)
static int cryptd_blkcipher_decrypt_enqueue(struct ablkcipher_request *req)
static int cryptd_blkcipher_init_tfm(struct crypto_tfm *tfm)
static void cryptd_blkcipher_exit_tfm(struct crypto_tfm *tfm)
static void *cryptd_alloc_instance(struct crypto_alg *alg, unsigned int head,
unsigned int tail)
static int cryptd_create_blkcipher(struct crypto_template *tmpl,
struct rtattr **tb,
struct cryptd_queue *queue)
static int cryptd_hash_init_tfm(struct crypto_tfm *tfm)
static void cryptd_hash_exit_tfm(struct crypto_tfm *tfm)
static int cryptd_hash_setkey(struct crypto_ahash *parent,
const u8 *key, unsigned int keylen)
static int cryptd_hash_enqueue(struct ahash_request *req,
crypto_completion_t complete)
static void cryptd_hash_init(struct crypto_async_request *req_async, int err)
static int cryptd_hash_init_enqueue(struct ahash_request *req)
static void cryptd_hash_update(struct crypto_async_request *req_async, int err)
static int cryptd_hash_update_enqueue(struct ahash_request *req)
static void cryptd_hash_final(struct crypto_async_request *req_async, int err)
static int cryptd_hash_final_enqueue(struct ahash_request *req)
static void cryptd_hash_finup(struct crypto_async_request *req_async, int err)
static int cryptd_hash_finup_enqueue(struct ahash_request *req)
static void cryptd_hash_digest(struct crypto_async_request *req_async, int err)
static int cryptd_hash_digest_enqueue(struct ahash_request *req)
static int cryptd_hash_export(struct ahash_request *req, void *out)
static int cryptd_hash_import(struct ahash_request *req, const void *in)
static int cryptd_create_hash(struct crypto_template *tmpl, struct rtattr **tb,
struct cryptd_queue *queue)
static void cryptd_aead_crypt(struct aead_request *req,
struct crypto_aead *child,
int err,
int (*crypt)(struct aead_request *req))
static void cryptd_aead_encrypt(struct crypto_async_request *areq, int err)
static void cryptd_aead_decrypt(struct crypto_async_request *areq, int err)
static int cryptd_aead_enqueue(struct aead_request *req,
crypto_completion_t complete)
static int cryptd_aead_encrypt_enqueue(struct aead_request *req)
static int cryptd_aead_decrypt_enqueue(struct aead_request *req)
static int cryptd_aead_init_tfm(struct crypto_tfm *tfm)
static void cryptd_aead_exit_tfm(struct crypto_tfm *tfm)
static int cryptd_create_aead(struct crypto_template *tmpl,
struct rtattr **tb,
struct cryptd_queue *queue)
static struct cryptd_queue queue;
static int cryptd_create(struct crypto_template *tmpl, struct rtattr **tb)
static void cryptd_free(struct crypto_instance *inst)
static struct crypto_template cryptd_tmpl = ;
struct cryptd_ablkcipher *cryptd_alloc_ablkcipher(const char *alg_name,
u32 type, u32 mask)
EXPORT_SYMBOL_GPL(cryptd_alloc_ablkcipher);
struct crypto_blkcipher *cryptd_ablkcipher_child(struct cryptd_ablkcipher *tfm)
EXPORT_SYMBOL_GPL(cryptd_ablkcipher_child);
void cryptd_free_ablkcipher(struct cryptd_ablkcipher *tfm)
EXPORT_SYMBOL_GPL(cryptd_free_ablkcipher);
struct cryptd_ahash *cryptd_alloc_ahash(const char *alg_name,
u32 type, u32 mask)
EXPORT_SYMBOL_GPL(cryptd_alloc_ahash);
struct crypto_shash *cryptd_ahash_child(struct cryptd_ahash *tfm)
EXPORT_SYMBOL_GPL(cryptd_ahash_child);
struct shash_desc *cryptd_shash_desc(struct ahash_request *req)
EXPORT_SYMBOL_GPL(cryptd_shash_desc);
void cryptd_free_ahash(struct cryptd_ahash *tfm)
EXPORT_SYMBOL_GPL(cryptd_free_ahash);
struct cryptd_aead *cryptd_alloc_aead(const char *alg_name,
u32 type, u32 mask)
EXPORT_SYMBOL_GPL(cryptd_alloc_aead);
struct crypto_aead *cryptd_aead_child(struct cryptd_aead *tfm)
EXPORT_SYMBOL_GPL(cryptd_aead_child);
void cryptd_free_aead(struct cryptd_aead *tfm)
EXPORT_SYMBOL_GPL(cryptd_free_aead);
static int __init cryptd_init(void)
static void __exit cryptd_exit(void)
module_init(cryptd_init);
module_exit(cryptd_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Software async crypto daemon");
