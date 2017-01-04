void (*udbg_putc)(char c);
void (*udbg_flush)(void);
int (*udbg_getc)(void);
int (*udbg_getc_poll)(void);
void __init udbg_early_init(void)
void udbg_puts(const char *s)
int udbg_write(const char *s, int n)
int udbg_read(char *buf, int buflen)
#define UDBG_BUFSIZE 256
void udbg_printf(const char *fmt, ...)
void __init udbg_progress(char *s, unsigned short hex)
static void udbg_console_write(struct console *con, const char *s,
unsigned int n)
static struct console udbg_console = ;
static int early_console_initialized;
void __init register_early_udbg_console(void)
