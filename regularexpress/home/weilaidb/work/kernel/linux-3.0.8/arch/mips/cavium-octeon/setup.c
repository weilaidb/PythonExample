extern void cvmx_interrupt_rsl_decode(void);
extern int __cvmx_interrupt_ecc_report_single_bit_errors;
extern void cvmx_interrupt_rsl_enable(void);
extern struct plat_smp_ops octeon_smp_ops;
extern void pci_console_init(const char *arg);
static unsigned long long MAX_MEMORY = 512ull << 20;
struct octeon_boot_descriptor *octeon_boot_desc_ptr;
struct cvmx_bootinfo *octeon_bootinfo;
EXPORT_SYMBOL(octeon_bootinfo);
uint64_t octeon_reserve32_memory;
EXPORT_SYMBOL(octeon_reserve32_memory);
static int octeon_uart;
extern asmlinkage void handle_int(void);
extern asmlinkage void plat_irq_dispatch(void);
int octeon_is_simulation(void)
EXPORT_SYMBOL(octeon_is_simulation);
int octeon_is_pci_host(void)
uint64_t octeon_get_clock_rate(void)
EXPORT_SYMBOL(octeon_get_clock_rate);
static u64 octeon_io_clock_rate;
u64 octeon_get_io_clock_rate(void)
EXPORT_SYMBOL(octeon_get_io_clock_rate);
void octeon_write_lcd(const char *s)
int octeon_get_boot_uart(void)
int octeon_get_boot_coremask(void)
void octeon_check_cpu_bist(void)
static void octeon_restart(char *command)
static void octeon_kill_core(void *arg)
static void octeon_halt(void)
static irqreturn_t octeon_rlm_interrupt(int cpl, void *dev_id)
const char *octeon_board_type_string(void)
const char *get_system_type(void)
__attribute__ ((alias("octeon_board_type_string")));
void octeon_user_io_init(void)
void __init prom_init(void)
static __init void memory_exclude_page(u64 addr, u64 *mem, u64 *size)
void __init plat_mem_setup(void)
int prom_putchar(char c)
EXPORT_SYMBOL(prom_putchar);
void prom_free_prom_memory(void)
