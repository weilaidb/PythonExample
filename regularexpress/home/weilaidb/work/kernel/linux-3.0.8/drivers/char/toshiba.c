#define TOSH_VERSION "1.11 26/9/2001"
#define TOSH_DEBUG 0
#define TOSH_MINOR_DEV 181
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Jonathan Buzzard <jonathan@buzzard.org.uk>");
MODULE_DESCRIPTION("Toshiba laptop SMM driver");
MODULE_SUPPORTED_DEVICE("toshiba");
static DEFINE_MUTEX(tosh_mutex);
static int tosh_fn;
module_param_named(fn, tosh_fn, int, 0);
MODULE_PARM_DESC(fn, "User specified Fn key detection port");
static int tosh_id;
static int tosh_bios;
static int tosh_date;
static int tosh_sci;
static int tosh_fan;
static long tosh_ioctl(struct file *, unsigned int,
unsigned long);
static const struct file_operations tosh_fops = ;
static struct miscdevice tosh_device = ;
static int tosh_fn_status(void)
static int tosh_emulate_fan(SMMRegisters *regs)
int tosh_smm(SMMRegisters *regs)
EXPORT_SYMBOL(tosh_smm);
static long tosh_ioctl(struct file *fp, unsigned int cmd, unsigned long arg)
static int proc_toshiba_show(struct seq_file *m, void *v)
static int proc_toshiba_open(struct inode *inode, struct file *file)
static const struct file_operations proc_toshiba_fops = ;
static void tosh_set_fn_port(void)
static int tosh_get_machine_id(void __iomem *bios)
static int tosh_probe(void)
static int __init toshiba_init(void)
static void __exit toshiba_exit(void)
module_init(toshiba_init);
module_exit(toshiba_exit);
