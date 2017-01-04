#define DRV_NAME "ide-pnp"
static struct pnp_device_id idepnp_devices[] = ;
static const struct ide_port_info ide_pnp_port_info = ;
static int idepnp_probe(struct pnp_dev *dev, const struct pnp_device_id *dev_id)
static void idepnp_remove(struct pnp_dev *dev)
static struct pnp_driver idepnp_driver = ;
static int __init pnpide_init(void)
static void __exit pnpide_exit(void)
module_init(pnpide_init);
module_exit(pnpide_exit);
MODULE_LICENSE("GPL");
