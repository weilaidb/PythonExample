extern int cfe_cons_handle;
static void cfe_console_write(struct console *cons, const char *str,
unsigned int count)
static int cfe_console_setup(struct console *cons, char *str)
static struct console sb1250_cfe_cons = ;
static int __init sb1250_cfe_console_init(void)
console_initcall(sb1250_cfe_console_init);
