static int use_system_timer;
MODULE_PARM_DESC(use_system_timer, "Foce to use system-timer");
module_param(use_system_timer, bool, S_IRUGO);
struct ct_timer_ops ;
struct ct_timer_instance ;
struct ct_timer ;
static void ct_systimer_callback(unsigned long data)
static void ct_systimer_init(struct ct_timer_instance *ti)
static void ct_systimer_start(struct ct_timer_instance *ti)
static void ct_systimer_stop(struct ct_timer_instance *ti)
static void ct_systimer_prepare(struct ct_timer_instance *ti)
#define ct_systimer_free	ct_systimer_prepare
static struct ct_timer_ops ct_systimer_ops = ;
#define CT_TIMER_FREQ	48000
#define MIN_TICKS	1
#define MAX_TICKS	((1 << 13) - 1)
static void ct_xfitimer_irq_rearm(struct ct_timer *atimer, int ticks)
static void ct_xfitimer_irq_stop(struct ct_timer *atimer)
static inline unsigned int ct_xfitimer_get_wc(struct ct_timer *atimer)
static int ct_xfitimer_reprogram(struct ct_timer *atimer, int can_update)
static void ct_xfitimer_check_period(struct ct_timer *atimer)
static void ct_xfitimer_callback(struct ct_timer *atimer)
static void ct_xfitimer_prepare(struct ct_timer_instance *ti)
static void ct_xfitimer_update(struct ct_timer *atimer)
static void ct_xfitimer_start(struct ct_timer_instance *ti)
static void ct_xfitimer_stop(struct ct_timer_instance *ti)
static void ct_xfitimer_free_global(struct ct_timer *atimer)
static struct ct_timer_ops ct_xfitimer_ops = ;
struct ct_timer_instance *
ct_timer_instance_new(struct ct_timer *atimer, struct ct_atc_pcm *apcm)
void ct_timer_prepare(struct ct_timer_instance *ti)
void ct_timer_start(struct ct_timer_instance *ti)
void ct_timer_stop(struct ct_timer_instance *ti)
void ct_timer_instance_free(struct ct_timer_instance *ti)
static void ct_timer_interrupt(void *data, unsigned int status)
struct ct_timer *ct_timer_new(struct ct_atc *atc)
void ct_timer_free(struct ct_timer *atimer)
