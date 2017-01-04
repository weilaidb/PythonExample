#define DRV_NAME	"ahci"
#define DRV_VERSION	"3.0"
enum ;
enum board_ids ;
static int ahci_init_one(struct pci_dev *pdev, const struct pci_device_id *ent);
static int ahci_sb600_softreset(struct ata_link *link, unsigned int *class,
unsigned long deadline);
static int ahci_vt8251_hardreset(struct ata_link *link, unsigned int *class,
unsigned long deadline);
static int ahci_p5wdh_hardreset(struct ata_link *link, unsigned int *class,
unsigned long deadline);
static int ahci_pci_device_suspend(struct pci_dev *pdev, pm_message_t mesg);
static int ahci_pci_device_resume(struct pci_dev *pdev);
static struct scsi_host_template ahci_sht = ;
static struct ata_port_operations ahci_vt8251_ops = ;
static struct ata_port_operations ahci_p5wdh_ops = ;
static struct ata_port_operations ahci_sb600_ops = ;
#define AHCI_HFLAGS(flags)	.private_data	= (void *)(flags)
static const struct ata_port_info ahci_port_info[] = ;
static const struct pci_device_id ahci_pci_tbl[] = ;
static struct pci_driver ahci_pci_driver = ;
#if defined(CONFIG_PATA_MARVELL) || defined(CONFIG_PATA_MARVELL_MODULE)
static int marvell_enable;
static int marvell_enable = 1;
module_param(marvell_enable, int, 0644);
MODULE_PARM_DESC(marvell_enable, "Marvell SATA via AHCI (1 = enabled)");
static void ahci_pci_save_initial_config(struct pci_dev *pdev,
struct ahci_host_priv *hpriv)
static int ahci_pci_reset_controller(struct ata_host *host)
static void ahci_pci_init_controller(struct ata_host *host)
static int ahci_sb600_check_ready(struct ata_link *link)
static int ahci_sb600_softreset(struct ata_link *link, unsigned int *class,
unsigned long deadline)
static int ahci_vt8251_hardreset(struct ata_link *link, unsigned int *class,
unsigned long deadline)
static int ahci_p5wdh_hardreset(struct ata_link *link, unsigned int *class,
unsigned long deadline)
static int ahci_pci_device_suspend(struct pci_dev *pdev, pm_message_t mesg)
static int ahci_pci_device_resume(struct pci_dev *pdev)
static int ahci_configure_dma_masks(struct pci_dev *pdev, int using_dac)
static void ahci_pci_print_info(struct ata_host *host)
static void ahci_p5wdh_workaround(struct ata_host *host)
static bool ahci_sb600_enable_64bit(struct pci_dev *pdev)
static bool ahci_broken_system_poweroff(struct pci_dev *pdev)
static bool ahci_broken_suspend(struct pci_dev *pdev)
static bool ahci_broken_online(struct pci_dev *pdev)
static void ahci_gtf_filter_workaround(struct ata_host *host)
static inline void ahci_gtf_filter_workaround(struct ata_host *host)
static int ahci_init_one(struct pci_dev *pdev, const struct pci_device_id *ent)
static int __init ahci_init(void)
static void __exit ahci_exit(void)
MODULE_AUTHOR("Jeff Garzik");
MODULE_DESCRIPTION("AHCI SATA low-level driver");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, ahci_pci_tbl);
MODULE_VERSION(DRV_VERSION);
module_init(ahci_init);
module_exit(ahci_exit);
