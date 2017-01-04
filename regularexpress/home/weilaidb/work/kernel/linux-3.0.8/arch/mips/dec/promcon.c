static void prom_console_write(struct console *co, const char *s,
unsigned count)
static int __init prom_console_setup(struct console *co, char *options)
static struct console sercons = ;
static int __init prom_console_init(void)
console_initcall(prom_console_init);
