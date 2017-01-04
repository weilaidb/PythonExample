#undef printf
#undef fprintf
#undef fputs
static HANDLE console;
static WORD plain_attr;
static WORD attr;
static int negative;
static void init(void)
#define FOREGROUND_ALL (FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE)
#define BACKGROUND_ALL (BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE)
static void set_console_attr(void)
static void erase_in_line(void)
static const char *set_attr(const char *str)
static int ansi_emulate(const char *str, FILE *stream)
int winansi_fputs(const char *str, FILE *stream)
static int winansi_vfprintf(FILE *stream, const char *format, va_list list)
int winansi_fprintf(FILE *stream, const char *format, ...)
int winansi_printf(const char *format, ...)
