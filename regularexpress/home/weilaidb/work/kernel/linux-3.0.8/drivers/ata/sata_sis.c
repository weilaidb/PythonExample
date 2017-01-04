#define DRV_NAME	"sata_sis"
#define DRV_VERSION	"1.0"
enum ;
static int sis_init_one(struct pci_dev *pdev, const struct pci_device_id *ent);
static int sis_scr_read(struct ata_link *link, unsigned int sc_reg, u32 *val);
static int sis_scr_write(struct ata_link *link, unsigned int sc_reg, u32 val);
static const struct pci_device_id sis_pci_tbl[] = ;
static struct pci_driver sis_pci_driver = ;
static struct scsi_host_template sis_sht = ;
static struct ata_port_operations sis_ops = ;
static const struct ata_port_info sis_port_info = ;
MODULE_AUTHOR("Uwe Koziolek");
MODULE_DESCRIPTION("low-level driver for Silicon Integratad Systems SATA controller");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, sis_pci_tbl);
MODULE_VERSION(DRV_VERSION);
static unsigned int get_scr_cfg_addr(struct ata_link *link, unsigned int sc_reg)
static u32 sis_scr_cfg_read(struct ata_link *link,
unsigned int sc_reg, u32 *val)
static int sis_scr_cfg_write(struct ata_link *link,
unsigned int sc_reg, u32 val)
static int sis_scr_read(struct ata_link *link, unsigned int sc_reg, u32 *val)
static int sis_scr_write(struct ata_link *link, unsigned int sc_reg, u32 val)
static int sis_init_one(struct pci_dev *pdev, const struct pci_device_id *ent)
static int __init sis_init(void)
static void __exit sis_exit(void)
module_init(sis_init);
module_exit(sis_exit);
