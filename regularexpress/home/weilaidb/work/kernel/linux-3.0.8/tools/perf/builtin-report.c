static char		const *input_name = "perf.data";
static bool		force, use_tui, use_stdio;
static bool		hide_unresolved;
static bool		dont_use_callchains;
static bool		show_threads;
static struct perf_read_values	show_threads_values;
static const char	default_pretty_printing_style[] = "normal";
static const char	*pretty_printing_style = default_pretty_printing_style;
static char		callchain_default_opt[] = "fractal,0.5";
static symbol_filter_t	annotate_init;
static int perf_session__add_hist_entry(struct perf_session *session,
struct addr_location *al,
struct perf_sample *sample,
struct perf_evsel *evsel)
static int process_sample_event(union perf_event *event,
struct perf_sample *sample,
struct perf_evsel *evsel,
struct perf_session *session)
static int process_read_event(union perf_event *event,
struct perf_sample *sample __used,
struct perf_session *session)
static int perf_session__setup_sample_type(struct perf_session *self)
static struct perf_event_ops event_ops = ;
extern volatile int session_done;
static void sig_handler(int sig __used)
static size_t hists__fprintf_nr_sample_events(struct hists *self,
const char *evname, FILE *fp)
static int perf_evlist__tty_browse_hists(struct perf_evlist *evlist,
const char *help)
static int __cmd_report(void)
static int
parse_callchain_opt(const struct option *opt __used, const char *arg,
int unset)
static const char * const report_usage[] = ;
static const struct option options[] = ;
int cmd_report(int argc, const char **argv, const char *prefix __used)
