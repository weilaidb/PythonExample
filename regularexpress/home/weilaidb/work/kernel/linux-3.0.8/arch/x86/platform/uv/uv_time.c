#define RTC_NAME		"sgi_rtc"
static cycle_t uv_read_rtc(struct clocksource *cs);
static int uv_rtc_next_event(unsigned long, struct clock_event_device *);
static void uv_rtc_timer_setup(enum clock_event_mode,
struct clock_event_device *);
static struct clocksource clocksource_uv = ;
static struct clock_event_device clock_event_device_uv = ;
static DEFINE_PER_CPU(struct clock_event_device, cpu_ced);
struct uv_rtc_timer_head ;
static struct uv_rtc_timer_head		**blade_info __read_mostly;
static int				uv_rtc_evt_enable;
static void uv_rtc_send_IPI(int cpu)
static int uv_intr_pending(int pnode)
static int uv_setup_intr(int cpu, u64 expires)
static __init void uv_rtc_deallocate_timers(void)
static __init int uv_rtc_allocate_timers(void)
static void uv_rtc_find_next_timer(struct uv_rtc_timer_head *head, int pnode)
static int uv_rtc_set_timer(int cpu, u64 expires)
static int uv_rtc_unset_timer(int cpu, int force)
static cycle_t uv_read_rtc(struct clocksource *cs)
static int uv_rtc_next_event(unsigned long delta,
struct clock_event_device *ced)
static void uv_rtc_timer_setup(enum clock_event_mode mode,
struct clock_event_device *evt)
static void uv_rtc_interrupt(void)
static int __init uv_enable_evt_rtc(char *str)
__setup("uvrtcevt", uv_enable_evt_rtc);
static __init void uv_rtc_register_clockevents(struct work_struct *dummy)
static __init int uv_rtc_setup_clock(void)
arch_initcall(uv_rtc_setup_clock);
