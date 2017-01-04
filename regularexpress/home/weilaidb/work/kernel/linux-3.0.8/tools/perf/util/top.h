#define __PERF_TOP_H 1
struct perf_evlist;
struct perf_evsel;
struct sym_entry ;
static inline struct symbol *sym_entry__symbol(struct sym_entry *self)
struct perf_top ;
size_t perf_top__header_snprintf(struct perf_top *top, char *bf, size_t size);
void perf_top__reset_sample_counters(struct perf_top *top);
float perf_top__decay_samples(struct perf_top *top, struct rb_root *root);
void perf_top__find_widths(struct perf_top *top, struct rb_root *root,
int *dso_width, int *dso_short_width, int *sym_width);
static inline int perf_top__tui_browser(struct perf_top *top __used)
int perf_top__tui_browser(struct perf_top *top);
