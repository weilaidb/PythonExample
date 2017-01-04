#define KMSG_COMPONENT "setup"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
long psw_kernel_bits	= (PSW_BASE_BITS | PSW_MASK_DAT | PSW_ASC_PRIMARY |
PSW_MASK_MCHECK | PSW_DEFAULT_KEY);
long psw_user_bits	= (PSW_BASE_BITS | PSW_MASK_DAT | PSW_ASC_HOME |
PSW_MASK_IO | PSW_MASK_EXT | PSW_MASK_MCHECK |
PSW_MASK_PSTATE | PSW_DEFAULT_KEY);
struct uaccess_ops uaccess;
EXPORT_SYMBOL(uaccess);
unsigned int console_mode = 0;
EXPORT_SYMBOL(console_mode);
unsigned int console_devno = -1;
EXPORT_SYMBOL(console_devno);
unsigned int console_irq = -1;
EXPORT_SYMBOL(console_irq);
unsigned long elf_hwcap = 0;
char elf_platform[ELF_PLATFORM_SIZE];
struct mem_chunk __initdata memory_chunk[MEMORY_CHUNKS];
int __initdata memory_end_set;
unsigned long __initdata memory_end;
struct _lowcore *lowcore_ptr[NR_CPUS];
EXPORT_SYMBOL(lowcore_ptr);
static int __init condev_setup(char *str)
__setup("condev=", condev_setup);
static void __init set_preferred_console(void)
static int __init conmode_setup(char *str)
__setup("conmode=", conmode_setup);
static void __init conmode_default(void)
static void __init setup_zfcpdump(unsigned int console_devno)
static inline void setup_zfcpdump(unsigned int console_devno)
void machine_restart(char *command)
void machine_halt(void)
void machine_power_off(void)
void (*pm_power_off)(void) = machine_power_off;
static int __init early_parse_mem(char *p)
early_param("mem", early_parse_mem);
unsigned int user_mode = HOME_SPACE_MODE;
EXPORT_SYMBOL_GPL(user_mode);
static int set_amode_and_uaccess(unsigned long user_amode,
unsigned long user32_amode)
static int __init early_parse_switch_amode(char *p)
early_param("switch_amode", early_parse_switch_amode);
static int __init early_parse_user_mode(char *p)
early_param("user_mode", early_parse_user_mode);
static void setup_addressing_mode(void)
static void __init
setup_lowcore(void)
static struct resource code_resource = ;
static struct resource data_resource = ;
static struct resource bss_resource = ;
static struct resource __initdata *standard_resources[] = ;
static void __init setup_resources(void)
unsigned long real_memory_size;
EXPORT_SYMBOL_GPL(real_memory_size);
static void __init setup_memory_end(void)
static void __init
setup_memory(void)
static void __init setup_hwcaps(void)
void __init
setup_arch(char **cmdline_p)
