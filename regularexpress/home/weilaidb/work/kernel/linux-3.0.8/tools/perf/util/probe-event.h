#define _PROBE_EVENT_H
extern bool probe_event_dry_run;
struct probe_trace_point ;
struct probe_trace_arg_ref ;
struct probe_trace_arg ;
struct probe_trace_event ;
struct perf_probe_point ;
struct perf_probe_arg_field ;
struct perf_probe_arg ;
struct perf_probe_event ;
struct line_node ;
struct line_range ;
struct variable_list ;
extern int parse_perf_probe_command(const char *cmd,
struct perf_probe_event *pev);
extern char *synthesize_perf_probe_command(struct perf_probe_event *pev);
extern char *synthesize_probe_trace_command(struct probe_trace_event *tev);
extern int synthesize_perf_probe_arg(struct perf_probe_arg *pa, char *buf,
size_t len);
extern bool perf_probe_event_need_dwarf(struct perf_probe_event *pev);
extern void clear_perf_probe_event(struct perf_probe_event *pev);
extern int parse_line_range_desc(const char *cmd, struct line_range *lr);
extern const char *kernel_get_module_path(const char *module);
extern int add_perf_probe_events(struct perf_probe_event *pevs, int npevs,
int max_probe_points, const char *module,
bool force_add);
extern int del_perf_probe_events(struct strlist *dellist);
extern int show_perf_probe_events(void);
extern int show_line_range(struct line_range *lr, const char *module);
extern int show_available_vars(struct perf_probe_event *pevs, int npevs,
int max_probe_points, const char *module,
struct strfilter *filter, bool externs);
extern int show_available_funcs(const char *module, struct strfilter *filter);
#define MAX_EVENT_INDEX	1024
