#define __PERF_SESSION_H
struct sample_queue;
struct ip_callchain;
struct thread;
struct ordered_samples ;
struct perf_session ;
struct perf_evsel;
struct perf_event_ops;
typedef int (*event_sample)(union perf_event *event, struct perf_sample *sample,
struct perf_evsel *evsel, struct perf_session *session);
typedef int (*event_op)(union perf_event *self, struct perf_sample *sample,
struct perf_session *session);
typedef int (*event_synth_op)(union perf_event *self,
struct perf_session *session);
typedef int (*event_op2)(union perf_event *self, struct perf_session *session,
struct perf_event_ops *ops);
struct perf_event_ops ;
struct perf_session *perf_session__new(const char *filename, int mode,
bool force, bool repipe,
struct perf_event_ops *ops);
void perf_session__delete(struct perf_session *self);
void perf_event_header__bswap(struct perf_event_header *self);
int __perf_session__process_events(struct perf_session *self,
u64 data_offset, u64 data_size, u64 size,
struct perf_event_ops *ops);
int perf_session__process_events(struct perf_session *self,
struct perf_event_ops *event_ops);
int perf_session__resolve_callchain(struct perf_session *self,
struct thread *thread,
struct ip_callchain *chain,
struct symbol **parent);
bool perf_session__has_traces(struct perf_session *self, const char *msg);
int perf_session__set_kallsyms_ref_reloc_sym(struct map **maps,
const char *symbol_name,
u64 addr);
void mem_bswap_64(void *src, int byte_size);
void perf_event__attr_swap(struct perf_event_attr *attr);
int perf_session__create_kernel_maps(struct perf_session *self);
void perf_session__update_sample_type(struct perf_session *self);
void perf_session__remove_thread(struct perf_session *self, struct thread *th);
static inline
struct machine *perf_session__find_host_machine(struct perf_session *self)
static inline
struct machine *perf_session__find_machine(struct perf_session *self, pid_t pid)
static inline
struct machine *perf_session__findnew_machine(struct perf_session *self, pid_t pid)
static inline
void perf_session__process_machines(struct perf_session *self,
machine__process_t process)
size_t perf_session__fprintf_dsos(struct perf_session *self, FILE *fp);
size_t perf_session__fprintf_dsos_buildid(struct perf_session *self,
FILE *fp, bool with_hits);
size_t perf_session__fprintf_nr_events(struct perf_session *session, FILE *fp);
static inline int perf_session__parse_sample(struct perf_session *session,
const union perf_event *event,
struct perf_sample *sample)
struct perf_evsel *perf_session__find_first_evtype(struct perf_session *session,
unsigned int type);
void perf_session__print_symbols(union perf_event *event,
struct perf_sample *sample,
struct perf_session *session);
