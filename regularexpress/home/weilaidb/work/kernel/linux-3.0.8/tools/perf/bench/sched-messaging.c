#define DATASIZE 100
static bool use_pipes = false;
static unsigned int loops = 100;
static bool thread_mode = false;
static unsigned int num_groups = 10;
struct sender_context ;
struct receiver_context ;
static void barf(const char *msg)
static void fdpair(int fds[2])
static void ready(int ready_out, int wakefd)
static void *sender(struct sender_context *ctx)
static void *receiver(struct receiver_context* ctx)
static pthread_t create_worker(void *ctx, void *(*func)(void *))
static void reap_worker(pthread_t id)
static unsigned int group(pthread_t *pth,
unsigned int num_fds,
int ready_out,
int wakefd)
static const struct option options[] = ;
static const char * const bench_sched_message_usage[] = ;
int bench_sched_messaging(int argc, const char **argv,
const char *prefix __used)
