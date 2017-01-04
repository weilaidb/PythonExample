#define _FILE_OFFSET_BITS 64
#define FD(e, x, y) (*(int *)xyarray__entry(e->fd, x, y))
enum write_mode_t ;
static u64			user_interval			= ULLONG_MAX;
static u64			default_interval		=      0;
static unsigned int		page_size;
static unsigned int		mmap_pages			= UINT_MAX;
static unsigned int		user_freq 			= UINT_MAX;
static int			freq				=   1000;
static int			output;
static int			pipe_output			=      0;
static const char		*output_name			= NULL;
static int			group				=      0;
static int			realtime_prio			=      0;
static bool			nodelay				=  false;
static bool			raw_samples			=  false;
static bool			sample_id_all_avail		=   true;
static bool			system_wide			=  false;
static pid_t			target_pid			=     -1;
static pid_t			target_tid			=     -1;
static pid_t			child_pid			=     -1;
static bool			no_inherit			=  false;
static enum write_mode_t	write_mode			= WRITE_FORCE;
static bool			call_graph			=  false;
static bool			inherit_stat			=  false;
static bool			no_samples			=  false;
static bool			sample_address			=  false;
static bool			sample_time			=  false;
static bool			no_buildid			=  false;
static bool			no_buildid_cache		=  false;
static struct perf_evlist	*evsel_list;
static long			samples				=      0;
static u64			bytes_written			=      0;
static int			file_new			=      1;
static off_t			post_processing_offset;
static struct perf_session	*session;
static const char		*cpu_list;
static void advance_output(size_t size)
static void write_output(void *buf, size_t size)
static int process_synthesized_event(union perf_event *event,
struct perf_sample *sample __used,
struct perf_session *self __used)
static void mmap_read(struct perf_mmap *md)
static volatile int done = 0;
static volatile int signr = -1;
static void sig_handler(int sig)
static void sig_atexit(void)
static void config_attr(struct perf_evsel *evsel, struct perf_evlist *evlist)
static bool perf_evlist__equal(struct perf_evlist *evlist,
struct perf_evlist *other)
static void open_counters(struct perf_evlist *evlist)
static int process_buildids(void)
static void atexit_header(void)
static void perf_event__synthesize_guest_os(struct machine *machine, void *data)
static struct perf_event_header finished_round_event = ;
static void mmap_read_all(void)
static int __cmd_record(int argc, const char **argv)
static const char * const record_usage[] = ;
static bool force, append_file;
const struct option record_options[] = ;
int cmd_record(int argc, const char **argv, const char *prefix __used)
