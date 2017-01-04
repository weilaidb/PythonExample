#define DRV_NAME "pruss_uio"
#define DRV_VERSION "1.0"
static int sram_pool_sz = SZ_16K;
module_param(sram_pool_sz, int, 0);
MODULE_PARM_DESC(sram_pool_sz, "sram pool size to allocate ");
static int extram_pool_sz = SZ_256K;
module_param(extram_pool_sz, int, 0);
MODULE_PARM_DESC(extram_pool_sz, "external ram pool size to allocate");
#define MAX_PRUSS_EVT	8
#define PINTC_HIDISR	0x0038
#define PINTC_HIPIR	0x0900
#define HIPIR_NOPEND	0x80000000
#define PINTC_HIER	0x1500
struct uio_pruss_dev ;
static irqreturn_t pruss_handler(int irq, struct uio_info *info)
static void pruss_cleanup(struct platform_device *dev,
struct uio_pruss_dev *gdev)
static int __devinit pruss_probe(struct platform_device *dev)
static int __devexit pruss_remove(struct platform_device *dev)
static struct platform_driver pruss_driver = ;
static int __init pruss_init_module(void)
module_init(pruss_init_module);
static void __exit pruss_exit_module(void)
module_exit(pruss_exit_module);
MODULE_LICENSE("GPL v2");
MODULE_VERSION(DRV_VERSION);
MODULE_AUTHOR("Amit Chatterjee <amit.chatterjee@ti.com>");
MODULE_AUTHOR("Pratheesh Gangadhar <pratheesh@ti.com>");
