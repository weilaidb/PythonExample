#define DRV_NAME	"sata_sil"
#define DRV_VERSION	"2.4"
#define SIL_DMA_BOUNDARY	0x7fffffffUL
enum ;
static int sil_init_one(struct pci_dev *pdev, const struct pci_device_id *ent);
static int sil_pci_device_resume(struct pci_dev *pdev);
static void sil_dev_config(struct ata_device *dev);
static int sil_scr_read(struct ata_link *link, unsigned int sc_reg, u32 *val);
static int sil_scr_write(struct ata_link *link, unsigned int sc_reg, u32 val);
static int sil_set_mode(struct ata_link *link, struct ata_device **r_failed);
static void sil_qc_prep(struct ata_queued_cmd *qc);
static void sil_bmdma_setup(struct ata_queued_cmd *qc);
static void sil_bmdma_start(struct ata_queued_cmd *qc);
static void sil_bmdma_stop(struct ata_queued_cmd *qc);
static void sil_freeze(struct ata_port *ap);
static void sil_thaw(struct ata_port *ap);
static const struct pci_device_id sil_pci_tbl[] = ;
static const struct sil_drivelist  sil_blacklist [] = ;
static struct pci_driver sil_pci_driver = ;
static struct scsi_host_template sil_sht = ;
static struct ata_port_operations sil_ops = ;
static const struct ata_port_info sil_port_info[] = ;
static const struct  sil_port[] = ;
MODULE_AUTHOR("Jeff Garzik");
MODULE_DESCRIPTION("low-level driver for Silicon Image SATA controller");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, sil_pci_tbl);
MODULE_VERSION(DRV_VERSION);
static int slow_down;
module_param(slow_down, int, 0444);
MODULE_PARM_DESC(slow_down, "Sledgehammer used to work around random problems, by limiting commands to 15 sectors (0=off, 1=on)");
static void sil_bmdma_stop(struct ata_queued_cmd *qc)
static void sil_bmdma_setup(struct ata_queued_cmd *qc)
static void sil_bmdma_start(struct ata_queued_cmd *qc)
static void sil_fill_sg(struct ata_queued_cmd *qc)
static void sil_qc_prep(struct ata_queued_cmd *qc)
static unsigned char sil_get_device_cache_line(struct pci_dev *pdev)
static int sil_set_mode(struct ata_link *link, struct ata_device **r_failed)
static inline void __iomem *sil_scr_addr(struct ata_port *ap,
unsigned int sc_reg)
static int sil_scr_read(struct ata_link *link, unsigned int sc_reg, u32 *val)
static int sil_scr_write(struct ata_link *link, unsigned int sc_reg, u32 val)
static void sil_host_intr(struct ata_port *ap, u32 bmdma2)
static irqreturn_t sil_interrupt(int irq, void *dev_instance)
static void sil_freeze(struct ata_port *ap)
static void sil_thaw(struct ata_port *ap)
static void sil_dev_config(struct ata_device *dev)
static void sil_init_controller(struct ata_host *host)
static bool sil_broken_system_poweroff(struct pci_dev *pdev)
static int sil_init_one(struct pci_dev *pdev, const struct pci_device_id *ent)
static int sil_pci_device_resume(struct pci_dev *pdev)
static int __init sil_init(void)
static void __exit sil_exit(void)
module_init(sil_init);
module_exit(sil_exit);
