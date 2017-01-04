#define ATH79_SYS_TYPE_LEN	64
#define AR71XX_BASE_FREQ	40000000
#define AR724X_BASE_FREQ	5000000
#define AR913X_BASE_FREQ	5000000
static char ath79_sys_type[ATH79_SYS_TYPE_LEN];
static void ath79_restart(char *command)
static void ath79_halt(void)
static void __init ath79_detect_mem_size(void)
static void __init ath79_detect_sys_type(void)
const char *get_system_type(void)
unsigned int __cpuinit get_c0_compare_int(void)
void __init plat_mem_setup(void)
void __init plat_time_init(void)
static int __init ath79_setup(void)
arch_initcall(ath79_setup);
static void __init ath79_generic_init(void)
MIPS_MACHINE(ATH79_MACH_GENERIC,
"Generic",
"Generic AR71XX/AR724X/AR913X based board",
ath79_generic_init);
