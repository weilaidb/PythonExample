#define TOLOWER(x) ((x) | 0x20)
static unsigned int simple_guess_base(const char *cp)
unsigned long long simple_strtoull(const char *cp, char **endp, unsigned int base)
EXPORT_SYMBOL(simple_strtoull);
unsigned long simple_strtoul(const char *cp, char **endp, unsigned int base)
EXPORT_SYMBOL(simple_strtoul);
long simple_strtol(const char *cp, char **endp, unsigned int base)
EXPORT_SYMBOL(simple_strtol);
long long simple_strtoll(const char *cp, char **endp, unsigned int base)
EXPORT_SYMBOL(simple_strtoll);
static noinline_for_stack
int skip_atoi(const char **s)
static noinline_for_stack
char *put_dec_trunc(char *buf, unsigned q)
static noinline_for_stack
char *put_dec_full(char *buf, unsigned q)
static noinline_for_stack
char *put_dec(char *buf, unsigned long long num)
#define ZEROPAD	1
#define SIGN	2
#define PLUS	4
#define SPACE	8
#define LEFT	16
#define SMALL	32
#define SPECIAL	64
enum format_type ;
struct printf_spec ;
static noinline_for_stack
char *number(char *buf, char *end, unsigned long long num,
struct printf_spec spec)
static noinline_for_stack
char *string(char *buf, char *end, const char *s, struct printf_spec spec)
static noinline_for_stack
char *symbol_string(char *buf, char *end, void *ptr,
struct printf_spec spec, char ext)
static noinline_for_stack
char *resource_string(char *buf, char *end, struct resource *res,
struct printf_spec spec, const char *fmt)
static noinline_for_stack
char *mac_address_string(char *buf, char *end, u8 *addr,
struct printf_spec spec, const char *fmt)
static noinline_for_stack
char *ip4_string(char *p, const u8 *addr, const char *fmt)
static noinline_for_stack
char *ip6_compressed_string(char *p, const char *addr)
static noinline_for_stack
char *ip6_string(char *p, const char *addr, const char *fmt)
static noinline_for_stack
char *ip6_addr_string(char *buf, char *end, const u8 *addr,
struct printf_spec spec, const char *fmt)
static noinline_for_stack
char *ip4_addr_string(char *buf, char *end, const u8 *addr,
struct printf_spec spec, const char *fmt)
static noinline_for_stack
char *uuid_string(char *buf, char *end, const u8 *addr,
struct printf_spec spec, const char *fmt)
int kptr_restrict __read_mostly;
static noinline_for_stack
char *pointer(const char *fmt, char *buf, char *end, void *ptr,
struct printf_spec spec)
static noinline_for_stack
int format_decode(const char *fmt, struct printf_spec *spec)
int vsnprintf(char *buf, size_t size, const char *fmt, va_list args)
EXPORT_SYMBOL(vsnprintf);
int vscnprintf(char *buf, size_t size, const char *fmt, va_list args)
EXPORT_SYMBOL(vscnprintf);
int snprintf(char *buf, size_t size, const char *fmt, ...)
EXPORT_SYMBOL(snprintf);
int scnprintf(char *buf, size_t size, const char *fmt, ...)
EXPORT_SYMBOL(scnprintf);
int vsprintf(char *buf, const char *fmt, va_list args)
EXPORT_SYMBOL(vsprintf);
int sprintf(char *buf, const char *fmt, ...)
EXPORT_SYMBOL(sprintf);
int vbin_printf(u32 *bin_buf, size_t size, const char *fmt, va_list args)
EXPORT_SYMBOL_GPL(vbin_printf);
int bstr_printf(char *buf, size_t size, const char *fmt, const u32 *bin_buf)
EXPORT_SYMBOL_GPL(bstr_printf);
int bprintf(u32 *bin_buf, size_t size, const char *fmt, ...)
EXPORT_SYMBOL_GPL(bprintf);
int vsscanf(const char *buf, const char *fmt, va_list args)
EXPORT_SYMBOL(vsscanf);
int sscanf(const char *buf, const char *fmt, ...)
EXPORT_SYMBOL(sscanf);
