#define PCI_VENDOR_ID_FORTEMEDIA	0x1319
#define PCI_DEVICE_ID_FM801_GP	0x0802
#define HAVE_COOKED
struct fm801_gp ;
static int fm801_gp_cooked_read(struct gameport *gameport, int *axes, int *buttons)
static int fm801_gp_open(struct gameport *gameport, int mode)
static int __devinit fm801_gp_probe(struct pci_dev *pci, const struct pci_device_id *id)
static void __devexit fm801_gp_remove(struct pci_dev *pci)
static const struct pci_device_id fm801_gp_id_table[] = ;
static struct pci_driver fm801_gp_driver = ;
static int __init fm801_gp_init(void)
static void __exit fm801_gp_exit(void)
module_init(fm801_gp_init);
module_exit(fm801_gp_exit);
MODULE_DEVICE_TABLE(pci, fm801_gp_id_table);
MODULE_DESCRIPTION("FM801 gameport driver");
MODULE_AUTHOR("Takashi Iwai <tiwai@suse.de>");
MODULE_LICENSE("GPL");
