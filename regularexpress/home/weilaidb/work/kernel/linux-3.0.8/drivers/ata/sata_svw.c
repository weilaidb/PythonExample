#define DRV_NAME	"sata_svw"
#define DRV_VERSION	"2.3"
enum ;
static u8 k2_stat_check_status(struct ata_port *ap);
static int k2_sata_check_atapi_dma(struct ata_queued_cmd *qc)
static int k2_sata_scr_read(struct ata_link *link,
unsigned int sc_reg, u32 *val)
static int k2_sata_scr_write(struct ata_link *link,
unsigned int sc_reg, u32 val)
static void k2_sata_tf_load(struct ata_port *ap, const struct ata_taskfile *tf)
static void k2_sata_tf_read(struct ata_port *ap, struct ata_taskfile *tf)
static void k2_bmdma_setup_mmio(struct ata_queued_cmd *qc)
static void k2_bmdma_start_mmio(struct ata_queued_cmd *qc)
static u8 k2_stat_check_status(struct ata_port *ap)
static int k2_sata_proc_info(struct Scsi_Host *shost, char *page, char **start,
off_t offset, int count, int inout)
static struct scsi_host_template k2_sata_sht = ;
static struct ata_port_operations k2_sata_ops = ;
static const struct ata_port_info k2_port_info[] = ;
static void k2_sata_setup_port(struct ata_ioports *port, void __iomem *base)
static int k2_sata_init_one(struct pci_dev *pdev, const struct pci_device_id *ent)
static const struct pci_device_id k2_sata_pci_tbl[] = ;
static struct pci_driver k2_sata_pci_driver = ;
static int __init k2_sata_init(void)
static void __exit k2_sata_exit(void)
MODULE_AUTHOR("Benjamin Herrenschmidt");
MODULE_DESCRIPTION("low-level driver for K2 SATA controller");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, k2_sata_pci_tbl);
MODULE_VERSION(DRV_VERSION);
module_init(k2_sata_init);
module_exit(k2_sata_exit);
