#define MEM_SIZE	(16*1024*1024)
struct stack  ____cacheline_aligned;
static struct stack stacks[NR_CPUS];
char elf_platform[ELF_PLATFORM_SIZE];
EXPORT_SYMBOL(elf_platform);
static char __initdata cmd_line[COMMAND_LINE_SIZE];
static char default_command_line[COMMAND_LINE_SIZE] __initdata = CONFIG_CMDLINE;
static struct resource mem_res[] = ;
#define kernel_code mem_res[0]
#define kernel_data mem_res[1]
static void __init setup_processor(void)
void cpu_init(void)
static int __init uc32_add_memory(unsigned long start, unsigned long size)
static int __init early_mem(char *p)
early_param("mem", early_mem);
static void __init
request_standard_resources(struct meminfo *mi)
static void (*init_machine)(void) __initdata;
static int __init customize_machine(void)
arch_initcall(customize_machine);
void __init setup_arch(char **cmdline_p)
static struct cpu cpuinfo_unicore;
static int __init topology_init(void)
subsys_initcall(topology_init);
static int __init proc_cpu_init(void)
fs_initcall(proc_cpu_init);
static int c_show(struct seq_file *m, void *v)
static void *c_start(struct seq_file *m, loff_t *pos)
static void *c_next(struct seq_file *m, void *v, loff_t *pos)
static void c_stop(struct seq_file *m, void *v)
const struct seq_operations cpuinfo_op = ;
