static char *revision = "$Revision: 1.1.2.3 $";
MODULE_DESCRIPTION("CAPI4Linux: Driver for AVM T1 HEMA ISA card");
MODULE_AUTHOR("Carsten Paeth");
MODULE_LICENSE("GPL");
static int hema_irq_table[16] =
;
static int t1_detectandinit(unsigned int base, unsigned irq, int cardnr)
static irqreturn_t t1isa_interrupt(int interrupt, void *devptr)
static int t1isa_load_firmware(struct capi_ctr *ctrl, capiloaddata *data)
static void t1isa_reset_ctr(struct capi_ctr *ctrl)
static void t1isa_remove(struct pci_dev *pdev)
static u16 t1isa_send_message(struct capi_ctr *ctrl, struct sk_buff *skb);
static char *t1isa_procinfo(struct capi_ctr *ctrl);
static int t1isa_probe(struct pci_dev *pdev, int cardnr)
static u16 t1isa_send_message(struct capi_ctr *ctrl, struct sk_buff *skb)
static char *t1isa_procinfo(struct capi_ctr *ctrl)
#define MAX_CARDS 4
static struct pci_dev isa_dev[MAX_CARDS];
static int io[MAX_CARDS];
static int irq[MAX_CARDS];
static int cardnr[MAX_CARDS];
module_param_array(io, int, NULL, 0);
module_param_array(irq, int, NULL, 0);
module_param_array(cardnr, int, NULL, 0);
MODULE_PARM_DESC(io, "I/O base address(es)");
MODULE_PARM_DESC(irq, "IRQ number(s) (assigned)");
MODULE_PARM_DESC(cardnr, "Card number(s) (as jumpered)");
static int t1isa_add_card(struct capi_driver *driver, capicardparams *data)
static struct capi_driver capi_driver_t1isa = ;
static int __init t1isa_init(void)
static void __exit t1isa_exit(void)
module_init(t1isa_init);
module_exit(t1isa_exit);
