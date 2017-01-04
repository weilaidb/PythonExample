extern void printch(int);
static void early_write(const char *s, unsigned n)
static void early_console_write(struct console *con, const char *s, unsigned n)
static struct console early_console = ;
asmlinkage void early_printk(const char *fmt, ...)
static int __init setup_early_printk(char *buf)
early_param("earlyprintk", setup_early_printk);
