#define DRV_NAME	"ata_piix"
#define DRV_VERSION	"2.13"
enum ;
enum piix_controller_ids ;
struct piix_map_db ;
struct piix_host_priv ;
static int piix_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent);
static void piix_remove_one(struct pci_dev *pdev);
static int piix_pata_prereset(struct ata_link *link, unsigned long deadline);
static void piix_set_piomode(struct ata_port *ap, struct ata_device *adev);
static void piix_set_dmamode(struct ata_port *ap, struct ata_device *adev);
static void ich_set_dmamode(struct ata_port *ap, struct ata_device *adev);
static int ich_pata_cable_detect(struct ata_port *ap);
static u8 piix_vmw_bmdma_status(struct ata_port *ap);
static int piix_sidpr_scr_read(struct ata_link *link,
unsigned int reg, u32 *val);
static int piix_sidpr_scr_write(struct ata_link *link,
unsigned int reg, u32 val);
static int piix_sidpr_set_lpm(struct ata_link *link, enum ata_lpm_policy policy,
unsigned hints);
static bool piix_irq_check(struct ata_port *ap);
static int piix_pci_device_suspend(struct pci_dev *pdev, pm_message_t mesg);
static int piix_pci_device_resume(struct pci_dev *pdev);
static unsigned int in_module_init = 1;
static const struct pci_device_id piix_pci_tbl[] = ;
static struct pci_driver piix_pci_driver = ;
static struct scsi_host_template piix_sht = ;
static struct ata_port_operations piix_sata_ops = ;
static struct ata_port_operations piix_pata_ops = ;
static struct ata_port_operations piix_vmw_ops = ;
static struct ata_port_operations ich_pata_ops = ;
static struct device_attribute *piix_sidpr_shost_attrs[] = ;
static struct scsi_host_template piix_sidpr_sht = ;
static struct ata_port_operations piix_sidpr_sata_ops = ;
static const struct piix_map_db ich5_map_db = ;
static const struct piix_map_db ich6_map_db = ;
static const struct piix_map_db ich6m_map_db = ;
static const struct piix_map_db ich8_map_db = ;
static const struct piix_map_db ich8_2port_map_db = ;
static const struct piix_map_db ich8m_apple_map_db = ;
static const struct piix_map_db tolapai_map_db = ;
static const struct piix_map_db *piix_map_db_table[] = ;
static struct ata_port_info piix_port_info[] = ;
static struct pci_bits piix_enable_bits[] = ;
MODULE_AUTHOR("Andre Hedrick, Alan Cox, Andrzej Krzysztofowicz, Jeff Garzik");
MODULE_DESCRIPTION("SCSI low-level driver for Intel PIIX/ICH ATA controllers");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, piix_pci_tbl);
MODULE_VERSION(DRV_VERSION);
struct ich_laptop ;
static const struct ich_laptop ich_laptop[] = ;
static int ich_pata_cable_detect(struct ata_port *ap)
static int piix_pata_prereset(struct ata_link *link, unsigned long deadline)
static DEFINE_SPINLOCK(piix_lock);
static void piix_set_piomode(struct ata_port *ap, struct ata_device *adev)
static void do_pata_set_dmamode(struct ata_port *ap, struct ata_device *adev, int isich)
static void piix_set_dmamode(struct ata_port *ap, struct ata_device *adev)
static void ich_set_dmamode(struct ata_port *ap, struct ata_device *adev)
static const int piix_sidx_map[] = ;
static void piix_sidpr_sel(struct ata_link *link, unsigned int reg)
static int piix_sidpr_scr_read(struct ata_link *link,
unsigned int reg, u32 *val)
static int piix_sidpr_scr_write(struct ata_link *link,
unsigned int reg, u32 val)
static int piix_sidpr_set_lpm(struct ata_link *link, enum ata_lpm_policy policy,
unsigned hints)
static bool piix_irq_check(struct ata_port *ap)
static int piix_broken_suspend(void)
static int piix_pci_device_suspend(struct pci_dev *pdev, pm_message_t mesg)
static int piix_pci_device_resume(struct pci_dev *pdev)
static u8 piix_vmw_bmdma_status(struct ata_port *ap)
#define AHCI_PCI_BAR 5
#define AHCI_GLOBAL_CTL 0x04
#define AHCI_ENABLE (1 << 31)
static int piix_disable_ahci(struct pci_dev *pdev)
static int __devinit piix_check_450nx_errata(struct pci_dev *ata_dev)
static void __devinit piix_init_pcs(struct ata_host *host,
const struct piix_map_db *map_db)
static const int *__devinit piix_init_sata_map(struct pci_dev *pdev,
struct ata_port_info *pinfo,
const struct piix_map_db *map_db)
static bool piix_no_sidpr(struct ata_host *host)
static int __devinit piix_init_sidpr(struct ata_host *host)
static void piix_iocfg_bit18_quirk(struct ata_host *host)
static bool piix_broken_system_poweroff(struct pci_dev *pdev)
static int __devinit piix_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void piix_remove_one(struct pci_dev *pdev)
static int __init piix_init(void)
static void __exit piix_exit(void)
module_init(piix_init);
module_exit(piix_exit);
