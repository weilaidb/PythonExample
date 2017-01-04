void __iomem *auxio_register = NULL;
EXPORT_SYMBOL(auxio_register);
enum auxio_type ;
static enum auxio_type auxio_devtype = AUXIO_TYPE_NODEV;
static DEFINE_SPINLOCK(auxio_lock);
static void __auxio_rmw(u8 bits_on, u8 bits_off, int ebus)
static void __auxio_set_bit(u8 bit, int on, int ebus)
void auxio_set_led(int on)
EXPORT_SYMBOL(auxio_set_led);
static void __auxio_sbus_set_lte(int on)
void auxio_set_lte(int on)
EXPORT_SYMBOL(auxio_set_lte);
static const struct of_device_id auxio_match[] = ;
MODULE_DEVICE_TABLE(of, auxio_match);
static int __devinit auxio_probe(struct platform_device *dev)
static struct platform_driver auxio_driver = ;
static int __init auxio_init(void)
fs_initcall(auxio_init);
