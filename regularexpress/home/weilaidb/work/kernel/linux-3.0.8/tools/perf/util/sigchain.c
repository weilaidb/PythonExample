#define SIGCHAIN_MAX_SIGNALS 32
struct sigchain_signal ;
static struct sigchain_signal signals[SIGCHAIN_MAX_SIGNALS];
static void check_signum(int sig)
static int sigchain_push(int sig, sigchain_fun f)
int sigchain_pop(int sig)
void sigchain_push_common(sigchain_fun f)
