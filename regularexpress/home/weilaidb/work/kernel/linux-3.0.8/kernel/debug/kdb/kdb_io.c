#define CMD_BUFLEN 256
char kdb_prompt_str[CMD_BUFLEN];
int kdb_trap_printk;
static void kgdb_transition_check(char *buffer)
static int kdb_read_get_key(char *buffer, size_t bufsize)
static char *kdb_read(char *buffer, size_t bufsize)
char *kdb_getstr(char *buffer, size_t bufsize, char *prompt)
static void kdb_input_flush(void)
static char kdb_buffer[256];
static char *next_avail = kdb_buffer;
static int  size_avail;
static int  suspend_grep;
static int kdb_search_string(char *searched, char *searchfor)
int vkdb_printf(const char *fmt, va_list ap)
int kdb_printf(const char *fmt, ...)
EXPORT_SYMBOL_GPL(kdb_printf);
