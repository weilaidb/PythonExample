#define DRV_NAME "pata_optidma"
#define DRV_VERSION "0.3.2"
enum ;
static int pci_clock;
static int optidma_pre_reset(struct ata_link *link, unsigned long deadline)
static void optidma_unlock(struct ata_port *ap)
static void optidma_lock(struct ata_port *ap)
static void optidma_mode_setup(struct ata_port *ap, struct ata_device *adev, u8 mode)
static void optiplus_mode_setup(struct ata_port *ap, struct ata_device *adev, u8 mode)
static void optidma_set_pio_mode(struct ata_port *ap, struct ata_device *adev)
static void optidma_set_dma_mode(struct ata_port *ap, struct ata_device *adev)
static void optiplus_set_pio_mode(struct ata_port *ap, struct ata_device *adev)
static void optiplus_set_dma_mode(struct ata_port *ap, struct ata_device *adev)
static u8 optidma_make_bits43(struct ata_device *adev)
static int optidma_set_mode(struct ata_link *link, struct ata_device **r_failed)
static struct scsi_host_template optidma_sht = ;
static struct ata_port_operations optidma_port_ops = ;
static struct ata_port_operations optiplus_port_ops = ;
static int optiplus_with_udma(struct pci_dev *pdev)
static int optidma_init_one(struct pci_dev *dev, const struct pci_device_id *id)
static const struct pci_device_id optidma[] = ;
static struct pci_driver optidma_pci_driver = ;
static int __init optidma_init(void)
static void __exit optidma_exit(void)
MODULE_AUTHOR("Alan Cox");
MODULE_DESCRIPTION("low-level driver for Opti Firestar/Firestar Plus");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, optidma);
MODULE_VERSION(DRV_VERSION);
module_init(optidma_init);
module_exit(optidma_exit);
