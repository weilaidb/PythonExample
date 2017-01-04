static void early_hv_write(struct console *con, const char *s, unsigned n)
static struct console early_hv_console = ;
static struct console *early_console = &early_hv_console;
static int early_console_initialized;
static int early_console_complete;
static void early_vprintk(const char *fmt, va_list ap)
void early_printk(const char *fmt, ...)
void early_panic(const char *fmt, ...)
static int __initdata keep_early;
static int __init setup_early_printk(char *str)
void __init disable_early_printk(void)
void warn_early_printk(void)
early_param("earlyprintk", setup_early_printk);
