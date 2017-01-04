#define PPC4XX_SEC_VERSION_STR			"0.5"
static void crypto4xx_hw_init(struct crypto4xx_device *dev)
int crypto4xx_alloc_sa(struct crypto4xx_ctx *ctx, u32 size)
void crypto4xx_free_sa(struct crypto4xx_ctx *ctx)
u32 crypto4xx_alloc_state_record(struct crypto4xx_ctx *ctx)
void crypto4xx_free_state_record(struct crypto4xx_ctx *ctx)
static u32 crypto4xx_build_pdr(struct crypto4xx_device *dev)
static void crypto4xx_destroy_pdr(struct crypto4xx_device *dev)
static u32 crypto4xx_get_pd_from_pdr_nolock(struct crypto4xx_device *dev)
static u32 crypto4xx_put_pd_to_pdr(struct crypto4xx_device *dev, u32 idx)
static struct ce_pd *crypto4xx_get_pdp(struct crypto4xx_device *dev,
dma_addr_t *pd_dma, u32 idx)
static u32 crypto4xx_build_gdr(struct crypto4xx_device *dev)
static inline void crypto4xx_destroy_gdr(struct crypto4xx_device *dev)
u32 crypto4xx_get_n_gd(struct crypto4xx_device *dev, int n)
static u32 crypto4xx_put_gd_to_gdr(struct crypto4xx_device *dev)
static inline struct ce_gd *crypto4xx_get_gdp(struct crypto4xx_device *dev,
dma_addr_t *gd_dma, u32 idx)
static u32 crypto4xx_build_sdr(struct crypto4xx_device *dev)
static void crypto4xx_destroy_sdr(struct crypto4xx_device *dev)
static u32 crypto4xx_get_n_sd(struct crypto4xx_device *dev, int n)
static u32 crypto4xx_put_sd_to_sdr(struct crypto4xx_device *dev)
static inline struct ce_sd *crypto4xx_get_sdp(struct crypto4xx_device *dev,
dma_addr_t *sd_dma, u32 idx)
static u32 crypto4xx_fill_one_page(struct crypto4xx_device *dev,
dma_addr_t *addr, u32 *length,
u32 *idx, u32 *offset, u32 *nbytes)
static void crypto4xx_copy_pkt_to_dst(struct crypto4xx_device *dev,
struct ce_pd *pd,
struct pd_uinfo *pd_uinfo,
u32 nbytes,
struct scatterlist *dst)
static u32 crypto4xx_copy_digest_to_dst(struct pd_uinfo *pd_uinfo,
struct crypto4xx_ctx *ctx)
static void crypto4xx_ret_sg_desc(struct crypto4xx_device *dev,
struct pd_uinfo *pd_uinfo)
static u32 crypto4xx_ablkcipher_done(struct crypto4xx_device *dev,
struct pd_uinfo *pd_uinfo,
struct ce_pd *pd)
static u32 crypto4xx_ahash_done(struct crypto4xx_device *dev,
struct pd_uinfo *pd_uinfo)
static u32 crypto4xx_pd_done(struct crypto4xx_device *dev, u32 idx)
void crypto4xx_memcpy_le(unsigned int *dst,
const unsigned char *buf,
int len)
static void crypto4xx_stop_all(struct crypto4xx_core_device *core_dev)
void crypto4xx_return_pd(struct crypto4xx_device *dev,
u32 pd_entry, struct ce_pd *pd,
struct pd_uinfo *pd_uinfo)
static int get_sg_count(struct scatterlist *sg_list, int nbytes)
static u32 get_next_gd(u32 current)
static u32 get_next_sd(u32 current)
u32 crypto4xx_build_pd(struct crypto_async_request *req,
struct crypto4xx_ctx *ctx,
struct scatterlist *src,
struct scatterlist *dst,
unsigned int datalen,
void *iv, u32 iv_len)
static int crypto4xx_alg_init(struct crypto_tfm *tfm)
static void crypto4xx_alg_exit(struct crypto_tfm *tfm)
int crypto4xx_register_alg(struct crypto4xx_device *sec_dev,
struct crypto4xx_alg_common *crypto_alg,
int array_size)
static void crypto4xx_unregister_alg(struct crypto4xx_device *sec_dev)
static void crypto4xx_bh_tasklet_cb(unsigned long data)
static irqreturn_t crypto4xx_ce_interrupt_handler(int irq, void *data)
struct crypto4xx_alg_common crypto4xx_alg[] = ;
static int __init crypto4xx_probe(struct platform_device *ofdev)
static int __exit crypto4xx_remove(struct platform_device *ofdev)
static const struct of_device_id crypto4xx_match[] = ;
static struct platform_driver crypto4xx_driver = ;
static int __init crypto4xx_init(void)
static void __exit crypto4xx_exit(void)
module_init(crypto4xx_init);
module_exit(crypto4xx_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("James Hsiao <jhsiao@amcc.com>");
MODULE_DESCRIPTION("Driver for AMCC PPC4xx crypto accelerator");
