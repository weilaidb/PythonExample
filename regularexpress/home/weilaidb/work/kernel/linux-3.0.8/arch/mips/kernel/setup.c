struct cpuinfo_mips cpu_data[NR_CPUS] __read_mostly;
EXPORT_SYMBOL(cpu_data);
struct screen_info screen_info;
unsigned int PCI_DMA_BUS_IS_PHYS;
EXPORT_SYMBOL(PCI_DMA_BUS_IS_PHYS);
unsigned long mips_machtype __read_mostly = MACH_UNKNOWN;
EXPORT_SYMBOL(mips_machtype);
struct boot_mem_map boot_mem_map;
static char __initdata command_line[COMMAND_LINE_SIZE];
char __initdata arcs_cmdline[COMMAND_LINE_SIZE];
static char __initdata builtin_cmdline[COMMAND_LINE_SIZE] = CONFIG_CMDLINE;
const unsigned long mips_io_port_base = -1;
EXPORT_SYMBOL(mips_io_port_base);
static struct resource code_resource = ;
static struct resource data_resource = ;
void __init add_memory_region(phys_t start, phys_t size, long type)
static void __init print_memory_map(void)
static int __init rd_start_early(char *p)
early_param("rd_start", rd_start_early);
static int __init rd_size_early(char *p)
early_param("rd_size", rd_size_early);
static unsigned long __init init_initrd(void)
static void __init finalize_initrd(void)
static unsigned long __init init_initrd(void)
#define finalize_initrd()	do  while (0)
static void __init bootmem_init(void)
static void __init bootmem_init(void)
static int usermem __initdata;
static int __init early_parse_mem(char *p)
early_param("mem", early_parse_mem);
static void __init arch_mem_init(char **cmdline_p)
static void __init resource_init(void)
void __init setup_arch(char **cmdline_p)
unsigned long kernelsp[NR_CPUS];
unsigned long fw_arg0, fw_arg1, fw_arg2, fw_arg3;
struct dentry *mips_debugfs_dir;
static int __init debugfs_mips(void)
arch_initcall(debugfs_mips);
