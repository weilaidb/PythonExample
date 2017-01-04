static void __init tx4927_pci_setup(void)
static void __init tx4937_pci_setup(void)
static void __init rbtx4927_arch_init(void)
static void __init rbtx4937_arch_init(void)
#define rbtx4927_arch_init NULL
#define rbtx4937_arch_init NULL
static void toshiba_rbtx4927_restart(char *command)
static void __init rbtx4927_clock_init(void);
static void __init rbtx4937_clock_init(void);
static void __init rbtx4927_mem_setup(void)
static void __init rbtx4927_clock_init(void)
static void __init rbtx4937_clock_init(void)
static void __init rbtx4927_time_init(void)
static void __init toshiba_rbtx4927_rtc_init(void)
static void __init rbtx4927_ne_init(void)
static void __init rbtx4927_mtd_init(void)
static void __init rbtx4927_gpioled_init(void)
static void __init rbtx4927_device_init(void)
struct txx9_board_vec rbtx4927_vec __initdata = ;
struct txx9_board_vec rbtx4937_vec __initdata = ;
