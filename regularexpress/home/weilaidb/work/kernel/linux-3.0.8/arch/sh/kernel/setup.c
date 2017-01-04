struct sh_cpuinfo cpu_data[NR_CPUS] __read_mostly = ;
EXPORT_SYMBOL(cpu_data);
struct sh_machine_vector sh_mv = ;
EXPORT_SYMBOL(sh_mv);
struct screen_info screen_info;
extern int root_mountflags;
#define RAMDISK_IMAGE_START_MASK	0x07FF
#define RAMDISK_PROMPT_FLAG		0x8000
#define RAMDISK_LOAD_FLAG		0x4000
static char __initdata command_line[COMMAND_LINE_SIZE] = ;
static struct resource code_resource = ;
static struct resource data_resource = ;
static struct resource bss_resource = ;
unsigned long memory_start;
EXPORT_SYMBOL(memory_start);
unsigned long memory_end = 0;
EXPORT_SYMBOL(memory_end);
unsigned long memory_limit = 0;
static struct resource mem_resources[MAX_NUMNODES];
int l1i_cache_shape, l1d_cache_shape, l2_cache_shape;
static int __init early_parse_mem(char *p)
early_param("mem", early_parse_mem);
void __init check_for_initrd(void)
void __cpuinit calibrate_delay(void)
void __init __add_active_range(unsigned int nid, unsigned long start_pfn,
unsigned long end_pfn)
void __init __weak plat_early_device_setup(void)
void __init setup_arch(char **cmdline_p)
int generic_mode_pins(void)
int test_mode_pin(int pin)
