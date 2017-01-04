#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define DRV_NAME	"pata_hpt3x2n"
#define DRV_VERSION	"0.3.15"
enum ;
struct hpt_clock ;
struct hpt_chip ;
static struct hpt_clock hpt3x2n_clocks[] = ;
static u32 hpt3x2n_find_mode(struct ata_port *ap, int speed)
static unsigned long hpt372n_filter(struct ata_device *adev, unsigned long mask)
static int hpt3x2n_cable_detect(struct ata_port *ap)
static int hpt3x2n_pre_reset(struct ata_link *link, unsigned long deadline)
static void hpt3x2n_set_mode(struct ata_port *ap, struct ata_device *adev,
u8 mode)
static void hpt3x2n_set_piomode(struct ata_port *ap, struct ata_device *adev)
static void hpt3x2n_set_dmamode(struct ata_port *ap, struct ata_device *adev)
static void hpt3x2n_bmdma_stop(struct ata_queued_cmd *qc)
static void hpt3x2n_set_clock(struct ata_port *ap, int source)
static int hpt3x2n_use_dpll(struct ata_port *ap, int writing)
static int hpt3x2n_qc_defer(struct ata_queued_cmd *qc)
static unsigned int hpt3x2n_qc_issue(struct ata_queued_cmd *qc)
static struct scsi_host_template hpt3x2n_sht = ;
static struct ata_port_operations hpt3xxn_port_ops = ;
static struct ata_port_operations hpt372n_port_ops = ;
static int hpt3xn_calibrate_dpll(struct pci_dev *dev)
static int hpt3x2n_pci_clock(struct pci_dev *pdev)
static int hpt3x2n_init_one(struct pci_dev *dev, const struct pci_device_id *id)
static const struct pci_device_id hpt3x2n[] = ;
static struct pci_driver hpt3x2n_pci_driver = ;
static int __init hpt3x2n_init(void)
static void __exit hpt3x2n_exit(void)
MODULE_AUTHOR("Alan Cox");
MODULE_DESCRIPTION("low-level driver for the Highpoint HPT3xxN");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, hpt3x2n);
MODULE_VERSION(DRV_VERSION);
module_init(hpt3x2n_init);
module_exit(hpt3x2n_exit);
