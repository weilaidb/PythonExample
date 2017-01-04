static int lldd_max_execute_num = 1;
module_param_named(collector, lldd_max_execute_num, int, S_IRUGO);
MODULE_PARM_DESC(collector, "\n"
"\tIf greater than one, tells the SAS Layer to run in Task Collector\n"
"\tMode.  If 1 or 0, tells the SAS Layer to run in Direct Mode.\n"
"\tThe mvsas SAS LLDD supports both modes.\n"
"\tDefault: 1 (Direct Mode).\n");
static struct scsi_transport_template *mvs_stt;
struct kmem_cache *mvs_task_list_cache;
static const struct mvs_chip_info mvs_chips[] = ;
#define SOC_SAS_NUM 2
#define SG_MX 64
static struct scsi_host_template mvs_sht = ;
static struct sas_domain_function_template mvs_transport_ops = ;
static void __devinit mvs_phy_init(struct mvs_info *mvi, int phy_id)
static void mvs_free(struct mvs_info *mvi)
struct tasklet_struct	mv_tasklet;
static void mvs_tasklet(unsigned long opaque)
static irqreturn_t mvs_interrupt(int irq, void *opaque)
static int __devinit mvs_alloc(struct mvs_info *mvi, struct Scsi_Host *shost)
int mvs_ioremap(struct mvs_info *mvi, int bar, int bar_ex)
void mvs_iounmap(void __iomem *regs)
static struct mvs_info *__devinit mvs_pci_alloc(struct pci_dev *pdev,
const struct pci_device_id *ent,
struct Scsi_Host *shost, unsigned int id)
static int pci_go_64(struct pci_dev *pdev)
static int __devinit mvs_prep_sas_ha_init(struct Scsi_Host *shost,
const struct mvs_chip_info *chip_info)
static void  __devinit mvs_post_sas_ha_init(struct Scsi_Host *shost,
const struct mvs_chip_info *chip_info)
static void mvs_init_sas_add(struct mvs_info *mvi)
static int __devinit mvs_pci_init(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit mvs_pci_remove(struct pci_dev *pdev)
static struct pci_device_id __devinitdata mvs_pci_table[] = ;
static struct pci_driver mvs_pci_driver = ;
struct task_struct *mvs_th;
static int __init mvs_init(void)
static void __exit mvs_exit(void)
module_init(mvs_init);
module_exit(mvs_exit);
MODULE_AUTHOR("Jeff Garzik <jgarzik@pobox.com>");
MODULE_DESCRIPTION("Marvell 88SE6440 SAS/SATA controller driver");
MODULE_VERSION(DRV_VERSION);
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, mvs_pci_table);
