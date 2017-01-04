#define __KERNEL_PRINTK__
extern const char linux_banner[];
extern const char linux_proc_banner[];
#define KERN_EMERG	"<0>"
#define KERN_ALERT	"<1>"
#define KERN_CRIT	"<2>"
#define KERN_ERR	"<3>"
#define KERN_WARNING	"<4>"
#define KERN_NOTICE	"<5>"
#define KERN_INFO	"<6>"
#define KERN_DEBUG	"<7>"
#define KERN_DEFAULT	"<d>"
#define KERN_CONT	"<c>"
extern int console_printk[];
#define console_loglevel (console_printk[0])
#define default_message_loglevel (console_printk[1])
#define minimum_console_loglevel (console_printk[2])
#define default_console_loglevel (console_printk[3])
static inline void console_silent(void)
static inline void console_verbose(void)
struct va_format ;
#define FW_BUG		"[Firmware Bug]: "
#define FW_WARN		"[Firmware Warn]: "
#define FW_INFO		"[Firmware Info]: "
#define HW_ERR		"[Hardware Error]: "
static inline __attribute__ ((format (printf, 1, 2)))
int no_printk(const char *fmt, ...)
extern asmlinkage __attribute__ ((format (printf, 1, 2)))
void early_printk(const char *fmt, ...);
extern int printk_needs_cpu(int cpu);
extern void printk_tick(void);
asmlinkage __attribute__ ((format (printf, 1, 0)))
int vprintk(const char *fmt, va_list args);
asmlinkage __attribute__ ((format (printf, 1, 2))) __cold
int printk(const char *fmt, ...);
extern int __printk_ratelimit(const char *func);
#define printk_ratelimit() __printk_ratelimit(__func__)
extern bool printk_timed_ratelimit(unsigned long *caller_jiffies,
unsigned int interval_msec);
extern int printk_delay_msec;
extern int dmesg_restrict;
extern int kptr_restrict;
void log_buf_kexec_setup(void);
void __init setup_log_buf(int early);
static inline __attribute__ ((format (printf, 1, 0)))
int vprintk(const char *s, va_list args)
static inline __attribute__ ((format (printf, 1, 2))) __cold
int printk(const char *s, ...)
static inline int printk_ratelimit(void)
static inline bool printk_timed_ratelimit(unsigned long *caller_jiffies,
unsigned int interval_msec)
static inline void log_buf_kexec_setup(void)
static inline void setup_log_buf(int early)
extern void dump_stack(void) __cold;
#define pr_fmt(fmt) fmt
#define pr_emerg(fmt, ...) \
printk(KERN_EMERG pr_fmt(fmt), ##__VA_ARGS__)
#define pr_alert(fmt, ...) \
printk(KERN_ALERT pr_fmt(fmt), ##__VA_ARGS__)
#define pr_crit(fmt, ...) \
printk(KERN_CRIT pr_fmt(fmt), ##__VA_ARGS__)
#define pr_err(fmt, ...) \
printk(KERN_ERR pr_fmt(fmt), ##__VA_ARGS__)
#define pr_warning(fmt, ...) \
printk(KERN_WARNING pr_fmt(fmt), ##__VA_ARGS__)
#define pr_warn pr_warning
#define pr_notice(fmt, ...) \
printk(KERN_NOTICE pr_fmt(fmt), ##__VA_ARGS__)
#define pr_info(fmt, ...) \
printk(KERN_INFO pr_fmt(fmt), ##__VA_ARGS__)
#define pr_cont(fmt, ...) \
printk(KERN_CONT fmt, ##__VA_ARGS__)
#define pr_devel(fmt, ...) \
printk(KERN_DEBUG pr_fmt(fmt), ##__VA_ARGS__)
#define pr_devel(fmt, ...) \
no_printk(KERN_DEBUG pr_fmt(fmt), ##__VA_ARGS__)
#if defined(DEBUG)
#define pr_debug(fmt, ...) \
printk(KERN_DEBUG pr_fmt(fmt), ##__VA_ARGS__)
#elif defined(CONFIG_DYNAMIC_DEBUG)
#define pr_debug(fmt, ...) \
dynamic_pr_debug(fmt, ##__VA_ARGS__)
#define pr_debug(fmt, ...) \
no_printk(KERN_DEBUG pr_fmt(fmt), ##__VA_ARGS__)
#define printk_once(fmt, ...)			\
()
#define printk_once(fmt, ...)			\
no_printk(fmt, ##__VA_ARGS__)
#define pr_emerg_once(fmt, ...)					\
printk_once(KERN_EMERG pr_fmt(fmt), ##__VA_ARGS__)
#define pr_alert_once(fmt, ...)					\
printk_once(KERN_ALERT pr_fmt(fmt), ##__VA_ARGS__)
#define pr_crit_once(fmt, ...)					\
printk_once(KERN_CRIT pr_fmt(fmt), ##__VA_ARGS__)
#define pr_err_once(fmt, ...)					\
printk_once(KERN_ERR pr_fmt(fmt), ##__VA_ARGS__)
#define pr_warn_once(fmt, ...)					\
printk_once(KERN_WARNING pr_fmt(fmt), ##__VA_ARGS__)
#define pr_notice_once(fmt, ...)				\
printk_once(KERN_NOTICE pr_fmt(fmt), ##__VA_ARGS__)
#define pr_info_once(fmt, ...)					\
printk_once(KERN_INFO pr_fmt(fmt), ##__VA_ARGS__)
#define pr_cont_once(fmt, ...)					\
printk_once(KERN_CONT pr_fmt(fmt), ##__VA_ARGS__)
#if defined(DEBUG)
#define pr_debug_once(fmt, ...)					\
printk_once(KERN_DEBUG pr_fmt(fmt), ##__VA_ARGS__)
#define pr_debug_once(fmt, ...)					\
no_printk(KERN_DEBUG pr_fmt(fmt), ##__VA_ARGS__)
#define printk_ratelimited(fmt, ...)					\
()
#define printk_ratelimited(fmt, ...)					\
no_printk(fmt, ##__VA_ARGS__)
#define pr_emerg_ratelimited(fmt, ...)					\
printk_ratelimited(KERN_EMERG pr_fmt(fmt), ##__VA_ARGS__)
#define pr_alert_ratelimited(fmt, ...)					\
printk_ratelimited(KERN_ALERT pr_fmt(fmt), ##__VA_ARGS__)
#define pr_crit_ratelimited(fmt, ...)					\
printk_ratelimited(KERN_CRIT pr_fmt(fmt), ##__VA_ARGS__)
#define pr_err_ratelimited(fmt, ...)					\
printk_ratelimited(KERN_ERR pr_fmt(fmt), ##__VA_ARGS__)
#define pr_warn_ratelimited(fmt, ...)					\
printk_ratelimited(KERN_WARNING pr_fmt(fmt), ##__VA_ARGS__)
#define pr_notice_ratelimited(fmt, ...)					\
printk_ratelimited(KERN_NOTICE pr_fmt(fmt), ##__VA_ARGS__)
#define pr_info_ratelimited(fmt, ...)					\
printk_ratelimited(KERN_INFO pr_fmt(fmt), ##__VA_ARGS__)
#if defined(DEBUG)
#define pr_debug_ratelimited(fmt, ...)					\
printk_ratelimited(KERN_DEBUG pr_fmt(fmt), ##__VA_ARGS__)
#define pr_debug_ratelimited(fmt, ...) \
no_printk(KERN_DEBUG pr_fmt(fmt), ##__VA_ARGS__)
enum ;
extern void hex_dump_to_buffer(const void *buf, size_t len,
int rowsize, int groupsize,
char *linebuf, size_t linebuflen, bool ascii);
extern void print_hex_dump(const char *level, const char *prefix_str,
int prefix_type, int rowsize, int groupsize,
const void *buf, size_t len, bool ascii);
extern void print_hex_dump_bytes(const char *prefix_str, int prefix_type,
const void *buf, size_t len);
static inline void print_hex_dump(const char *level, const char *prefix_str,
int prefix_type, int rowsize, int groupsize,
const void *buf, size_t len, bool ascii)
static inline void print_hex_dump_bytes(const char *prefix_str, int prefix_type,
const void *buf, size_t len)
