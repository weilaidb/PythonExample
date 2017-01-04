DEFINE_SPINLOCK(ns87303_lock);
EXPORT_SYMBOL(ns87303_lock);
struct screen_info screen_info = ;
static void
prom_console_write(struct console *con, const char *s, unsigned n)
unsigned long cmdline_memory_size = 0;
static struct console prom_early_console = ;
static void __init process_switch(char c)
static void __init boot_flags_init(char *commands)
extern unsigned short root_flags;
extern unsigned short root_dev;
extern unsigned short ram_flags;
#define RAMDISK_IMAGE_START_MASK	0x07FF
#define RAMDISK_PROMPT_FLAG		0x8000
#define RAMDISK_LOAD_FLAG		0x4000
extern int root_mountflags;
char reboot_command[COMMAND_LINE_SIZE];
static struct pt_regs fake_swapper_regs = ;
void __init per_cpu_patch(void)
void __init sun4v_patch(void)
static void __init popc_patch(void)
void __init boot_cpu_id_too_large(int cpu)
unsigned long sparc64_elf_hwcap = (HWCAP_SPARC_FLUSH | HWCAP_SPARC_STBAR |
HWCAP_SPARC_SWAP | HWCAP_SPARC_MULDIV |
HWCAP_SPARC_V9);
EXPORT_SYMBOL(sparc64_elf_hwcap);
static const char *hwcaps[] = ;
void cpucap_info(struct seq_file *m)
static void __init report_hwcaps(unsigned long caps)
static unsigned long __init mdesc_cpu_hwcap_list(void)
static void __init init_sparc64_elf_hwcap(void)
void __init setup_arch(char **cmdline_p)
extern int stop_a_enabled;
void sun_do_break(void)
EXPORT_SYMBOL(sun_do_break);
int stop_a_enabled = 1;
EXPORT_SYMBOL(stop_a_enabled);
