static unsigned int bt878_verbose = 1;
static unsigned int bt878_debug;
module_param_named(verbose, bt878_verbose, int, 0444);
MODULE_PARM_DESC(verbose,
"verbose startup messages, default is 1 (yes)");
module_param_named(debug, bt878_debug, int, 0644);
MODULE_PARM_DESC(debug, "Turn on/off debugging, default is 0 (off).");
int bt878_num;
struct bt878 bt878[BT878_MAX];
EXPORT_SYMBOL(bt878_num);
EXPORT_SYMBOL(bt878);
#define btwrite(dat,adr)    bmtwrite((dat), (bt->bt878_mem+(adr)))
#define btread(adr)         bmtread(bt->bt878_mem+(adr))
#define btand(dat,adr)      btwrite((dat) & btread(adr), adr)
#define btor(dat,adr)       btwrite((dat) | btread(adr), adr)
#define btaor(dat,mask,adr) btwrite((dat) | ((mask) & btread(adr)), adr)
#if defined(dprintk)
#undef dprintk
#define dprintk(fmt, arg...) \
do  while (0)
static void bt878_mem_free(struct bt878 *bt)
static int bt878_mem_alloc(struct bt878 *bt)
#define RISC_WRITE		(0x01 << 28)
#define RISC_JUMP		(0x07 << 28)
#define RISC_SYNC		(0x08 << 28)
#define RISC_WR_SOL		(1 << 27)
#define RISC_WR_EOL		(1 << 26)
#define RISC_IRQ		(1 << 24)
#define RISC_STATUS(status)	((((~status) & 0x0F) << 20) | ((status & 0x0F) << 16))
#define RISC_SYNC_RESYNC	(1 << 15)
#define RISC_SYNC_FM1		0x06
#define RISC_SYNC_VRO		0x0C
#define RISC_FLUSH()		bt->risc_pos = 0
#define RISC_INSTR(instr)	bt->risc_cpu[bt->risc_pos++] = cpu_to_le32(instr)
static int bt878_make_risc(struct bt878 *bt)
static void bt878_risc_program(struct bt878 *bt, u32 op_sync_orin)
void bt878_start(struct bt878 *bt, u32 controlreg, u32 op_sync_orin,
u32 irq_err_ignore)
void bt878_stop(struct bt878 *bt)
EXPORT_SYMBOL(bt878_start);
EXPORT_SYMBOL(bt878_stop);
static irqreturn_t bt878_irq(int irq, void *dev_id)
int
bt878_device_control(struct bt878 *bt, unsigned int cmd, union dst_gpio_packet *mp)
EXPORT_SYMBOL(bt878_device_control);
#define BROOKTREE_878_DEVICE(vend, dev, name) \
static struct pci_device_id bt878_pci_tbl[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci, bt878_pci_tbl);
static const char * __devinit card_name(const struct pci_device_id *id)
static int __devinit bt878_probe(struct pci_dev *dev,
const struct pci_device_id *pci_id)
static void __devexit bt878_remove(struct pci_dev *pci_dev)
static struct pci_driver bt878_pci_driver = ;
static int __init bt878_init_module(void)
static void __exit bt878_cleanup_module(void)
module_init(bt878_init_module);
module_exit(bt878_cleanup_module);
MODULE_LICENSE("GPL");
