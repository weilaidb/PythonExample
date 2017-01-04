static char		const *input_name = "perf.data";
static bool		force, use_tui, use_stdio;
static bool		full_paths;
static bool		print_line;
static const char *sym_hist_filter;
static int perf_evlist__add_sample(struct perf_evlist *evlist,
struct perf_sample *sample,
struct perf_evsel *evsel,
struct addr_location *al)
static int process_sample_event(union perf_event *event,
struct perf_sample *sample,
struct perf_evsel *evsel,
struct perf_session *session)
static int hist_entry__tty_annotate(struct hist_entry *he, int evidx)
static void hists__find_annotations(struct hists *self, int evidx)
static struct perf_event_ops event_ops = ;
static int __cmd_annotate(void)
static const char * const annotate_usage[] = ;
static const struct option options[] = ;
int cmd_annotate(int argc, const char **argv, const char *prefix __used)
