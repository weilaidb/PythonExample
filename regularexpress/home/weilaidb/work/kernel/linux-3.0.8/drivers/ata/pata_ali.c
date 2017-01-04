#define DRV_NAME "pata_ali"
#define DRV_VERSION "0.7.8"
static int ali_atapi_dma = 0;
module_param_named(atapi_dma, ali_atapi_dma, int, 0644);
MODULE_PARM_DESC(atapi_dma, "Enable ATAPI DMA (0=disable, 1=enable)");
static struct pci_dev *ali_isa_bridge;
static const struct dmi_system_id cable_dmi_table[] = ;
static int ali_cable_override(struct pci_dev *pdev)
static int ali_c2_cable_detect(struct ata_port *ap)
static unsigned long ali_20_filter(struct ata_device *adev, unsigned long mask)
static void ali_fifo_control(struct ata_port *ap, struct ata_device *adev, int on)
static void ali_program_modes(struct ata_port *ap, struct ata_device *adev, struct ata_timing *t, u8 ultra)
static void ali_set_piomode(struct ata_port *ap, struct ata_device *adev)
static void ali_set_dmamode(struct ata_port *ap, struct ata_device *adev)
static void ali_warn_atapi_dma(struct ata_device *adev)
static void ali_lock_sectors(struct ata_device *adev)
static int ali_check_atapi_dma(struct ata_queued_cmd *qc)
static void ali_c2_c3_postreset(struct ata_link *link, unsigned int *classes)
static struct scsi_host_template ali_sht = ;
static struct ata_port_operations ali_early_port_ops = ;
static const struct ata_port_operations ali_dma_base_ops = ;
static struct ata_port_operations ali_20_port_ops = ;
static struct ata_port_operations ali_c2_port_ops = ;
static struct ata_port_operations ali_c4_port_ops = ;
static struct ata_port_operations ali_c5_port_ops = ;
static void ali_init_chipset(struct pci_dev *pdev)
static int ali_init_one(struct pci_dev *pdev, const struct pci_device_id *id)
static int ali_reinit_one(struct pci_dev *pdev)
static const struct pci_device_id ali[] = ;
static struct pci_driver ali_pci_driver = ;
static int __init ali_init(void)
static void __exit ali_exit(void)
MODULE_AUTHOR("Alan Cox");
MODULE_DESCRIPTION("low-level driver for ALi PATA");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, ali);
MODULE_VERSION(DRV_VERSION);
module_init(ali_init);
module_exit(ali_exit);
