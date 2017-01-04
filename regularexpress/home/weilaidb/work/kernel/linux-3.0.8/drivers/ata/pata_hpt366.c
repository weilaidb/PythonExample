#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define DRV_NAME	"pata_hpt366"
#define DRV_VERSION	"0.6.11"
struct hpt_clock ;
static const struct hpt_clock hpt366_40[] = ;
static const struct hpt_clock hpt366_33[] = ;
static const struct hpt_clock hpt366_25[] = ;
static const char * const bad_ata33[] = ;
static const char * const bad_ata66_4[] = ;
static const char * const bad_ata66_3[] = ;
static int hpt_dma_blacklisted(const struct ata_device *dev, char *modestr,
const char * const list[])
static unsigned long hpt366_filter(struct ata_device *adev, unsigned long mask)
static int hpt36x_cable_detect(struct ata_port *ap)
static void hpt366_set_mode(struct ata_port *ap, struct ata_device *adev,
u8 mode)
static void hpt366_set_piomode(struct ata_port *ap, struct ata_device *adev)
static void hpt366_set_dmamode(struct ata_port *ap, struct ata_device *adev)
static struct scsi_host_template hpt36x_sht = ;
static struct ata_port_operations hpt366_port_ops = ;
static void hpt36x_init_chipset(struct pci_dev *dev)
static int hpt36x_init_one(struct pci_dev *dev, const struct pci_device_id *id)
static int hpt36x_reinit_one(struct pci_dev *dev)
static const struct pci_device_id hpt36x[] = ;
static struct pci_driver hpt36x_pci_driver = ;
static int __init hpt36x_init(void)
static void __exit hpt36x_exit(void)
MODULE_AUTHOR("Alan Cox");
MODULE_DESCRIPTION("low-level driver for the Highpoint HPT366/368");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, hpt36x);
MODULE_VERSION(DRV_VERSION);
module_init(hpt36x_init);
module_exit(hpt36x_exit);
