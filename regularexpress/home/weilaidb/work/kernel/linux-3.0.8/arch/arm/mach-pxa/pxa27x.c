void pxa27x_clear_otgph(void)
EXPORT_SYMBOL(pxa27x_clear_otgph);
static unsigned long ac97_reset_config[] = ;
void pxa27x_assert_ac97reset(int reset_gpio, int on)
EXPORT_SYMBOL_GPL(pxa27x_assert_ac97reset);
#define BASE_CLK	13000000
unsigned int pxa27x_get_clk_frequency_khz(int info)
static unsigned long clk_pxa27x_mem_getrate(struct clk *clk)
static const struct clkops clk_pxa27x_mem_ops = ;
static unsigned int pxa27x_get_lcdclk_frequency_10khz(void)
static unsigned long clk_pxa27x_lcd_getrate(struct clk *clk)
static const struct clkops clk_pxa27x_lcd_ops = ;
static DEFINE_PXA2_CKEN(pxa27x_ffuart, FFUART, 14857000, 1);
static DEFINE_PXA2_CKEN(pxa27x_btuart, BTUART, 14857000, 1);
static DEFINE_PXA2_CKEN(pxa27x_stuart, STUART, 14857000, 1);
static DEFINE_PXA2_CKEN(pxa27x_i2s, I2S, 14682000, 0);
static DEFINE_PXA2_CKEN(pxa27x_i2c, I2C, 32842000, 0);
static DEFINE_PXA2_CKEN(pxa27x_usb, USB, 48000000, 5);
static DEFINE_PXA2_CKEN(pxa27x_mmc, MMC, 19500000, 0);
static DEFINE_PXA2_CKEN(pxa27x_ficp, FICP, 48000000, 0);
static DEFINE_PXA2_CKEN(pxa27x_usbhost, USBHOST, 48000000, 0);
static DEFINE_PXA2_CKEN(pxa27x_pwri2c, PWRI2C, 13000000, 0);
static DEFINE_PXA2_CKEN(pxa27x_keypad, KEYPAD, 32768, 0);
static DEFINE_PXA2_CKEN(pxa27x_ssp1, SSP1, 13000000, 0);
static DEFINE_PXA2_CKEN(pxa27x_ssp2, SSP2, 13000000, 0);
static DEFINE_PXA2_CKEN(pxa27x_ssp3, SSP3, 13000000, 0);
static DEFINE_PXA2_CKEN(pxa27x_pwm0, PWM0, 13000000, 0);
static DEFINE_PXA2_CKEN(pxa27x_pwm1, PWM1, 13000000, 0);
static DEFINE_PXA2_CKEN(pxa27x_ac97, AC97, 24576000, 0);
static DEFINE_PXA2_CKEN(pxa27x_ac97conf, AC97CONF, 24576000, 0);
static DEFINE_PXA2_CKEN(pxa27x_msl, MSL, 48000000, 0);
static DEFINE_PXA2_CKEN(pxa27x_usim, USIM, 48000000, 0);
static DEFINE_PXA2_CKEN(pxa27x_memstk, MEMSTK, 19500000, 0);
static DEFINE_PXA2_CKEN(pxa27x_im, IM, 0, 0);
static DEFINE_PXA2_CKEN(pxa27x_memc, MEMC, 0, 0);
static DEFINE_CK(pxa27x_lcd, LCD, &clk_pxa27x_lcd_ops);
static DEFINE_CK(pxa27x_camera, CAMERA, &clk_pxa27x_lcd_ops);
static DEFINE_CLK(pxa27x_mem, &clk_pxa27x_mem_ops, 0, 0);
static struct clk_lookup pxa27x_clkregs[] = ;
#define SAVE(x)		sleep_save[SLEEP_SAVE_##x] = x
#define RESTORE(x)	x = sleep_save[SLEEP_SAVE_##x]
static unsigned int pwrmode = PWRMODE_SLEEP;
int __init pxa27x_set_pwrmode(unsigned int mode)
enum ;
void pxa27x_cpu_pm_save(unsigned long *sleep_save)
void pxa27x_cpu_pm_restore(unsigned long *sleep_save)
void pxa27x_cpu_pm_enter(suspend_state_t state)
static int pxa27x_cpu_pm_valid(suspend_state_t state)
static int pxa27x_cpu_pm_prepare(void)
static void pxa27x_cpu_pm_finish(void)
static struct pxa_cpu_pm_fns pxa27x_cpu_pm_fns = ;
static void __init pxa27x_init_pm(void)
static inline void pxa27x_init_pm(void)
static int pxa27x_set_wake(struct irq_data *d, unsigned int on)
void __init pxa27x_init_irq(void)
static struct map_desc pxa27x_io_desc[] __initdata = ;
void __init pxa27x_map_io(void)
void __init pxa27x_set_i2c_power_info(struct i2c_pxa_platform_data *info)
static struct platform_device *devices[] __initdata = ;
static int __init pxa27x_init(void)
postcore_initcall(pxa27x_init);
