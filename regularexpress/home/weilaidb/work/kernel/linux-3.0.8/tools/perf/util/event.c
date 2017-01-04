static const char *perf_event__names[] = ;
const char *perf_event__name(unsigned int id)
static struct perf_sample synth_sample = ;
static pid_t perf_event__synthesize_comm(union perf_event *event, pid_t pid,
int full, perf_event__handler_t process,
struct perf_session *session)
static int perf_event__synthesize_mmap_events(union perf_event *event,
pid_t pid, pid_t tgid,
perf_event__handler_t process,
struct perf_session *session)
int perf_event__synthesize_modules(perf_event__handler_t process,
struct perf_session *session,
struct machine *machine)
static int __event__synthesize_thread(union perf_event *comm_event,
union perf_event *mmap_event,
pid_t pid, perf_event__handler_t process,
struct perf_session *session)
int perf_event__synthesize_thread_map(struct thread_map *threads,
perf_event__handler_t process,
struct perf_session *session)
int perf_event__synthesize_threads(perf_event__handler_t process,
struct perf_session *session)
struct process_symbol_args ;
static int find_symbol_cb(void *arg, const char *name, char type,
u64 start, u64 end __used)
int perf_event__synthesize_kernel_mmap(perf_event__handler_t process,
struct perf_session *session,
struct machine *machine,
const char *symbol_name)
int perf_event__process_comm(union perf_event *event,
struct perf_sample *sample __used,
struct perf_session *session)
int perf_event__process_lost(union perf_event *event,
struct perf_sample *sample __used,
struct perf_session *session)
static void perf_event__set_kernel_mmap_len(union perf_event *event,
struct map **maps)
static int perf_event__process_kernel_mmap(union perf_event *event,
struct perf_session *session)
int perf_event__process_mmap(union perf_event *event,
struct perf_sample *sample __used,
struct perf_session *session)
int perf_event__process_task(union perf_event *event,
struct perf_sample *sample __used,
struct perf_session *session)
int perf_event__process(union perf_event *event, struct perf_sample *sample,
struct perf_session *session)
void thread__find_addr_map(struct thread *self,
struct perf_session *session, u8 cpumode,
enum map_type type, pid_t pid, u64 addr,
struct addr_location *al)
void thread__find_addr_location(struct thread *self,
struct perf_session *session, u8 cpumode,
enum map_type type, pid_t pid, u64 addr,
struct addr_location *al,
symbol_filter_t filter)
int perf_event__preprocess_sample(const union perf_event *event,
struct perf_session *session,
struct addr_location *al,
struct perf_sample *sample,
symbol_filter_t filter)
