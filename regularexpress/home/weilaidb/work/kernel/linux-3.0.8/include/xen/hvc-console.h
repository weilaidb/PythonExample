#define XEN_HVC_CONSOLE_H
extern struct console xenboot_console;
void xen_console_resume(void);
void xen_raw_console_write(const char *str);
void xen_raw_printk(const char *fmt, ...);
static inline void xen_console_resume(void)
static inline void xen_raw_console_write(const char *str)
static inline void xen_raw_printk(const char *fmt, ...)