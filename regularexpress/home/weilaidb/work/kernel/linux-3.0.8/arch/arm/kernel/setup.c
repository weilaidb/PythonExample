#if defined(CONFIG_DEPRECATED_PARAM_STRUCT)
#define MEM_SIZE	(16*1024*1024)
#if defined(CONFIG_FPE_NWFPE) || defined(CONFIG_FPE_FASTFPE)
char fpe_type[8];
static int __init fpe_setup(char *line)
__setup("fpe=", fpe_setup);
extern void paging_init(struct machine_desc *desc);
extern void sanity_check_meminfo(void);
extern void reboot_setup(char *str);
unsigned int processor_id;
EXPORT_SYMBOL(processor_id);
unsigned int __machine_arch_type __read_mostly;
EXPORT_SYMBOL(__machine_arch_type);
unsigned int cacheid __read_mostly;
EXPORT_SYMBOL(cacheid);
unsigned int __atags_pointer __initdata;
unsigned int system_rev;
EXPORT_SYMBOL(system_rev);
unsigned int system_serial_low;
EXPORT_SYMBOL(system_serial_low);
unsigned int system_serial_high;
EXPORT_SYMBOL(system_serial_high);
unsigned int elf_hwcap __read_mostly;
EXPORT_SYMBOL(elf_hwcap);
struct processor processor __read_mostly;
struct cpu_tlb_fns cpu_tlb __read_mostly;
struct cpu_user_fns cpu_user __read_mostly;
struct cpu_cache_fns cpu_cache __read_mostly;
struct outer_cache_fns outer_cache __read_mostly;
EXPORT_SYMBOL(outer_cache);
struct stack  ____cacheline_aligned;
static struct stack stacks[NR_CPUS];
char elf_platform[ELF_PLATFORM_SIZE];
EXPORT_SYMBOL(elf_platform);
static const char *cpu_name;
static const char *machine_name;
static char __initdata cmd_line[COMMAND_LINE_SIZE];
struct machine_desc *machine_desc __initdata;
static char default_command_line[COMMAND_LINE_SIZE] __initdata = CONFIG_CMDLINE;
static union  endian_test __initdata = ;
#define ENDIANNESS ((char)endian_test.l)
DEFINE_PER_CPU(struct cpuinfo_arm, cpu_data);
static struct resource mem_res[] = ;
#define video_ram   mem_res[0]
#define kernel_code mem_res[1]
#define kernel_data mem_res[2]
static struct resource io_res[] = ;
#define lp0 io_res[0]
#define lp1 io_res[1]
#define lp2 io_res[2]
static const char *proc_arch[] = ;
int cpu_architecture(void)
static int cpu_has_aliasing_icache(unsigned int arch)
static void __init cacheid_init(void)
extern struct proc_info_list *lookup_processor_type(unsigned int);
void __init early_print(const char *str, ...)
static void __init feat_v6_fixup(void)
static void __init setup_processor(void)
void cpu_init(void)
void __init dump_machine_table(void)
int __init arm_add_memory(phys_addr_t start, unsigned long size)
static int __init early_mem(char *p)
early_param("mem", early_mem);
static void __init
setup_ramdisk(int doload, int prompt, int image_start, unsigned int rd_sz)
static void __init request_standard_resources(struct machine_desc *mdesc)
static int __init parse_tag_core(const struct tag *tag)
__tagtable(ATAG_CORE, parse_tag_core);
static int __init parse_tag_mem32(const struct tag *tag)
__tagtable(ATAG_MEM, parse_tag_mem32);
#if defined(CONFIG_VGA_CONSOLE) || defined(CONFIG_DUMMY_CONSOLE)
struct screen_info screen_info = ;
static int __init parse_tag_videotext(const struct tag *tag)
__tagtable(ATAG_VIDEOTEXT, parse_tag_videotext);
static int __init parse_tag_ramdisk(const struct tag *tag)
__tagtable(ATAG_RAMDISK, parse_tag_ramdisk);
static int __init parse_tag_serialnr(const struct tag *tag)
__tagtable(ATAG_SERIAL, parse_tag_serialnr);
static int __init parse_tag_revision(const struct tag *tag)
__tagtable(ATAG_REVISION, parse_tag_revision);
static int __init parse_tag_cmdline(const struct tag *tag)
__tagtable(ATAG_CMDLINE, parse_tag_cmdline);
static int __init parse_tag(const struct tag *tag)
static void __init parse_tags(const struct tag *t)
static struct init_tags  init_tags __initdata = ;
static int __init customize_machine(void)
arch_initcall(customize_machine);
static inline unsigned long long get_total_mem(void)
static void __init reserve_crashkernel(void)
static inline void reserve_crashkernel(void)
static void __init squash_mem_tags(struct tag *tag)
static struct machine_desc * __init setup_machine_tags(unsigned int nr)
void __init setup_arch(char **cmdline_p)
static int __init topology_init(void)
subsys_initcall(topology_init);
static int __init proc_cpu_init(void)
fs_initcall(proc_cpu_init);
static const char *hwcap_str[] = ;
static int c_show(struct seq_file *m, void *v)
static void *c_start(struct seq_file *m, loff_t *pos)
static void *c_next(struct seq_file *m, void *v, loff_t *pos)
static void c_stop(struct seq_file *m, void *v)
const struct seq_operations cpuinfo_op = ;
