extern void prom_putchar(char);
static void __init
early_console_write(struct console *con, const char *s, unsigned n)
static struct console early_console __initdata = ;
static int early_console_initialized __initdata;
void __init setup_early_printk(void)
