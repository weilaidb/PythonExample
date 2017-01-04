#define HPET_MASK			CLOCKSOURCE_MASK(32)
#define FSEC_PER_NSEC			1000000L
#define HPET_DEV_USED_BIT		2
#define HPET_DEV_USED			(1 << HPET_DEV_USED_BIT)
#define HPET_DEV_VALID			0x8
#define HPET_DEV_FSB_CAP		0x1000
#define HPET_DEV_PERI_CAP		0x2000
#define HPET_MIN_CYCLES			128
#define HPET_MIN_PROG_DELTA		(HPET_MIN_CYCLES + (HPET_MIN_CYCLES >> 1))
#define EVT_TO_HPET_DEV(evt) container_of(evt, struct hpet_dev, evt)
unsigned long				hpet_address;
u8					hpet_blockid;
u8					hpet_msi_disable;
static unsigned long			hpet_num_timers;
static void __iomem			*hpet_virt_address;
struct hpet_dev ;
inline unsigned int hpet_readl(unsigned int a)
static inline void hpet_writel(unsigned int d, unsigned int a)
static inline void hpet_set_mapping(void)
static inline void hpet_clear_mapping(void)
static int boot_hpet_disable;
int hpet_force_user;
static int hpet_verbose;
static int __init hpet_setup(char *str)
__setup("hpet=", hpet_setup);
static int __init disable_hpet(char *str)
__setup("nohpet", disable_hpet);
static inline int is_hpet_capable(void)
static int hpet_legacy_int_enabled;
int is_hpet_enabled(void)
EXPORT_SYMBOL_GPL(is_hpet_enabled);
static void _hpet_print_config(const char *function, int line)
#define hpet_print_config()					\
do  while (0)
static void hpet_reserve_msi_timers(struct hpet_data *hd);
static void hpet_reserve_platform_timers(unsigned int id)
static void hpet_reserve_platform_timers(unsigned int id)
static unsigned long hpet_freq;
static void hpet_legacy_set_mode(enum clock_event_mode mode,
struct clock_event_device *evt);
static int hpet_legacy_next_event(unsigned long delta,
struct clock_event_device *evt);
static struct clock_event_device hpet_clockevent = ;
static void hpet_stop_counter(void)
static void hpet_reset_counter(void)
static void hpet_start_counter(void)
static void hpet_restart_counter(void)
static void hpet_resume_device(void)
static void hpet_resume_counter(struct clocksource *cs)
static void hpet_enable_legacy_int(void)
static void hpet_legacy_clockevent_register(void)
static int hpet_setup_msi_irq(unsigned int irq);
static void hpet_set_mode(enum clock_event_mode mode,
struct clock_event_device *evt, int timer)
static int hpet_next_event(unsigned long delta,
struct clock_event_device *evt, int timer)
static void hpet_legacy_set_mode(enum clock_event_mode mode,
struct clock_event_device *evt)
static int hpet_legacy_next_event(unsigned long delta,
struct clock_event_device *evt)
static DEFINE_PER_CPU(struct hpet_dev *, cpu_hpet_dev);
static struct hpet_dev	*hpet_devs;
void hpet_msi_unmask(struct irq_data *data)
void hpet_msi_mask(struct irq_data *data)
void hpet_msi_write(struct hpet_dev *hdev, struct msi_msg *msg)
void hpet_msi_read(struct hpet_dev *hdev, struct msi_msg *msg)
static void hpet_msi_set_mode(enum clock_event_mode mode,
struct clock_event_device *evt)
static int hpet_msi_next_event(unsigned long delta,
struct clock_event_device *evt)
static int hpet_setup_msi_irq(unsigned int irq)
static int hpet_assign_irq(struct hpet_dev *dev)
static irqreturn_t hpet_interrupt_handler(int irq, void *data)
static int hpet_setup_irq(struct hpet_dev *dev)
static void init_one_hpet_msi_clockevent(struct hpet_dev *hdev, int cpu)
#define RESERVE_TIMERS 1
#define RESERVE_TIMERS 0
static void hpet_msi_capability_lookup(unsigned int start_timer)
static void hpet_reserve_msi_timers(struct hpet_data *hd)
static struct hpet_dev *hpet_get_unused_timer(void)
struct hpet_work_struct ;
static void hpet_work(struct work_struct *w)
static int hpet_cpuhp_notify(struct notifier_block *n,
unsigned long action, void *hcpu)
static int hpet_setup_msi_irq(unsigned int irq)
static void hpet_msi_capability_lookup(unsigned int start_timer)
static void hpet_reserve_msi_timers(struct hpet_data *hd)
static int hpet_cpuhp_notify(struct notifier_block *n,
unsigned long action, void *hcpu)
static cycle_t read_hpet(struct clocksource *cs)
static cycle_t __vsyscall_fn vread_hpet(void)
static struct clocksource clocksource_hpet = ;
static int hpet_clocksource_register(void)
int __init hpet_enable(void)
static __init int hpet_late_init(void)
fs_initcall(hpet_late_init);
void hpet_disable(void)
#define DEFAULT_RTC_INT_FREQ	64
#define DEFAULT_RTC_SHIFT	6
#define RTC_NUM_INTS		1
static unsigned long hpet_rtc_flags;
static int hpet_prev_update_sec;
static struct rtc_time hpet_alarm_time;
static unsigned long hpet_pie_count;
static u32 hpet_t1_cmp;
static u32 hpet_default_delta;
static u32 hpet_pie_delta;
static unsigned long hpet_pie_limit;
static rtc_irq_handler irq_handler;
static inline int hpet_cnt_ahead(u32 c1, u32 c2)
int hpet_register_irq_handler(rtc_irq_handler handler)
EXPORT_SYMBOL_GPL(hpet_register_irq_handler);
void hpet_unregister_irq_handler(rtc_irq_handler handler)
EXPORT_SYMBOL_GPL(hpet_unregister_irq_handler);
int hpet_rtc_timer_init(void)
EXPORT_SYMBOL_GPL(hpet_rtc_timer_init);
int hpet_mask_rtc_irq_bit(unsigned long bit_mask)
EXPORT_SYMBOL_GPL(hpet_mask_rtc_irq_bit);
int hpet_set_rtc_irq_bit(unsigned long bit_mask)
EXPORT_SYMBOL_GPL(hpet_set_rtc_irq_bit);
int hpet_set_alarm_time(unsigned char hrs, unsigned char min,
unsigned char sec)
EXPORT_SYMBOL_GPL(hpet_set_alarm_time);
int hpet_set_periodic_freq(unsigned long freq)
EXPORT_SYMBOL_GPL(hpet_set_periodic_freq);
int hpet_rtc_dropped_irq(void)
EXPORT_SYMBOL_GPL(hpet_rtc_dropped_irq);
static void hpet_rtc_timer_reinit(void)
irqreturn_t hpet_rtc_interrupt(int irq, void *dev_id)
EXPORT_SYMBOL_GPL(hpet_rtc_interrupt);
