#define DRV_NAME "pata_amd"
#define DRV_VERSION "0.4.1"
static void timing_setup(struct ata_port *ap, struct ata_device *adev, int offset, int speed, int clock)
static int amd_pre_reset(struct ata_link *link, unsigned long deadline)
static int amd_cable_detect(struct ata_port *ap)
static void amd_fifo_setup(struct ata_port *ap)
static void amd33_set_piomode(struct ata_port *ap, struct ata_device *adev)
static void amd66_set_piomode(struct ata_port *ap, struct ata_device *adev)
static void amd100_set_piomode(struct ata_port *ap, struct ata_device *adev)
static void amd133_set_piomode(struct ata_port *ap, struct ata_device *adev)
static void amd33_set_dmamode(struct ata_port *ap, struct ata_device *adev)
static void amd66_set_dmamode(struct ata_port *ap, struct ata_device *adev)
static void amd100_set_dmamode(struct ata_port *ap, struct ata_device *adev)
static void amd133_set_dmamode(struct ata_port *ap, struct ata_device *adev)
static unsigned long nv_mode_filter(struct ata_device *dev,
unsigned long xfer_mask)
static int nv_pre_reset(struct ata_link *link, unsigned long deadline)
static void nv100_set_piomode(struct ata_port *ap, struct ata_device *adev)
static void nv133_set_piomode(struct ata_port *ap, struct ata_device *adev)
static void nv100_set_dmamode(struct ata_port *ap, struct ata_device *adev)
static void nv133_set_dmamode(struct ata_port *ap, struct ata_device *adev)
static void nv_host_stop(struct ata_host *host)
static struct scsi_host_template amd_sht = ;
static const struct ata_port_operations amd_base_port_ops = ;
static struct ata_port_operations amd33_port_ops = ;
static struct ata_port_operations amd66_port_ops = ;
static struct ata_port_operations amd100_port_ops = ;
static struct ata_port_operations amd133_port_ops = ;
static const struct ata_port_operations nv_base_port_ops = ;
static struct ata_port_operations nv100_port_ops = ;
static struct ata_port_operations nv133_port_ops = ;
static void amd_clear_fifo(struct pci_dev *pdev)
static int amd_init_one(struct pci_dev *pdev, const struct pci_device_id *id)
static int amd_reinit_one(struct pci_dev *pdev)
static const struct pci_device_id amd[] = ;
static struct pci_driver amd_pci_driver = ;
static int __init amd_init(void)
static void __exit amd_exit(void)
MODULE_AUTHOR("Alan Cox");
MODULE_DESCRIPTION("low-level driver for AMD and Nvidia PATA IDE");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, amd);
MODULE_VERSION(DRV_VERSION);
module_init(amd_init);
module_exit(amd_exit);
