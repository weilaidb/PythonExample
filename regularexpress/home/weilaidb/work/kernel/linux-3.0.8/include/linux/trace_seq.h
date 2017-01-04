#define _LINUX_TRACE_SEQ_H
struct trace_seq ;
static inline void
trace_seq_init(struct trace_seq *s)
extern int trace_seq_printf(struct trace_seq *s, const char *fmt, ...)
__attribute__ ((format (printf, 2, 3)));
extern int trace_seq_vprintf(struct trace_seq *s, const char *fmt, va_list args)
__attribute__ ((format (printf, 2, 0)));
extern int
trace_seq_bprintf(struct trace_seq *s, const char *fmt, const u32 *binary);
extern int trace_print_seq(struct seq_file *m, struct trace_seq *s);
extern ssize_t trace_seq_to_user(struct trace_seq *s, char __user *ubuf,
size_t cnt);
extern int trace_seq_puts(struct trace_seq *s, const char *str);
extern int trace_seq_putc(struct trace_seq *s, unsigned char c);
extern int trace_seq_putmem(struct trace_seq *s, const void *mem, size_t len);
extern int trace_seq_putmem_hex(struct trace_seq *s, const void *mem,
size_t len);
extern void *trace_seq_reserve(struct trace_seq *s, size_t len);
extern int trace_seq_path(struct trace_seq *s, struct path *path);
static inline int trace_seq_printf(struct trace_seq *s, const char *fmt, ...)
static inline int
trace_seq_bprintf(struct trace_seq *s, const char *fmt, const u32 *binary)
static inline int trace_print_seq(struct seq_file *m, struct trace_seq *s)
static inline ssize_t trace_seq_to_user(struct trace_seq *s, char __user *ubuf,
size_t cnt)
static inline int trace_seq_puts(struct trace_seq *s, const char *str)
static inline int trace_seq_putc(struct trace_seq *s, unsigned char c)
static inline int
trace_seq_putmem(struct trace_seq *s, const void *mem, size_t len)
static inline int trace_seq_putmem_hex(struct trace_seq *s, const void *mem,
size_t len)
static inline void *trace_seq_reserve(struct trace_seq *s, size_t len)
static inline int trace_seq_path(struct trace_seq *s, struct path *path)
