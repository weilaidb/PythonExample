#define CONSOLE_WRITE_BUF_SIZE	1024
static char ppbuf[1024];
static char console_write_buf[CONSOLE_WRITE_BUF_SIZE];
static DEFINE_RAW_SPINLOCK(console_write_lock);
void notrace prom_write(const char *buf, unsigned int n)
void notrace prom_printf(const char *fmt, ...)
