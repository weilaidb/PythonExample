#define DMA_CSR		0x00UL
#define DMA_ADDR        0x04UL
#define DMA_COUNT       0x08UL
#define DMA_TEST        0x0cUL
#define DRV_MODULE_NAME		"sun3x_esp"
#define PFX DRV_MODULE_NAME	": "
#define DRV_VERSION		"1.000"
#define DRV_MODULE_RELDATE	"Nov 1, 2007"
static void sun3x_esp_write8(struct esp *esp, u8 val, unsigned long reg)
static u8 sun3x_esp_read8(struct esp *esp, unsigned long reg)
static dma_addr_t sun3x_esp_map_single(struct esp *esp, void *buf,
size_t sz, int dir)
static int sun3x_esp_map_sg(struct esp *esp, struct scatterlist *sg,
int num_sg, int dir)
static void sun3x_esp_unmap_single(struct esp *esp, dma_addr_t addr,
size_t sz, int dir)
static void sun3x_esp_unmap_sg(struct esp *esp, struct scatterlist *sg,
int num_sg, int dir)
static int sun3x_esp_irq_pending(struct esp *esp)
static void sun3x_esp_reset_dma(struct esp *esp)
static void sun3x_esp_dma_drain(struct esp *esp)
static void sun3x_esp_dma_invalidate(struct esp *esp)
static void sun3x_esp_send_dma_cmd(struct esp *esp, u32 addr, u32 esp_count,
u32 dma_count, int write, u8 cmd)
static int sun3x_esp_dma_error(struct esp *esp)
static const struct esp_driver_ops sun3x_esp_ops = ;
static int __devinit esp_sun3x_probe(struct platform_device *dev)
static int __devexit esp_sun3x_remove(struct platform_device *dev)
static struct platform_driver esp_sun3x_driver = ;
static int __init sun3x_esp_init(void)
static void __exit sun3x_esp_exit(void)
MODULE_DESCRIPTION("Sun3x ESP SCSI driver");
MODULE_AUTHOR("Thomas Bogendoerfer (tsbogend@alpha.franken.de)");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
module_init(sun3x_esp_init);
module_exit(sun3x_esp_exit);
MODULE_ALIAS("platform:sun3x_esp");
