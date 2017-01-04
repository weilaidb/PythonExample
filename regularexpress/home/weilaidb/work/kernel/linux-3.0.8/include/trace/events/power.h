#undef TRACE_SYSTEM
#define TRACE_SYSTEM power
#if !defined(_TRACE_POWER_H) || defined(TRACE_HEADER_MULTI_READ)
#define _TRACE_POWER_H
DECLARE_EVENT_CLASS(cpu,
TP_PROTO(unsigned int state, unsigned int cpu_id),
TP_ARGS(state, cpu_id),
TP_STRUCT__entry(
__field(	u32,		state		)
__field(	u32,		cpu_id		)
),
TP_fast_assign(
__entry->state = state;
__entry->cpu_id = cpu_id;
),
TP_printk("state=%lu cpu_id=%lu", (unsigned long)__entry->state,
(unsigned long)__entry->cpu_id)
);
DEFINE_EVENT(cpu, cpu_idle,
TP_PROTO(unsigned int state, unsigned int cpu_id),
TP_ARGS(state, cpu_id)
);
#define _PWR_EVENT_AVOID_DOUBLE_DEFINING
#define PWR_EVENT_EXIT -1
DEFINE_EVENT(cpu, cpu_frequency,
TP_PROTO(unsigned int frequency, unsigned int cpu_id),
TP_ARGS(frequency, cpu_id)
);
TRACE_EVENT(machine_suspend,
TP_PROTO(unsigned int state),
TP_ARGS(state),
TP_STRUCT__entry(
__field(	u32,		state		)
),
TP_fast_assign(
__entry->state = state;
),
TP_printk("state=%lu", (unsigned long)__entry->state)
);
DECLARE_EVENT_CLASS(power,
TP_PROTO(unsigned int type, unsigned int state, unsigned int cpu_id),
TP_ARGS(type, state, cpu_id),
TP_STRUCT__entry(
__field(	u64,		type		)
__field(	u64,		state		)
__field(	u64,		cpu_id		)
),
TP_fast_assign(
__entry->type = type;
__entry->state = state;
__entry->cpu_id = cpu_id;
),
TP_printk("type=%lu state=%lu cpu_id=%lu", (unsigned long)__entry->type,
(unsigned long)__entry->state, (unsigned long)__entry->cpu_id)
);
DEFINE_EVENT(power, power_start,
TP_PROTO(unsigned int type, unsigned int state, unsigned int cpu_id),
TP_ARGS(type, state, cpu_id)
);
DEFINE_EVENT(power, power_frequency,
TP_PROTO(unsigned int type, unsigned int state, unsigned int cpu_id),
TP_ARGS(type, state, cpu_id)
);
TRACE_EVENT(power_end,
TP_PROTO(unsigned int cpu_id),
TP_ARGS(cpu_id),
TP_STRUCT__entry(
__field(	u64,		cpu_id		)
),
TP_fast_assign(
__entry->cpu_id = cpu_id;
),
TP_printk("cpu_id=%lu", (unsigned long)__entry->cpu_id)
);
#define _PWR_EVENT_AVOID_DOUBLE_DEFINING_DEPRECATED
enum ;
#define _PWR_EVENT_AVOID_DOUBLE_DEFINING_DEPRECATED
enum ;
static inline void trace_power_start(u64 type, u64 state, u64 cpuid) ;
static inline void trace_power_end(u64 cpuid) ;
static inline void trace_power_frequency(u64 type, u64 state, u64 cpuid) ;
DECLARE_EVENT_CLASS(clock,
TP_PROTO(const char *name, unsigned int state, unsigned int cpu_id),
TP_ARGS(name, state, cpu_id),
TP_STRUCT__entry(
__string(       name,           name            )
__field(        u64,            state           )
__field(        u64,            cpu_id          )
),
TP_fast_assign(
__assign_str(name, name);
__entry->state = state;
__entry->cpu_id = cpu_id;
),
TP_printk("%s state=%lu cpu_id=%lu", __get_str(name),
(unsigned long)__entry->state, (unsigned long)__entry->cpu_id)
);
DEFINE_EVENT(clock, clock_enable,
TP_PROTO(const char *name, unsigned int state, unsigned int cpu_id),
TP_ARGS(name, state, cpu_id)
);
DEFINE_EVENT(clock, clock_disable,
TP_PROTO(const char *name, unsigned int state, unsigned int cpu_id),
TP_ARGS(name, state, cpu_id)
);
DEFINE_EVENT(clock, clock_set_rate,
TP_PROTO(const char *name, unsigned int state, unsigned int cpu_id),
TP_ARGS(name, state, cpu_id)
);
DECLARE_EVENT_CLASS(power_domain,
TP_PROTO(const char *name, unsigned int state, unsigned int cpu_id),
TP_ARGS(name, state, cpu_id),
TP_STRUCT__entry(
__string(       name,           name            )
__field(        u64,            state           )
__field(        u64,            cpu_id          )
),
TP_fast_assign(
__assign_str(name, name);
__entry->state = state;
__entry->cpu_id = cpu_id;
),
TP_printk("%s state=%lu cpu_id=%lu", __get_str(name),
(unsigned long)__entry->state, (unsigned long)__entry->cpu_id)
);
DEFINE_EVENT(power_domain, power_domain_target,
TP_PROTO(const char *name, unsigned int state, unsigned int cpu_id),
TP_ARGS(name, state, cpu_id)
);
