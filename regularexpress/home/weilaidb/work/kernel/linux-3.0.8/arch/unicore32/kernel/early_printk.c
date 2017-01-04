static void early_ocd_write(struct console *con, const char *s, unsigned n)
static struct console early_ocd_console = ;
static struct console *early_console = &early_ocd_console;
static int __initdata keep_early;
static int __init setup_early_printk(char *buf)
early_param("earlyprintk", setup_early_printk);
