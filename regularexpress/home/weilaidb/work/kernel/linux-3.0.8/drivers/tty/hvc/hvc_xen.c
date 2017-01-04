#define HVC_COOKIE   0x58656e
static struct hvc_struct *hvc;
static int xencons_irq;
static unsigned long console_pfn = ~0ul;
static inline struct xencons_interface *xencons_interface(void)
static inline void notify_daemon(void)
static int __write_console(const char *data, int len)
static int domU_write_console(uint32_t vtermno, const char *data, int len)
static int domU_read_console(uint32_t vtermno, char *buf, int len)
static struct hv_ops domU_hvc_ops = ;
static int dom0_read_console(uint32_t vtermno, char *buf, int len)
static int dom0_write_console(uint32_t vtermno, const char *str, int len)
static struct hv_ops dom0_hvc_ops = ;
static int __init xen_hvc_init(void)
void xen_console_resume(void)
static void __exit xen_hvc_fini(void)
static int xen_cons_init(void)
module_init(xen_hvc_init);
module_exit(xen_hvc_fini);
console_initcall(xen_cons_init);
static void xenboot_write_console(struct console *console, const char *string,
unsigned len)
struct console xenboot_console = ;
void xen_raw_console_write(const char *str)
void xen_raw_printk(const char *fmt, ...)
