#define DRV_NAME "pata_serverworks"
#define DRV_VERSION "0.4.3"
#define SVWKS_CSB5_REVISION_NEW	0x92
#define SVWKS_CSB6_REVISION	0xa0
static const char *csb_bad_ata100[] = ;
static int dell_cable(struct ata_port *ap)
static int sun_cable(struct ata_port *ap)
static int osb4_cable(struct ata_port *ap)
static int csb_cable(struct ata_port *ap)
struct sv_cable_table ;
static struct sv_cable_table cable_detect[] = ;
static int serverworks_cable_detect(struct ata_port *ap)
static u8 serverworks_is_csb(struct pci_dev *pdev)
static unsigned long serverworks_osb4_filter(struct ata_device *adev, unsigned long mask)
static unsigned long serverworks_csb_filter(struct ata_device *adev, unsigned long mask)
static void serverworks_set_piomode(struct ata_port *ap, struct ata_device *adev)
static void serverworks_set_dmamode(struct ata_port *ap, struct ata_device *adev)
static struct scsi_host_template serverworks_sht = ;
static struct ata_port_operations serverworks_osb4_port_ops = ;
static struct ata_port_operations serverworks_csb_port_ops = ;
static int serverworks_fixup_osb4(struct pci_dev *pdev)
static int serverworks_fixup_csb(struct pci_dev *pdev)
static void serverworks_fixup_ht1000(struct pci_dev *pdev)
static int serverworks_init_one(struct pci_dev *pdev, const struct pci_device_id *id)
static int serverworks_reinit_one(struct pci_dev *pdev)
static const struct pci_device_id serverworks[] = ;
static struct pci_driver serverworks_pci_driver = ;
static int __init serverworks_init(void)
static void __exit serverworks_exit(void)
MODULE_AUTHOR("Alan Cox");
MODULE_DESCRIPTION("low-level driver for Serverworks OSB4/CSB5/CSB6");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, serverworks);
MODULE_VERSION(DRV_VERSION);
module_init(serverworks_init);
module_exit(serverworks_exit);
