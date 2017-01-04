#undef PDC_CHASSIS_DEBUG
#define DPRINTK(fmt, args...)	printk(fmt, ## args)
#define DPRINTK(fmt, args...)
#define PDC_CHASSIS_VER	"0.05"
static unsigned int pdc_chassis_enabled __read_mostly = 1;
static int __init pdc_chassis_setup(char *str)
__setup("pdcchassis=", pdc_chassis_setup);
static int pdc_chassis_panic_event(struct notifier_block *this,
unsigned long event, void *ptr)
static struct notifier_block pdc_chassis_panic_block = ;
static int pdc_chassis_reboot_event(struct notifier_block *this,
unsigned long event, void *ptr)
static struct notifier_block pdc_chassis_reboot_block = ;
void __init parisc_pdc_chassis_init(void)
int pdc_chassis_send_status(int message)
static int pdc_chassis_warn_pread(char *page, char **start, off_t off,
int count, int *eof, void *data)
static int __init pdc_chassis_create_procfs(void)
__initcall(pdc_chassis_create_procfs);
