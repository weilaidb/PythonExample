#define K 1024
static const char	*length_str	= "1MB";
static const char	*routine	= "default";
static bool		use_clock;
static int		clock_fd;
static bool		only_prefault;
static bool		no_prefault;
static const struct option options[] = ;
typedef void *(*memcpy_t)(void *, const void *, size_t);
struct routine ;
struct routine routines[] = ;
static const char * const bench_mem_memcpy_usage[] = ;
static struct perf_event_attr clock_attr = ;
static void init_clock(void)
static u64 get_clock(void)
static double timeval2double(struct timeval *ts)
static void alloc_mem(void **dst, void **src, size_t length)
static u64 do_memcpy_clock(memcpy_t fn, size_t len, bool prefault)
static double do_memcpy_gettimeofday(memcpy_t fn, size_t len, bool prefault)
#define pf (no_prefault ? 0 : 1)
#define print_bps(x) do  while (0)
int bench_mem_memcpy(int argc, const char **argv,
const char *prefix __used)
