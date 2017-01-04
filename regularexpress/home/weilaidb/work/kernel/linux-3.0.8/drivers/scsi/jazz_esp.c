#define DRV_MODULE_NAME		"jazz_esp"
#define PFX DRV_MODULE_NAME	": "
#define DRV_VERSION		"1.000"
#define DRV_MODULE_RELDATE	"May 19, 2007"
static void jazz_esp_write8(struct esp *esp, u8 val, unsigned long reg)
static u8 jazz_esp_read8(struct esp *esp, unsigned long reg)
static dma_addr_t jazz_esp_map_single(struct esp *esp, void *buf,
size_t sz, int dir)
static int jazz_esp_map_sg(struct esp *esp, struct scatterlist *sg,
int num_sg, int dir)
static void jazz_esp_unmap_single(struct esp *esp, dma_addr_t addr,
size_t sz, int dir)
static void jazz_esp_unmap_sg(struct esp *esp, struct scatterlist *sg,
int num_sg, int dir)
static int jazz_esp_irq_pending(struct esp *esp)
static void jazz_esp_reset_dma(struct esp *esp)
static void jazz_esp_dma_drain(struct esp *esp)
static void jazz_esp_dma_invalidate(struct esp *esp)
static void jazz_esp_send_dma_cmd(struct esp *esp, u32 addr, u32 esp_count,
u32 dma_count, int write, u8 cmd)
static int jazz_esp_dma_error(struct esp *esp)
static const struct esp_driver_ops jazz_esp_ops = ;
static int __devinit esp_jazz_probe(struct platform_device *dev)
static int __devexit esp_jazz_remove(struct platform_device *dev)
MODULE_ALIAS("platform:jazz_esp");
static struct platform_driver esp_jazz_driver = ;
static int __init jazz_esp_init(void)
static void __exit jazz_esp_exit(void)
MODULE_DESCRIPTION("JAZZ ESP SCSI driver");
MODULE_AUTHOR("Thomas Bogendoerfer (tsbogend@alpha.franken.de)");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
module_init(jazz_esp_init);
module_exit(jazz_esp_exit);
