#define TP_IDX_MAX      8
struct throughput ;
struct progress ;
static volatile sig_atomic_t progress_update;
static void progress_interval(int signum)
static void set_progress_signal(void)
static void clear_progress_signal(void)
static int display(struct progress *progress, unsigned n, const char *done)
static void throughput_string(struct strbuf *buf, off_t total,
unsigned int rate)
void display_throughput(struct progress *progress, off_t total)
int display_progress(struct progress *progress, unsigned n)
struct progress *start_progress_delay(const char *title, unsigned total,
unsigned percent_treshold, unsigned delay)
struct progress *start_progress(const char *title, unsigned total)
void stop_progress(struct progress **p_progress)
void stop_progress_msg(struct progress **p_progress, const char *msg)
