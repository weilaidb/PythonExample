#define DRV_MODULE_NAME		"sun_esp"
#define PFX DRV_MODULE_NAME	": "
#define DRV_VERSION		"1.100"
#define DRV_MODULE_RELDATE	"August 27, 2008"
#define dma_read32(REG) \
sbus_readl(esp->dma_regs + (REG))
#define dma_write32(VAL, REG) \
sbus_writel((VAL), esp->dma_regs + (REG))
enum dvma_rev ;
static int __devinit esp_sbus_setup_dma(struct esp *esp,
struct platform_device *dma_of)
static int __devinit esp_sbus_map_regs(struct esp *esp, int hme)
static int __devinit esp_sbus_map_command_block(struct esp *esp)
static int __devinit esp_sbus_register_irq(struct esp *esp)
static void __devinit esp_get_scsi_id(struct esp *esp, struct platform_device *espdma)
static void __devinit esp_get_differential(struct esp *esp)
static void __devinit esp_get_clock_params(struct esp *esp)
static void __devinit esp_get_bursts(struct esp *esp, struct platform_device *dma_of)
static void __devinit esp_sbus_get_props(struct esp *esp, struct platform_device *espdma)
static void sbus_esp_write8(struct esp *esp, u8 val, unsigned long reg)
static u8 sbus_esp_read8(struct esp *esp, unsigned long reg)
static dma_addr_t sbus_esp_map_single(struct esp *esp, void *buf,
size_t sz, int dir)
static int sbus_esp_map_sg(struct esp *esp, struct scatterlist *sg,
int num_sg, int dir)
static void sbus_esp_unmap_single(struct esp *esp, dma_addr_t addr,
size_t sz, int dir)
static void sbus_esp_unmap_sg(struct esp *esp, struct scatterlist *sg,
int num_sg, int dir)
static int sbus_esp_irq_pending(struct esp *esp)
static void sbus_esp_reset_dma(struct esp *esp)
static void sbus_esp_dma_drain(struct esp *esp)
static void sbus_esp_dma_invalidate(struct esp *esp)
static void sbus_esp_send_dma_cmd(struct esp *esp, u32 addr, u32 esp_count,
u32 dma_count, int write, u8 cmd)
static int sbus_esp_dma_error(struct esp *esp)
static const struct esp_driver_ops sbus_esp_ops = ;
static int __devinit esp_sbus_probe_one(struct platform_device *op,
struct platform_device *espdma,
int hme)
static int __devinit esp_sbus_probe(struct platform_device *op)
static int __devexit esp_sbus_remove(struct platform_device *op)
static const struct of_device_id esp_match[] = ;
MODULE_DEVICE_TABLE(of, esp_match);
static struct platform_driver esp_sbus_driver = ;
static int __init sunesp_init(void)
static void __exit sunesp_exit(void)
MODULE_DESCRIPTION("Sun ESP SCSI driver");
MODULE_AUTHOR("David S. Miller (davem@davemloft.net)");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
module_init(sunesp_init);
module_exit(sunesp_exit);
