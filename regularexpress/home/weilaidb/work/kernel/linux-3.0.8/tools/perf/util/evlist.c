#define FD(e, x, y) (*(int *)xyarray__entry(e->fd, x, y))
#define SID(e, x, y) xyarray__entry(e->sample_id, x, y)
void perf_evlist__init(struct perf_evlist *evlist, struct cpu_map *cpus,
struct thread_map *threads)
struct perf_evlist *perf_evlist__new(struct cpu_map *cpus,
struct thread_map *threads)
static void perf_evlist__purge(struct perf_evlist *evlist)
void perf_evlist__exit(struct perf_evlist *evlist)
void perf_evlist__delete(struct perf_evlist *evlist)
void perf_evlist__add(struct perf_evlist *evlist, struct perf_evsel *entry)
int perf_evlist__add_default(struct perf_evlist *evlist)
int perf_evlist__alloc_pollfd(struct perf_evlist *evlist)
void perf_evlist__add_pollfd(struct perf_evlist *evlist, int fd)
static void perf_evlist__id_hash(struct perf_evlist *evlist,
struct perf_evsel *evsel,
int cpu, int thread, u64 id)
void perf_evlist__id_add(struct perf_evlist *evlist, struct perf_evsel *evsel,
int cpu, int thread, u64 id)
static int perf_evlist__id_add_fd(struct perf_evlist *evlist,
struct perf_evsel *evsel,
int cpu, int thread, int fd)
struct perf_evsel *perf_evlist__id2evsel(struct perf_evlist *evlist, u64 id)
union perf_event *perf_evlist__mmap_read(struct perf_evlist *evlist, int idx)
void perf_evlist__munmap(struct perf_evlist *evlist)
int perf_evlist__alloc_mmap(struct perf_evlist *evlist)
static int __perf_evlist__mmap(struct perf_evlist *evlist,
int idx, int prot, int mask, int fd)
static int perf_evlist__mmap_per_cpu(struct perf_evlist *evlist, int prot, int mask)
static int perf_evlist__mmap_per_thread(struct perf_evlist *evlist, int prot, int mask)
int perf_evlist__mmap(struct perf_evlist *evlist, int pages, bool overwrite)
int perf_evlist__create_maps(struct perf_evlist *evlist, pid_t target_pid,
pid_t target_tid, const char *cpu_list)
void perf_evlist__delete_maps(struct perf_evlist *evlist)
int perf_evlist__set_filters(struct perf_evlist *evlist)
bool perf_evlist__valid_sample_type(const struct perf_evlist *evlist)
u64 perf_evlist__sample_type(const struct perf_evlist *evlist)
bool perf_evlist__valid_sample_id_all(const struct perf_evlist *evlist)
bool perf_evlist__sample_id_all(const struct perf_evlist *evlist)
