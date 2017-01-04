#define DRV_NAME "pata_isapnp"
#define DRV_VERSION "0.2.5"
static struct scsi_host_template isapnp_sht = ;
static struct ata_port_operations isapnp_port_ops = ;
static struct ata_port_operations isapnp_noalt_port_ops = ;
static int isapnp_init_one(struct pnp_dev *idev, const struct pnp_device_id *dev_id)
static void isapnp_remove_one(struct pnp_dev *idev)
static struct pnp_device_id isapnp_devices[] = ;
MODULE_DEVICE_TABLE(pnp, isapnp_devices);
static struct pnp_driver isapnp_driver = ;
static int __init isapnp_init(void)
static void __exit isapnp_exit(void)
MODULE_AUTHOR("Alan Cox");
MODULE_DESCRIPTION("low-level driver for ISA PnP ATA");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
module_init(isapnp_init);
module_exit(isapnp_exit);
