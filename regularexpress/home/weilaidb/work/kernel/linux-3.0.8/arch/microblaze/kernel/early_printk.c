static u32 early_console_initialized;
static u32 base_addr;
static void early_printk_uartlite_putc(char c)
static void early_printk_uartlite_write(struct console *unused,
const char *s, unsigned n)
static struct console early_serial_uartlite_console = ;
static void early_printk_uart16550_putc(char c)
static void early_printk_uart16550_write(struct console *unused,
const char *s, unsigned n)
static struct console early_serial_uart16550_console = ;
static struct console *early_console;
void early_printk(const char *fmt, ...)
int __init setup_early_printk(char *opt)
void __init disable_early_printk(void)
