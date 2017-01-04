#define AXON_RAM_MODULE_NAME		"axonram"
#define AXON_RAM_DEVICE_NAME		"axonram"
#define AXON_RAM_MINORS_PER_DISK	16
#define AXON_RAM_BLOCK_SHIFT		PAGE_SHIFT
#define AXON_RAM_BLOCK_SIZE		1 << AXON_RAM_BLOCK_SHIFT
#define AXON_RAM_SECTOR_SHIFT		9
#define AXON_RAM_SECTOR_SIZE		1 << AXON_RAM_SECTOR_SHIFT
#define AXON_RAM_IRQ_FLAGS		IRQF_SHARED | IRQF_TRIGGER_RISING
static int azfs_major, azfs_minor;
struct axon_ram_bank ;
static ssize_t
axon_ram_sysfs_ecc(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(ecc, S_IRUGO, axon_ram_sysfs_ecc, NULL);
static irqreturn_t
axon_ram_irq_handler(int irq, void *dev)
static int
axon_ram_make_request(struct request_queue *queue, struct bio *bio)
static int
axon_ram_direct_access(struct block_device *device, sector_t sector,
void **kaddr, unsigned long *pfn)
static const struct block_device_operations axon_ram_devops = ;
static int axon_ram_probe(struct platform_device *device)
static int
axon_ram_remove(struct platform_device *device)
static struct of_device_id axon_ram_device_id[] = ;
static struct platform_driver axon_ram_driver = ;
static int __init
axon_ram_init(void)
static void __exit
axon_ram_exit(void)
module_init(axon_ram_init);
module_exit(axon_ram_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Maxim Shchetynin <maxim@de.ibm.com>");
MODULE_DESCRIPTION("Axon DDR2 RAM device driver for IBM Cell BE");
