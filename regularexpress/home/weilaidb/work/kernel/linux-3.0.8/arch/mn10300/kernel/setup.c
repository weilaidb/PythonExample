struct mn10300_cpuinfo boot_cpu_data;
unsigned long pci_mem_start = 0x18000000;
char redboot_command_line[COMMAND_LINE_SIZE] =
"console=ttyS0,115200 root=/dev/mtdblock3 rw";
char __initdata redboot_platform_name[COMMAND_LINE_SIZE];
static struct resource code_resource = ;
static struct resource data_resource = ;
static unsigned long __initdata phys_memory_base;
static unsigned long __initdata phys_memory_end;
static unsigned long __initdata memory_end;
unsigned long memory_size;
struct thread_info *__current_ti = &init_thread_union.thread_info;
struct task_struct *__current = &init_task;
#define mn10300_known_cpus 5
static const char *const mn10300_cputypes[] = ;
static void __init parse_mem_cmdline(char **cmdline_p)
void __init setup_arch(char **cmdline_p)
void __init cpu_init(void)
static struct cpu cpu_devices[NR_CPUS];
static int __init topology_init(void)
subsys_initcall(topology_init);
static int show_cpuinfo(struct seq_file *m, void *v)
static void *c_start(struct seq_file *m, loff_t *pos)
static void *c_next(struct seq_file *m, void *v, loff_t *pos)
static void c_stop(struct seq_file *m, void *v)
const struct seq_operations cpuinfo_op = ;
