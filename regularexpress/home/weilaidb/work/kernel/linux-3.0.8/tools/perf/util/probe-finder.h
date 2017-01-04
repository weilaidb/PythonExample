#define _PROBE_FINDER_H
#define MAX_PATH_LEN		 256
#define MAX_PROBE_BUFFER	1024
#define MAX_PROBES		 128
static inline int is_c_varname(const char *name)
extern int find_probe_trace_events(int fd, struct perf_probe_event *pev,
struct probe_trace_event **tevs,
int max_tevs);
extern int find_perf_probe_point(unsigned long addr,
struct perf_probe_point *ppt);
extern int find_line_range(int fd, struct line_range *lr);
extern int find_available_vars_at(int fd, struct perf_probe_event *pev,
struct variable_list **vls, int max_points,
bool externs);
struct probe_finder ;
struct trace_event_finder ;
struct available_var_finder ;
struct line_finder ;
