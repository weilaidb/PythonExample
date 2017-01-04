#define PTP_MAX_ALARMS 4
#define PTP_MAX_CLOCKS 8
#define PTP_PPS_DEFAULTS (PPS_CAPTUREASSERT | PPS_OFFSETASSERT)
#define PTP_PPS_EVENT PPS_CAPTUREASSERT
#define PTP_PPS_MODE (PTP_PPS_DEFAULTS | PPS_CANWAIT | PPS_TSFMT_TSPEC)
static dev_t ptp_devt;
static struct class *ptp_class;
static DECLARE_BITMAP(ptp_clocks_map, PTP_MAX_CLOCKS);
static DEFINE_MUTEX(ptp_clocks_mutex);
static inline int queue_free(struct timestamp_event_queue *q)
static void enqueue_external_timestamp(struct timestamp_event_queue *queue,
struct ptp_clock_event *src)
static s32 scaled_ppm_to_ppb(long ppm)
static int ptp_clock_getres(struct posix_clock *pc, struct timespec *tp)
static int ptp_clock_settime(struct posix_clock *pc, const struct timespec *tp)
static int ptp_clock_gettime(struct posix_clock *pc, struct timespec *tp)
static int ptp_clock_adjtime(struct posix_clock *pc, struct timex *tx)
static struct posix_clock_operations ptp_clock_ops = ;
static void delete_ptp_clock(struct posix_clock *pc)
struct ptp_clock *ptp_clock_register(struct ptp_clock_info *info)
EXPORT_SYMBOL(ptp_clock_register);
int ptp_clock_unregister(struct ptp_clock *ptp)
EXPORT_SYMBOL(ptp_clock_unregister);
void ptp_clock_event(struct ptp_clock *ptp, struct ptp_clock_event *event)
EXPORT_SYMBOL(ptp_clock_event);
static void __exit ptp_exit(void)
static int __init ptp_init(void)
subsys_initcall(ptp_init);
module_exit(ptp_exit);
MODULE_AUTHOR("Richard Cochran <richard.cochran@omicron.at>");
MODULE_DESCRIPTION("PTP clocks support");
MODULE_LICENSE("GPL");
