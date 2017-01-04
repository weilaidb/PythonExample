#define pr_fmt(fmt) "%s: " fmt, __func__
#define SHA_REG_DIGEST(x)		(0x00 + ((x) * 0x04))
#define SHA_REG_DIN(x)			(0x1C + ((x) * 0x04))
#define SHA1_MD5_BLOCK_SIZE		SHA1_BLOCK_SIZE
#define MD5_DIGEST_SIZE			16
#define SHA_REG_DIGCNT			0x14
#define SHA_REG_CTRL			0x18
#define SHA_REG_CTRL_LENGTH		(0xFFFFFFFF << 5)
#define SHA_REG_CTRL_CLOSE_HASH		(1 << 4)
#define SHA_REG_CTRL_ALGO_CONST		(1 << 3)
#define SHA_REG_CTRL_ALGO		(1 << 2)
#define SHA_REG_CTRL_INPUT_READY	(1 << 1)
#define SHA_REG_CTRL_OUTPUT_READY	(1 << 0)
#define SHA_REG_REV			0x5C
#define SHA_REG_REV_MAJOR		0xF0
#define SHA_REG_REV_MINOR		0x0F
#define SHA_REG_MASK			0x60
#define SHA_REG_MASK_DMA_EN		(1 << 3)
#define SHA_REG_MASK_IT_EN		(1 << 2)
#define SHA_REG_MASK_SOFTRESET		(1 << 1)
#define SHA_REG_AUTOIDLE		(1 << 0)
#define SHA_REG_SYSSTATUS		0x64
#define SHA_REG_SYSSTATUS_RESETDONE	(1 << 0)
#define DEFAULT_TIMEOUT_INTERVAL	HZ
#define FLAGS_FINUP		0x0002
#define FLAGS_FINAL		0x0004
#define FLAGS_SG		0x0008
#define FLAGS_SHA1		0x0010
#define FLAGS_DMA_ACTIVE	0x0020
#define FLAGS_OUTPUT_READY	0x0040
#define FLAGS_INIT		0x0100
#define FLAGS_CPU		0x0200
#define FLAGS_HMAC		0x0400
#define FLAGS_ERROR		0x0800
#define FLAGS_BUSY		0x1000
#define OP_UPDATE	1
#define OP_FINAL	2
#define OMAP_ALIGN_MASK		(sizeof(u32)-1)
#define OMAP_ALIGNED		__attribute__((aligned(sizeof(u32))))
#define BUFLEN		PAGE_SIZE
struct omap_sham_dev;
struct omap_sham_reqctx ;
struct omap_sham_hmac_ctx ;
struct omap_sham_ctx ;
#define OMAP_SHAM_QUEUE_LENGTH	1
struct omap_sham_dev ;
struct omap_sham_drv ;
static struct omap_sham_drv sham = ;
static inline u32 omap_sham_read(struct omap_sham_dev *dd, u32 offset)
static inline void omap_sham_write(struct omap_sham_dev *dd,
u32 offset, u32 value)
static inline void omap_sham_write_mask(struct omap_sham_dev *dd, u32 address,
u32 value, u32 mask)
static inline int omap_sham_wait(struct omap_sham_dev *dd, u32 offset, u32 bit)
static void omap_sham_copy_hash(struct ahash_request *req, int out)
static void omap_sham_copy_ready_hash(struct ahash_request *req)
static int omap_sham_hw_init(struct omap_sham_dev *dd)
static void omap_sham_write_ctrl(struct omap_sham_dev *dd, size_t length,
int final, int dma)
static int omap_sham_xmit_cpu(struct omap_sham_dev *dd, const u8 *buf,
size_t length, int final)
static int omap_sham_xmit_dma(struct omap_sham_dev *dd, dma_addr_t dma_addr,
size_t length, int final)
static size_t omap_sham_append_buffer(struct omap_sham_reqctx *ctx,
const u8 *data, size_t length)
static size_t omap_sham_append_sg(struct omap_sham_reqctx *ctx)
static int omap_sham_xmit_dma_map(struct omap_sham_dev *dd,
struct omap_sham_reqctx *ctx,
size_t length, int final)
static int omap_sham_update_dma_slow(struct omap_sham_dev *dd)
#define SG_AA(sg)	(IS_ALIGNED(sg->offset, sizeof(u32)))
#define SG_SA(sg)	(IS_ALIGNED(sg->length, SHA1_MD5_BLOCK_SIZE))
static int omap_sham_update_dma_start(struct omap_sham_dev *dd)
static int omap_sham_update_cpu(struct omap_sham_dev *dd)
static int omap_sham_update_dma_stop(struct omap_sham_dev *dd)
static int omap_sham_init(struct ahash_request *req)
static int omap_sham_update_req(struct omap_sham_dev *dd)
static int omap_sham_final_req(struct omap_sham_dev *dd)
static int omap_sham_finish_hmac(struct ahash_request *req)
static int omap_sham_finish(struct ahash_request *req)
static void omap_sham_finish_req(struct ahash_request *req, int err)
static int omap_sham_handle_queue(struct omap_sham_dev *dd,
struct ahash_request *req)
static int omap_sham_enqueue(struct ahash_request *req, unsigned int op)
static int omap_sham_update(struct ahash_request *req)
static int omap_sham_shash_digest(struct crypto_shash *shash, u32 flags,
const u8 *data, unsigned int len, u8 *out)
static int omap_sham_final_shash(struct ahash_request *req)
static int omap_sham_final(struct ahash_request *req)
static int omap_sham_finup(struct ahash_request *req)
static int omap_sham_digest(struct ahash_request *req)
static int omap_sham_setkey(struct crypto_ahash *tfm, const u8 *key,
unsigned int keylen)
static int omap_sham_cra_init_alg(struct crypto_tfm *tfm, const char *alg_base)
static int omap_sham_cra_init(struct crypto_tfm *tfm)
static int omap_sham_cra_sha1_init(struct crypto_tfm *tfm)
static int omap_sham_cra_md5_init(struct crypto_tfm *tfm)
static void omap_sham_cra_exit(struct crypto_tfm *tfm)
static struct ahash_alg algs[] = ;
static void omap_sham_done_task(unsigned long data)
static void omap_sham_queue_task(unsigned long data)
static irqreturn_t omap_sham_irq(int irq, void *dev_id)
static void omap_sham_dma_callback(int lch, u16 ch_status, void *data)
static int omap_sham_dma_init(struct omap_sham_dev *dd)
static void omap_sham_dma_cleanup(struct omap_sham_dev *dd)
static int __devinit omap_sham_probe(struct platform_device *pdev)
static int __devexit omap_sham_remove(struct platform_device *pdev)
static struct platform_driver omap_sham_driver = ;
static int __init omap_sham_mod_init(void)
static void __exit omap_sham_mod_exit(void)
module_init(omap_sham_mod_init);
module_exit(omap_sham_mod_exit);
MODULE_DESCRIPTION("OMAP SHA1/MD5 hw acceleration support.");
MODULE_LICENSE("GPL v2");
MODULE_AUTHOR("Dmitry Kasatkin");
