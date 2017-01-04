#define EVENT_HASHSIZE	128
DECLARE_RWSEM(trace_event_mutex);
static struct hlist_head event_hash[EVENT_HASHSIZE] __read_mostly;
static int next_event_type = __TRACE_LAST_TYPE + 1;
int trace_print_seq(struct seq_file *m, struct trace_seq *s)
enum print_line_t trace_print_bprintk_msg_only(struct trace_iterator *iter)
enum print_line_t trace_print_printk_msg_only(struct trace_iterator *iter)
int
trace_seq_printf(struct trace_seq *s, const char *fmt, ...)
EXPORT_SYMBOL_GPL(trace_seq_printf);
int
trace_seq_vprintf(struct trace_seq *s, const char *fmt, va_list args)
EXPORT_SYMBOL_GPL(trace_seq_vprintf);
int trace_seq_bprintf(struct trace_seq *s, const char *fmt, const u32 *binary)
int trace_seq_puts(struct trace_seq *s, const char *str)
int trace_seq_putc(struct trace_seq *s, unsigned char c)
EXPORT_SYMBOL(trace_seq_putc);
int trace_seq_putmem(struct trace_seq *s, const void *mem, size_t len)
int trace_seq_putmem_hex(struct trace_seq *s, const void *mem, size_t len)
{
unsigned char hex[HEX_CHARS];
const unsigned char *data = mem;
int i, j;
if (s->full)
return 0;
for (i = 0, j = 0; i < len; i++)
void *trace_seq_reserve(struct trace_seq *s, size_t len)
int trace_seq_path(struct trace_seq *s, struct path *path)
const char *
ftrace_print_flags_seq(struct trace_seq *p, const char *delim,
unsigned long flags,
const struct trace_print_flags *flag_array)
EXPORT_SYMBOL(ftrace_print_flags_seq);
const char *
ftrace_print_symbols_seq(struct trace_seq *p, unsigned long val,
const struct trace_print_flags *symbol_array)
EXPORT_SYMBOL(ftrace_print_symbols_seq);
#if BITS_PER_LONG == 32
const char *
ftrace_print_symbols_seq_u64(struct trace_seq *p, unsigned long long val,
const struct trace_print_flags_u64 *symbol_array)
EXPORT_SYMBOL(ftrace_print_symbols_seq_u64);
const char *
ftrace_print_hex_seq(struct trace_seq *p, const unsigned char *buf, int buf_len)
EXPORT_SYMBOL(ftrace_print_hex_seq);
static inline const char *kretprobed(const char *name)
static inline const char *kretprobed(const char *name)
static int
seq_print_sym_short(struct trace_seq *s, const char *fmt, unsigned long address)
static int
seq_print_sym_offset(struct trace_seq *s, const char *fmt,
unsigned long address)
# define IP_FMT "%08lx"
# define IP_FMT "%016lx"
int seq_print_user_ip(struct trace_seq *s, struct mm_struct *mm,
unsigned long ip, unsigned long sym_flags)
int
seq_print_userip_objs(const struct userstack_entry *entry, struct trace_seq *s,
unsigned long sym_flags)
int
seq_print_ip_sym(struct trace_seq *s, unsigned long ip, unsigned long sym_flags)
int trace_print_lat_fmt(struct trace_seq *s, struct trace_entry *entry)
static int
lat_print_generic(struct trace_seq *s, struct trace_entry *entry, int cpu)
static unsigned long preempt_mark_thresh = 100;
static int
lat_print_timestamp(struct trace_seq *s, u64 abs_usecs,
unsigned long rel_usecs)
int trace_print_context(struct trace_iterator *iter)
int trace_print_lat_context(struct trace_iterator *iter)
static const char state_to_char[] = TASK_STATE_TO_CHAR_STR;
static int task_state_char(unsigned long state)
struct trace_event *ftrace_find_event(int type)
static LIST_HEAD(ftrace_event_list);
static int trace_search_list(struct list_head **list)
void trace_event_read_lock(void)
void trace_event_read_unlock(void)
int register_ftrace_event(struct trace_event *event)
EXPORT_SYMBOL_GPL(register_ftrace_event);
int __unregister_ftrace_event(struct trace_event *event)
int unregister_ftrace_event(struct trace_event *event)
EXPORT_SYMBOL_GPL(unregister_ftrace_event);
enum print_line_t trace_nop_print(struct trace_iterator *iter, int flags,
struct trace_event *event)
static enum print_line_t trace_fn_trace(struct trace_iterator *iter, int flags,
struct trace_event *event)
static enum print_line_t trace_fn_raw(struct trace_iterator *iter, int flags,
struct trace_event *event)
static enum print_line_t trace_fn_hex(struct trace_iterator *iter, int flags,
struct trace_event *event)
static enum print_line_t trace_fn_bin(struct trace_iterator *iter, int flags,
struct trace_event *event)
static struct trace_event_functions trace_fn_funcs = ;
static struct trace_event trace_fn_event = ;
static enum print_line_t trace_ctxwake_print(struct trace_iterator *iter,
char *delim)
static enum print_line_t trace_ctx_print(struct trace_iterator *iter, int flags,
struct trace_event *event)
static enum print_line_t trace_wake_print(struct trace_iterator *iter,
int flags, struct trace_event *event)
static int trace_ctxwake_raw(struct trace_iterator *iter, char S)
static enum print_line_t trace_ctx_raw(struct trace_iterator *iter, int flags,
struct trace_event *event)
static enum print_line_t trace_wake_raw(struct trace_iterator *iter, int flags,
struct trace_event *event)
static int trace_ctxwake_hex(struct trace_iterator *iter, char S)
static enum print_line_t trace_ctx_hex(struct trace_iterator *iter, int flags,
struct trace_event *event)
static enum print_line_t trace_wake_hex(struct trace_iterator *iter, int flags,
struct trace_event *event)
static enum print_line_t trace_ctxwake_bin(struct trace_iterator *iter,
int flags, struct trace_event *event)
static struct trace_event_functions trace_ctx_funcs = ;
static struct trace_event trace_ctx_event = ;
static struct trace_event_functions trace_wake_funcs = ;
static struct trace_event trace_wake_event = ;
static enum print_line_t trace_stack_print(struct trace_iterator *iter,
int flags, struct trace_event *event)
static struct trace_event_functions trace_stack_funcs = ;
static struct trace_event trace_stack_event = ;
static enum print_line_t trace_user_stack_print(struct trace_iterator *iter,
int flags, struct trace_event *event)
static struct trace_event_functions trace_user_stack_funcs = ;
static struct trace_event trace_user_stack_event = ;
static enum print_line_t
trace_bprint_print(struct trace_iterator *iter, int flags,
struct trace_event *event)
static enum print_line_t
trace_bprint_raw(struct trace_iterator *iter, int flags,
struct trace_event *event)
static struct trace_event_functions trace_bprint_funcs = ;
static struct trace_event trace_bprint_event = ;
static enum print_line_t trace_print_print(struct trace_iterator *iter,
int flags, struct trace_event *event)
static enum print_line_t trace_print_raw(struct trace_iterator *iter, int flags,
struct trace_event *event)
static struct trace_event_functions trace_print_funcs = ;
static struct trace_event trace_print_event = ;
static struct trace_event *events[] __initdata = ;
__init static int init_events(void)
device_initcall(init_events);
