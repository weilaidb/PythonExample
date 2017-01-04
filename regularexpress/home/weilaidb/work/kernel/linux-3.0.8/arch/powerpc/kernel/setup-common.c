#undef DEBUG
#define DBG(fmt...) udbg_printf(fmt)
#define DBG(fmt...)
struct machdep_calls ppc_md;
EXPORT_SYMBOL(ppc_md);
struct machdep_calls *machine_id;
EXPORT_SYMBOL(machine_id);
unsigned long klimit = (unsigned long) _end;
char cmd_line[COMMAND_LINE_SIZE];
struct screen_info screen_info = ;
int of_i8042_kbd_irq;
EXPORT_SYMBOL_GPL(of_i8042_kbd_irq);
int of_i8042_aux_irq;
EXPORT_SYMBOL_GPL(of_i8042_aux_irq);
int ppc_do_canonicalize_irqs;
EXPORT_SYMBOL(ppc_do_canonicalize_irqs);
void machine_shutdown(void)
void machine_restart(char *cmd)
void machine_power_off(void)
EXPORT_SYMBOL_GPL(machine_power_off);
void (*pm_power_off)(void) = machine_power_off;
EXPORT_SYMBOL_GPL(pm_power_off);
void machine_halt(void)
extern u32 cpu_temp(unsigned long cpu);
extern u32 cpu_temp_both(unsigned long cpu);
DEFINE_PER_CPU(unsigned int, cpu_pvr);
static void show_cpuinfo_summary(struct seq_file *m)
static int show_cpuinfo(struct seq_file *m, void *v)
static void *c_start(struct seq_file *m, loff_t *pos)
static void *c_next(struct seq_file *m, void *v, loff_t *pos)
static void c_stop(struct seq_file *m, void *v)
const struct seq_operations cpuinfo_op = ;
void __init check_for_initrd(void)
int threads_per_core, threads_shift;
cpumask_t threads_core_mask;
static void __init cpu_init_thread_core_maps(int tpc)
void __init smp_setup_cpu_maps(void)
static __init int add_pcspkr(void)
device_initcall(add_pcspkr);
void probe_machine(void)
int check_legacy_ioport(unsigned long base_port)
EXPORT_SYMBOL(check_legacy_ioport);
static int ppc_panic_event(struct notifier_block *this,
unsigned long event, void *ptr)
static struct notifier_block ppc_panic_block = ;
void __init setup_panic(void)
#define KERNEL_COHERENCY	0
#define KERNEL_COHERENCY	1
static int __init check_cache_coherency(void)
late_initcall(check_cache_coherency);
struct dentry *powerpc_debugfs_root;
EXPORT_SYMBOL(powerpc_debugfs_root);
static int powerpc_debugfs_init(void)
arch_initcall(powerpc_debugfs_init);
static int ppc_dflt_bus_notify(struct notifier_block *nb,
unsigned long action, void *data)
static struct notifier_block ppc_dflt_plat_bus_notifier = ;
static int __init setup_bus_notifier(void)
arch_initcall(setup_bus_notifier);
