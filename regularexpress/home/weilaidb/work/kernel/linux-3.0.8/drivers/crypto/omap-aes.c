#define pr_fmt(fmt) "%s: " fmt, __func__
#define FLD_MASK(start, end)	(((1 << ((start) - (end) + 1)) - 1) << (end))
#define FLD_VAL(val, start, end) (((val) << (end)) & FLD_MASK(start, end))
#define AES_REG_KEY(x)			(0x1C - ((x ^ 0x01) * 0x04))
#define AES_REG_IV(x)			(0x20 + ((x) * 0x04))
#define AES_REG_CTRL			0x30
#define AES_REG_CTRL_CTR_WIDTH		(1 << 7)
#define AES_REG_CTRL_CTR		(1 << 6)
#define AES_REG_CTRL_CBC		(1 << 5)
#define AES_REG_CTRL_KEY_SIZE		(3 << 3)
#define AES_REG_CTRL_DIRECTION		(1 << 2)
#define AES_REG_CTRL_INPUT_READY	(1 << 1)
#define AES_REG_CTRL_OUTPUT_READY	(1 << 0)
#define AES_REG_DATA			0x34
#define AES_REG_DATA_N(x)		(0x34 + ((x) * 0x04))
#define AES_REG_REV			0x44
#define AES_REG_REV_MAJOR		0xF0
#define AES_REG_REV_MINOR		0x0F
#define AES_REG_MASK			0x48
#define AES_REG_MASK_SIDLE		(1 << 6)
#define AES_REG_MASK_START		(1 << 5)
#define AES_REG_MASK_DMA_OUT_EN		(1 << 3)
#define AES_REG_MASK_DMA_IN_EN		(1 << 2)
#define AES_REG_MASK_SOFTRESET		(1 << 1)
#define AES_REG_AUTOIDLE		(1 << 0)
#define AES_REG_SYSSTATUS		0x4C
#define AES_REG_SYSSTATUS_RESETDONE	(1 << 0)
#define DEFAULT_TIMEOUT		(5*HZ)
#define FLAGS_MODE_MASK		0x000f
#define FLAGS_ENCRYPT		BIT(0)
#define FLAGS_CBC		BIT(1)
#define FLAGS_GIV		BIT(2)
#define FLAGS_INIT		BIT(4)
#define FLAGS_FAST		BIT(5)
#define FLAGS_BUSY		BIT(6)
struct omap_aes_ctx ;
struct omap_aes_reqctx ;
#define OMAP_AES_QUEUE_LENGTH	1
#define OMAP_AES_CACHE_SIZE	0
struct omap_aes_dev ;
static LIST_HEAD(dev_list);
static DEFINE_SPINLOCK(list_lock);
static inline u32 omap_aes_read(struct omap_aes_dev *dd, u32 offset)
static inline void omap_aes_write(struct omap_aes_dev *dd, u32 offset,
u32 value)
static inline void omap_aes_write_mask(struct omap_aes_dev *dd, u32 offset,
u32 value, u32 mask)
static void omap_aes_write_n(struct omap_aes_dev *dd, u32 offset,
u32 *value, int count)
static int omap_aes_wait(struct omap_aes_dev *dd, u32 offset, u32 bit)
static int omap_aes_hw_init(struct omap_aes_dev *dd)
static int omap_aes_write_ctrl(struct omap_aes_dev *dd)
static struct omap_aes_dev *omap_aes_find_dev(struct omap_aes_ctx *ctx)
static void omap_aes_dma_callback(int lch, u16 ch_status, void *data)
static int omap_aes_dma_init(struct omap_aes_dev *dd)
static void omap_aes_dma_cleanup(struct omap_aes_dev *dd)
static void sg_copy_buf(void *buf, struct scatterlist *sg,
unsigned int start, unsigned int nbytes, int out)
static int sg_copy(struct scatterlist **sg, size_t *offset, void *buf,
size_t buflen, size_t total, int out)
static int omap_aes_crypt_dma(struct crypto_tfm *tfm, dma_addr_t dma_addr_in,
dma_addr_t dma_addr_out, int length)
static int omap_aes_crypt_dma_start(struct omap_aes_dev *dd)
static void omap_aes_finish_req(struct omap_aes_dev *dd, int err)
static int omap_aes_crypt_dma_stop(struct omap_aes_dev *dd)
static int omap_aes_handle_queue(struct omap_aes_dev *dd,
struct ablkcipher_request *req)
static void omap_aes_done_task(unsigned long data)
static void omap_aes_queue_task(unsigned long data)
static int omap_aes_crypt(struct ablkcipher_request *req, unsigned long mode)
static int omap_aes_setkey(struct crypto_ablkcipher *tfm, const u8 *key,
unsigned int keylen)
static int omap_aes_ecb_encrypt(struct ablkcipher_request *req)
static int omap_aes_ecb_decrypt(struct ablkcipher_request *req)
static int omap_aes_cbc_encrypt(struct ablkcipher_request *req)
static int omap_aes_cbc_decrypt(struct ablkcipher_request *req)
static int omap_aes_cra_init(struct crypto_tfm *tfm)
static void omap_aes_cra_exit(struct crypto_tfm *tfm)
static struct crypto_alg algs[] = ;
static int omap_aes_probe(struct platform_device *pdev)
static int omap_aes_remove(struct platform_device *pdev)
static struct platform_driver omap_aes_driver = ;
static int __init omap_aes_mod_init(void)
static void __exit omap_aes_mod_exit(void)
module_init(omap_aes_mod_init);
module_exit(omap_aes_mod_exit);
MODULE_DESCRIPTION("OMAP AES hw acceleration support.");
MODULE_LICENSE("GPL v2");
MODULE_AUTHOR("Dmitry Kasatkin");
