static int build_id__mark_dso_hit(union perf_event *event,
struct perf_sample *sample __used,
struct perf_evsel *evsel __used,
struct perf_session *session)
static int perf_event__exit_del_thread(union perf_event *event,
struct perf_sample *sample __used,
struct perf_session *session)
struct perf_event_ops build_id__mark_dso_hit_ops = ;
char *dso__build_id_filename(struct dso *self, char *bf, size_t size)
