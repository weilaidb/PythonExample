#define __ASM_ARCH_DMTIMER_H
#define OMAP_TIMER_SRC_SYS_CLK			0x00
#define OMAP_TIMER_SRC_32_KHZ			0x01
#define OMAP_TIMER_SRC_EXT_CLK			0x02
#define OMAP_TIMER_INT_CAPTURE			(1 << 2)
#define OMAP_TIMER_INT_OVERFLOW			(1 << 1)
#define OMAP_TIMER_INT_MATCH			(1 << 0)
#define OMAP_TIMER_TRIGGER_NONE			0x00
#define OMAP_TIMER_TRIGGER_OVERFLOW		0x01
#define OMAP_TIMER_TRIGGER_OVERFLOW_AND_COMPARE	0x02
#define OMAP_TIMER_IP_VERSION_1                        0x1
struct omap_dm_timer;
extern struct omap_dm_timer *gptimer_wakeup;
extern struct sys_timer omap_timer;
struct clk;
int omap_dm_timer_init(void);
struct omap_dm_timer *omap_dm_timer_request(void);
struct omap_dm_timer *omap_dm_timer_request_specific(int timer_id);
void omap_dm_timer_free(struct omap_dm_timer *timer);
void omap_dm_timer_enable(struct omap_dm_timer *timer);
void omap_dm_timer_disable(struct omap_dm_timer *timer);
int omap_dm_timer_get_irq(struct omap_dm_timer *timer);
u32 omap_dm_timer_modify_idlect_mask(u32 inputmask);
struct clk *omap_dm_timer_get_fclk(struct omap_dm_timer *timer);
void omap_dm_timer_trigger(struct omap_dm_timer *timer);
void omap_dm_timer_start(struct omap_dm_timer *timer);
void omap_dm_timer_stop(struct omap_dm_timer *timer);
int omap_dm_timer_set_source(struct omap_dm_timer *timer, int source);
void omap_dm_timer_set_load(struct omap_dm_timer *timer, int autoreload, unsigned int value);
void omap_dm_timer_set_load_start(struct omap_dm_timer *timer, int autoreload, unsigned int value);
void omap_dm_timer_set_match(struct omap_dm_timer *timer, int enable, unsigned int match);
void omap_dm_timer_set_pwm(struct omap_dm_timer *timer, int def_on, int toggle, int trigger);
void omap_dm_timer_set_prescaler(struct omap_dm_timer *timer, int prescaler);
void omap_dm_timer_set_int_enable(struct omap_dm_timer *timer, unsigned int value);
unsigned int omap_dm_timer_read_status(struct omap_dm_timer *timer);
void omap_dm_timer_write_status(struct omap_dm_timer *timer, unsigned int value);
unsigned int omap_dm_timer_read_counter(struct omap_dm_timer *timer);
void omap_dm_timer_write_counter(struct omap_dm_timer *timer, unsigned int value);
int omap_dm_timers_active(void);
