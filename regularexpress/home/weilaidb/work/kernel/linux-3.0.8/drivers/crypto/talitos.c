#define TALITOS_TIMEOUT 100000
#define TALITOS_MAX_DATA_LEN 65535
#define DESC_TYPE(desc_hdr) ((be32_to_cpu(desc_hdr) >> 3) & 0x1f)
#define PRIMARY_EU(desc_hdr) ((be32_to_cpu(desc_hdr) >> 28) & 0xf)
#define SECONDARY_EU(desc_hdr) ((be32_to_cpu(desc_hdr) >> 16) & 0xf)
struct talitos_ptr ;
static const struct talitos_ptr zero_entry = ;
struct talitos_desc ;
struct talitos_request ;
struct talitos_channel ;
struct talitos_private ;
#define TALITOS_FTR_SRC_LINK_TBL_LEN_INCLUDES_EXTENT 0x00000001
#define TALITOS_FTR_HW_AUTH_CHECK 0x00000002
#define TALITOS_FTR_SHA224_HWINIT 0x00000004
static void to_talitos_ptr(struct talitos_ptr *talitos_ptr, dma_addr_t dma_addr)
static void map_single_talitos_ptr(struct device *dev,
struct talitos_ptr *talitos_ptr,
unsigned short len, void *data,
unsigned char extent,
enum dma_data_direction dir)
static void unmap_single_talitos_ptr(struct device *dev,
struct talitos_ptr *talitos_ptr,
enum dma_data_direction dir)
static int reset_channel(struct device *dev, int ch)
static int reset_device(struct device *dev)
static int init_device(struct device *dev)
static int talitos_submit(struct device *dev, struct talitos_desc *desc,
void (*callback)(struct device *dev,
struct talitos_desc *desc,
void *context, int error),
void *context)
static void flush_channel(struct device *dev, int ch, int error, int reset_ch)
static void talitos_done(unsigned long data)
static struct talitos_desc *current_desc(struct device *dev, int ch)
static void report_eu_error(struct device *dev, int ch,
struct talitos_desc *desc)
static void talitos_error(unsigned long data, u32 isr, u32 isr_lo)
static irqreturn_t talitos_interrupt(int irq, void *data)
static int talitos_rng_data_present(struct hwrng *rng, int wait)
static int talitos_rng_data_read(struct hwrng *rng, u32 *data)
static int talitos_rng_init(struct hwrng *rng)
static int talitos_register_rng(struct device *dev)
static void talitos_unregister_rng(struct device *dev)
#define TALITOS_CRA_PRIORITY		3000
#define TALITOS_MAX_KEY_SIZE		64
#define TALITOS_MAX_IV_LENGTH		16
#define MD5_BLOCK_SIZE    64
struct talitos_ctx ;
#define HASH_MAX_BLOCK_SIZE		SHA512_BLOCK_SIZE
#define TALITOS_MDEU_MAX_CONTEXT_SIZE	TALITOS_MDEU_CONTEXT_SIZE_SHA384_SHA512
struct talitos_ahash_req_ctx ;
static int aead_setauthsize(struct crypto_aead *authenc,
unsigned int authsize)
static int aead_setkey(struct crypto_aead *authenc,
const u8 *key, unsigned int keylen)
struct talitos_edesc ;
static int talitos_map_sg(struct device *dev, struct scatterlist *sg,
unsigned int nents, enum dma_data_direction dir,
int chained)
static void talitos_unmap_sg_chain(struct device *dev, struct scatterlist *sg,
enum dma_data_direction dir)
static void talitos_sg_unmap(struct device *dev,
struct talitos_edesc *edesc,
struct scatterlist *src,
struct scatterlist *dst)
static void ipsec_esp_unmap(struct device *dev,
struct talitos_edesc *edesc,
struct aead_request *areq)
static void ipsec_esp_encrypt_done(struct device *dev,
struct talitos_desc *desc, void *context,
int err)
static void ipsec_esp_decrypt_swauth_done(struct device *dev,
struct talitos_desc *desc,
void *context, int err)
static void ipsec_esp_decrypt_hwauth_done(struct device *dev,
struct talitos_desc *desc,
void *context, int err)
static int sg_to_link_tbl(struct scatterlist *sg, int sg_count,
int cryptlen, struct talitos_ptr *link_tbl_ptr)
static int ipsec_esp(struct talitos_edesc *edesc, struct aead_request *areq,
u8 *giv, u64 seq,
void (*callback) (struct device *dev,
struct talitos_desc *desc,
void *context, int error))
static int sg_count(struct scatterlist *sg_list, int nbytes, int *chained)
static size_t sg_copy_end_to_buffer(struct scatterlist *sgl, unsigned int nents,
void *buf, size_t buflen, unsigned int skip)
static struct talitos_edesc *talitos_edesc_alloc(struct device *dev,
struct scatterlist *src,
struct scatterlist *dst,
int hash_result,
unsigned int cryptlen,
unsigned int authsize,
int icv_stashing,
u32 cryptoflags)
static struct talitos_edesc *aead_edesc_alloc(struct aead_request *areq,
int icv_stashing)
static int aead_encrypt(struct aead_request *req)
static int aead_decrypt(struct aead_request *req)
static int aead_givencrypt(struct aead_givcrypt_request *req)
static int ablkcipher_setkey(struct crypto_ablkcipher *cipher,
const u8 *key, unsigned int keylen)
static void common_nonsnoop_unmap(struct device *dev,
struct talitos_edesc *edesc,
struct ablkcipher_request *areq)
static void ablkcipher_done(struct device *dev,
struct talitos_desc *desc, void *context,
int err)
static int common_nonsnoop(struct talitos_edesc *edesc,
struct ablkcipher_request *areq,
u8 *giv,
void (*callback) (struct device *dev,
struct talitos_desc *desc,
void *context, int error))
static struct talitos_edesc *ablkcipher_edesc_alloc(struct ablkcipher_request *
areq)
static int ablkcipher_encrypt(struct ablkcipher_request *areq)
static int ablkcipher_decrypt(struct ablkcipher_request *areq)
static void common_nonsnoop_hash_unmap(struct device *dev,
struct talitos_edesc *edesc,
struct ahash_request *areq)
static void ahash_done(struct device *dev,
struct talitos_desc *desc, void *context,
int err)
static int common_nonsnoop_hash(struct talitos_edesc *edesc,
struct ahash_request *areq, unsigned int length,
void (*callback) (struct device *dev,
struct talitos_desc *desc,
void *context, int error))
static struct talitos_edesc *ahash_edesc_alloc(struct ahash_request *areq,
unsigned int nbytes)
static int ahash_init(struct ahash_request *areq)
static int ahash_init_sha224_swinit(struct ahash_request *areq)
static int ahash_process_req(struct ahash_request *areq, unsigned int nbytes)
static int ahash_update(struct ahash_request *areq)
static int ahash_final(struct ahash_request *areq)
static int ahash_finup(struct ahash_request *areq)
static int ahash_digest(struct ahash_request *areq)
struct talitos_alg_template ;
static struct talitos_alg_template driver_algs[] = ;
struct talitos_crypto_alg ;
static int talitos_cra_init(struct crypto_tfm *tfm)
static int talitos_cra_init_aead(struct crypto_tfm *tfm)
static int talitos_cra_init_ahash(struct crypto_tfm *tfm)
static int hw_supports(struct device *dev, __be32 desc_hdr_template)
static int talitos_remove(struct platform_device *ofdev)
static struct talitos_crypto_alg *talitos_alg_alloc(struct device *dev,
struct talitos_alg_template
*template)
static int talitos_probe(struct platform_device *ofdev)
static const struct of_device_id talitos_match[] = ;
MODULE_DEVICE_TABLE(of, talitos_match);
static struct platform_driver talitos_driver = ;
static int __init talitos_init(void)
module_init(talitos_init);
static void __exit talitos_exit(void)
module_exit(talitos_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Kim Phillips <kim.phillips@freescale.com>");
MODULE_DESCRIPTION("Freescale integrated security engine (SEC) driver");
