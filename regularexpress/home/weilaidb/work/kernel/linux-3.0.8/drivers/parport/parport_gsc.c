#undef DEBUG
MODULE_AUTHOR("Helge Deller <deller@gmx.de>");
MODULE_DESCRIPTION("HP-PARISC PC-style parallel port driver");
MODULE_SUPPORTED_DEVICE("integrated PC-style parallel port");
MODULE_LICENSE("GPL");
static int clear_epp_timeout(struct parport *pb)
void parport_gsc_init_state(struct pardevice *dev, struct parport_state *s)
void parport_gsc_save_state(struct parport *p, struct parport_state *s)
void parport_gsc_restore_state(struct parport *p, struct parport_state *s)
struct parport_operations parport_gsc_ops =
;
static int __devinit parport_SPP_supported(struct parport *pb)
static int __devinit parport_PS2_supported(struct parport *pb)
struct parport *__devinit parport_gsc_probe_port (unsigned long base,
unsigned long base_hi,
int irq, int dma,
struct pci_dev *dev)
#define PARPORT_GSC_OFFSET 0x800
static int __devinitdata parport_count;
static int __devinit parport_init_chip(struct parisc_device *dev)
static int __devexit parport_remove_chip(struct parisc_device *dev)
static struct parisc_device_id parport_tbl[] = ;
MODULE_DEVICE_TABLE(parisc, parport_tbl);
static struct parisc_driver parport_driver = ;
int __devinit parport_gsc_init(void)
static void __devexit parport_gsc_exit(void)
module_init(parport_gsc_init);
module_exit(parport_gsc_exit);
