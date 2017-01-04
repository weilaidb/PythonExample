#define	PWM_NCHAN	4
struct pwm ;
#define PWM_MR		0x00
#define PWM_ENA		0x04
#define PWM_DIS		0x08
#define PWM_SR		0x0c
#define PWM_IER		0x10
#define PWM_IDR		0x14
#define PWM_IMR		0x18
#define PWM_ISR		0x1c
static inline void pwm_writel(const struct pwm *p, unsigned offset, u32 val)
static inline u32 pwm_readl(const struct pwm *p, unsigned offset)
static inline void __iomem *pwmc_regs(const struct pwm *p, int index)
static struct pwm *pwm;
static void pwm_dumpregs(struct pwm_channel *ch, char *tag)
int pwm_channel_alloc(int index, struct pwm_channel *ch)
EXPORT_SYMBOL(pwm_channel_alloc);
static int pwmcheck(struct pwm_channel *ch)
int pwm_channel_free(struct pwm_channel *ch)
EXPORT_SYMBOL(pwm_channel_free);
int __pwm_channel_onoff(struct pwm_channel *ch, int enabled)
EXPORT_SYMBOL(__pwm_channel_onoff);
int pwm_clk_alloc(unsigned prescale, unsigned div)
EXPORT_SYMBOL(pwm_clk_alloc);
void pwm_clk_free(unsigned clk)
EXPORT_SYMBOL(pwm_clk_free);
int pwm_channel_handler(struct pwm_channel *ch,
void (*handler)(struct pwm_channel *ch))
EXPORT_SYMBOL(pwm_channel_handler);
static irqreturn_t pwm_irq(int id, void *_pwm)
static int __init pwm_probe(struct platform_device *pdev)
static int __exit pwm_remove(struct platform_device *pdev)
static struct platform_driver atmel_pwm_driver = ;
static int __init pwm_init(void)
module_init(pwm_init);
static void __exit pwm_exit(void)
module_exit(pwm_exit);
MODULE_DESCRIPTION("Driver for AT32/AT91 PWM module");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:atmel_pwm");
