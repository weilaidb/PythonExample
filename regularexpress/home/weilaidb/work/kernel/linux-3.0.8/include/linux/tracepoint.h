#define _LINUX_TRACEPOINT_H
struct module;
struct tracepoint;
struct tracepoint_func ;
struct tracepoint ;
extern int tracepoint_probe_register(const char *name, void *probe, void *data);
extern int
tracepoint_probe_unregister(const char *name, void *probe, void *data);
extern int tracepoint_probe_register_noupdate(const char *name, void *probe,
void *data);
extern int tracepoint_probe_unregister_noupdate(const char *name, void *probe,
void *data);
extern void tracepoint_probe_update_all(void);
struct tracepoint_iter ;
extern void tracepoint_iter_start(struct tracepoint_iter *iter);
extern void tracepoint_iter_next(struct tracepoint_iter *iter);
extern void tracepoint_iter_stop(struct tracepoint_iter *iter);
extern void tracepoint_iter_reset(struct tracepoint_iter *iter);
extern int tracepoint_get_iter_range(struct tracepoint * const **tracepoint,
struct tracepoint * const *begin, struct tracepoint * const *end);
static inline void tracepoint_synchronize_unregister(void)
#define PARAMS(args...) args
extern
void tracepoint_update_probe_range(struct tracepoint * const *begin,
struct tracepoint * const *end);
static inline
void tracepoint_update_probe_range(struct tracepoint * const *begin,
struct tracepoint * const *end)
#define TP_PROTO(args...)	args
#define TP_ARGS(args...)	args
#define TP_CONDITION(args...)	args
#define __DO_TRACE(tp, proto, args, cond)				\
do  while (0)
#define __DECLARE_TRACE(name, proto, args, cond, data_proto, data_args)	\
extern struct tracepoint __tracepoint_##name;			\
static inline void trace_##name(proto)				\
\
static inline int						\
register_trace_##name(void (*probe)(data_proto), void *data)	\
\
static inline int						\
unregister_trace_##name(void (*probe)(data_proto), void *data)	\
\
static inline void						\
check_trace_callback_type_##name(void (*cb)(data_proto))	\
#define DEFINE_TRACE_FN(name, reg, unreg)				 \
static const char __tpstrtab_##name[]				 \
__attribute__((section("__tracepoints_strings"))) = #name;	 \
struct tracepoint __tracepoint_##name				 \
__attribute__((section("__tracepoints"))) =			 \
;\
static struct tracepoint * const __tracepoint_ptr_##name __used	 \
__attribute__((section("__tracepoints_ptrs"))) =		 \
&__tracepoint_##name;
#define DEFINE_TRACE(name)						\
DEFINE_TRACE_FN(name, NULL, NULL);
#define EXPORT_TRACEPOINT_SYMBOL_GPL(name)				\
EXPORT_SYMBOL_GPL(__tracepoint_##name)
#define EXPORT_TRACEPOINT_SYMBOL(name)					\
EXPORT_SYMBOL(__tracepoint_##name)
#define __DECLARE_TRACE(name, proto, args, cond, data_proto, data_args)	\
static inline void trace_##name(proto)				\
\
static inline int						\
register_trace_##name(void (*probe)(data_proto),		\
void *data)				\
\
static inline int						\
unregister_trace_##name(void (*probe)(data_proto),		\
void *data)				\
\
static inline void check_trace_callback_type_##name(void (*cb)(data_proto)) \
#define DEFINE_TRACE_FN(name, reg, unreg)
#define DEFINE_TRACE(name)
#define EXPORT_TRACEPOINT_SYMBOL_GPL(name)
#define EXPORT_TRACEPOINT_SYMBOL(name)
#define DECLARE_TRACE_NOARGS(name)					\
__DECLARE_TRACE(name, void, , 1, void *__data, __data)
#define DECLARE_TRACE(name, proto, args)				\
__DECLARE_TRACE(name, PARAMS(proto), PARAMS(args), 1,	\
PARAMS(void *__data, proto),		\
PARAMS(__data, args))
#define DECLARE_TRACE_CONDITION(name, proto, args, cond)		\
__DECLARE_TRACE(name, PARAMS(proto), PARAMS(args), PARAMS(cond), \
PARAMS(void *__data, proto),			\
PARAMS(__data, args))
#define TRACE_EVENT_FLAGS(event, flag)
#define DECLARE_EVENT_CLASS(name, proto, args, tstruct, assign, print)
#define DEFINE_EVENT(template, name, proto, args)		\
DECLARE_TRACE(name, PARAMS(proto), PARAMS(args))
#define DEFINE_EVENT_PRINT(template, name, proto, args, print)	\
DECLARE_TRACE(name, PARAMS(proto), PARAMS(args))
#define DEFINE_EVENT_CONDITION(template, name, proto,		\
args, cond)			\
DECLARE_TRACE_CONDITION(name, PARAMS(proto),		\
PARAMS(args), PARAMS(cond))
#define TRACE_EVENT(name, proto, args, struct, assign, print)	\
DECLARE_TRACE(name, PARAMS(proto), PARAMS(args))
#define TRACE_EVENT_FN(name, proto, args, struct,		\
assign, print, reg, unreg)			\
DECLARE_TRACE(name, PARAMS(proto), PARAMS(args))
#define TRACE_EVENT_CONDITION(name, proto, args, cond,		\
struct, assign, print)		\
DECLARE_TRACE_CONDITION(name, PARAMS(proto),		\
PARAMS(args), PARAMS(cond))
#define TRACE_EVENT_FLAGS(event, flag)
