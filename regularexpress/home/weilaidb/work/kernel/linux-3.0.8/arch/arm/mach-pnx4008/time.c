static unsigned long pnx4008_gettimeoffset(void)
static irqreturn_t pnx4008_timer_interrupt(int irq, void *dev_id)
static struct irqaction pnx4008_timer_irq = ;
static __init void pnx4008_setup_timer(void)
#define TIMCLK_CTRL_REG  IO_ADDRESS((PNX4008_PWRMAN_BASE + 0xBC))
#define WATCHDOG_CLK_EN                   1
#define TIMER_CLK_EN                      2
static u32 timclk_ctrl_reg_save;
void pnx4008_timer_suspend(void)
void pnx4008_timer_resume(void)
struct sys_timer pnx4008_timer = ;
