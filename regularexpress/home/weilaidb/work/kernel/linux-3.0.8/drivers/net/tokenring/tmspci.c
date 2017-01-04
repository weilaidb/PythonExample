static char version[] __devinitdata =
"tmspci.c: v1.02 23/11/2000 by Adam Fritzler\n";
#define TMS_PCI_IO_EXTENT 32
struct card_info ;
static struct card_info card_info_table[] = ;
static DEFINE_PCI_DEVICE_TABLE(tmspci_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, tmspci_pci_tbl);
MODULE_LICENSE("GPL");
static void tms_pci_read_eeprom(struct net_device *dev);
static unsigned short tms_pci_setnselout_pins(struct net_device *dev);
static unsigned short tms_pci_sifreadb(struct net_device *dev, unsigned short reg)
static unsigned short tms_pci_sifreadw(struct net_device *dev, unsigned short reg)
static void tms_pci_sifwriteb(struct net_device *dev, unsigned short val, unsigned short reg)
static void tms_pci_sifwritew(struct net_device *dev, unsigned short val, unsigned short reg)
static int __devinit tms_pci_attach(struct pci_dev *pdev, const struct pci_device_id *ent)
static void tms_pci_read_eeprom(struct net_device *dev)
static unsigned short tms_pci_setnselout_pins(struct net_device *dev)
static void __devexit tms_pci_detach (struct pci_dev *pdev)
static struct pci_driver tms_pci_driver = ;
static int __init tms_pci_init (void)
static void __exit tms_pci_rmmod (void)
module_init(tms_pci_init);
module_exit(tms_pci_rmmod);
