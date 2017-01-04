#define DRV_NAME	"sata_uli"
#define DRV_VERSION	"1.3"
enum ;
struct uli_priv ;
static int uli_init_one(struct pci_dev *pdev, const struct pci_device_id *ent);
static int uli_scr_read(struct ata_link *link, unsigned int sc_reg, u32 *val);
static int uli_scr_write(struct ata_link *link, unsigned int sc_reg, u32 val);
static const struct pci_device_id uli_pci_tbl[] = ;
static struct pci_driver uli_pci_driver = ;
static struct scsi_host_template uli_sht = ;
static struct ata_port_operations uli_ops = ;
static const struct ata_port_info uli_port_info = ;
MODULE_AUTHOR("Peer Chen");
MODULE_DESCRIPTION("low-level driver for ULi Electronics SATA controller");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, uli_pci_tbl);
MODULE_VERSION(DRV_VERSION);
static unsigned int get_scr_cfg_addr(struct ata_port *ap, unsigned int sc_reg)
static u32 uli_scr_cfg_read(struct ata_link *link, unsigned int sc_reg)
static void uli_scr_cfg_write(struct ata_link *link, unsigned int scr, u32 val)
static int uli_scr_read(struct ata_link *link, unsigned int sc_reg, u32 *val)
static int uli_scr_write(struct ata_link *link, unsigned int sc_reg, u32 val)
static int uli_init_one(struct pci_dev *pdev, const struct pci_device_id *ent)
static int __init uli_init(void)
static void __exit uli_exit(void)
module_init(uli_init);
module_exit(uli_exit);
