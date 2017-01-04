# define tassert(expr)
# define tassert(expr) \
if (!(expr)) \
printk(KERN_DEBUG "%s:%s:%i: Assertion failed: " #expr "\n", __FILE__, __func__, __LINE__);
#define BFIN_TIMER_NUM_GROUP  (BFIN_TIMER_OCTET(MAX_BLACKFIN_GPTIMERS - 1) + 1)
typedef struct  GPTIMER_timer_regs;
typedef struct  GPTIMER_group_regs;
static volatile GPTIMER_timer_regs *const timer_regs[MAX_BLACKFIN_GPTIMERS] =
;
static volatile GPTIMER_group_regs *const group_regs[BFIN_TIMER_NUM_GROUP] =
;
static uint32_t const trun_mask[MAX_BLACKFIN_GPTIMERS] =
;
static uint32_t const tovf_mask[MAX_BLACKFIN_GPTIMERS] =
;
static uint32_t const timil_mask[MAX_BLACKFIN_GPTIMERS] =
;
void set_gptimer_pwidth(unsigned int timer_id, uint32_t value)
EXPORT_SYMBOL(set_gptimer_pwidth);
uint32_t get_gptimer_pwidth(unsigned int timer_id)
EXPORT_SYMBOL(get_gptimer_pwidth);
void set_gptimer_period(unsigned int timer_id, uint32_t period)
EXPORT_SYMBOL(set_gptimer_period);
uint32_t get_gptimer_period(unsigned int timer_id)
EXPORT_SYMBOL(get_gptimer_period);
uint32_t get_gptimer_count(unsigned int timer_id)
EXPORT_SYMBOL(get_gptimer_count);
uint32_t get_gptimer_status(unsigned int group)
EXPORT_SYMBOL(get_gptimer_status);
void set_gptimer_status(unsigned int group, uint32_t value)
EXPORT_SYMBOL(set_gptimer_status);
int get_gptimer_intr(unsigned int timer_id)
EXPORT_SYMBOL(get_gptimer_intr);
void clear_gptimer_intr(unsigned int timer_id)
EXPORT_SYMBOL(clear_gptimer_intr);
int get_gptimer_over(unsigned int timer_id)
EXPORT_SYMBOL(get_gptimer_over);
void clear_gptimer_over(unsigned int timer_id)
EXPORT_SYMBOL(clear_gptimer_over);
int get_gptimer_run(unsigned int timer_id)
EXPORT_SYMBOL(get_gptimer_run);
void set_gptimer_config(unsigned int timer_id, uint16_t config)
EXPORT_SYMBOL(set_gptimer_config);
uint16_t get_gptimer_config(unsigned int timer_id)
EXPORT_SYMBOL(get_gptimer_config);
void enable_gptimers(uint16_t mask)
EXPORT_SYMBOL(enable_gptimers);
static void _disable_gptimers(uint16_t mask)
void disable_gptimers(uint16_t mask)
EXPORT_SYMBOL(disable_gptimers);
void disable_gptimers_sync(uint16_t mask)
EXPORT_SYMBOL(disable_gptimers_sync);
void set_gptimer_pulse_hi(unsigned int timer_id)
EXPORT_SYMBOL(set_gptimer_pulse_hi);
void clear_gptimer_pulse_hi(unsigned int timer_id)
EXPORT_SYMBOL(clear_gptimer_pulse_hi);
uint16_t get_enabled_gptimers(void)
EXPORT_SYMBOL(get_enabled_gptimers);
MODULE_AUTHOR("Axel Weiss (awe@aglaia-gmbh.de)");
MODULE_DESCRIPTION("Blackfin General Purpose Timers API");
MODULE_LICENSE("GPL");
