struct screen_info screen_info;
unsigned long kernelsp;
static char command_line[COMMAND_LINE_SIZE];
static struct resource code_resource = ;
static struct resource data_resource = ;
static void __init bootmem_init(void)
static void __init resource_init(void)
void __init setup_arch(char **cmdline_p)
static int show_cpuinfo(struct seq_file *m, void *v)
static void *c_start(struct seq_file *m, loff_t *pos)
static void *c_next(struct seq_file *m, void *v, loff_t *pos)
static void c_stop(struct seq_file *m, void *v)
const struct seq_operations cpuinfo_op = ;
static int __init topology_init(void)
subsys_initcall(topology_init);
