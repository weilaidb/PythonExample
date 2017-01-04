static char *revision = "$Revision: 1.1.2.3 $";
MODULE_DESCRIPTION("CAPI4Linux: Driver for AVM B1 ISA card");
MODULE_AUTHOR("Carsten Paeth");
MODULE_LICENSE("GPL");
static void b1isa_remove(struct pci_dev *pdev)
static char *b1isa_procinfo(struct capi_ctr *ctrl);
static int b1isa_probe(struct pci_dev *pdev)
static char *b1isa_procinfo(struct capi_ctr *ctrl)
#define MAX_CARDS 4
static struct pci_dev isa_dev[MAX_CARDS];
static int io[MAX_CARDS];
static int irq[MAX_CARDS];
module_param_array(io, int, NULL, 0);
module_param_array(irq, int, NULL, 0);
MODULE_PARM_DESC(io, "I/O base address(es)");
MODULE_PARM_DESC(irq, "IRQ number(s) (assigned)");
static int b1isa_add_card(struct capi_driver *driver, capicardparams *data)
static struct capi_driver capi_driver_b1isa = ;
static int __init b1isa_init(void)
static void __exit b1isa_exit(void)
module_init(b1isa_init);
module_exit(b1isa_exit);
