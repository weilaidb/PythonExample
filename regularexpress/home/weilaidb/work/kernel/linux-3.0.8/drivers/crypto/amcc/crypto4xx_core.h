#define __CRYPTO4XX_CORE_H__
#define PPC460SX_SDR0_SRST                      0x201
#define PPC405EX_SDR0_SRST                      0x200
#define PPC460EX_SDR0_SRST                      0x201
#define PPC460EX_CE_RESET                       0x08000000
#define PPC460SX_CE_RESET                       0x20000000
#define PPC405EX_CE_RESET                       0x00000008
#define CRYPTO4XX_CRYPTO_PRIORITY		300
#define PPC4XX_LAST_PD				63
#define PPC4XX_NUM_PD				64
#define PPC4XX_LAST_GD				1023
#define PPC4XX_NUM_GD				1024
#define PPC4XX_LAST_SD				63
#define PPC4XX_NUM_SD				64
#define PPC4XX_SD_BUFFER_SIZE			2048
#define PD_ENTRY_INUSE				1
#define PD_ENTRY_FREE				0
#define ERING_WAS_FULL				0xffffffff
struct crypto4xx_device;
struct pd_uinfo ;
struct crypto4xx_device ;
struct crypto4xx_core_device ;
struct crypto4xx_ctx ;
struct crypto4xx_req_ctx ;
struct crypto4xx_alg_common ;
struct crypto4xx_alg ;
static inline struct crypto4xx_alg *crypto_alg_to_crypto4xx_alg(
struct crypto_alg *x)
extern int crypto4xx_alloc_sa(struct crypto4xx_ctx *ctx, u32 size);
extern void crypto4xx_free_sa(struct crypto4xx_ctx *ctx);
extern u32 crypto4xx_alloc_sa_rctx(struct crypto4xx_ctx *ctx,
struct crypto4xx_ctx *rctx);
extern void crypto4xx_free_sa_rctx(struct crypto4xx_ctx *rctx);
extern void crypto4xx_free_ctx(struct crypto4xx_ctx *ctx);
extern u32 crypto4xx_alloc_state_record(struct crypto4xx_ctx *ctx);
extern u32 get_dynamic_sa_offset_state_ptr_field(struct crypto4xx_ctx *ctx);
extern u32 get_dynamic_sa_offset_key_field(struct crypto4xx_ctx *ctx);
extern u32 get_dynamic_sa_iv_size(struct crypto4xx_ctx *ctx);
extern void crypto4xx_memcpy_le(unsigned int *dst,
const unsigned char *buf, int len);
extern u32 crypto4xx_build_pd(struct crypto_async_request *req,
struct crypto4xx_ctx *ctx,
struct scatterlist *src,
struct scatterlist *dst,
unsigned int datalen,
void *iv, u32 iv_len);
extern int crypto4xx_setkey_aes_cbc(struct crypto_ablkcipher *cipher,
const u8 *key, unsigned int keylen);
extern int crypto4xx_encrypt(struct ablkcipher_request *req);
extern int crypto4xx_decrypt(struct ablkcipher_request *req);
extern int crypto4xx_sha1_alg_init(struct crypto_tfm *tfm);
extern int crypto4xx_hash_digest(struct ahash_request *req);
extern int crypto4xx_hash_final(struct ahash_request *req);
extern int crypto4xx_hash_update(struct ahash_request *req);
extern int crypto4xx_hash_init(struct ahash_request *req);
