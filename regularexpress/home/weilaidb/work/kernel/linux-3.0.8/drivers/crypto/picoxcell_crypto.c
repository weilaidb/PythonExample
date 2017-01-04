#define CMD0_IRQ_THRESHOLD   1
#define PACKET_TIMEOUT	    1
#define SPACC_CRYPTO_ALG_PRIORITY	10000
#define SPACC_CRYPTO_KASUMI_F8_KEY_LEN	16
#define SPACC_CRYPTO_IPSEC_CIPHER_PG_SZ 64
#define SPACC_CRYPTO_IPSEC_HASH_PG_SZ	64
#define SPACC_CRYPTO_IPSEC_MAX_CTXS	32
#define SPACC_CRYPTO_IPSEC_FIFO_SZ	32
#define SPACC_CRYPTO_L2_CIPHER_PG_SZ	64
#define SPACC_CRYPTO_L2_HASH_PG_SZ	64
#define SPACC_CRYPTO_L2_MAX_CTXS	128
#define SPACC_CRYPTO_L2_FIFO_SZ		128
#define MAX_DDT_LEN			16
struct spacc_ddt ;
struct spacc_req ;
struct spacc_engine ;
#define SPACC_CRYPTO_ALG_MASK		0x7
struct spacc_alg ;
struct spacc_generic_ctx ;
struct spacc_ablk_ctx ;
struct spacc_aead_ctx ;
static int spacc_ablk_submit(struct spacc_req *req);
static inline struct spacc_alg *to_spacc_alg(struct crypto_alg *alg)
static inline int spacc_fifo_cmd_full(struct spacc_engine *engine)
static inline void __iomem *spacc_ctx_page_addr(struct spacc_generic_ctx *ctx,
unsigned indx,
bool is_cipher_ctx)
static inline void memcpy_toio32(u32 __iomem *dst, const void *src,
unsigned count)
static void spacc_cipher_write_ctx(struct spacc_generic_ctx *ctx,
void __iomem *page_addr, const u8 *key,
size_t key_len, const u8 *iv, size_t iv_len)
static unsigned spacc_load_ctx(struct spacc_generic_ctx *ctx,
const u8 *ciph_key, size_t ciph_len,
const u8 *iv, size_t ivlen, const u8 *hash_key,
size_t hash_len)
static int sg_count(struct scatterlist *sg_list, int nbytes)
static inline void ddt_set(struct spacc_ddt *ddt, dma_addr_t phys, size_t len)
static struct spacc_ddt *spacc_sg_to_ddt(struct spacc_engine *engine,
struct scatterlist *payload,
unsigned nbytes,
enum dma_data_direction dir,
dma_addr_t *ddt_phys)
static int spacc_aead_make_ddts(struct spacc_req *req, u8 *giv)
static void spacc_aead_free_ddts(struct spacc_req *req)
static void spacc_free_ddt(struct spacc_req *req, struct spacc_ddt *ddt,
dma_addr_t ddt_addr, struct scatterlist *payload,
unsigned nbytes, enum dma_data_direction dir)
static int spacc_aead_des_setkey(struct crypto_aead *aead, const u8 *key,
unsigned int len)
static int spacc_aead_aes_setkey(struct crypto_aead *aead, const u8 *key,
unsigned int len)
static int spacc_aead_setkey(struct crypto_aead *tfm, const u8 *key,
unsigned int keylen)
static int spacc_aead_setauthsize(struct crypto_aead *tfm,
unsigned int authsize)
static int spacc_aead_need_fallback(struct spacc_req *req)
static int spacc_aead_do_fallback(struct aead_request *req, unsigned alg_type,
bool is_encrypt)
static void spacc_aead_complete(struct spacc_req *req)
static int spacc_aead_submit(struct spacc_req *req)
static int spacc_req_submit(struct spacc_req *req);
static void spacc_push(struct spacc_engine *engine)
static int spacc_aead_setup(struct aead_request *req, u8 *giv,
unsigned alg_type, bool is_encrypt)
static int spacc_aead_encrypt(struct aead_request *req)
static int spacc_aead_givencrypt(struct aead_givcrypt_request *req)
static int spacc_aead_decrypt(struct aead_request *req)
static int spacc_aead_cra_init(struct crypto_tfm *tfm)
static void spacc_aead_cra_exit(struct crypto_tfm *tfm)
static int spacc_des_setkey(struct crypto_ablkcipher *cipher, const u8 *key,
unsigned int len)
static int spacc_aes_setkey(struct crypto_ablkcipher *cipher, const u8 *key,
unsigned int len)
static int spacc_kasumi_f8_setkey(struct crypto_ablkcipher *cipher,
const u8 *key, unsigned int len)
static int spacc_ablk_need_fallback(struct spacc_req *req)
static void spacc_ablk_complete(struct spacc_req *req)
static int spacc_ablk_submit(struct spacc_req *req)
static int spacc_ablk_do_fallback(struct ablkcipher_request *req,
unsigned alg_type, bool is_encrypt)
static int spacc_ablk_setup(struct ablkcipher_request *req, unsigned alg_type,
bool is_encrypt)
static int spacc_ablk_cra_init(struct crypto_tfm *tfm)
static void spacc_ablk_cra_exit(struct crypto_tfm *tfm)
static int spacc_ablk_encrypt(struct ablkcipher_request *req)
static int spacc_ablk_decrypt(struct ablkcipher_request *req)
static inline int spacc_fifo_stat_empty(struct spacc_engine *engine)
static void spacc_process_done(struct spacc_engine *engine)
static irqreturn_t spacc_spacc_irq(int irq, void *dev)
static void spacc_packet_timeout(unsigned long data)
static int spacc_req_submit(struct spacc_req *req)
static void spacc_spacc_complete(unsigned long data)
static int spacc_suspend(struct device *dev)
static int spacc_resume(struct device *dev)
static const struct dev_pm_ops spacc_pm_ops = ;
static inline struct spacc_engine *spacc_dev_to_engine(struct device *dev)
static ssize_t spacc_stat_irq_thresh_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t spacc_stat_irq_thresh_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t len)
static DEVICE_ATTR(stat_irq_thresh, 0644, spacc_stat_irq_thresh_show,
spacc_stat_irq_thresh_store);
static struct spacc_alg ipsec_engine_algs[] = ;
static struct spacc_alg l2_engine_algs[] = ;
static int __devinit spacc_probe(struct platform_device *pdev,
unsigned max_ctxs, size_t cipher_pg_sz,
size_t hash_pg_sz, size_t fifo_sz,
struct spacc_alg *algs, size_t num_algs)
static int __devexit spacc_remove(struct platform_device *pdev)
static int __devinit ipsec_probe(struct platform_device *pdev)
static struct platform_driver ipsec_driver = ;
static int __devinit l2_probe(struct platform_device *pdev)
static struct platform_driver l2_driver = ;
static int __init spacc_init(void)
module_init(spacc_init);
static void __exit spacc_exit(void)
module_exit(spacc_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Jamie Iles");
