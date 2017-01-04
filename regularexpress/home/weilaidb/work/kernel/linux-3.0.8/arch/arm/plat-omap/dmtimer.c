#define _OMAP_TIMER_ID_OFFSET		0x00
#define _OMAP_TIMER_OCP_CFG_OFFSET	0x10
#define _OMAP_TIMER_SYS_STAT_OFFSET	0x14
#define _OMAP_TIMER_STAT_OFFSET		0x18
#define _OMAP_TIMER_INT_EN_OFFSET	0x1c
#define _OMAP_TIMER_WAKEUP_EN_OFFSET	0x20
#define _OMAP_TIMER_CTRL_OFFSET		0x24
#define		OMAP_TIMER_CTRL_GPOCFG		(1 << 14)
#define		OMAP_TIMER_CTRL_CAPTMODE	(1 << 13)
#define		OMAP_TIMER_CTRL_PT		(1 << 12)
#define		OMAP_TIMER_CTRL_TCM_LOWTOHIGH	(0x1 << 8)
#define		OMAP_TIMER_CTRL_TCM_HIGHTOLOW	(0x2 << 8)
#define		OMAP_TIMER_CTRL_TCM_BOTHEDGES	(0x3 << 8)
#define		OMAP_TIMER_CTRL_SCPWM		(1 << 7)
#define		OMAP_TIMER_CTRL_CE		(1 << 6)
#define		OMAP_TIMER_CTRL_PRE		(1 << 5)
#define		OMAP_TIMER_CTRL_PTV_SHIFT	2
#define		OMAP_TIMER_CTRL_POSTED		(1 << 2)
#define		OMAP_TIMER_CTRL_AR		(1 << 1)
#define		OMAP_TIMER_CTRL_ST		(1 << 0)
#define _OMAP_TIMER_COUNTER_OFFSET	0x28
#define _OMAP_TIMER_LOAD_OFFSET		0x2c
#define _OMAP_TIMER_TRIGGER_OFFSET	0x30
#define _OMAP_TIMER_WRITE_PEND_OFFSET	0x34
#define		WP_NONE			0
#define		WP_TCLR			(1 << 0)
#define		WP_TCRR			(1 << 1)
#define		WP_TLDR			(1 << 2)
#define		WP_TTGR			(1 << 3)
#define		WP_TMAR			(1 << 4)
#define		WP_TPIR			(1 << 5)
#define		WP_TNIR			(1 << 6)
#define		WP_TCVR			(1 << 7)
#define		WP_TOCR			(1 << 8)
#define		WP_TOWR			(1 << 9)
#define _OMAP_TIMER_MATCH_OFFSET	0x38
#define _OMAP_TIMER_CAPTURE_OFFSET	0x3c
#define _OMAP_TIMER_IF_CTRL_OFFSET	0x40
#define _OMAP_TIMER_CAPTURE2_OFFSET		0x44
#define _OMAP_TIMER_TICK_POS_OFFSET		0x48
#define _OMAP_TIMER_TICK_NEG_OFFSET		0x4c
#define _OMAP_TIMER_TICK_COUNT_OFFSET		0x50
#define _OMAP_TIMER_TICK_INT_MASK_SET_OFFSET	0x54
#define _OMAP_TIMER_TICK_INT_MASK_COUNT_OFFSET	0x58
#define	WPSHIFT					16
#define OMAP_TIMER_ID_REG			(_OMAP_TIMER_ID_OFFSET \
| (WP_NONE << WPSHIFT))
#define OMAP_TIMER_OCP_CFG_REG			(_OMAP_TIMER_OCP_CFG_OFFSET \
| (WP_NONE << WPSHIFT))
#define OMAP_TIMER_SYS_STAT_REG			(_OMAP_TIMER_SYS_STAT_OFFSET \
| (WP_NONE << WPSHIFT))
#define OMAP_TIMER_STAT_REG			(_OMAP_TIMER_STAT_OFFSET \
| (WP_NONE << WPSHIFT))
#define OMAP_TIMER_INT_EN_REG			(_OMAP_TIMER_INT_EN_OFFSET \
| (WP_NONE << WPSHIFT))
#define OMAP_TIMER_WAKEUP_EN_REG		(_OMAP_TIMER_WAKEUP_EN_OFFSET \
| (WP_NONE << WPSHIFT))
#define OMAP_TIMER_CTRL_REG			(_OMAP_TIMER_CTRL_OFFSET \
| (WP_TCLR << WPSHIFT))
#define OMAP_TIMER_COUNTER_REG			(_OMAP_TIMER_COUNTER_OFFSET \
| (WP_TCRR << WPSHIFT))
#define OMAP_TIMER_LOAD_REG			(_OMAP_TIMER_LOAD_OFFSET \
| (WP_TLDR << WPSHIFT))
#define OMAP_TIMER_TRIGGER_REG			(_OMAP_TIMER_TRIGGER_OFFSET \
| (WP_TTGR << WPSHIFT))
#define OMAP_TIMER_WRITE_PEND_REG		(_OMAP_TIMER_WRITE_PEND_OFFSET \
| (WP_NONE << WPSHIFT))
#define OMAP_TIMER_MATCH_REG			(_OMAP_TIMER_MATCH_OFFSET \
| (WP_TMAR << WPSHIFT))
#define OMAP_TIMER_CAPTURE_REG			(_OMAP_TIMER_CAPTURE_OFFSET \
| (WP_NONE << WPSHIFT))
#define OMAP_TIMER_IF_CTRL_REG			(_OMAP_TIMER_IF_CTRL_OFFSET \
| (WP_NONE << WPSHIFT))
#define OMAP_TIMER_CAPTURE2_REG			(_OMAP_TIMER_CAPTURE2_OFFSET \
| (WP_NONE << WPSHIFT))
#define OMAP_TIMER_TICK_POS_REG			(_OMAP_TIMER_TICK_POS_OFFSET \
| (WP_TPIR << WPSHIFT))
#define OMAP_TIMER_TICK_NEG_REG			(_OMAP_TIMER_TICK_NEG_OFFSET \
| (WP_TNIR << WPSHIFT))
#define OMAP_TIMER_TICK_COUNT_REG		(_OMAP_TIMER_TICK_COUNT_OFFSET \
| (WP_TCVR << WPSHIFT))
#define OMAP_TIMER_TICK_INT_MASK_SET_REG				\
(_OMAP_TIMER_TICK_INT_MASK_SET_OFFSET | (WP_TOCR << WPSHIFT))
#define OMAP_TIMER_TICK_INT_MASK_COUNT_REG				\
(_OMAP_TIMER_TICK_INT_MASK_COUNT_OFFSET | (WP_TOWR << WPSHIFT))
struct omap_dm_timer ;
static int dm_timer_count;
static struct omap_dm_timer omap1_dm_timers[] = ;
static const int omap1_dm_timer_count = ARRAY_SIZE(omap1_dm_timers);
#define omap1_dm_timers			NULL
#define omap1_dm_timer_count		0
static struct omap_dm_timer omap2_dm_timers[] = ;
static const char *omap2_dm_source_names[] __initdata = ;
static struct clk *omap2_dm_source_clocks[3];
static const int omap2_dm_timer_count = ARRAY_SIZE(omap2_dm_timers);
#define omap2_dm_timers			NULL
#define omap2_dm_timer_count		0
#define omap2_dm_source_names		NULL
#define omap2_dm_source_clocks		NULL
static struct omap_dm_timer omap3_dm_timers[] = ;
static const char *omap3_dm_source_names[] __initdata = ;
static struct clk *omap3_dm_source_clocks[2];
static const int omap3_dm_timer_count = ARRAY_SIZE(omap3_dm_timers);
#define omap3_dm_timers			NULL
#define omap3_dm_timer_count		0
#define omap3_dm_source_names		NULL
#define omap3_dm_source_clocks		NULL
static struct omap_dm_timer omap4_dm_timers[] = ;
static const char *omap4_dm_source_names[] __initdata = ;
static struct clk *omap4_dm_source_clocks[2];
static const int omap4_dm_timer_count = ARRAY_SIZE(omap4_dm_timers);
#define omap4_dm_timers			NULL
#define omap4_dm_timer_count		0
#define omap4_dm_source_names		NULL
#define omap4_dm_source_clocks		NULL
static struct omap_dm_timer *dm_timers;
static const char **dm_source_names;
static struct clk **dm_source_clocks;
static spinlock_t dm_timer_lock;
static inline u32 omap_dm_timer_read_reg(struct omap_dm_timer *timer, u32 reg)
static void omap_dm_timer_write_reg(struct omap_dm_timer *timer, u32 reg,
u32 value)
static void omap_dm_timer_wait_for_reset(struct omap_dm_timer *timer)
static void omap_dm_timer_reset(struct omap_dm_timer *timer)
static void omap_dm_timer_prepare(struct omap_dm_timer *timer)
struct omap_dm_timer *omap_dm_timer_request(void)
EXPORT_SYMBOL_GPL(omap_dm_timer_request);
struct omap_dm_timer *omap_dm_timer_request_specific(int id)
EXPORT_SYMBOL_GPL(omap_dm_timer_request_specific);
void omap_dm_timer_free(struct omap_dm_timer *timer)
EXPORT_SYMBOL_GPL(omap_dm_timer_free);
void omap_dm_timer_enable(struct omap_dm_timer *timer)
EXPORT_SYMBOL_GPL(omap_dm_timer_enable);
void omap_dm_timer_disable(struct omap_dm_timer *timer)
EXPORT_SYMBOL_GPL(omap_dm_timer_disable);
int omap_dm_timer_get_irq(struct omap_dm_timer *timer)
EXPORT_SYMBOL_GPL(omap_dm_timer_get_irq);
#if defined(CONFIG_ARCH_OMAP1)
__u32 omap_dm_timer_modify_idlect_mask(__u32 inputmask)
EXPORT_SYMBOL_GPL(omap_dm_timer_modify_idlect_mask);
struct clk *omap_dm_timer_get_fclk(struct omap_dm_timer *timer)
EXPORT_SYMBOL_GPL(omap_dm_timer_get_fclk);
__u32 omap_dm_timer_modify_idlect_mask(__u32 inputmask)
EXPORT_SYMBOL_GPL(omap_dm_timer_modify_idlect_mask);
void omap_dm_timer_trigger(struct omap_dm_timer *timer)
EXPORT_SYMBOL_GPL(omap_dm_timer_trigger);
void omap_dm_timer_start(struct omap_dm_timer *timer)
EXPORT_SYMBOL_GPL(omap_dm_timer_start);
void omap_dm_timer_stop(struct omap_dm_timer *timer)
EXPORT_SYMBOL_GPL(omap_dm_timer_stop);
int omap_dm_timer_set_source(struct omap_dm_timer *timer, int source)
EXPORT_SYMBOL_GPL(omap_dm_timer_set_source);
int omap_dm_timer_set_source(struct omap_dm_timer *timer, int source)
EXPORT_SYMBOL_GPL(omap_dm_timer_set_source);
void omap_dm_timer_set_load(struct omap_dm_timer *timer, int autoreload,
unsigned int load)
EXPORT_SYMBOL_GPL(omap_dm_timer_set_load);
void omap_dm_timer_set_load_start(struct omap_dm_timer *timer, int autoreload,
unsigned int load)
EXPORT_SYMBOL_GPL(omap_dm_timer_set_load_start);
void omap_dm_timer_set_match(struct omap_dm_timer *timer, int enable,
unsigned int match)
EXPORT_SYMBOL_GPL(omap_dm_timer_set_match);
void omap_dm_timer_set_pwm(struct omap_dm_timer *timer, int def_on,
int toggle, int trigger)
EXPORT_SYMBOL_GPL(omap_dm_timer_set_pwm);
void omap_dm_timer_set_prescaler(struct omap_dm_timer *timer, int prescaler)
EXPORT_SYMBOL_GPL(omap_dm_timer_set_prescaler);
void omap_dm_timer_set_int_enable(struct omap_dm_timer *timer,
unsigned int value)
EXPORT_SYMBOL_GPL(omap_dm_timer_set_int_enable);
unsigned int omap_dm_timer_read_status(struct omap_dm_timer *timer)
EXPORT_SYMBOL_GPL(omap_dm_timer_read_status);
void omap_dm_timer_write_status(struct omap_dm_timer *timer, unsigned int value)
EXPORT_SYMBOL_GPL(omap_dm_timer_write_status);
unsigned int omap_dm_timer_read_counter(struct omap_dm_timer *timer)
EXPORT_SYMBOL_GPL(omap_dm_timer_read_counter);
void omap_dm_timer_write_counter(struct omap_dm_timer *timer, unsigned int value)
EXPORT_SYMBOL_GPL(omap_dm_timer_write_counter);
int omap_dm_timers_active(void)
EXPORT_SYMBOL_GPL(omap_dm_timers_active);
int __init omap_dm_timer_init(void)
