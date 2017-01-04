#define __PERF_EVSEL_H 1
struct perf_counts_values ;
struct perf_counts ;
struct perf_evsel;
struct perf_sample_id ;
struct perf_evsel ;
struct cpu_map;
struct thread_map;
struct perf_evlist;
struct perf_evsel *perf_evsel__new(struct perf_event_attr *attr, int idx);
void perf_evsel__init(struct perf_evsel *evsel,
struct perf_event_attr *attr, int idx);
void perf_evsel__exit(struct perf_evsel *evsel);
void perf_evsel__delete(struct perf_evsel *evsel);
int perf_evsel__alloc_fd(struct perf_evsel *evsel, int ncpus, int nthreads);
int perf_evsel__alloc_id(struct perf_evsel *evsel, int ncpus, int nthreads);
int perf_evsel__alloc_counts(struct perf_evsel *evsel, int ncpus);
void perf_evsel__free_fd(struct perf_evsel *evsel);
void perf_evsel__free_id(struct perf_evsel *evsel);
void perf_evsel__close_fd(struct perf_evsel *evsel, int ncpus, int nthreads);
int perf_evsel__open_per_cpu(struct perf_evsel *evsel,
struct cpu_map *cpus, bool group);
int perf_evsel__open_per_thread(struct perf_evsel *evsel,
struct thread_map *threads, bool group);
int perf_evsel__open(struct perf_evsel *evsel, struct cpu_map *cpus,
struct thread_map *threads, bool group);
#define perf_evsel__match(evsel, t, c)		\
(evsel->attr.type == PERF_TYPE_##t &&	\
evsel->attr.config == PERF_COUNT_##c)
int __perf_evsel__read_on_cpu(struct perf_evsel *evsel,
int cpu, int thread, bool scale);
static inline int perf_evsel__read_on_cpu(struct perf_evsel *evsel,
int cpu, int thread)
static inline int perf_evsel__read_on_cpu_scaled(struct perf_evsel *evsel,
int cpu, int thread)
int __perf_evsel__read(struct perf_evsel *evsel, int ncpus, int nthreads,
bool scale);
static inline int perf_evsel__read(struct perf_evsel *evsel,
int ncpus, int nthreads)
static inline int perf_evsel__read_scaled(struct perf_evsel *evsel,
int ncpus, int nthreads)
int __perf_evsel__sample_size(u64 sample_type);
static inline int perf_evsel__sample_size(struct perf_evsel *evsel)
