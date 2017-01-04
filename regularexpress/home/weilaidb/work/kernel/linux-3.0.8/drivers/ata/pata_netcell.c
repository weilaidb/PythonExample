#define DRV_NAME	"pata_netcell"
#define DRV_VERSION	"0.1.7"
static unsigned int netcell_read_id(struct ata_device *adev,
struct ata_taskfile *tf, u16 *id)
static struct scsi_host_template netcell_sht = ;
static struct ata_port_operations netcell_ops = ;
static int netcell_init_one (struct pci_dev *pdev, const struct pci_device_id *ent)
static const struct pci_device_id netcell_pci_tbl[] = ;
static struct pci_driver netcell_pci_driver = ;
static int __init netcell_init(void)
static void __exit netcell_exit(void)
module_init(netcell_init);
module_exit(netcell_exit);
MODULE_AUTHOR("Alan Cox");
MODULE_DESCRIPTION("SCSI low-level driver for Netcell PATA RAID");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, netcell_pci_tbl);
MODULE_VERSION(DRV_VERSION);
