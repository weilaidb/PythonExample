struct screen_info screen_info = ;
extern unsigned long trapbase;
static void prom_sync_me(void)
static unsigned int boot_flags __initdata = 0;
#define BOOTME_DEBUG  0x1
unsigned long cmdline_memory_size __initdata = 0;
unsigned char boot_cpu_id = 0xff;
unsigned char boot_cpu_id4;
static void
prom_console_write(struct console *con, const char *s, unsigned n)
static struct console prom_early_console = ;
static void __init process_switch(char c)
static void __init boot_flags_init(char *commands)
extern void sun4c_probe_vac(void);
extern unsigned short root_flags;
extern unsigned short root_dev;
extern unsigned short ram_flags;
#define RAMDISK_IMAGE_START_MASK	0x07FF
#define RAMDISK_PROMPT_FLAG		0x8000
#define RAMDISK_LOAD_FLAG		0x4000
extern int root_mountflags;
char reboot_command[COMMAND_LINE_SIZE];
enum sparc_cpu sparc_cpu_model;
EXPORT_SYMBOL(sparc_cpu_model);
struct tt_entry *sparc_ttable;
struct pt_regs fake_swapper_regs;
void __init setup_arch(char **cmdline_p)
extern int stop_a_enabled;
void sun_do_break(void)
EXPORT_SYMBOL(sun_do_break);
int stop_a_enabled = 1;
static int __init topology_init(void)
subsys_initcall(topology_init);
