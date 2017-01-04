#define DEFAULT_COMMAND_LINE "root=98:0"
static char __initdata command_line[COMMAND_LINE_SIZE] = ;
static void __init add_arg(char *arg)
struct cpuinfo_um boot_cpu_data = ;
unsigned long thread_saved_pc(struct task_struct *task)
static char host_info[(__NEW_UTS_LEN + 1) * 5];
static int show_cpuinfo(struct seq_file *m, void *v)
static void *c_start(struct seq_file *m, loff_t *pos)
static void *c_next(struct seq_file *m, void *v, loff_t *pos)
static void c_stop(struct seq_file *m, void *v)
const struct seq_operations cpuinfo_op = ;
unsigned long uml_physmem;
unsigned long uml_reserved;
unsigned long start_vm;
unsigned long end_vm;
int ncpus = 1;
static int have_root __initdata = 0;
long long physmem_size = 32 * 1024 * 1024;
static const char *usage_string =
"User Mode Linux v%s\n"
"	available at http:
static int __init uml_version_setup(char *line, int *add)
__uml_setup("--version", uml_version_setup,
"--version\n"
"    Prints the version number of the kernel.\n\n"
);
static int __init uml_root_setup(char *line, int *add)
__uml_setup("root=", uml_root_setup,
"root=<file containing the root fs>\n"
"    This is actually used by the generic kernel in exactly the same\n"
"    way as in any other kernel. If you configure a number of block\n"
"    devices and want to boot off something other than ubd0, you \n"
"    would use something like:\n"
"        root=/dev/ubd5\n\n"
);
static int __init no_skas_debug_setup(char *line, int *add)
__uml_setup("debug", no_skas_debug_setup,
"debug\n"
"    this flag is not needed to run gdb on UML in skas mode\n\n"
);
static int __init uml_ncpus_setup(char *line, int *add)
__uml_setup("ncpus=", uml_ncpus_setup,
"ncpus=<# of desired CPUs>\n"
"    This tells an SMP kernel how many virtual processors to start.\n\n"
);
static int __init Usage(char *line, int *add)
__uml_setup("--help", Usage,
"--help\n"
"    Prints this message.\n\n"
);
static void __init uml_checksetup(char *line, int *add)
static void __init uml_postsetup(void)
static int panic_exit(struct notifier_block *self, unsigned long unused1,
void *unused2)
static struct notifier_block panic_exit_notifier = ;
unsigned long task_size;
EXPORT_SYMBOL(task_size);
unsigned long host_task_size;
unsigned long brk_start;
unsigned long end_iomem;
EXPORT_SYMBOL(end_iomem);
#define MIN_VMALLOC (32 * 1024 * 1024)
extern char __binary_start;
int __init linux_main(int argc, char **argv)
void __init setup_arch(char **cmdline_p)
void __init check_bugs(void)
void apply_alternatives(struct alt_instr *start, struct alt_instr *end)
void alternatives_smp_module_add(struct module *mod, char *name,
void *locks, void *locks_end,
void *text,  void *text_end)
void alternatives_smp_module_del(struct module *mod)
