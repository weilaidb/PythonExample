#define PERF_LINUX_KERNEL_H_
#define DIV_ROUND_UP(n,d) (((n) + (d) - 1) / (d))
#define ALIGN(x,a)		__ALIGN_MASK(x,(typeof(x))(a)-1)
#define __ALIGN_MASK(x,mask)	(((x)+(mask))&~(mask))
#define offsetof(TYPE, MEMBER) ((size_t) &((TYPE *)0)->MEMBER)
#define container_of(ptr, type, member) ()
#define BUILD_BUG_ON_ZERO(e) (sizeof(struct ))
#define max(x, y) ()
#define min(x, y) ()
#define BUG_ON(cond) assert(!(cond))
#define cpu_to_le64(x)	(x)
#define cpu_to_le32(x)	(x)
static inline int
vscnprintf(char *buf, size_t size, const char *fmt, va_list args)
static inline int scnprintf(char * buf, size_t size, const char * fmt, ...)
static inline unsigned long
simple_strtoul(const char *nptr, char **endptr, int base)
int eprintf(int level,
const char *fmt, ...) __attribute__((format(printf, 2, 3)));
#define pr_fmt(fmt) fmt
#define pr_err(fmt, ...) \
eprintf(0, pr_fmt(fmt), ##__VA_ARGS__)
#define pr_warning(fmt, ...) \
eprintf(0, pr_fmt(fmt), ##__VA_ARGS__)
#define pr_info(fmt, ...) \
eprintf(0, pr_fmt(fmt), ##__VA_ARGS__)
#define pr_debug(fmt, ...) \
eprintf(1, pr_fmt(fmt), ##__VA_ARGS__)
#define pr_debugN(n, fmt, ...) \
eprintf(n, pr_fmt(fmt), ##__VA_ARGS__)
#define pr_debug2(fmt, ...) pr_debugN(2, pr_fmt(fmt), ##__VA_ARGS__)
#define pr_debug3(fmt, ...) pr_debugN(3, pr_fmt(fmt), ##__VA_ARGS__)
#define pr_debug4(fmt, ...) pr_debugN(4, pr_fmt(fmt), ##__VA_ARGS__)
