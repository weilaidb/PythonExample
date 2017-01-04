static char		const *input_name = "-";
static bool		inject_build_ids;
static int perf_event__repipe_synth(union perf_event *event,
struct perf_session *session __used)
static int perf_event__repipe(union perf_event *event,
struct perf_sample *sample __used,
struct perf_session *session)
static int perf_event__repipe_sample(union perf_event *event,
struct perf_sample *sample __used,
struct perf_evsel *evsel __used,
struct perf_session *session)
static int perf_event__repipe_mmap(union perf_event *event,
struct perf_sample *sample,
struct perf_session *session)
static int perf_event__repipe_task(union perf_event *event,
struct perf_sample *sample,
struct perf_session *session)
static int perf_event__repipe_tracing_data(union perf_event *event,
struct perf_session *session)
static int dso__read_build_id(struct dso *self)
static int dso__inject_build_id(struct dso *self, struct perf_session *session)
static int perf_event__inject_buildid(union perf_event *event,
struct perf_sample *sample,
struct perf_evsel *evsel __used,
struct perf_session *session)
struct perf_event_ops inject_ops = ;
extern volatile int session_done;
static void sig_handler(int sig __attribute__((__unused__)))
static int __cmd_inject(void)
static const char * const report_usage[] = ;
static const struct option options[] = ;
int cmd_inject(int argc, const char **argv, const char *prefix __used)
