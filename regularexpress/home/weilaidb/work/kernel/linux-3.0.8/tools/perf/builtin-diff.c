static char const *input_old = "perf.data.old",
*input_new = "perf.data";
static char	  diff__default_sort_order[] = "dso,symbol";
static bool  force;
static bool show_displacement;
static int hists__add_entry(struct hists *self,
struct addr_location *al, u64 period)
static int diff__process_sample_event(union perf_event *event,
struct perf_sample *sample,
struct perf_evsel *evsel __used,
struct perf_session *session)
static struct perf_event_ops event_ops = ;
static void perf_session__insert_hist_entry_by_name(struct rb_root *root,
struct hist_entry *he)
static void hists__resort_entries(struct hists *self)
static void hists__set_positions(struct hists *self)
static struct hist_entry *hists__find_entry(struct hists *self,
struct hist_entry *he)
static void hists__match(struct hists *older, struct hists *newer)
static int __cmd_diff(void)
static const char * const diff_usage[] = ;
static const struct option options[] = ;
int cmd_diff(int argc, const char **argv, const char *prefix __used)
