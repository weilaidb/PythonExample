static struct scsi_transport_template *pm8001_stt;
static const struct pm8001_chip_info pm8001_chips[] = ;
static int pm8001_id;
LIST_HEAD(hba_list);
struct workqueue_struct *pm8001_wq;
static struct scsi_host_template pm8001_sht = ;
static struct sas_domain_function_template pm8001_transport_ops = ;
static void __devinit pm8001_phy_init(struct pm8001_hba_info *pm8001_ha,
int phy_id)
static void pm8001_free(struct pm8001_hba_info *pm8001_ha)
static void pm8001_tasklet(unsigned long opaque)
static irqreturn_t pm8001_interrupt(int irq, void *opaque)
static int __devinit pm8001_alloc(struct pm8001_hba_info *pm8001_ha)
static int pm8001_ioremap(struct pm8001_hba_info *pm8001_ha)
static struct pm8001_hba_info *__devinit
pm8001_pci_alloc(struct pci_dev *pdev, u32 chip_id, struct Scsi_Host *shost)
static int pci_go_44(struct pci_dev *pdev)
static int __devinit pm8001_prep_sas_ha_init(struct Scsi_Host * shost,
const struct pm8001_chip_info *chip_info)
static void  __devinit pm8001_post_sas_ha_init(struct Scsi_Host *shost,
const struct pm8001_chip_info *chip_info)
static void pm8001_init_sas_add(struct pm8001_hba_info *pm8001_ha)
static u32 pm8001_setup_msix(struct pm8001_hba_info *pm8001_ha,
irq_handler_t irq_handler)
static u32 pm8001_request_irq(struct pm8001_hba_info *pm8001_ha)
static int __devinit pm8001_pci_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit pm8001_pci_remove(struct pci_dev *pdev)
static int pm8001_pci_suspend(struct pci_dev *pdev, pm_message_t state)
static int pm8001_pci_resume(struct pci_dev *pdev)
static struct pci_device_id __devinitdata pm8001_pci_table[] = ;
static struct pci_driver pm8001_pci_driver = ;
static int __init pm8001_init(void)
static void __exit pm8001_exit(void)
module_init(pm8001_init);
module_exit(pm8001_exit);
MODULE_AUTHOR("Jack Wang <jack_wang@usish.com>");
MODULE_DESCRIPTION("PMC-Sierra PM8001 SAS/SATA controller driver");
MODULE_VERSION(DRV_VERSION);
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, pm8001_pci_table);
