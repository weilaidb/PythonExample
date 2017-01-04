#define pr_fmt(fmt) "mmiotrace: " fmt
#define DEBUG 1
struct trap_reason ;
struct remap_trace ;
static DEFINE_PER_CPU(struct trap_reason, pf_reason);
static DEFINE_PER_CPU(struct mmiotrace_rw, cpu_trace);
static DEFINE_MUTEX(mmiotrace_mutex);
static DEFINE_SPINLOCK(trace_lock);
static atomic_t mmiotrace_enabled;
static LIST_HEAD(trace_list);
static unsigned long	filter_offset;
static int		nommiotrace;
static int		trace_pc;
module_param(filter_offset, ulong, 0);
module_param(nommiotrace, bool, 0);
module_param(trace_pc, bool, 0);
MODULE_PARM_DESC(filter_offset, "Start address of traced mappings.");
MODULE_PARM_DESC(nommiotrace, "Disable actual MMIO tracing.");
MODULE_PARM_DESC(trace_pc, "Record address of faulting instructions.");
static bool is_enabled(void)
static void print_pte(unsigned long address)
static void die_kmmio_nesting_error(struct pt_regs *regs, unsigned long addr)
static void pre(struct kmmio_probe *p, struct pt_regs *regs,
unsigned long addr)
static void post(struct kmmio_probe *p, unsigned long condition,
struct pt_regs *regs)
static void ioremap_trace_core(resource_size_t offset, unsigned long size,
void __iomem *addr)
void mmiotrace_ioremap(resource_size_t offset, unsigned long size,
void __iomem *addr)
static void iounmap_trace_core(volatile void __iomem *addr)
void mmiotrace_iounmap(volatile void __iomem *addr)
int mmiotrace_printk(const char *fmt, ...)
EXPORT_SYMBOL(mmiotrace_printk);
static void clear_trace_list(void)
static cpumask_var_t downed_cpus;
static void enter_uniprocessor(void)
static void __ref leave_uniprocessor(void)
static void enter_uniprocessor(void)
static void leave_uniprocessor(void)
void enable_mmiotrace(void)
void disable_mmiotrace(void)
