#define GHES_PFX	"GHES: "
#define GHES_ESTATUS_MAX_SIZE		65536
#define GHES_TO_CLEAR		0x0001
#define GHES_EXITING		0x0002
struct ghes ;
static int ghes_panic_timeout	__read_mostly = 30;
static LIST_HEAD(ghes_sci);
static LIST_HEAD(ghes_nmi);
static DEFINE_MUTEX(ghes_list_mutex);
static DEFINE_RAW_SPINLOCK(ghes_nmi_lock);
#define GHES_IOREMAP_PAGES		2
#define GHES_IOREMAP_NMI_PAGE(base)	(base)
#define GHES_IOREMAP_IRQ_PAGE(base)	((base) + PAGE_SIZE)
static struct vm_struct *ghes_ioremap_area;
static DEFINE_RAW_SPINLOCK(ghes_ioremap_lock_nmi);
static DEFINE_SPINLOCK(ghes_ioremap_lock_irq);
static int ghes_ioremap_init(void)
static void ghes_ioremap_exit(void)
static void __iomem *ghes_ioremap_pfn_nmi(u64 pfn)
static void __iomem *ghes_ioremap_pfn_irq(u64 pfn)
static void ghes_iounmap_nmi(void __iomem *vaddr_ptr)
static void ghes_iounmap_irq(void __iomem *vaddr_ptr)
static struct ghes *ghes_new(struct acpi_hest_generic *generic)
static void ghes_fini(struct ghes *ghes)
enum ;
static inline int ghes_severity(int severity)
static void ghes_copy_tofrom_phys(void *buffer, u64 paddr, u32 len,
int from_phys)
static int ghes_read_estatus(struct ghes *ghes, int silent)
static void ghes_clear_estatus(struct ghes *ghes)
static void ghes_do_proc(struct ghes *ghes)
static void ghes_print_estatus(const char *pfx, struct ghes *ghes)
static int ghes_proc(struct ghes *ghes)
static void ghes_add_timer(struct ghes *ghes)
static void ghes_poll_func(unsigned long data)
static irqreturn_t ghes_irq_func(int irq, void *data)
static int ghes_notify_sci(struct notifier_block *this,
unsigned long event, void *data)
static int ghes_notify_nmi(struct notifier_block *this,
unsigned long cmd, void *data)
static struct notifier_block ghes_notifier_sci = ;
static struct notifier_block ghes_notifier_nmi = ;
static int __devinit ghes_probe(struct platform_device *ghes_dev)
static int __devexit ghes_remove(struct platform_device *ghes_dev)
static struct platform_driver ghes_platform_driver = ;
static int __init ghes_init(void)
static void __exit ghes_exit(void)
module_init(ghes_init);
module_exit(ghes_exit);
MODULE_AUTHOR("Huang Ying");
MODULE_DESCRIPTION("APEI Generic Hardware Error Source support");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:GHES");
