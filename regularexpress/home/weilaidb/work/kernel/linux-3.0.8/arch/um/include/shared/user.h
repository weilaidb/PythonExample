#define __USER_H__
#define ARRAY_SIZE(x) (sizeof(x) / sizeof((x)[0]))
extern void panic(const char *fmt, ...)
__attribute__ ((format (printf, 1, 2)));
extern int printk(const char *fmt, ...)
__attribute__ ((format (printf, 1, 2)));
static inline int printk(const char *fmt, ...)
extern void schedule(void);
extern int in_aton(char *str);
extern int open_gdb_chan(void);
extern size_t strlcpy(char *, const char *, size_t);
extern size_t strlcat(char *, const char *, size_t);
