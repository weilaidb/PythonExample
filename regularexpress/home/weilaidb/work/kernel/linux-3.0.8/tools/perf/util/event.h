#define __PERF_RECORD_H
struct ip_event ;
struct mmap_event ;
struct comm_event ;
struct fork_event ;
struct lost_event ;
struct read_event ;
#define PERF_SAMPLE_MASK				\
(PERF_SAMPLE_IP | PERF_SAMPLE_TID |		\
PERF_SAMPLE_TIME | PERF_SAMPLE_ADDR |		\
PERF_SAMPLE_ID | PERF_SAMPLE_STREAM_ID |	\
PERF_SAMPLE_CPU | PERF_SAMPLE_PERIOD)
struct sample_event ;
struct perf_sample ;
#define BUILD_ID_SIZE 20
struct build_id_event ;
enum perf_user_event_type ;
struct attr_event ;
#define MAX_EVENT_NAME 64
struct perf_trace_event_type ;
struct event_type_event ;
struct tracing_data_event ;
union perf_event ;
void perf_event__print_totals(void);
struct perf_session;
struct thread_map;
typedef int (*perf_event__handler_synth_t)(union perf_event *event,
struct perf_session *session);
typedef int (*perf_event__handler_t)(union perf_event *event,
struct perf_sample *sample,
struct perf_session *session);
int perf_event__synthesize_thread_map(struct thread_map *threads,
perf_event__handler_t process,
struct perf_session *session);
int perf_event__synthesize_threads(perf_event__handler_t process,
struct perf_session *session);
int perf_event__synthesize_kernel_mmap(perf_event__handler_t process,
struct perf_session *session,
struct machine *machine,
const char *symbol_name);
int perf_event__synthesize_modules(perf_event__handler_t process,
struct perf_session *session,
struct machine *machine);
int perf_event__process_comm(union perf_event *event, struct perf_sample *sample,
struct perf_session *session);
int perf_event__process_lost(union perf_event *event, struct perf_sample *sample,
struct perf_session *session);
int perf_event__process_mmap(union perf_event *event, struct perf_sample *sample,
struct perf_session *session);
int perf_event__process_task(union perf_event *event, struct perf_sample *sample,
struct perf_session *session);
int perf_event__process(union perf_event *event, struct perf_sample *sample,
struct perf_session *session);
struct addr_location;
int perf_event__preprocess_sample(const union perf_event *self,
struct perf_session *session,
struct addr_location *al,
struct perf_sample *sample,
symbol_filter_t filter);
const char *perf_event__name(unsigned int id);
int perf_event__parse_sample(const union perf_event *event, u64 type,
int sample_size, bool sample_id_all,
struct perf_sample *sample);
