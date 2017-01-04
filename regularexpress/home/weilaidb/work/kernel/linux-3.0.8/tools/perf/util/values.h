#define __PERF_VALUES_H
struct perf_read_values ;
void perf_read_values_init(struct perf_read_values *values);
void perf_read_values_destroy(struct perf_read_values *values);
void perf_read_values_add_value(struct perf_read_values *values,
u32 pid, u32 tid,
u64 rawid, const char *name, u64 value);
void perf_read_values_display(FILE *fp, struct perf_read_values *values,
int raw);
