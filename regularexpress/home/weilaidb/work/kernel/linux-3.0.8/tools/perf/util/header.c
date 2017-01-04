#define _FILE_OFFSET_BITS 64
static bool no_buildid_cache = false;
static int event_count;
static struct perf_trace_event_type *events;
int perf_header__push_event(u64 id, const char *name)
char *perf_header__find_event(u64 id)
static const char *__perf_magic = "PERFFILE";
#define PERF_MAGIC	(*(u64 *)__perf_magic)
struct perf_file_attr ;
void perf_header__set_feat(struct perf_header *header, int feat)
void perf_header__clear_feat(struct perf_header *header, int feat)
bool perf_header__has_feat(const struct perf_header *header, int feat)
static int do_write(int fd, const void *buf, size_t size)
#define NAME_ALIGN 64
static int write_padded(int fd, const void *bf, size_t count,
size_t count_aligned)
#define dsos__for_each_with_build_id(pos, head)	\
list_for_each_entry(pos, head, node)	\
if (!pos->has_build_id)		\
continue;		\
else
static int __dsos__write_buildid_table(struct list_head *head, pid_t pid,
u16 misc, int fd)
static int machine__write_buildid_table(struct machine *machine, int fd)
static int dsos__write_buildid_table(struct perf_header *header, int fd)
int build_id_cache__add_s(const char *sbuild_id, const char *debugdir,
const char *name, bool is_kallsyms)
static int build_id_cache__add_b(const u8 *build_id, size_t build_id_size,
const char *name, const char *debugdir,
bool is_kallsyms)
int build_id_cache__remove_s(const char *sbuild_id, const char *debugdir)
static int dso__cache_build_id(struct dso *dso, const char *debugdir)
static int __dsos__cache_build_ids(struct list_head *head, const char *debugdir)
static int machine__cache_build_ids(struct machine *machine, const char *debugdir)
static int perf_session__cache_build_ids(struct perf_session *session)
static bool machine__read_build_ids(struct machine *machine, bool with_hits)
static bool perf_session__read_build_ids(struct perf_session *session, bool with_hits)
static int perf_header__adds_write(struct perf_header *header,
struct perf_evlist *evlist, int fd)
int perf_header__write_pipe(int fd)
int perf_session__write_header(struct perf_session *session,
struct perf_evlist *evlist,
int fd, bool at_exit)
static int perf_header__getbuffer64(struct perf_header *header,
int fd, void *buf, size_t size)
int perf_header__process_sections(struct perf_header *header, int fd,
int (*process)(struct perf_file_section *section,
struct perf_header *ph,
int feat, int fd))
int perf_file_header__read(struct perf_file_header *header,
struct perf_header *ph, int fd)
static int __event_process_build_id(struct build_id_event *bev,
char *filename,
struct perf_session *session)
static int perf_header__read_build_ids_abi_quirk(struct perf_header *header,
int input, u64 offset, u64 size)
static int perf_header__read_build_ids(struct perf_header *header,
int input, u64 offset, u64 size)
static int perf_file_section__process(struct perf_file_section *section,
struct perf_header *ph,
int feat, int fd)
static int perf_file_header__read_pipe(struct perf_pipe_file_header *header,
struct perf_header *ph, int fd,
bool repipe)
static int perf_header__read_pipe(struct perf_session *session, int fd)
int perf_session__read_header(struct perf_session *session, int fd)
int perf_event__synthesize_attr(struct perf_event_attr *attr, u16 ids, u64 *id,
perf_event__handler_t process,
struct perf_session *session)
int perf_session__synthesize_attrs(struct perf_session *session,
perf_event__handler_t process)
int perf_event__process_attr(union perf_event *event,
struct perf_session *session)
int perf_event__synthesize_event_type(u64 event_id, char *name,
perf_event__handler_t process,
struct perf_session *session)
int perf_event__synthesize_event_types(perf_event__handler_t process,
struct perf_session *session)
int perf_event__process_event_type(union perf_event *event,
struct perf_session *session __unused)
int perf_event__synthesize_tracing_data(int fd, struct perf_evlist *evlist,
perf_event__handler_t process,
struct perf_session *session __unused)
int perf_event__process_tracing_data(union perf_event *event,
struct perf_session *session)
int perf_event__synthesize_build_id(struct dso *pos, u16 misc,
perf_event__handler_t process,
struct machine *machine,
struct perf_session *session)
int perf_event__process_build_id(union perf_event *event,
struct perf_session *session)
void disable_buildid_cache(void)
