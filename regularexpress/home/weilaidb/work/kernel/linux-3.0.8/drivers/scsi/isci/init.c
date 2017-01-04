static struct scsi_transport_template *isci_transport_template;
static DEFINE_PCI_DEVICE_TABLE(isci_id_table) = ;
MODULE_DEVICE_TABLE(pci, isci_id_table);
unsigned char no_outbound_task_to = 20;
module_param(no_outbound_task_to, byte, 0);
MODULE_PARM_DESC(no_outbound_task_to, "No Outbound Task Timeout (1us incr)");
u16 ssp_max_occ_to = 20;
module_param(ssp_max_occ_to, ushort, 0);
MODULE_PARM_DESC(ssp_max_occ_to, "SSP Max occupancy timeout (100us incr)");
u16 stp_max_occ_to = 5;
module_param(stp_max_occ_to, ushort, 0);
MODULE_PARM_DESC(stp_max_occ_to, "STP Max occupancy timeout (100us incr)");
u16 ssp_inactive_to = 5;
module_param(ssp_inactive_to, ushort, 0);
MODULE_PARM_DESC(ssp_inactive_to, "SSP inactivity timeout (100us incr)");
u16 stp_inactive_to = 5;
module_param(stp_inactive_to, ushort, 0);
MODULE_PARM_DESC(stp_inactive_to, "STP inactivity timeout (100us incr)");
unsigned char phy_gen = 3;
module_param(phy_gen, byte, 0);
MODULE_PARM_DESC(phy_gen, "PHY generation (1: 1.5Gbps 2: 3.0Gbps 3: 6.0Gbps)");
unsigned char max_concurr_spinup = 1;
module_param(max_concurr_spinup, byte, 0);
MODULE_PARM_DESC(max_concurr_spinup, "Max concurrent device spinup");
static struct scsi_host_template isci_sht = ;
static struct sas_domain_function_template isci_transport_ops  = ;
static int isci_register_sas_ha(struct isci_host *isci_host)
static ssize_t isci_show_id(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(isci_id, S_IRUGO, isci_show_id, NULL);
static void isci_unregister(struct isci_host *isci_host)
static int __devinit isci_pci_init(struct pci_dev *pdev)
static int num_controllers(struct pci_dev *pdev)
static int isci_setup_interrupts(struct pci_dev *pdev)
static struct isci_host *isci_host_alloc(struct pci_dev *pdev, int id)
static int __devinit isci_pci_probe(struct pci_dev *pdev, const struct pci_device_id *id)
static void __devexit isci_pci_remove(struct pci_dev *pdev)
static struct pci_driver isci_pci_driver = ;
static __init int isci_init(void)
static __exit void isci_exit(void)
MODULE_LICENSE("Dual BSD/GPL");
MODULE_FIRMWARE(ISCI_FW_NAME);
module_init(isci_init);
module_exit(isci_exit);
