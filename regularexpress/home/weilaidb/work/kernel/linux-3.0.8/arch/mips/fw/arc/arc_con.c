static void prom_console_write(struct console *co, const char *s,
unsigned count)
static int prom_console_setup(struct console *co, char *options)
static struct console arc_cons = ;
static int __init arc_console_init(void)
console_initcall(arc_console_init);
