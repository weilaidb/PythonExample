unsigned long gt64120_base = KSEG1ADDR(0x14000000);
static volatile unsigned char * wrppmc_led = \
(volatile unsigned char *)KSEG1ADDR(WRPPMC_LED_BASE);
void wrppmc_led_on(int mask)
void wrppmc_led_off(int mask)
void __init wrppmc_early_putc(char ch)
void __init wrppmc_early_printk(const char *fmt, ...)
void __init prom_free_prom_memory(void)
void __init plat_mem_setup(void)
const char *get_system_type(void)
void __init prom_init(void)
