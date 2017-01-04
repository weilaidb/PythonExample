#define DRV_NAME	"sata_vsc"
#define DRV_VERSION	"2.3"
enum ;
static int vsc_sata_scr_read(struct ata_link *link,
unsigned int sc_reg, u32 *val)
static int vsc_sata_scr_write(struct ata_link *link,
unsigned int sc_reg, u32 val)
static void vsc_freeze(struct ata_port *ap)
static void vsc_thaw(struct ata_port *ap)
static void vsc_intr_mask_update(struct ata_port *ap, u8 ctl)
static void vsc_sata_tf_load(struct ata_port *ap, const struct ata_taskfile *tf)
static void vsc_sata_tf_read(struct ata_port *ap, struct ata_taskfile *tf)
static inline void vsc_error_intr(u8 port_status, struct ata_port *ap)
static void vsc_port_intr(u8 port_status, struct ata_port *ap)
static irqreturn_t vsc_sata_interrupt(int irq, void *dev_instance)
static struct scsi_host_template vsc_sata_sht = ;
static struct ata_port_operations vsc_sata_ops = ;
static void __devinit vsc_sata_setup_port(struct ata_ioports *port,
void __iomem *base)
static int __devinit vsc_sata_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
static const struct pci_device_id vsc_sata_pci_tbl[] = ;
static struct pci_driver vsc_sata_pci_driver = ;
static int __init vsc_sata_init(void)
static void __exit vsc_sata_exit(void)
MODULE_AUTHOR("Jeremy Higdon");
MODULE_DESCRIPTION("low-level driver for Vitesse VSC7174 SATA controller");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, vsc_sata_pci_tbl);
MODULE_VERSION(DRV_VERSION);
module_init(vsc_sata_init);
module_exit(vsc_sata_exit);
