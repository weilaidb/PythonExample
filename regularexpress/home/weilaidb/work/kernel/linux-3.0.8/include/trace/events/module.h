#undef TRACE_SYSTEM
#define TRACE_SYSTEM module
#if !defined(_TRACE_MODULE_H) || defined(TRACE_HEADER_MULTI_READ)
#define _TRACE_MODULE_H
struct module;
#define show_module_flags(flags) __print_flags(flags, "",	\
,		\
,		\
)
TRACE_EVENT(module_load,
TP_PROTO(struct module *mod),
TP_ARGS(mod),
TP_STRUCT__entry(
__field(	unsigned int,	taints		)
__string(	name,		mod->name	)
),
TP_fast_assign(
__entry->taints = mod->taints;
__assign_str(name, mod->name);
),
TP_printk("%s %s", __get_str(name), show_module_flags(__entry->taints))
);
TRACE_EVENT(module_free,
TP_PROTO(struct module *mod),
TP_ARGS(mod),
TP_STRUCT__entry(
__string(	name,		mod->name	)
),
TP_fast_assign(
__assign_str(name, mod->name);
),
TP_printk("%s", __get_str(name))
);
DECLARE_EVENT_CLASS(module_refcnt,
TP_PROTO(struct module *mod, unsigned long ip),
TP_ARGS(mod, ip),
TP_STRUCT__entry(
__field(	unsigned long,	ip		)
__field(	int,		refcnt		)
__string(	name,		mod->name	)
),
TP_fast_assign(
__entry->ip	= ip;
__entry->refcnt	= __this_cpu_read(mod->refptr->incs) + __this_cpu_read(mod->refptr->decs);
__assign_str(name, mod->name);
),
TP_printk("%s call_site=%pf refcnt=%d",
__get_str(name), (void *)__entry->ip, __entry->refcnt)
);
DEFINE_EVENT(module_refcnt, module_get,
TP_PROTO(struct module *mod, unsigned long ip),
TP_ARGS(mod, ip)
);
DEFINE_EVENT(module_refcnt, module_put,
TP_PROTO(struct module *mod, unsigned long ip),
TP_ARGS(mod, ip)
);
TRACE_EVENT(module_request,
TP_PROTO(char *name, bool wait, unsigned long ip),
TP_ARGS(name, wait, ip),
TP_STRUCT__entry(
__field(	unsigned long,	ip		)
__field(	bool,		wait		)
__string(	name,		name		)
),
TP_fast_assign(
__entry->ip	= ip;
__entry->wait	= wait;
__assign_str(name, name);
),
TP_printk("%s wait=%d call_site=%pf",
__get_str(name), (int)__entry->wait, (void *)__entry->ip)
);
