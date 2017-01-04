static void __iomem *avr_addr;
static unsigned long avr_clock;
static struct work_struct wd_work;
static void wd_stop(struct work_struct *unused)
#define AVR_QUOT(clock) ((clock) + 8 * 9600) / (16 * 9600)
void avr_uart_configure(void)
void avr_uart_send(const char c)
static void __init ls_uart_init(void)
static int __init ls_uarts_init(void)
machine_late_initcall(linkstation, ls_uarts_init);
