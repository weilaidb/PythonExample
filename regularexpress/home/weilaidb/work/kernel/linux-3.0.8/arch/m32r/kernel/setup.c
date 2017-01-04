extern void init_mmu(void);
extern char _end[];
struct cpuinfo_m32r boot_cpu_data;
extern int rd_doload;
extern int rd_prompt;
extern int rd_image_start;
#if defined(CONFIG_VGA_CONSOLE)
struct screen_info screen_info = ;
extern int root_mountflags;
static char __initdata command_line[COMMAND_LINE_SIZE];
static struct resource data_resource = ;
static struct resource code_resource = ;
unsigned long memory_start;
unsigned long memory_end;
void __init setup_arch(char **);
int get_cpuinfo(char *);
static __inline__ void parse_mem_cmdline(char ** cmdline_p)
static unsigned long __init setup_memory(void)
extern unsigned long setup_memory(void);
void __init setup_arch(char **cmdline_p)
static struct cpu cpu_devices[NR_CPUS];
static int __init topology_init(void)
subsys_initcall(topology_init);
static int show_cpuinfo(struct seq_file *m, void *v)
static void *c_start(struct seq_file *m, loff_t *pos)
static void *c_next(struct seq_file *m, void *v, loff_t *pos)
static void c_stop(struct seq_file *m, void *v)
const struct seq_operations cpuinfo_op = ;
unsigned long cpu_initialized __initdata = 0;
#if defined(CONFIG_CHIP_VDEC2) || defined(CONFIG_CHIP_XNUX2)	\
|| defined(CONFIG_CHIP_M32700) || defined(CONFIG_CHIP_M32102) \
|| defined(CONFIG_CHIP_OPSP) || defined(CONFIG_CHIP_M32104)
void __init cpu_init (void)
