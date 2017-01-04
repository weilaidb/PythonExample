static double sym_weight(const struct sym_entry *sym, struct perf_top *top)
static void perf_top__remove_active_sym(struct perf_top *top, struct sym_entry *syme)
static void rb_insert_active_sym(struct rb_root *tree, struct sym_entry *se)
#define SNPRINTF(buf, size, fmt, args...) \
()
size_t perf_top__header_snprintf(struct perf_top *top, char *bf, size_t size)
void perf_top__reset_sample_counters(struct perf_top *top)
float perf_top__decay_samples(struct perf_top *top, struct rb_root *root)
void perf_top__find_widths(struct perf_top *top, struct rb_root *root,
int *dso_width, int *dso_short_width, int *sym_width)
