#undef AVM_C4_DEBUG
#undef AVM_C4_POLLDEBUG
static char *revision = "$Revision: 1.1.2.2 $";
static int suppress_pollack;
static struct pci_device_id c4_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, c4_pci_tbl);
MODULE_DESCRIPTION("CAPI4Linux: Driver for AVM C2/C4 cards");
MODULE_AUTHOR("Carsten Paeth");
MODULE_LICENSE("GPL");
module_param(suppress_pollack, bool, 0);
static void c4_dispatch_tx(avmcard *card);
#define DC21285_DRAM_A0MR	0x40000000
#define DC21285_DRAM_A1MR	0x40004000
#define DC21285_DRAM_A2MR	0x40008000
#define DC21285_DRAM_A3MR	0x4000C000
#define	CAS_OFFSET	0x88
#define DC21285_ARMCSR_BASE	0x42000000
#define	PCI_OUT_INT_STATUS	0x30
#define	PCI_OUT_INT_MASK	0x34
#define	MAILBOX_0		0x50
#define	MAILBOX_1		0x54
#define	MAILBOX_2		0x58
#define	MAILBOX_3		0x5C
#define	DOORBELL		0x60
#define	DOORBELL_SETUP		0x64
#define CHAN_1_CONTROL		0x90
#define CHAN_2_CONTROL		0xB0
#define DRAM_TIMING		0x10C
#define DRAM_ADDR_SIZE_0	0x110
#define DRAM_ADDR_SIZE_1	0x114
#define DRAM_ADDR_SIZE_2	0x118
#define DRAM_ADDR_SIZE_3	0x11C
#define	SA_CONTROL		0x13C
#define	XBUS_CYCLE		0x148
#define	XBUS_STROBE		0x14C
#define	DBELL_PCI_MASK		0x150
#define DBELL_SA_MASK		0x154
#define SDRAM_SIZE		0x1000000
#define	MBOX_PEEK_POKE		MAILBOX_0
#define DBELL_ADDR		0x01
#define DBELL_DATA		0x02
#define DBELL_RNWR		0x40
#define DBELL_INIT		0x80
#define	MBOX_UP_ADDR		MAILBOX_0
#define	MBOX_UP_LEN		MAILBOX_1
#define	MBOX_DOWN_ADDR		MAILBOX_2
#define	MBOX_DOWN_LEN		MAILBOX_3
#define	DBELL_UP_HOST		0x00000100
#define	DBELL_UP_ARM		0x00000200
#define	DBELL_DOWN_HOST		0x00000400
#define	DBELL_DOWN_ARM		0x00000800
#define	DBELL_RESET_HOST	0x40000000
#define	DBELL_RESET_ARM		0x80000000
#define	DRAM_TIMING_DEF		0x001A01A5
#define DRAM_AD_SZ_DEF0		0x00000045
#define DRAM_AD_SZ_NULL		0x00000000
#define SA_CTL_ALLRIGHT		0x64AA0271
#define	INIT_XBUS_CYCLE		0x100016DB
#define	INIT_XBUS_STROBE	0xF1F1F1F1
#define	RESET_TIMEOUT		(15*HZ)
#define	PEEK_POKE_TIMEOUT	(HZ/10)
#define c4outmeml(addr, value)	writel(value, addr)
#define c4inmeml(addr)	readl(addr)
#define c4outmemw(addr, value)	writew(value, addr)
#define c4inmemw(addr)	readw(addr)
#define c4outmemb(addr, value)	writeb(value, addr)
#define c4inmemb(addr)	readb(addr)
static inline int wait_for_doorbell(avmcard *card, unsigned long t)
static int c4_poke(avmcard *card,  unsigned long off, unsigned long value)
static int c4_peek(avmcard *card,  unsigned long off, unsigned long *valuep)
static int c4_load_t4file(avmcard *card, capiloaddatapart * t4file)
static inline void _put_byte(void **pp, u8 val)
static inline void _put_word(void **pp, u32 val)
static inline void _put_slice(void **pp, unsigned char *dp, unsigned int len)
static inline u8 _get_byte(void **pp)
static inline u32 _get_word(void **pp)
static inline u32 _get_slice(void **pp, unsigned char *dp)
static void c4_reset(avmcard *card)
static int c4_detect(avmcard *card)
static void c4_dispatch_tx(avmcard *card)
static void queue_pollack(avmcard *card)
static void c4_handle_rx(avmcard *card)
static irqreturn_t c4_handle_interrupt(avmcard *card)
static irqreturn_t c4_interrupt(int interrupt, void *devptr)
static void c4_send_init(avmcard *card)
static int queue_sendconfigword(avmcard *card, u32 val)
static int queue_sendconfig(avmcard *card, char cval[4])
static int c4_send_config(avmcard *card, capiloaddatapart * config)
static int c4_load_firmware(struct capi_ctr *ctrl, capiloaddata *data)
static void c4_reset_ctr(struct capi_ctr *ctrl)
static void c4_remove(struct pci_dev *pdev)
static void c4_register_appl(struct capi_ctr *ctrl,
u16 appl,
capi_register_params *rp)
static void c4_release_appl(struct capi_ctr *ctrl, u16 appl)
static u16 c4_send_message(struct capi_ctr *ctrl, struct sk_buff *skb)
static char *c4_procinfo(struct capi_ctr *ctrl)
static int c4_proc_show(struct seq_file *m, void *v)
static int c4_proc_open(struct inode *inode, struct file *file)
static const struct file_operations c4_proc_fops = ;
static int c4_add_card(struct capicardparams *p, struct pci_dev *dev,
int nr_controllers)
static int __devinit c4_probe(struct pci_dev *dev,
const struct pci_device_id *ent)
static struct pci_driver c4_pci_driver = ;
static struct capi_driver capi_driver_c2 = ;
static struct capi_driver capi_driver_c4 = ;
static int __init c4_init(void)
static void __exit c4_exit(void)
module_init(c4_init);
module_exit(c4_exit);
