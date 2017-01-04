#define __TRACE_STAT_H
struct tracer_stat ;
extern int register_stat_tracer(struct tracer_stat *trace);
extern void unregister_stat_tracer(struct tracer_stat *trace);
