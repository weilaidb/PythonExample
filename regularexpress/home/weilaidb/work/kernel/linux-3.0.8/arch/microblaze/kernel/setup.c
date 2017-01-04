DEFINE_PER_CPU(unsigned int, KSP);
DEFINE_PER_CPU(unsigned int, KM);
DEFINE_PER_CPU(unsigned int, ENTRY_SP);
DEFINE_PER_CPU(unsigned int, R11_SAVE);
DEFINE_PER_CPU(unsigned int, CURRENT_SAVE);
unsigned int boot_cpuid;
char cmd_line[COMMAND_LINE_SIZE];
void __init setup_arch(char **cmdline_p)
inline unsigned get_romfs_len(unsigned *addr)
void __init machine_early_init(const char *cmdline, unsigned int ram,
unsigned int fdt, unsigned int msr)
struct dentry *of_debugfs_root;
static int microblaze_debugfs_init(void)
arch_initcall(microblaze_debugfs_init);
static int dflt_bus_notify(struct notifier_block *nb,
unsigned long action, void *data)
static struct notifier_block dflt_plat_bus_notifier = ;
static int __init setup_bus_notifier(void)
arch_initcall(setup_bus_notifier);
