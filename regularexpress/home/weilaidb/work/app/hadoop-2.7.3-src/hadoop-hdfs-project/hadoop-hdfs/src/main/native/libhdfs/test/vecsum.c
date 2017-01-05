#define VECSUM_CHUNK_SIZE (8 * 1024 * 1024)
#define ZCR_READ_CHUNK_SIZE (1024 * 1024 * 8)
#define NORMAL_READ_CHUNK_SIZE (8 * 1024 * 1024)
#define DOUBLES_PER_LOOP_ITER 16
static double timespec_to_double(const struct timespec *ts)
struct stopwatch ;
static int clock_gettime_mono(struct timespec * ts)
static int clock_gettime_mono(struct timespec * ts)
static struct stopwatch *stopwatch_create(void)
static void stopwatch_stop(struct stopwatch *watch,
long long bytes_read)
enum vecsum_type ;
#define VECSUM_TYPE_VALID_VALUES "libhdfs, zcr, or local"
int parse_vecsum_type(const char *str)
struct options ;
static struct options *options_create(void)
static int test_file_chunk_setup(double **chunk)
static void options_free(struct options *opts)
struct local_data ;
static int local_data_create_file(struct local_data *cdata,
const struct options *opts)
static struct local_data *local_data_create(const struct options *opts)
static void local_data_free(struct local_data *cdata)
struct libhdfs_data ;
static void libhdfs_data_free(struct libhdfs_data *ldata)
static int libhdfs_data_create_file(struct libhdfs_data *ldata,
const struct options *opts)
static struct libhdfs_data *libhdfs_data_create(const struct options *opts)
static int check_byte_size(int byte_size, const char *const str)
static double vecsum(const double *buf, int num_doubles)
static double vecsum(const double *buf, int num_doubles)
static int vecsum_zcr_loop(int pass, struct libhdfs_data *ldata,
struct hadoopRzOptions *zopts,
const struct options *opts)
static int vecsum_zcr(struct libhdfs_data *ldata,
const struct options *opts)
tSize hdfsReadFully(hdfsFS fs, hdfsFile f, void* buffer, tSize length)
static int vecsum_normal_loop(int pass, const struct libhdfs_data *ldata,
const struct options *opts)
static int vecsum_libhdfs(struct libhdfs_data *ldata,
const struct options *opts)
static void vecsum_local(struct local_data *cdata, const struct options *opts)
static long long vecsum_length(const struct options *opts,
const struct libhdfs_data *ldata)
int main(void)
