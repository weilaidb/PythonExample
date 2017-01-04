#define _FILE_OFFSET_BITS 64
static int perf_session__open(struct perf_session *self, bool force)
static void perf_session__id_header_size(struct perf_session *session)
void perf_session__update_sample_type(struct perf_session *self)
int perf_session__create_kernel_maps(struct perf_session *self)
static void perf_session__destroy_kernel_maps(struct perf_session *self)
struct perf_session *perf_session__new(const char *filename, int mode,
bool force, bool repipe,
struct perf_event_ops *ops)
static void perf_session__delete_dead_threads(struct perf_session *self)
static void perf_session__delete_threads(struct perf_session *self)
void perf_session__delete(struct perf_session *self)
void perf_session__remove_thread(struct perf_session *self, struct thread *th)
static bool symbol__match_parent_regex(struct symbol *sym)
int perf_session__resolve_callchain(struct perf_session *self,
struct thread *thread,
struct ip_callchain *chain,
struct symbol **parent)
static int process_event_synth_stub(union perf_event *event __used,
struct perf_session *session __used)
static int process_event_sample_stub(union perf_event *event __used,
struct perf_sample *sample __used,
struct perf_evsel *evsel __used,
struct perf_session *session __used)
static int process_event_stub(union perf_event *event __used,
struct perf_sample *sample __used,
struct perf_session *session __used)
static int process_finished_round_stub(union perf_event *event __used,
struct perf_session *session __used,
struct perf_event_ops *ops __used)
static int process_finished_round(union perf_event *event,
struct perf_session *session,
struct perf_event_ops *ops);
static void perf_event_ops__fill_defaults(struct perf_event_ops *handler)
void mem_bswap_64(void *src, int byte_size)
static void perf_event__all64_swap(union perf_event *event)
static void perf_event__comm_swap(union perf_event *event)
static void perf_event__mmap_swap(union perf_event *event)
static void perf_event__task_swap(union perf_event *event)
static void perf_event__read_swap(union perf_event *event)
void perf_event__attr_swap(struct perf_event_attr *attr)
static void perf_event__hdr_attr_swap(union perf_event *event)
static void perf_event__event_type_swap(union perf_event *event)
static void perf_event__tracing_data_swap(union perf_event *event)
typedef void (*perf_event__swap_op)(union perf_event *event);
static perf_event__swap_op perf_event__swap_ops[] = ;
struct sample_queue ;
static void perf_session_free_sample_buffers(struct perf_session *session)
static int perf_session_deliver_event(struct perf_session *session,
union perf_event *event,
struct perf_sample *sample,
struct perf_event_ops *ops,
u64 file_offset);
static void flush_sample_queue(struct perf_session *s,
struct perf_event_ops *ops)
static int process_finished_round(union perf_event *event __used,
struct perf_session *session,
struct perf_event_ops *ops)
static void __queue_event(struct sample_queue *new, struct perf_session *s)
#define MAX_SAMPLE_BUFFER	(64 * 1024 / sizeof(struct sample_queue))
static int perf_session_queue_event(struct perf_session *s, union perf_event *event,
struct perf_sample *sample, u64 file_offset)
static void callchain__printf(struct perf_sample *sample)
static void perf_session__print_tstamp(struct perf_session *session,
union perf_event *event,
struct perf_sample *sample)
static void dump_event(struct perf_session *session, union perf_event *event,
u64 file_offset, struct perf_sample *sample)
static void dump_sample(struct perf_session *session, union perf_event *event,
struct perf_sample *sample)
static int perf_session_deliver_event(struct perf_session *session,
union perf_event *event,
struct perf_sample *sample,
struct perf_event_ops *ops,
u64 file_offset)
static int perf_session__preprocess_sample(struct perf_session *session,
union perf_event *event, struct perf_sample *sample)
static int perf_session__process_user_event(struct perf_session *session, union perf_event *event,
struct perf_event_ops *ops, u64 file_offset)
static int perf_session__process_event(struct perf_session *session,
union perf_event *event,
struct perf_event_ops *ops,
u64 file_offset)
void perf_event_header__bswap(struct perf_event_header *self)
static struct thread *perf_session__register_idle_thread(struct perf_session *self)
static void perf_session__warn_about_errors(const struct perf_session *session,
const struct perf_event_ops *ops)
#define session_done()	(*(volatile int *)(&session_done))
volatile int session_done;
static int __perf_session__process_pipe_events(struct perf_session *self,
struct perf_event_ops *ops)
static union perf_event *
fetch_mmaped_event(struct perf_session *session,
u64 head, size_t mmap_size, char *buf)
int __perf_session__process_events(struct perf_session *session,
u64 data_offset, u64 data_size,
u64 file_size, struct perf_event_ops *ops)
int perf_session__process_events(struct perf_session *self,
struct perf_event_ops *ops)
bool perf_session__has_traces(struct perf_session *self, const char *msg)
int perf_session__set_kallsyms_ref_reloc_sym(struct map **maps,
const char *symbol_name,
u64 addr)
size_t perf_session__fprintf_dsos(struct perf_session *self, FILE *fp)
size_t perf_session__fprintf_dsos_buildid(struct perf_session *self, FILE *fp,
bool with_hits)
size_t perf_session__fprintf_nr_events(struct perf_session *session, FILE *fp)
struct perf_evsel *perf_session__find_first_evtype(struct perf_session *session,
unsigned int type)
void perf_session__print_symbols(union perf_event *event,
struct perf_sample *sample,
struct perf_session *session)
