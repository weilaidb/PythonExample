#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define DRV_MODULE_NAME		"n2_crypto"
#define DRV_MODULE_VERSION	"0.1"
#define DRV_MODULE_RELDATE	"April 29, 2010"
static char version[] __devinitdata =
DRV_MODULE_NAME ".c:v" DRV_MODULE_VERSION " (" DRV_MODULE_RELDATE ")\n";
MODULE_AUTHOR("David S. Miller (davem@davemloft.net)");
MODULE_DESCRIPTION("Niagara2 Crypto driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_MODULE_VERSION);
#define N2_CRA_PRIORITY		300
static DEFINE_MUTEX(spu_lock);
struct spu_queue ;
static struct spu_queue **cpu_to_cwq;
static struct spu_queue **cpu_to_mau;
static unsigned long spu_next_offset(struct spu_queue *q, unsigned long off)
struct n2_request_common ;
#define OFFSET_NOT_RUNNING	(~(unsigned int)0)
static inline bool job_finished(struct spu_queue *q, unsigned int offset,
unsigned long old_head, unsigned long new_head)
static irqreturn_t cwq_intr(int irq, void *dev_id)
static irqreturn_t mau_intr(int irq, void *dev_id)
static void *spu_queue_next(struct spu_queue *q, void *cur)
static int spu_queue_num_free(struct spu_queue *q)
static void *spu_queue_alloc(struct spu_queue *q, int num_entries)
static unsigned long spu_queue_submit(struct spu_queue *q, void *last)
static u64 control_word_base(unsigned int len, unsigned int hmac_key_len,
int enc_type, int auth_type,
unsigned int hash_len,
bool sfas, bool sob, bool eob, bool encrypt,
int opcode)
struct n2_ahash_alg ;
static inline struct n2_ahash_alg *n2_ahash_alg(struct crypto_tfm *tfm)
struct n2_hmac_alg ;
static inline struct n2_hmac_alg *n2_hmac_alg(struct crypto_tfm *tfm)
struct n2_hash_ctx ;
#define N2_HASH_KEY_MAX			32
struct n2_hmac_ctx ;
struct n2_hash_req_ctx ;
static int n2_hash_async_init(struct ahash_request *req)
static int n2_hash_async_update(struct ahash_request *req)
static int n2_hash_async_final(struct ahash_request *req)
static int n2_hash_async_finup(struct ahash_request *req)
static int n2_hash_cra_init(struct crypto_tfm *tfm)
static void n2_hash_cra_exit(struct crypto_tfm *tfm)
static int n2_hmac_cra_init(struct crypto_tfm *tfm)
static void n2_hmac_cra_exit(struct crypto_tfm *tfm)
static int n2_hmac_async_setkey(struct crypto_ahash *tfm, const u8 *key,
unsigned int keylen)
static unsigned long wait_for_tail(struct spu_queue *qp)
static unsigned long submit_and_wait_for_tail(struct spu_queue *qp,
struct cwq_initial_entry *ent)
static int n2_do_async_digest(struct ahash_request *req,
unsigned int auth_type, unsigned int digest_size,
unsigned int result_size, void *hash_loc,
unsigned long auth_key, unsigned int auth_key_len)
static int n2_hash_async_digest(struct ahash_request *req)
static int n2_hmac_async_digest(struct ahash_request *req)
struct n2_cipher_context ;
#define N2_CHUNK_ARR_LEN	16
struct n2_crypto_chunk ;
struct n2_request_context ;
struct n2_cipher_alg ;
static inline struct n2_cipher_alg *n2_cipher_alg(struct crypto_tfm *tfm)
struct n2_cipher_request_context ;
static int n2_aes_setkey(struct crypto_ablkcipher *cipher, const u8 *key,
unsigned int keylen)
static int n2_des_setkey(struct crypto_ablkcipher *cipher, const u8 *key,
unsigned int keylen)
static int n2_3des_setkey(struct crypto_ablkcipher *cipher, const u8 *key,
unsigned int keylen)
static int n2_arc4_setkey(struct crypto_ablkcipher *cipher, const u8 *key,
unsigned int keylen)
static inline int cipher_descriptor_len(int nbytes, unsigned int block_size)
static int __n2_crypt_chunk(struct crypto_tfm *tfm, struct n2_crypto_chunk *cp,
struct spu_queue *qp, bool encrypt)
static int n2_compute_chunks(struct ablkcipher_request *req)
static void n2_chunk_complete(struct ablkcipher_request *req, void *final_iv)
static int n2_do_ecb(struct ablkcipher_request *req, bool encrypt)
static int n2_encrypt_ecb(struct ablkcipher_request *req)
static int n2_decrypt_ecb(struct ablkcipher_request *req)
static int n2_do_chaining(struct ablkcipher_request *req, bool encrypt)
static int n2_encrypt_chaining(struct ablkcipher_request *req)
static int n2_decrypt_chaining(struct ablkcipher_request *req)
struct n2_cipher_tmpl ;
static const struct n2_cipher_tmpl cipher_tmpls[] = ;
#define NUM_CIPHER_TMPLS ARRAY_SIZE(cipher_tmpls)
static LIST_HEAD(cipher_algs);
struct n2_hash_tmpl ;
static const char md5_zero[MD5_DIGEST_SIZE] = ;
static const u32 md5_init[MD5_HASH_WORDS] = ;
static const char sha1_zero[SHA1_DIGEST_SIZE] = ;
static const u32 sha1_init[SHA1_DIGEST_SIZE / 4] = ;
static const char sha256_zero[SHA256_DIGEST_SIZE] = ;
static const u32 sha256_init[SHA256_DIGEST_SIZE / 4] = ;
static const char sha224_zero[SHA224_DIGEST_SIZE] = ;
static const u32 sha224_init[SHA256_DIGEST_SIZE / 4] = ;
static const struct n2_hash_tmpl hash_tmpls[] = ;
#define NUM_HASH_TMPLS ARRAY_SIZE(hash_tmpls)
static LIST_HEAD(ahash_algs);
static LIST_HEAD(hmac_algs);
static int algs_registered;
static void __n2_unregister_algs(void)
static int n2_cipher_cra_init(struct crypto_tfm *tfm)
static int __devinit __n2_register_one_cipher(const struct n2_cipher_tmpl *tmpl)
static int __devinit __n2_register_one_hmac(struct n2_ahash_alg *n2ahash)
static int __devinit __n2_register_one_ahash(const struct n2_hash_tmpl *tmpl)
static int __devinit n2_register_algs(void)
static void __devexit n2_unregister_algs(void)
static int find_devino_index(struct platform_device *dev, struct spu_mdesc_info *ip,
unsigned long dev_ino)
static int spu_map_ino(struct platform_device *dev, struct spu_mdesc_info *ip,
const char *irq_name, struct spu_queue *p,
irq_handler_t handler)
static struct kmem_cache *queue_cache[2];
static void *new_queue(unsigned long q_type)
static void free_queue(void *p, unsigned long q_type)
static int queue_cache_init(void)
static void queue_cache_destroy(void)
static int spu_queue_register(struct spu_queue *p, unsigned long q_type)
static int spu_queue_setup(struct spu_queue *p)
static void spu_queue_destroy(struct spu_queue *p)
static void spu_list_destroy(struct list_head *list)
static int spu_mdesc_walk_arcs(struct mdesc_handle *mdesc,
struct platform_device *dev,
u64 node, struct spu_queue *p,
struct spu_queue **table)
static int handle_exec_unit(struct spu_mdesc_info *ip, struct list_head *list,
struct platform_device *dev, struct mdesc_handle *mdesc,
u64 node, const char *iname, unsigned long q_type,
irq_handler_t handler, struct spu_queue **table)
static int spu_mdesc_scan(struct mdesc_handle *mdesc, struct platform_device *dev,
struct spu_mdesc_info *ip, struct list_head *list,
const char *exec_name, unsigned long q_type,
irq_handler_t handler, struct spu_queue **table)
static int __devinit get_irq_props(struct mdesc_handle *mdesc, u64 node,
struct spu_mdesc_info *ip)
static int __devinit grab_mdesc_irq_props(struct mdesc_handle *mdesc,
struct platform_device *dev,
struct spu_mdesc_info *ip,
const char *node_name)
static unsigned long n2_spu_hvapi_major;
static unsigned long n2_spu_hvapi_minor;
static int __devinit n2_spu_hvapi_register(void)
static void n2_spu_hvapi_unregister(void)
static int global_ref;
static int __devinit grab_global_resources(void)
static void release_global_resources(void)
static struct n2_crypto * __devinit alloc_n2cp(void)
static void free_n2cp(struct n2_crypto *np)
static void __devinit n2_spu_driver_version(void)
static int __devinit n2_crypto_probe(struct platform_device *dev)
static int __devexit n2_crypto_remove(struct platform_device *dev)
static struct n2_mau * __devinit alloc_ncp(void)
static void free_ncp(struct n2_mau *mp)
static int __devinit n2_mau_probe(struct platform_device *dev)
static int __devexit n2_mau_remove(struct platform_device *dev)
static struct of_device_id n2_crypto_match[] = ;
MODULE_DEVICE_TABLE(of, n2_crypto_match);
static struct platform_driver n2_crypto_driver = ;
static struct of_device_id n2_mau_match[] = ;
MODULE_DEVICE_TABLE(of, n2_mau_match);
static struct platform_driver n2_mau_driver = ;
static int __init n2_init(void)
static void __exit n2_exit(void)
module_init(n2_init);
module_exit(n2_exit);
