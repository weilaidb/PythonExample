static unsigned char L_clk_mult[32] = ;
static unsigned char M_clk_mult[4] = ;
static unsigned char N2_clk_mult[8] = ;
#define BASE_CLK	3686400
unsigned int pxa25x_get_clk_frequency_khz(int info)
static unsigned long clk_pxa25x_mem_getrate(struct clk *clk)
static const struct clkops clk_pxa25x_mem_ops = ;
static const struct clkops clk_pxa25x_lcd_ops = ;
static unsigned long gpio12_config_32k[] = ;
static unsigned long gpio12_config_gpio[] = ;
static void clk_gpio12_enable(struct clk *clk)
static void clk_gpio12_disable(struct clk *clk)
static const struct clkops clk_pxa25x_gpio12_ops = ;
static unsigned long gpio11_config_3m6[] = ;
static unsigned long gpio11_config_gpio[] = ;
static void clk_gpio11_enable(struct clk *clk)
static void clk_gpio11_disable(struct clk *clk)
static const struct clkops clk_pxa25x_gpio11_ops = ;
static DEFINE_PXA2_CKEN(pxa25x_hwuart, HWUART, 14745600, 1);
static DEFINE_PXA2_CKEN(pxa25x_ffuart, FFUART, 14745600, 1);
static DEFINE_PXA2_CKEN(pxa25x_btuart, BTUART, 14745600, 1);
static DEFINE_PXA2_CKEN(pxa25x_stuart, STUART, 14745600, 1);
static DEFINE_PXA2_CKEN(pxa25x_usb, USB, 47923000, 5);
static DEFINE_PXA2_CKEN(pxa25x_mmc, MMC, 19169000, 0);
static DEFINE_PXA2_CKEN(pxa25x_i2c, I2C, 31949000, 0);
static DEFINE_PXA2_CKEN(pxa25x_ssp, SSP, 3686400, 0);
static DEFINE_PXA2_CKEN(pxa25x_nssp, NSSP, 3686400, 0);
static DEFINE_PXA2_CKEN(pxa25x_assp, ASSP, 3686400, 0);
static DEFINE_PXA2_CKEN(pxa25x_pwm0, PWM0, 3686400, 0);
static DEFINE_PXA2_CKEN(pxa25x_pwm1, PWM1, 3686400, 0);
static DEFINE_PXA2_CKEN(pxa25x_ac97, AC97, 24576000, 0);
static DEFINE_PXA2_CKEN(pxa25x_i2s, I2S, 14745600, 0);
static DEFINE_PXA2_CKEN(pxa25x_ficp, FICP, 47923000, 0);
static DEFINE_CK(pxa25x_lcd, LCD, &clk_pxa25x_lcd_ops);
static DEFINE_CLK(pxa25x_gpio11, &clk_pxa25x_gpio11_ops, 3686400, 0);
static DEFINE_CLK(pxa25x_gpio12, &clk_pxa25x_gpio12_ops, 32768, 0);
static DEFINE_CLK(pxa25x_mem, &clk_pxa25x_mem_ops, 0, 0);
static struct clk_lookup pxa25x_clkregs[] = ;
static struct clk_lookup pxa25x_hwuart_clkreg =
INIT_CLKREG(&clk_pxa25x_hwuart, "pxa2xx-uart.3", NULL);
#define SAVE(x)		sleep_save[SLEEP_SAVE_##x] = x
#define RESTORE(x)	x = sleep_save[SLEEP_SAVE_##x]
enum ;
static void pxa25x_cpu_pm_save(unsigned long *sleep_save)
static void pxa25x_cpu_pm_restore(unsigned long *sleep_save)
static void pxa25x_cpu_pm_enter(suspend_state_t state)
static int pxa25x_cpu_pm_prepare(void)
static void pxa25x_cpu_pm_finish(void)
static struct pxa_cpu_pm_fns pxa25x_cpu_pm_fns = ;
static void __init pxa25x_init_pm(void)
static inline void pxa25x_init_pm(void)
static int pxa25x_set_wake(struct irq_data *d, unsigned int on)
void __init pxa25x_init_irq(void)
void __init pxa26x_init_irq(void)
static struct map_desc pxa25x_io_desc[] __initdata = ;
void __init pxa25x_map_io(void)
static struct platform_device *pxa25x_devices[] __initdata = ;
static int __init pxa25x_init(void)
postcore_initcall(pxa25x_init);
