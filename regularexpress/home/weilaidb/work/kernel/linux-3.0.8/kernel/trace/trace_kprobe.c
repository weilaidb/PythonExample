#define MAX_TRACE_ARGS 128
#define MAX_ARGSTR_LEN 63
#define MAX_EVENT_NAME_LEN 64
#define MAX_STRING_SIZE PATH_MAX
#define KPROBE_EVENT_SYSTEM "kprobes"
#define FIELD_STRING_IP "__probe_ip"
#define FIELD_STRING_RETIP "__probe_ret_ip"
#define FIELD_STRING_FUNC "__probe_func"
const char *reserved_field_names[] = ;
typedef int (*print_type_func_t)(struct trace_seq *, const char *, void *,
void *);
#define PRINT_TYPE_FUNC_NAME(type)	print_type_##type
#define PRINT_TYPE_FMT_NAME(type)	print_type_format_##type
#define DEFINE_BASIC_PRINT_TYPE_FUNC(type, fmt, cast)			\
static __kprobes int PRINT_TYPE_FUNC_NAME(type)(struct trace_seq *s,	\
const char *name,	\
void *data, void *ent)\
\
static const char PRINT_TYPE_FMT_NAME(type)[] = fmt;
DEFINE_BASIC_PRINT_TYPE_FUNC(u8, "%x", unsigned int)
DEFINE_BASIC_PRINT_TYPE_FUNC(u16, "%x", unsigned int)
DEFINE_BASIC_PRINT_TYPE_FUNC(u32, "%lx", unsigned long)
DEFINE_BASIC_PRINT_TYPE_FUNC(u64, "%llx", unsigned long long)
DEFINE_BASIC_PRINT_TYPE_FUNC(s8, "%d", int)
DEFINE_BASIC_PRINT_TYPE_FUNC(s16, "%d", int)
DEFINE_BASIC_PRINT_TYPE_FUNC(s32, "%ld", long)
DEFINE_BASIC_PRINT_TYPE_FUNC(s64, "%lld", long long)
#define make_data_rloc(len, roffs)	\
(((u32)(len) << 16) | ((u32)(roffs) & 0xffff))
#define get_rloc_len(dl)	((u32)(dl) >> 16)
#define get_rloc_offs(dl)	((u32)(dl) & 0xffff)
static inline void *get_rloc_data(u32 *dl)
static inline void *get_loc_data(u32 *dl, void *ent)
#define convert_rloc_to_loc(dl, offs)	((u32)(dl) + (offs))
typedef u32 string;
typedef u32 string_size;
static __kprobes int PRINT_TYPE_FUNC_NAME(string)(struct trace_seq *s,
const char *name,
void *data, void *ent)
static const char PRINT_TYPE_FMT_NAME(string)[] = "\\\"%s\\\"";
typedef	void (*fetch_func_t)(struct pt_regs *, void *, void *);
struct fetch_param ;
static __kprobes void call_fetch(struct fetch_param *fprm,
struct pt_regs *regs, void *dest)
#define FETCH_FUNC_NAME(method, type)	fetch_##method##_##type
#define DEFINE_BASIC_FETCH_FUNCS(method) \
DEFINE_FETCH_##method(u8)		\
DEFINE_FETCH_##method(u16)		\
DEFINE_FETCH_##method(u32)		\
DEFINE_FETCH_##method(u64)
#define CHECK_FETCH_FUNCS(method, fn)			\
(((FETCH_FUNC_NAME(method, u8) == fn) ||	\
(FETCH_FUNC_NAME(method, u16) == fn) ||	\
(FETCH_FUNC_NAME(method, u32) == fn) ||	\
(FETCH_FUNC_NAME(method, u64) == fn) ||	\
(FETCH_FUNC_NAME(method, string) == fn) ||	\
(FETCH_FUNC_NAME(method, string_size) == fn)) \
&& (fn != NULL))
#define DEFINE_FETCH_reg(type)						\
static __kprobes void FETCH_FUNC_NAME(reg, type)(struct pt_regs *regs,	\
void *offset, void *dest)	\
DEFINE_BASIC_FETCH_FUNCS(reg)
#define fetch_reg_string NULL
#define fetch_reg_string_size NULL
#define DEFINE_FETCH_stack(type)					\
static __kprobes void FETCH_FUNC_NAME(stack, type)(struct pt_regs *regs,\
void *offset, void *dest)	\
DEFINE_BASIC_FETCH_FUNCS(stack)
#define fetch_stack_string NULL
#define fetch_stack_string_size NULL
#define DEFINE_FETCH_retval(type)					\
static __kprobes void FETCH_FUNC_NAME(retval, type)(struct pt_regs *regs,\
void *dummy, void *dest)	\
DEFINE_BASIC_FETCH_FUNCS(retval)
#define fetch_retval_string NULL
#define fetch_retval_string_size NULL
#define DEFINE_FETCH_memory(type)					\
static __kprobes void FETCH_FUNC_NAME(memory, type)(struct pt_regs *regs,\
void *addr, void *dest)	\
DEFINE_BASIC_FETCH_FUNCS(memory)
static __kprobes void FETCH_FUNC_NAME(memory, string)(struct pt_regs *regs,
void *addr, void *dest)
static __kprobes void FETCH_FUNC_NAME(memory, string_size)(struct pt_regs *regs,
void *addr, void *dest)
struct symbol_cache ;
static unsigned long update_symbol_cache(struct symbol_cache *sc)
static void free_symbol_cache(struct symbol_cache *sc)
static struct symbol_cache *alloc_symbol_cache(const char *sym, long offset)
#define DEFINE_FETCH_symbol(type)					\
static __kprobes void FETCH_FUNC_NAME(symbol, type)(struct pt_regs *regs,\
void *data, void *dest)	\
DEFINE_BASIC_FETCH_FUNCS(symbol)
DEFINE_FETCH_symbol(string)
DEFINE_FETCH_symbol(string_size)
struct deref_fetch_param ;
#define DEFINE_FETCH_deref(type)					\
static __kprobes void FETCH_FUNC_NAME(deref, type)(struct pt_regs *regs,\
void *data, void *dest)	\
DEFINE_BASIC_FETCH_FUNCS(deref)
DEFINE_FETCH_deref(string)
DEFINE_FETCH_deref(string_size)
static __kprobes void free_deref_fetch_param(struct deref_fetch_param *data)
struct bitfield_fetch_param ;
#define DEFINE_FETCH_bitfield(type)					\
static __kprobes void FETCH_FUNC_NAME(bitfield, type)(struct pt_regs *regs,\
void *data, void *dest)	\
DEFINE_BASIC_FETCH_FUNCS(bitfield)
#define fetch_bitfield_string NULL
#define fetch_bitfield_string_size NULL
static __kprobes void
free_bitfield_fetch_param(struct bitfield_fetch_param *data)
#define __DEFAULT_FETCH_TYPE(t) u##t
#define _DEFAULT_FETCH_TYPE(t) __DEFAULT_FETCH_TYPE(t)
#define DEFAULT_FETCH_TYPE _DEFAULT_FETCH_TYPE(BITS_PER_LONG)
#define DEFAULT_FETCH_TYPE_STR __stringify(DEFAULT_FETCH_TYPE)
enum ;
#define ASSIGN_FETCH_FUNC(method, type)	\
[FETCH_MTD_##method] = FETCH_FUNC_NAME(method, type)
#define __ASSIGN_FETCH_TYPE(_name, ptype, ftype, _size, sign, _fmttype)	\
#define ASSIGN_FETCH_TYPE(ptype, ftype, sign)			\
__ASSIGN_FETCH_TYPE(#ptype, ptype, ftype, sizeof(ftype), sign, #ptype)
#define FETCH_TYPE_STRING 0
#define FETCH_TYPE_STRSIZE 1
static const struct fetch_type  fetch_type_table[] = ;
static const struct fetch_type *find_fetch_type(const char *type)
static __kprobes void fetch_stack_address(struct pt_regs *regs,
void *dummy, void *dest)
static fetch_func_t get_fetch_size_function(const struct fetch_type *type,
fetch_func_t orig_fn)
struct probe_arg ;
#define TP_FLAG_TRACE	1
#define TP_FLAG_PROFILE	2
struct trace_probe ;
#define SIZEOF_TRACE_PROBE(n)			\
(offsetof(struct trace_probe, args) +	\
(sizeof(struct probe_arg) * (n)))
static __kprobes int probe_is_return(struct trace_probe *tp)
static __kprobes const char *probe_symbol(struct trace_probe *tp)
static int register_probe_event(struct trace_probe *tp);
static void unregister_probe_event(struct trace_probe *tp);
static DEFINE_MUTEX(probe_lock);
static LIST_HEAD(probe_list);
static int kprobe_dispatcher(struct kprobe *kp, struct pt_regs *regs);
static int kretprobe_dispatcher(struct kretprobe_instance *ri,
struct pt_regs *regs);
static int is_good_name(const char *name)
static struct trace_probe *alloc_trace_probe(const char *group,
const char *event,
void *addr,
const char *symbol,
unsigned long offs,
int nargs, int is_return)
static void free_probe_arg(struct probe_arg *arg)
static void free_trace_probe(struct trace_probe *tp)
static struct trace_probe *find_probe_event(const char *event,
const char *group)
static void unregister_trace_probe(struct trace_probe *tp)
static int register_trace_probe(struct trace_probe *tp)
static int split_symbol_offset(char *symbol, unsigned long *offset)
#define PARAM_MAX_ARGS 16
#define PARAM_MAX_STACK (THREAD_SIZE / sizeof(unsigned long))
static int parse_probe_vars(char *arg, const struct fetch_type *t,
struct fetch_param *f, int is_return)
static int __parse_probe_arg(char *arg, const struct fetch_type *t,
struct fetch_param *f, int is_return)
#define BYTES_TO_BITS(nb)	((BITS_PER_LONG * (nb)) / sizeof(long))
static int __parse_bitfield_probe_arg(const char *bf,
const struct fetch_type *t,
struct fetch_param *f)
static int parse_probe_arg(char *arg, struct trace_probe *tp,
struct probe_arg *parg, int is_return)
static int conflict_field_name(const char *name,
struct probe_arg *args, int narg)
static int create_trace_probe(int argc, char **argv)
static void cleanup_all_probes(void)
static void *probes_seq_start(struct seq_file *m, loff_t *pos)
static void *probes_seq_next(struct seq_file *m, void *v, loff_t *pos)
static void probes_seq_stop(struct seq_file *m, void *v)
static int probes_seq_show(struct seq_file *m, void *v)
static const struct seq_operations probes_seq_op = ;
static int probes_open(struct inode *inode, struct file *file)
static int command_trace_probe(const char *buf)
#define WRITE_BUFSIZE 4096
static ssize_t probes_write(struct file *file, const char __user *buffer,
size_t count, loff_t *ppos)
static const struct file_operations kprobe_events_ops = ;
static int probes_profile_seq_show(struct seq_file *m, void *v)
static const struct seq_operations profile_seq_op = ;
static int profile_open(struct inode *inode, struct file *file)
static const struct file_operations kprobe_profile_ops = ;
static __kprobes int __get_data_size(struct trace_probe *tp,
struct pt_regs *regs)
static __kprobes void store_trace_args(int ent_size, struct trace_probe *tp,
struct pt_regs *regs,
u8 *data, int maxlen)
static __kprobes void kprobe_trace_func(struct kprobe *kp, struct pt_regs *regs)
static __kprobes void kretprobe_trace_func(struct kretprobe_instance *ri,
struct pt_regs *regs)
enum print_line_t
print_kprobe_event(struct trace_iterator *iter, int flags,
struct trace_event *event)
enum print_line_t
print_kretprobe_event(struct trace_iterator *iter, int flags,
struct trace_event *event)
static int probe_event_enable(struct ftrace_event_call *call)
static void probe_event_disable(struct ftrace_event_call *call)
#undef DEFINE_FIELD
#define DEFINE_FIELD(type, item, name, is_signed)			\
do  while (0)
static int kprobe_event_define_fields(struct ftrace_event_call *event_call)
static int kretprobe_event_define_fields(struct ftrace_event_call *event_call)
static int __set_print_fmt(struct trace_probe *tp, char *buf, int len)
static int set_print_fmt(struct trace_probe *tp)
static __kprobes void kprobe_perf_func(struct kprobe *kp,
struct pt_regs *regs)
static __kprobes void kretprobe_perf_func(struct kretprobe_instance *ri,
struct pt_regs *regs)
static int probe_perf_enable(struct ftrace_event_call *call)
static void probe_perf_disable(struct ftrace_event_call *call)
static __kprobes
int kprobe_register(struct ftrace_event_call *event, enum trace_reg type)
static __kprobes
int kprobe_dispatcher(struct kprobe *kp, struct pt_regs *regs)
static __kprobes
int kretprobe_dispatcher(struct kretprobe_instance *ri, struct pt_regs *regs)
static struct trace_event_functions kretprobe_funcs = ;
static struct trace_event_functions kprobe_funcs = ;
static int register_probe_event(struct trace_probe *tp)
static void unregister_probe_event(struct trace_probe *tp)
static __init int init_kprobe_trace(void)
fs_initcall(init_kprobe_trace);
static __used int kprobe_trace_selftest_target(int a1, int a2, int a3,
int a4, int a5, int a6)
static __init int kprobe_trace_self_tests_init(void)
late_initcall(kprobe_trace_self_tests_init);
