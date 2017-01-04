unsigned long			tick_usec = TICK_USEC;
unsigned long			tick_nsec;
u64				tick_length;
static u64			tick_length_base;
static struct hrtimer		leap_timer;
#define MAX_TICKADJ		500LL
#define MAX_TICKADJ_SCALED \
(((MAX_TICKADJ * NSEC_PER_USEC) << NTP_SCALE_SHIFT) / NTP_INTERVAL_FREQ)
static int			time_state = TIME_OK;
int				time_status = STA_UNSYNC;
static long			time_tai;
static s64			time_offset;
static long			time_constant = 2;
static long			time_maxerror = NTP_PHASE_LIMIT;
static long			time_esterror = NTP_PHASE_LIMIT;
static s64			time_freq;
static long			time_reftime;
static long			time_adjust;
static s64			ntp_tick_adj;
#define PPS_VALID	10
#define PPS_POPCORN	4
#define PPS_INTMIN	2
#define PPS_INTMAX	8
#define PPS_INTCOUNT	4
#define PPS_MAXWANDER	100000
static int pps_valid;
static long pps_tf[3];
static long pps_jitter;
static struct timespec pps_fbase;
static int pps_shift;
static int pps_intcnt;
static s64 pps_freq;
static long pps_stabil;
static long pps_calcnt;
static long pps_jitcnt;
static long pps_stbcnt;
static long pps_errcnt;
static inline s64 ntp_offset_chunk(s64 offset)
static inline void pps_reset_freq_interval(void)
static inline void pps_clear(void)
static inline void pps_dec_valid(void)
static inline void pps_set_freq(s64 freq)
static inline int is_error_status(int status)
static inline void pps_fill_timex(struct timex *txc)
static inline s64 ntp_offset_chunk(s64 offset)
static inline void pps_reset_freq_interval(void)
static inline void pps_clear(void)
static inline void pps_dec_valid(void)
static inline void pps_set_freq(s64 freq)
static inline int is_error_status(int status)
static inline void pps_fill_timex(struct timex *txc)
static void ntp_update_frequency(void)
static inline s64 ntp_update_offset_fll(s64 offset64, long secs)
static void ntp_update_offset(long offset)
void ntp_clear(void)
static enum hrtimer_restart ntp_leap_second(struct hrtimer *timer)
void second_overflow(void)
int no_sync_cmos_clock  __read_mostly;
static void sync_cmos_clock(struct work_struct *work);
static DECLARE_DELAYED_WORK(sync_cmos_work, sync_cmos_clock);
static void sync_cmos_clock(struct work_struct *work)
static void notify_cmos_timer(void)
static inline void notify_cmos_timer(void)
static inline void ntp_start_leap_timer(struct timespec *ts)
static inline void process_adj_status(struct timex *txc, struct timespec *ts)
static inline void process_adjtimex_modes(struct timex *txc, struct timespec *ts)
int do_adjtimex(struct timex *txc)
struct pps_normtime ;
static inline struct pps_normtime pps_normalize_ts(struct timespec ts)
static inline long pps_phase_filter_get(long *jitter)
static inline void pps_phase_filter_add(long err)
static inline void pps_dec_freq_interval(void)
static inline void pps_inc_freq_interval(void)
static long hardpps_update_freq(struct pps_normtime freq_norm)
static void hardpps_update_phase(long error)
void hardpps(const struct timespec *phase_ts, const struct timespec *raw_ts)
EXPORT_SYMBOL(hardpps);
static int __init ntp_tick_adj_setup(char *str)
__setup("ntp_tick_adj=", ntp_tick_adj_setup);
void __init ntp_init(void)
