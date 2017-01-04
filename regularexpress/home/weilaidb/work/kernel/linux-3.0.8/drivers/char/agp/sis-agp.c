#define SIS_ATTBASE	0x90
#define SIS_APSIZE	0x94
#define SIS_TLBCNTRL	0x97
#define SIS_TLBFLUSH	0x98
#define PCI_DEVICE_ID_SI_662	0x0662
#define PCI_DEVICE_ID_SI_671	0x0671
static int __devinitdata agp_sis_force_delay = 0;
static int __devinitdata agp_sis_agp_spec = -1;
static int sis_fetch_size(void)
static void sis_tlbflush(struct agp_memory *mem)
static int sis_configure(void)
static void sis_cleanup(void)
static void sis_delayed_enable(struct agp_bridge_data *bridge, u32 mode)
static const struct aper_size_info_8 sis_generic_sizes[7] =
;
static struct agp_bridge_driver sis_driver = ;
static int sis_broken_chipsets[] __devinitdata = ;
static void __devinit sis_get_driver(struct agp_bridge_data *bridge)
static int __devinit agp_sis_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit agp_sis_remove(struct pci_dev *pdev)
static int agp_sis_suspend(struct pci_dev *pdev, pm_message_t state)
static int agp_sis_resume(struct pci_dev *pdev)
static struct pci_device_id agp_sis_pci_table[] = ;
MODULE_DEVICE_TABLE(pci, agp_sis_pci_table);
static struct pci_driver agp_sis_pci_driver = ;
static int __init agp_sis_init(void)
static void __exit agp_sis_cleanup(void)
module_init(agp_sis_init);
module_exit(agp_sis_cleanup);
module_param(agp_sis_force_delay, bool, 0);
MODULE_PARM_DESC(agp_sis_force_delay,"forces sis delay hack");
module_param(agp_sis_agp_spec, int, 0);
MODULE_PARM_DESC(agp_sis_agp_spec,"0=force sis init, 1=force generic agp3 init, default: autodetect");
MODULE_LICENSE("GPL and additional rights");
