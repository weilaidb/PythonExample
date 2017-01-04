unsigned long max_low_pfn_mapped;
unsigned long max_pfn_mapped;
RESERVE_BRK(dmi_alloc, 65536);
static __initdata unsigned long _brk_start = (unsigned long)__brk_base;
unsigned long _brk_end = (unsigned long)__brk_base;
int default_cpu_present_to_apicid(int mps_cpu)
int default_check_phys_apicid_present(int phys_apicid)
struct boot_params __initdata boot_params;
struct boot_params boot_params;
static struct resource data_resource = ;
static struct resource code_resource = ;
static struct resource bss_resource = ;
struct cpuinfo_x86 new_cpu_data __cpuinitdata = ;
struct cpuinfo_x86 boot_cpu_data __read_mostly = ;
EXPORT_SYMBOL(boot_cpu_data);
static void set_mca_bus(int x)
unsigned int def_to_bigsmp;
unsigned int machine_id;
unsigned int machine_submodel_id;
unsigned int BIOS_revision;
struct apm_info apm_info;
EXPORT_SYMBOL(apm_info);
#if defined(CONFIG_X86_SPEEDSTEP_SMI) || \
defined(CONFIG_X86_SPEEDSTEP_SMI_MODULE)
struct ist_info ist_info;
EXPORT_SYMBOL(ist_info);
struct ist_info ist_info;
struct cpuinfo_x86 boot_cpu_data __read_mostly = ;
EXPORT_SYMBOL(boot_cpu_data);
#if !defined(CONFIG_X86_PAE) || defined(CONFIG_X86_64)
unsigned long mmu_cr4_features;
unsigned long mmu_cr4_features = X86_CR4_PAE;
int bootloader_type, bootloader_version;
struct screen_info screen_info;
EXPORT_SYMBOL(screen_info);
struct edid_info edid_info;
EXPORT_SYMBOL_GPL(edid_info);
extern int root_mountflags;
unsigned long saved_video_mode;
#define RAMDISK_IMAGE_START_MASK	0x07FF
#define RAMDISK_PROMPT_FLAG		0x8000
#define RAMDISK_LOAD_FLAG		0x4000
static char __initdata command_line[COMMAND_LINE_SIZE];
static char __initdata builtin_cmdline[COMMAND_LINE_SIZE] = CONFIG_CMDLINE;
#if defined(CONFIG_EDD) || defined(CONFIG_EDD_MODULE)
struct edd edd;
EXPORT_SYMBOL(edd);
static inline void __init copy_edd(void)
static inline void __init copy_edd(void)
void * __init extend_brk(size_t size, size_t align)
static void __init init_gbpages(void)
static inline void init_gbpages(void)
static void __init cleanup_highmap(void)
static void __init reserve_brk(void)
#define MAX_MAP_CHUNK	(NR_FIX_BTMAPS << PAGE_SHIFT)
static void __init relocate_initrd(void)
static void __init reserve_initrd(void)
static void __init reserve_initrd(void)
static void __init parse_setup_data(void)
static void __init e820_reserve_setup_data(void)
static void __init memblock_x86_reserve_range_setup_data(void)
static inline unsigned long long get_total_mem(void)
# define CRASH_KERNEL_ADDR_MAX	(512 << 20)
# define CRASH_KERNEL_ADDR_MAX	(896 << 20)
static void __init reserve_crashkernel(void)
static void __init reserve_crashkernel(void)
static struct resource standard_io_resources[] = ;
void __init reserve_standard_io_resources(void)
static __init void reserve_ibft_region(void)
static unsigned reserve_low = CONFIG_X86_RESERVE_LOW << 10;
static void __init trim_bios_range(void)
static int __init parse_reservelow(char *p)
early_param("reservelow", parse_reservelow);
void __init setup_arch(char **cmdline_p)
static struct resource video_ram_resource = ;
void __init i386_reserve_resources(void)
