static void __init prom_console_write(struct console *con, const char *s,
unsigned int c)
static struct console promcons __initdata = ;
void __init register_prom_console(void)
