#define DRV_NAME	"sata_via"
#define DRV_VERSION	"2.6"
enum board_ids_enum ;
enum ;
static int svia_init_one(struct pci_dev *pdev, const struct pci_device_id *ent);
static int svia_scr_read(struct ata_link *link, unsigned int sc_reg, u32 *val);
static int svia_scr_write(struct ata_link *link, unsigned int sc_reg, u32 val);
static int vt8251_scr_read(struct ata_link *link, unsigned int scr, u32 *val);
static int vt8251_scr_write(struct ata_link *link, unsigned int scr, u32 val);
static void svia_tf_load(struct ata_port *ap, const struct ata_taskfile *tf);
static void svia_noop_freeze(struct ata_port *ap);
static int vt6420_prereset(struct ata_link *link, unsigned long deadline);
static void vt6420_bmdma_start(struct ata_queued_cmd *qc);
static int vt6421_pata_cable_detect(struct ata_port *ap);
static void vt6421_set_pio_mode(struct ata_port *ap, struct ata_device *adev);
static void vt6421_set_dma_mode(struct ata_port *ap, struct ata_device *adev);
static const struct pci_device_id svia_pci_tbl[] = ;
static struct pci_driver svia_pci_driver = ;
static struct scsi_host_template svia_sht = ;
static struct ata_port_operations svia_base_ops = ;
static struct ata_port_operations vt6420_sata_ops = ;
static struct ata_port_operations vt6421_pata_ops = ;
static struct ata_port_operations vt6421_sata_ops = ;
static struct ata_port_operations vt8251_ops = ;
static const struct ata_port_info vt6420_port_info = ;
static struct ata_port_info vt6421_sport_info = ;
static struct ata_port_info vt6421_pport_info = ;
static struct ata_port_info vt8251_port_info = ;
MODULE_AUTHOR("Jeff Garzik");
MODULE_DESCRIPTION("SCSI low-level driver for VIA SATA controllers");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, svia_pci_tbl);
MODULE_VERSION(DRV_VERSION);
static int svia_scr_read(struct ata_link *link, unsigned int sc_reg, u32 *val)
static int svia_scr_write(struct ata_link *link, unsigned int sc_reg, u32 val)
static int vt8251_scr_read(struct ata_link *link, unsigned int scr, u32 *val)
static int vt8251_scr_write(struct ata_link *link, unsigned int scr, u32 val)
static void svia_tf_load(struct ata_port *ap, const struct ata_taskfile *tf)
static void svia_noop_freeze(struct ata_port *ap)
static int vt6420_prereset(struct ata_link *link, unsigned long deadline)
static void vt6420_bmdma_start(struct ata_queued_cmd *qc)
static int vt6421_pata_cable_detect(struct ata_port *ap)
static void vt6421_set_pio_mode(struct ata_port *ap, struct ata_device *adev)
static void vt6421_set_dma_mode(struct ata_port *ap, struct ata_device *adev)
static const unsigned int svia_bar_sizes[] = ;
static const unsigned int vt6421_bar_sizes[] = ;
static void __iomem *svia_scr_addr(void __iomem *addr, unsigned int port)
static void __iomem *vt6421_scr_addr(void __iomem *addr, unsigned int port)
static void vt6421_init_addrs(struct ata_port *ap)
static int vt6420_prepare_host(struct pci_dev *pdev, struct ata_host **r_host)
static int vt6421_prepare_host(struct pci_dev *pdev, struct ata_host **r_host)
static int vt8251_prepare_host(struct pci_dev *pdev, struct ata_host **r_host)
static void svia_configure(struct pci_dev *pdev, int board_id)
static int svia_init_one(struct pci_dev *pdev, const struct pci_device_id *ent)
static int __init svia_init(void)
static void __exit svia_exit(void)
module_init(svia_init);
module_exit(svia_exit);
