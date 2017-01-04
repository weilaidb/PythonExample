static char *revision = "$Revision: 1.1.2.2 $";
MODULE_DESCRIPTION("CAPI4Linux: Common support for active AVM cards");
MODULE_AUTHOR("Carsten Paeth");
MODULE_LICENSE("GPL");
int b1_irq_table[16] =
;
avmcard *b1_alloc_card(int nr_controllers)
void b1_free_card(avmcard *card)
int b1_detect(unsigned int base, enum avmcardtype cardtype)
void b1_getrevision(avmcard *card)
#define FWBUF_SIZE	256
int b1_load_t4file(avmcard *card, capiloaddatapart * t4file)
int b1_load_config(avmcard *card, capiloaddatapart * config)
int b1_loaded(avmcard *card)
int b1_load_firmware(struct capi_ctr *ctrl, capiloaddata *data)
void b1_reset_ctr(struct capi_ctr *ctrl)
void b1_register_appl(struct capi_ctr *ctrl,
u16 appl,
capi_register_params *rp)
void b1_release_appl(struct capi_ctr *ctrl, u16 appl)
u16 b1_send_message(struct capi_ctr *ctrl, struct sk_buff *skb)
void b1_parse_version(avmctrl_info *cinfo)
irqreturn_t b1_interrupt(int interrupt, void *devptr)
static int b1ctl_proc_show(struct seq_file *m, void *v)
static int b1ctl_proc_open(struct inode *inode, struct file *file)
const struct file_operations b1ctl_proc_fops = ;
EXPORT_SYMBOL(b1ctl_proc_fops);
avmcard_dmainfo *
avmcard_dma_alloc(char *name, struct pci_dev *pdev, long rsize, long ssize)
void avmcard_dma_free(avmcard_dmainfo *p)
EXPORT_SYMBOL(avmcard_dma_alloc);
EXPORT_SYMBOL(avmcard_dma_free);
EXPORT_SYMBOL(b1_irq_table);
EXPORT_SYMBOL(b1_alloc_card);
EXPORT_SYMBOL(b1_free_card);
EXPORT_SYMBOL(b1_detect);
EXPORT_SYMBOL(b1_getrevision);
EXPORT_SYMBOL(b1_load_t4file);
EXPORT_SYMBOL(b1_load_config);
EXPORT_SYMBOL(b1_loaded);
EXPORT_SYMBOL(b1_load_firmware);
EXPORT_SYMBOL(b1_reset_ctr);
EXPORT_SYMBOL(b1_register_appl);
EXPORT_SYMBOL(b1_release_appl);
EXPORT_SYMBOL(b1_send_message);
EXPORT_SYMBOL(b1_parse_version);
EXPORT_SYMBOL(b1_interrupt);
static int __init b1_init(void)
static void __exit b1_exit(void)
module_init(b1_init);
module_exit(b1_exit);
