#undef TRACE_EVENT
#define TRACE_EVENT(name, proto, args, tstruct, assign, print) \
DECLARE_EVENT_CLASS(name,			       \
PARAMS(proto),		       \
PARAMS(args),		       \
PARAMS(tstruct),		       \
PARAMS(assign),		       \
PARAMS(print));		       \
DEFINE_EVENT(name, name, PARAMS(proto), PARAMS(args));
#undef __field
#define __field(type, item)		type	item;
#undef __field_ext
#define __field_ext(type, item, filter_type)	type	item;
#undef __array
#define __array(type, item, len)	type	item[len];
#undef __dynamic_array
#define __dynamic_array(type, item, len) u32 __data_loc_##item;
#undef __string
#define __string(item, src) __dynamic_array(char, item, -1)
#undef TP_STRUCT__entry
#define TP_STRUCT__entry(args...) args
#undef DECLARE_EVENT_CLASS
#define DECLARE_EVENT_CLASS(name, proto, args, tstruct, assign, print)	\
struct ftrace_raw_##name ;								\
\
static struct ftrace_event_class event_class_##name;
#undef DEFINE_EVENT
#define DEFINE_EVENT(template, name, proto, args)	\
static struct ftrace_event_call	__used		\
__attribute__((__aligned__(4))) event_##name
#undef DEFINE_EVENT_PRINT
#define DEFINE_EVENT_PRINT(template, name, proto, args, print)	\
DEFINE_EVENT(template, name, PARAMS(proto), PARAMS(args))
#undef TRACE_EVENT_FN
#define TRACE_EVENT_FN(name, proto, args, tstruct,			\
assign, print, reg, unreg)				\
TRACE_EVENT(name, PARAMS(proto), PARAMS(args),			\
PARAMS(tstruct), PARAMS(assign), PARAMS(print))		\
#undef TRACE_EVENT_FLAGS
#define TRACE_EVENT_FLAGS(name, value)					\
__TRACE_EVENT_FLAGS(name, value)
#undef __field
#define __field(type, item)
#undef __field_ext
#define __field_ext(type, item, filter_type)
#undef __array
#define __array(type, item, len)
#undef __dynamic_array
#define __dynamic_array(type, item, len)	u32 item;
#undef __string
#define __string(item, src) __dynamic_array(char, item, -1)
#undef DECLARE_EVENT_CLASS
#define DECLARE_EVENT_CLASS(call, proto, args, tstruct, assign, print)	\
struct ftrace_data_offsets_##call ;
#undef DEFINE_EVENT
#define DEFINE_EVENT(template, name, proto, args)
#undef DEFINE_EVENT_PRINT
#define DEFINE_EVENT_PRINT(template, name, proto, args, print)	\
DEFINE_EVENT(template, name, PARAMS(proto), PARAMS(args))
#undef TRACE_EVENT_FLAGS
#define TRACE_EVENT_FLAGS(event, flag)
#undef __entry
#define __entry field
#undef TP_printk
#define TP_printk(fmt, args...) fmt "\n", args
#undef __get_dynamic_array
#define __get_dynamic_array(field)	\
((void *)__entry + (__entry->__data_loc_##field & 0xffff))
#undef __get_str
#define __get_str(field) (char *)__get_dynamic_array(field)
#undef __print_flags
#define __print_flags(flag, delim, flag_array...)			\
()
#undef __print_symbolic
#define __print_symbolic(value, symbol_array...)			\
()
#undef __print_symbolic_u64
#if BITS_PER_LONG == 32
#define __print_symbolic_u64(value, symbol_array...)			\
()
#define __print_symbolic_u64(value, symbol_array...)			\
__print_symbolic(value, symbol_array)
#undef __print_hex
#define __print_hex(buf, buf_len) ftrace_print_hex_seq(p, buf, buf_len)
#undef DECLARE_EVENT_CLASS
#define DECLARE_EVENT_CLASS(call, proto, args, tstruct, assign, print)	\
static notrace enum print_line_t					\
ftrace_raw_output_##call(struct trace_iterator *iter, int flags,	\
struct trace_event *trace_event)		\
\
static struct trace_event_functions ftrace_event_type_funcs_##call = ;
#undef DEFINE_EVENT_PRINT
#define DEFINE_EVENT_PRINT(template, call, proto, args, print)		\
static notrace enum print_line_t					\
ftrace_raw_output_##call(struct trace_iterator *iter, int flags,	\
struct trace_event *event)			\
\
static struct trace_event_functions ftrace_event_type_funcs_##call = ;
#undef __field_ext
#define __field_ext(type, item, filter_type)				\
ret = trace_define_field(event_call, #type, #item,		\
offsetof(typeof(field), item),		\
sizeof(field.item),			\
is_signed_type(type), filter_type);	\
if (ret)							\
return ret;
#undef __field
#define __field(type, item)	__field_ext(type, item, FILTER_OTHER)
#undef __array
#define __array(type, item, len)					\
do  while (0);
#undef __dynamic_array
#define __dynamic_array(type, item, len)				       \
ret = trace_define_field(event_call, "__data_loc " #type "[]", #item,  \
offsetof(typeof(field), __data_loc_##item),   \
sizeof(field.__data_loc_##item),	       \
is_signed_type(type), FILTER_OTHER);
#undef __string
#define __string(item, src) __dynamic_array(char, item, -1)
#undef DECLARE_EVENT_CLASS
#define DECLARE_EVENT_CLASS(call, proto, args, tstruct, func, print)	\
static int notrace							\
ftrace_define_fields_##call(struct ftrace_event_call *event_call)	\
#undef DEFINE_EVENT
#define DEFINE_EVENT(template, name, proto, args)
#undef DEFINE_EVENT_PRINT
#define DEFINE_EVENT_PRINT(template, name, proto, args, print)	\
DEFINE_EVENT(template, name, PARAMS(proto), PARAMS(args))
#undef __entry
#define __entry entry
#undef __field
#define __field(type, item)
#undef __field_ext
#define __field_ext(type, item, filter_type)
#undef __array
#define __array(type, item, len)
#undef __dynamic_array
#define __dynamic_array(type, item, len)				\
__data_offsets->item = __data_size +				\
offsetof(typeof(*entry), __data);	\
__data_offsets->item |= (len * sizeof(type)) << 16;		\
__data_size += (len) * sizeof(type);
#undef __string
#define __string(item, src) __dynamic_array(char, item, strlen(src) + 1)
#undef DECLARE_EVENT_CLASS
#define DECLARE_EVENT_CLASS(call, proto, args, tstruct, assign, print)	\
static inline notrace int ftrace_get_offsets_##call(			\
struct ftrace_data_offsets_##call *__data_offsets, proto)       \
#undef DEFINE_EVENT
#define DEFINE_EVENT(template, name, proto, args)
#undef DEFINE_EVENT_PRINT
#define DEFINE_EVENT_PRINT(template, name, proto, args, print)	\
DEFINE_EVENT(template, name, PARAMS(proto), PARAMS(args))
#define _TRACE_PERF_PROTO(call, proto)					\
static notrace void						\
perf_trace_##call(void *__data, proto);
#define _TRACE_PERF_INIT(call)						\
.perf_probe		= perf_trace_##call,
#define _TRACE_PERF_PROTO(call, proto)
#define _TRACE_PERF_INIT(call)
#undef __entry
#define __entry entry
#undef __field
#define __field(type, item)
#undef __array
#define __array(type, item, len)
#undef __dynamic_array
#define __dynamic_array(type, item, len)				\
__entry->__data_loc_##item = __data_offsets.item;
#undef __string
#define __string(item, src) __dynamic_array(char, item, -1)       	\
#undef __assign_str
#define __assign_str(dst, src)						\
strcpy(__get_str(dst), src);
#undef TP_fast_assign
#define TP_fast_assign(args...) args
#undef TP_perf_assign
#define TP_perf_assign(args...)
#undef DECLARE_EVENT_CLASS
#define DECLARE_EVENT_CLASS(call, proto, args, tstruct, assign, print)	\
\
static notrace void							\
ftrace_raw_event_##call(void *__data, proto)				\
#undef DEFINE_EVENT
#define DEFINE_EVENT(template, call, proto, args)			\
static inline void ftrace_test_probe_##call(void)			\
#undef DEFINE_EVENT_PRINT
#define DEFINE_EVENT_PRINT(template, name, proto, args, print)
#undef __entry
#define __entry REC
#undef __print_flags
#undef __print_symbolic
#undef __get_dynamic_array
#undef __get_str
#undef TP_printk
#define TP_printk(fmt, args...) "\"" fmt "\", "  __stringify(args)
#undef DECLARE_EVENT_CLASS
#define DECLARE_EVENT_CLASS(call, proto, args, tstruct, assign, print)	\
_TRACE_PERF_PROTO(call, PARAMS(proto));					\
static const char print_fmt_##call[] = print;				\
static struct ftrace_event_class __used event_class_##call = ;
#undef DEFINE_EVENT
#define DEFINE_EVENT(template, call, proto, args)			\
\
static struct ftrace_event_call __used event_##call = ;									\
static struct ftrace_event_call __used					\
__attribute__((section("_ftrace_events"))) *__event_##call = &event_##call
#undef DEFINE_EVENT_PRINT
#define DEFINE_EVENT_PRINT(template, call, proto, args, print)		\
\
static const char print_fmt_##call[] = print;				\
\
static struct ftrace_event_call __used event_##call = ;									\
static struct ftrace_event_call __used					\
__attribute__((section("_ftrace_events"))) *__event_##call = &event_##call
#undef __entry
#define __entry entry
#undef __get_dynamic_array
#define __get_dynamic_array(field)	\
((void *)__entry + (__entry->__data_loc_##field & 0xffff))
#undef __get_str
#define __get_str(field) (char *)__get_dynamic_array(field)
#undef __perf_addr
#define __perf_addr(a) __addr = (a)
#undef __perf_count
#define __perf_count(c) __count = (c)
#undef DECLARE_EVENT_CLASS
#define DECLARE_EVENT_CLASS(call, proto, args, tstruct, assign, print)	\
static notrace void							\
perf_trace_##call(void *__data, proto)					\
#undef DEFINE_EVENT
#define DEFINE_EVENT(template, call, proto, args)			\
static inline void perf_test_probe_##call(void)				\
#undef DEFINE_EVENT_PRINT
#define DEFINE_EVENT_PRINT(template, name, proto, args, print)	\
DEFINE_EVENT(template, name, PARAMS(proto), PARAMS(args))
#undef _TRACE_PROFILE_INIT
