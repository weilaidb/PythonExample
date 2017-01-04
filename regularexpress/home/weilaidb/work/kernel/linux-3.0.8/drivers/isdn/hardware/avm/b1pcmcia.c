static char *revision = "$Revision: 1.1.2.2 $";
MODULE_DESCRIPTION("CAPI4Linux: Driver for AVM PCMCIA cards");
MODULE_AUTHOR("Carsten Paeth");
MODULE_LICENSE("GPL");
static void b1pcmcia_remove_ctr(struct capi_ctr *ctrl)
static LIST_HEAD(cards);
static char *b1pcmcia_procinfo(struct capi_ctr *ctrl);
static int b1pcmcia_add_card(unsigned int port, unsigned irq,
enum avmcardtype cardtype)
static char *b1pcmcia_procinfo(struct capi_ctr *ctrl)
int b1pcmcia_addcard_b1(unsigned int port, unsigned irq)
int b1pcmcia_addcard_m1(unsigned int port, unsigned irq)
int b1pcmcia_addcard_m2(unsigned int port, unsigned irq)
int b1pcmcia_delcard(unsigned int port, unsigned irq)
EXPORT_SYMBOL(b1pcmcia_addcard_b1);
EXPORT_SYMBOL(b1pcmcia_addcard_m1);
EXPORT_SYMBOL(b1pcmcia_addcard_m2);
EXPORT_SYMBOL(b1pcmcia_delcard);
static struct capi_driver capi_driver_b1pcmcia = ;
static int __init b1pcmcia_init(void)
static void __exit b1pcmcia_exit(void)
module_init(b1pcmcia_init);
module_exit(b1pcmcia_exit);
