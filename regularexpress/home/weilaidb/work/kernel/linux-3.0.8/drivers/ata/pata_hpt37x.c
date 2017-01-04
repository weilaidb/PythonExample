#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define DRV_NAME	"pata_hpt37x"
#define DRV_VERSION	"0.6.23"
struct hpt_clock ;
struct hpt_chip ;
static struct hpt_clock hpt37x_timings_33[] = ;
static struct hpt_clock hpt37x_timings_50[] = ;
static struct hpt_clock hpt37x_timings_66[] = ;
static const struct hpt_chip hpt370 = ;
static const struct hpt_chip hpt370a = ;
static const struct hpt_chip hpt372 = ;
static const struct hpt_chip hpt302 = ;
static const struct hpt_chip hpt371 = ;
static const struct hpt_chip hpt372a = ;
static const struct hpt_chip hpt374 = ;
static u32 hpt37x_find_mode(struct ata_port *ap, int speed)
static int hpt_dma_blacklisted(const struct ata_device *dev, char *modestr,
const char * const list[])
static const char * const bad_ata33[] = ;
static const char * const bad_ata100_5[] = ;
static unsigned long hpt370_filter(struct ata_device *adev, unsigned long mask)
static unsigned long hpt370a_filter(struct ata_device *adev, unsigned long mask)
static unsigned long hpt372_filter(struct ata_device *adev, unsigned long mask)
static int hpt37x_cable_detect(struct ata_port *ap)
static int hpt374_fn1_cable_detect(struct ata_port *ap)
static int hpt37x_pre_reset(struct ata_link *link, unsigned long deadline)
static void hpt370_set_mode(struct ata_port *ap, struct ata_device *adev,
u8 mode)
static void hpt370_set_piomode(struct ata_port *ap, struct ata_device *adev)
static void hpt370_set_dmamode(struct ata_port *ap, struct ata_device *adev)
static void hpt370_bmdma_stop(struct ata_queued_cmd *qc)
static void hpt372_set_mode(struct ata_port *ap, struct ata_device *adev,
u8 mode)
static void hpt372_set_piomode(struct ata_port *ap, struct ata_device *adev)
static void hpt372_set_dmamode(struct ata_port *ap, struct ata_device *adev)
static void hpt37x_bmdma_stop(struct ata_queued_cmd *qc)
static struct scsi_host_template hpt37x_sht = ;
static struct ata_port_operations hpt370_port_ops = ;
static struct ata_port_operations hpt370a_port_ops = ;
static struct ata_port_operations hpt302_port_ops = ;
static struct ata_port_operations hpt372_port_ops = ;
static struct ata_port_operations hpt374_fn1_port_ops = ;
static int hpt37x_clock_slot(unsigned int freq, unsigned int base)
static int hpt37x_calibrate_dpll(struct pci_dev *dev)
static u32 hpt374_read_freq(struct pci_dev *pdev)
static int hpt37x_init_one(struct pci_dev *dev, const struct pci_device_id *id)
static const struct pci_device_id hpt37x[] = ;
static struct pci_driver hpt37x_pci_driver = ;
static int __init hpt37x_init(void)
static void __exit hpt37x_exit(void)
MODULE_AUTHOR("Alan Cox");
MODULE_DESCRIPTION("low-level driver for the Highpoint HPT37x/30x");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, hpt37x);
MODULE_VERSION(DRV_VERSION);
module_init(hpt37x_init);
module_exit(hpt37x_exit);
