#define INTR_OFFSET	0x600
#define STBCR		0xffffff82
#define STBCR2		0xffffff88
#define STBCR_STBY	0x80
#define STBCR_MSTP2	0x04
#define MCR		0xffffff68
#define RTCNT		0xffffff70
#define MCR_RMODE	2
#define MCR_RFSH	4
extern u8 wakeup_start;
extern u8 wakeup_end;
static void pm_enter(void)
static int hp6x0_pm_enter(suspend_state_t state)
static const struct platform_suspend_ops hp6x0_pm_ops = ;
static int __init hp6x0_pm_init(void)
late_initcall(hp6x0_pm_init);
