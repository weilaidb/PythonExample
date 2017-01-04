#define DEBUG_LOG_INCLUDED
#define FAST_TIMER_LOG
#define FAST_TIMER_SANITY_CHECKS
static int sanity_failed;
#define D1(x)
#define D2(x)
#define DP(x)
static unsigned int fast_timer_running;
static unsigned int fast_timers_added;
static unsigned int fast_timers_started;
static unsigned int fast_timers_expired;
static unsigned int fast_timers_deleted;
static unsigned int fast_timer_is_init;
static unsigned int fast_timer_ints;
struct fast_timer *fast_timer_list = NULL;
#define DEBUG_LOG_MAX 128
static const char * debug_log_string[DEBUG_LOG_MAX];
static unsigned long debug_log_value[DEBUG_LOG_MAX];
static unsigned int debug_log_cnt;
static unsigned int debug_log_cnt_wrapped;
#define DEBUG_LOG(string, value) \
#define DEBUG_LOG(string, value)
#define NUM_TIMER_FREQ 15
#define MAX_USABLE_TIMER_FREQ 7
#define MAX_DELAY_US  853333L
const unsigned long timer_freq_100[NUM_TIMER_FREQ] =
;
#define NUM_TIMER_STATS 16
struct fast_timer timer_added_log[NUM_TIMER_STATS];
struct fast_timer timer_started_log[NUM_TIMER_STATS];
struct fast_timer timer_expired_log[NUM_TIMER_STATS];
int timer_div_settings[NUM_TIMER_STATS];
int timer_freq_settings[NUM_TIMER_STATS];
int timer_delay_settings[NUM_TIMER_STATS];
inline void do_gettimeofday_fast(struct fasttime_t *tv)
inline int fasttime_cmp(struct fasttime_t *t0, struct fasttime_t *t1)
inline void start_timer1(unsigned long delay_us)
void start_one_shot_timer(struct fast_timer *t,
fast_timer_function_type *function,
unsigned long data,
unsigned long delay_us,
const char *name)
static inline int fast_timer_pending (const struct fast_timer * t)
static inline int detach_fast_timer (struct fast_timer *t)
int del_fast_timer(struct fast_timer * t)
static irqreturn_t
timer1_handler(int irq, void *dev_id)
static void wake_up_func(unsigned long data)
void schedule_usleep(unsigned long us)
static int proc_fasttimer_read(char *buf, char **start, off_t offset, int len
,int *eof, void *data_unused);
static struct proc_dir_entry *fasttimer_proc_entry;
#define BIG_BUF_SIZE (500 + NUM_TIMER_STATS * 300)
static int proc_fasttimer_read(char *buf, char **start, off_t offset, int len
,int *eof, void *data_unused)
static volatile unsigned long i = 0;
static volatile int num_test_timeout = 0;
static struct fast_timer tr[10];
static int exp_num[10];
static struct fasttime_t tv_exp[100];
static void test_timeout(unsigned long data)
static void test_timeout1(unsigned long data)
DP(
static char buf0[2000];
static char buf1[2000];
static char buf2[2000];
static char buf3[2000];
static char buf4[2000];
);
static char buf5[6000];
static int j_u[1000];
static void fast_timer_test(void)
int fast_timer_init(void)
__initcall(fast_timer_init);
