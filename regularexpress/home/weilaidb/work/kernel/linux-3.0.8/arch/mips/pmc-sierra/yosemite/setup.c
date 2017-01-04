unsigned char titan_ge_mac_addr_base[6] = ;
unsigned long cpu_clock_freq;
unsigned long yosemite_base;
static struct m48t37_rtc *m48t37_base;
void __init bus_error_init(void)
void read_persistent_clock(struct timespec *ts)
int rtc_mips_set_time(unsigned long tim)
void __init plat_time_init(void)
unsigned long ocd_base;
EXPORT_SYMBOL(ocd_base);
#define TITAN_UART_CLK		3686400
#define TITAN_SERIAL_BASE_BAUD	(TITAN_UART_CLK / 16)
#define TITAN_SERIAL_IRQ	4
#define TITAN_SERIAL_BASE	0xfd000008UL
static void __init py_map_ocd(void)
static void __init py_uart_setup(void)
static void __init py_rtc_setup(void)
static void __init py_late_time_init(void)
void __init plat_mem_setup(void)
