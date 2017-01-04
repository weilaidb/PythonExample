u16 _bfin_swrst;
EXPORT_SYMBOL(_bfin_swrst);
unsigned long memory_start, memory_end, physical_mem_end;
unsigned long _rambase, _ramstart, _ramend;
unsigned long reserved_mem_dcache_on;
unsigned long reserved_mem_icache_on;
EXPORT_SYMBOL(memory_start);
EXPORT_SYMBOL(memory_end);
EXPORT_SYMBOL(physical_mem_end);
EXPORT_SYMBOL(_ramend);
EXPORT_SYMBOL(reserved_mem_dcache_on);
extern struct map_info uclinux_ram_map;
unsigned long memory_mtd_end, memory_mtd_start, mtd_size;
unsigned long _ebss;
EXPORT_SYMBOL(memory_mtd_end);
EXPORT_SYMBOL(memory_mtd_start);
EXPORT_SYMBOL(mtd_size);
char __initdata command_line[COMMAND_LINE_SIZE];
void __initdata *init_retx, *init_saved_retx, *init_saved_seqstat,
*init_saved_icplb_fault_addr, *init_saved_dcplb_fault_addr;
#define BFIN_MEMMAP_MAX		128
#define BFIN_MEMMAP_RAM		1
#define BFIN_MEMMAP_RESERVED	2
static struct bfin_memmap  bfin_memmap __initdata;
struct change_member ;
static struct change_member change_point_list[2*BFIN_MEMMAP_MAX] __initdata;
static struct change_member *change_point[2*BFIN_MEMMAP_MAX] __initdata;
static struct bfin_memmap_entry *overlap_list[BFIN_MEMMAP_MAX] __initdata;
static struct bfin_memmap_entry new_map[BFIN_MEMMAP_MAX] __initdata;
DEFINE_PER_CPU(struct blackfin_cpudata, cpu_data);
static int early_init_clkin_hz(char *buf);
#if defined(CONFIG_BFIN_DCACHE) || defined(CONFIG_BFIN_ICACHE)
void __init generate_cplb_tables(void)
void __cpuinit bfin_setup_caches(unsigned int cpu)
void __cpuinit bfin_setup_cpudata(unsigned int cpu)
void __init bfin_cache_init(void)
void __init bfin_relocate_l1_mem(void)
void __init bfin_relocate_coreb_l1_mem(void)
void __init bfin_relocate_xip_data(void)
static void __init add_memory_region(unsigned long long start,
unsigned long long size, int type)
static int __init sanitize_memmap(struct bfin_memmap_entry *map, int *pnr_map)
static void __init print_memory_map(char *who)
static __init int parse_memmap(char *arg)
static __init void parse_cmdline_early(char *cmdline_p)
static __init void memory_setup(void)
void __init find_min_max_pfn(void)
static __init void setup_bootmem_allocator(void)
#define EBSZ_TO_MEG(ebsz) \
()
static inline int __init get_mem_size(void)
__attribute__((weak))
void __init native_machine_early_platform_add_devices(void)
void __init setup_arch(char **cmdline_p)
{
u32 mmr;
unsigned long sclk, cclk;
native_machine_early_platform_add_devices();
enable_shadow_console();
if (unlikely(CPUID != bfin_cpuid()))
printk(KERN_ERR "ERROR: Not running on ADSP-%s: unknown CPUID 0x%04x Rev 0.%d\n",
CPU, bfin_cpuid(), bfin_revid());
conswitchp = &dummy_con;
#if defined(CONFIG_CMDLINE_BOOL)
strncpy(&command_line[0], CONFIG_CMDLINE, sizeof(command_line));
command_line[sizeof(command_line) - 1] = 0;
*cmdline_p = &command_line[0];
memcpy(boot_command_line, command_line, COMMAND_LINE_SIZE);
boot_command_line[COMMAND_LINE_SIZE - 1] = '\0';
memset(&bfin_memmap, 0, sizeof(bfin_memmap));
physical_mem_end = 0;
parse_cmdline_early(&command_line[0]);
if (_ramend == 0)
_ramend = get_mem_size() * 1024 * 1024;
if (physical_mem_end == 0)
physical_mem_end = _ramend;
memory_setup();
bfin_write_EBIU_AMBCTL0(AMBCTL0VAL);
bfin_write_EBIU_AMBCTL1(AMBCTL1VAL);
bfin_write_EBIU_AMGCTL(AMGCTLVAL);
bfin_write_EBIU_MBSCTL(CONFIG_EBIU_MBSCTLVAL);
bfin_write_EBIU_MODE(CONFIG_EBIU_MODEVAL);
bfin_write_EBIU_FCTL(CONFIG_EBIU_FCTLVAL);
bfin_write_PORTF_HYSTERESIS(HYST_PORTF_0_15);
bfin_write_PORTG_HYSTERESIS(HYST_PORTG_0_15);
bfin_write_PORTH_HYSTERESIS(HYST_PORTH_0_15);
bfin_write_MISCPORT_HYSTERESIS((bfin_read_MISCPORT_HYSTERESIS() &
~HYST_NONEGPIO_MASK) | HYST_NONEGPIO);
cclk = get_cclk();
sclk = get_sclk();
if ((ANOMALY_05000273 || ANOMALY_05000274) && (cclk >> 1) < sclk)
panic("ANOMALY 05000273 or 05000274: CCLK must be >= 2*SCLK");
if (ANOMALY_05000266)
mmr = bfin_read_TBUFCTL();
printk(KERN_INFO "Hardware Trace %s and %sabled\n",
(mmr & 0x1) ? "active" : "off",
(mmr & 0x2) ? "en" : "dis");
mmr = bfin_read_SYSCR();
printk(KERN_INFO "Boot Mode: %i\n", mmr & 0xF);
#if defined(CONFIG_BF53x) || defined(CONFIG_BF561) || \
defined(CONFIG_BF538) || defined(CONFIG_BF539)
_bfin_swrst = bfin_read_SWRST();
_bfin_swrst = mmr & ~0xf;
bfin_write_SWRST(_bfin_swrst & ~DOUBLE_FAULT);
bfin_write_SWRST(_bfin_swrst | DOUBLE_FAULT);
if (_bfin_swrst & SWRST_DBL_FAULT_A)
static int __init topology_init(void)
subsys_initcall(topology_init);
static u_long cached_clkin_hz = CONFIG_CLKIN_HZ;
static u_long get_clkin_hz(void)
static int __init early_init_clkin_hz(char *buf)
early_param("clkin_hz=", early_init_clkin_hz);
static u_long get_vco(void)
u_long get_cclk(void)
EXPORT_SYMBOL(get_cclk);
u_long get_sclk(void)
EXPORT_SYMBOL(get_sclk);
unsigned long sclk_to_usecs(unsigned long sclk)
EXPORT_SYMBOL(sclk_to_usecs);
unsigned long usecs_to_sclk(unsigned long usecs)
EXPORT_SYMBOL(usecs_to_sclk);
static int show_cpuinfo(struct seq_file *m, void *v)
static void *c_start(struct seq_file *m, loff_t *pos)
static void *c_next(struct seq_file *m, void *v, loff_t *pos)
static void c_stop(struct seq_file *m, void *v)
const struct seq_operations cpuinfo_op = ;
void __init cmdline_init(const char *r0)
