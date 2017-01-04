static int use_stderr_console = 0;
static void stderr_console_write(struct console *console, const char *string,
unsigned len)
static struct console stderr_console = ;
static int __init stderr_console_init(void)
console_initcall(stderr_console_init);
static int stderr_setup(char *str)
__setup("stderr=", stderr_setup);
static int __init unregister_stderr(void)
__initcall(unregister_stderr);
