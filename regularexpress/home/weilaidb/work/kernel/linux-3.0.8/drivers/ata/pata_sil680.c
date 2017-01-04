#define DRV_NAME "pata_sil680"
#define DRV_VERSION "0.4.9"
#define SIL680_MMIO_BAR		5
static unsigned long sil680_selreg(struct ata_port *ap, int r)
static unsigned long sil680_seldev(struct ata_port *ap, struct ata_device *adev, int r)
static int sil680_cable_detect(struct ata_port *ap)
static void sil680_set_piomode(struct ata_port *ap, struct ata_device *adev)
static void sil680_set_dmamode(struct ata_port *ap, struct ata_device *adev)
static void sil680_sff_exec_command(struct ata_port *ap,
const struct ata_taskfile *tf)
static bool sil680_sff_irq_check(struct ata_port *ap)
static struct scsi_host_template sil680_sht = ;
static struct ata_port_operations sil680_port_ops = ;
static u8 sil680_init_chip(struct pci_dev *pdev, int *try_mmio)
static int __devinit sil680_init_one(struct pci_dev *pdev,
const struct pci_device_id *id)
static int sil680_reinit_one(struct pci_dev *pdev)
static const struct pci_device_id sil680[] = ;
static struct pci_driver sil680_pci_driver = ;
static int __init sil680_init(void)
static void __exit sil680_exit(void)
MODULE_AUTHOR("Alan Cox");
MODULE_DESCRIPTION("low-level driver for SI680 PATA");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, sil680);
MODULE_VERSION(DRV_VERSION);
module_init(sil680_init);
module_exit(sil680_exit);
