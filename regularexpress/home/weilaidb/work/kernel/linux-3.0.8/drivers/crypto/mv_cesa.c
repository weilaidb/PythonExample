#define MV_CESA	"MV-CESA:"
#define MAX_HW_HASH_SIZE	0xFFFF
enum engine_status ;
struct req_progress ;
struct crypto_priv ;
static struct crypto_priv *cpg;
struct mv_ctx ;
enum crypto_op ;
struct mv_req_ctx ;
enum hash_op ;
struct mv_tfm_hash_ctx ;
struct mv_req_hash_ctx ;
static void compute_aes_dec_key(struct mv_ctx *ctx)
static int mv_setkey_aes(struct crypto_ablkcipher *cipher, const u8 *key,
unsigned int len)
static void copy_src_to_buf(struct req_progress *p, char *dbuf, int len)
static void setup_data_in(void)
static void mv_process_current_q(int first_block)
static void mv_crypto_algo_completion(void)
static void mv_process_hash_current(int first_block)
static inline int mv_hash_import_sha1_ctx(const struct mv_req_hash_ctx *ctx,
struct shash_desc *desc)
static int mv_hash_final_fallback(struct ahash_request *req)
static void mv_hash_algo_completion(void)
static void dequeue_complete_req(void)
static int count_sgs(struct scatterlist *sl, unsigned int total_bytes)
static void mv_start_new_crypt_req(struct ablkcipher_request *req)
static void mv_start_new_hash_req(struct ahash_request *req)
static int queue_manag(void *data)
static int mv_handle_req(struct crypto_async_request *req)
static int mv_enc_aes_ecb(struct ablkcipher_request *req)
static int mv_dec_aes_ecb(struct ablkcipher_request *req)
static int mv_enc_aes_cbc(struct ablkcipher_request *req)
static int mv_dec_aes_cbc(struct ablkcipher_request *req)
static int mv_cra_init(struct crypto_tfm *tfm)
static void mv_init_hash_req_ctx(struct mv_req_hash_ctx *ctx, int op,
int is_last, unsigned int req_len,
int count_add)
static void mv_update_hash_req_ctx(struct mv_req_hash_ctx *ctx, int is_last,
unsigned req_len)
static int mv_hash_init(struct ahash_request *req)
static int mv_hash_update(struct ahash_request *req)
static int mv_hash_final(struct ahash_request *req)
static int mv_hash_finup(struct ahash_request *req)
static int mv_hash_digest(struct ahash_request *req)
static void mv_hash_init_ivs(struct mv_tfm_hash_ctx *ctx, const void *istate,
const void *ostate)
static int mv_hash_setkey(struct crypto_ahash *tfm, const u8 * key,
unsigned int keylen)
static int mv_cra_hash_init(struct crypto_tfm *tfm, const char *base_hash_name,
enum hash_op op, int count_add)
static void mv_cra_hash_exit(struct crypto_tfm *tfm)
static int mv_cra_hash_sha1_init(struct crypto_tfm *tfm)
static int mv_cra_hash_hmac_sha1_init(struct crypto_tfm *tfm)
irqreturn_t crypto_int(int irq, void *priv)
struct crypto_alg mv_aes_alg_ecb = ;
struct crypto_alg mv_aes_alg_cbc = ;
struct ahash_alg mv_sha1_alg = ;
struct ahash_alg mv_hmac_sha1_alg = ;
static int mv_probe(struct platform_device *pdev)
static int mv_remove(struct platform_device *pdev)
static struct platform_driver marvell_crypto = ;
MODULE_ALIAS("platform:mv_crypto");
static int __init mv_crypto_init(void)
module_init(mv_crypto_init);
static void __exit mv_crypto_exit(void)
module_exit(mv_crypto_exit);
MODULE_AUTHOR("Sebastian Andrzej Siewior <sebastian@breakpoint.cc>");
MODULE_DESCRIPTION("Support for Marvell's cryptographic engine");
MODULE_LICENSE("GPL");
