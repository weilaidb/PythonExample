#define DRV_NAME "pata_via"
#define DRV_VERSION "0.3.4"
enum ;
enum ;
static const struct via_isa_bridge  via_isa_bridges[] = ;
static const struct dmi_system_id no_atapi_dma_dmi_table[] = ;
struct via_port ;
static const struct dmi_system_id cable_dmi_table[] = ;
static int via_cable_override(struct pci_dev *pdev)
static int via_cable_detect(struct ata_port *ap)
static int via_pre_reset(struct ata_link *link, unsigned long deadline)
static void via_do_set_mode(struct ata_port *ap, struct ata_device *adev,
int mode, int set_ast, int udma_type)
static void via_set_piomode(struct ata_port *ap, struct ata_device *adev)
static void via_set_dmamode(struct ata_port *ap, struct ata_device *adev)
static unsigned long via_mode_filter(struct ata_device *dev, unsigned long mask)
static void via_tf_load(struct ata_port *ap, const struct ata_taskfile *tf)
static int via_port_start(struct ata_port *ap)
static struct scsi_host_template via_sht = ;
static struct ata_port_operations via_port_ops = ;
static struct ata_port_operations via_port_ops_noirq = ;
static void via_config_fifo(struct pci_dev *pdev, unsigned int flags)
static int via_init_one(struct pci_dev *pdev, const struct pci_device_id *id)
static int via_reinit_one(struct pci_dev *pdev)
static const struct pci_device_id via[] = ;
static struct pci_driver via_pci_driver = ;
static int __init via_init(void)
static void __exit via_exit(void)
MODULE_AUTHOR("Alan Cox");
MODULE_DESCRIPTION("low-level driver for VIA PATA");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, via);
MODULE_VERSION(DRV_VERSION);
module_init(via_init);
module_exit(via_exit);
