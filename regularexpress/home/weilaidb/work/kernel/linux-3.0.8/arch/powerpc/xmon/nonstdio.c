int xmon_putchar(int c)
static char line[256];
static char *lineptr;
static int lineleft;
int xmon_expect(const char *str, unsigned long timeout)
int xmon_getchar(void)
char *xmon_gets(char *str, int nb)
void xmon_printf(const char *format, ...)
void xmon_puts(const char *str)
