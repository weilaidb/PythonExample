static void early_console_write(struct console *con, const char *s, unsigned int n)
static struct console early_console = ;
static int __init setup_early_printk(char *buf)
early_param("earlyprintk", setup_early_printk);
