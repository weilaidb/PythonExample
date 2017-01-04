#define DRV_NAME "pata_pdc202xx_old"
#define DRV_VERSION "0.4.3"
static int pdc2026x_cable_detect(struct ata_port *ap)
static void pdc202xx_exec_command(struct ata_port *ap,
const struct ata_taskfile *tf)
static bool pdc202xx_irq_check(struct ata_port *ap)
static void pdc202xx_configure_piomode(struct ata_port *ap, struct ata_device *adev, int pio)
static void pdc202xx_set_piomode(struct ata_port *ap, struct ata_device *adev)
static void pdc202xx_set_dmamode(struct ata_port *ap, struct ata_device *adev)
static void pdc2026x_bmdma_start(struct ata_queued_cmd *qc)
static void pdc2026x_bmdma_stop(struct ata_queued_cmd *qc)
static void pdc2026x_dev_config(struct ata_device *adev)
static int pdc2026x_port_start(struct ata_port *ap)
static int pdc2026x_check_atapi_dma(struct ata_queued_cmd *qc)
static struct scsi_host_template pdc202xx_sht = ;
static struct ata_port_operations pdc2024x_port_ops = ;
static struct ata_port_operations pdc2026x_port_ops = ;
static int pdc202xx_init_one(struct pci_dev *dev, const struct pci_device_id *id)
static const struct pci_device_id pdc202xx[] = ;
static struct pci_driver pdc202xx_pci_driver = ;
static int __init pdc202xx_init(void)
static void __exit pdc202xx_exit(void)
MODULE_AUTHOR("Alan Cox");
MODULE_DESCRIPTION("low-level driver for Promise 2024x and 20262-20267");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, pdc202xx);
MODULE_VERSION(DRV_VERSION);
module_init(pdc202xx_init);
module_exit(pdc202xx_exit);
