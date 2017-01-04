#define CAAM_CRA_PRIORITY		3000
#define CAAM_MAX_KEY_SIZE		(AES_MAX_KEY_SIZE + \
SHA512_DIGEST_SIZE * 2)
#define CAAM_MAX_IV_LENGTH		16
#define DESC_AEAD_SHARED_TEXT_LEN	4
#define DESC_AEAD_ENCRYPT_TEXT_LEN 	21
#define DESC_AEAD_DECRYPT_TEXT_LEN 	24
#define DESC_AEAD_GIVENCRYPT_TEXT_LEN 	27
#define xstr(s) str(s)
#define str(s) #s
#define debug(format, arg...) printk(format, arg)
#define debug(format, arg...)
struct caam_ctx ;
static int aead_authenc_setauthsize(struct crypto_aead *authenc,
unsigned int authsize)
struct split_key_result ;
static void split_key_done(struct device *dev, u32 *desc, u32 err,
void *context)
static u32 gen_split_key(struct caam_ctx *ctx, const u8 *key_in, u32 authkeylen)
static int build_sh_desc_ipsec(struct caam_ctx *ctx)
static int aead_authenc_setkey(struct crypto_aead *aead,
const u8 *key, unsigned int keylen)
struct link_tbl_entry ;
struct ipsec_esp_edesc ;
static void ipsec_esp_unmap(struct device *dev,
struct ipsec_esp_edesc *edesc,
struct aead_request *areq)
static void ipsec_esp_encrypt_done(struct device *jrdev, u32 *desc, u32 err,
void *context)
static void ipsec_esp_decrypt_done(struct device *jrdev, u32 *desc, u32 err,
void *context)
static void sg_to_link_tbl(struct scatterlist *sg, int sg_count,
struct link_tbl_entry *link_tbl_ptr, u32 offset)
static int ipsec_esp(struct ipsec_esp_edesc *edesc, struct aead_request *areq,
u32 encrypt,
void (*callback) (struct device *dev, u32 *desc,
u32 err, void *context))
static int sg_count(struct scatterlist *sg_list, int nbytes, int *chained)
static struct ipsec_esp_edesc *ipsec_esp_edesc_alloc(struct aead_request *areq,
int desc_bytes)
static int aead_authenc_encrypt(struct aead_request *areq)
static int aead_authenc_decrypt(struct aead_request *req)
static int aead_authenc_givencrypt(struct aead_givcrypt_request *req)
struct caam_alg_template ;
static struct caam_alg_template driver_algs[] = ;
struct caam_crypto_alg ;
static int caam_cra_init(struct crypto_tfm *tfm)
static void caam_cra_exit(struct crypto_tfm *tfm)
static void __exit caam_algapi_exit(void)
static struct caam_crypto_alg *caam_alg_alloc(struct device *ctrldev,
struct caam_alg_template
*template)
static int __init caam_algapi_init(void)
module_init(caam_algapi_init);
module_exit(caam_algapi_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("FSL CAAM support for crypto API");
MODULE_AUTHOR("Freescale Semiconductor - NMG/STC");
