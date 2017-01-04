#define FD(e, x, y) (*(int *)xyarray__entry(e->fd, x, y))
int __perf_evsel__sample_size(u64 sample_type)
void perf_evsel__init(struct perf_evsel *evsel,
struct perf_event_attr *attr, int idx)
struct perf_evsel *perf_evsel__new(struct perf_event_attr *attr, int idx)
int perf_evsel__alloc_fd(struct perf_evsel *evsel, int ncpus, int nthreads)
int perf_evsel__alloc_id(struct perf_evsel *evsel, int ncpus, int nthreads)
int perf_evsel__alloc_counts(struct perf_evsel *evsel, int ncpus)
void perf_evsel__free_fd(struct perf_evsel *evsel)
void perf_evsel__free_id(struct perf_evsel *evsel)
void perf_evsel__close_fd(struct perf_evsel *evsel, int ncpus, int nthreads)
void perf_evsel__exit(struct perf_evsel *evsel)
void perf_evsel__delete(struct perf_evsel *evsel)
int __perf_evsel__read_on_cpu(struct perf_evsel *evsel,
int cpu, int thread, bool scale)
int __perf_evsel__read(struct perf_evsel *evsel,
int ncpus, int nthreads, bool scale)
static int __perf_evsel__open(struct perf_evsel *evsel, struct cpu_map *cpus,
struct thread_map *threads, bool group)
static struct  empty_cpu_map = ;
static struct  empty_thread_map = ;
int perf_evsel__open(struct perf_evsel *evsel, struct cpu_map *cpus,
struct thread_map *threads, bool group)
int perf_evsel__open_per_cpu(struct perf_evsel *evsel,
struct cpu_map *cpus, bool group)
int perf_evsel__open_per_thread(struct perf_evsel *evsel,
struct thread_map *threads, bool group)
static int perf_event__parse_id_sample(const union perf_event *event, u64 type,
struct perf_sample *sample)
static bool sample_overlap(const union perf_event *event,
const void *offset, u64 size)
int perf_event__parse_sample(const union perf_event *event, u64 type,
int sample_size, bool sample_id_all,
struct perf_sample *data)
