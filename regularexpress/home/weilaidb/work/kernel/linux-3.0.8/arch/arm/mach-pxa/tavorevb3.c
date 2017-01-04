#define TAVOREVB3_NR_IRQS	(IRQ_BOARD_START + 24)
static mfp_cfg_t evb3_mfp_cfg[] __initdata = ;
#if defined(CONFIG_I2C_PXA) || defined(CONFIG_I2C_PXA_MODULE)
static struct pm860x_touch_pdata evb3_touch = ;
static struct pm860x_backlight_pdata evb3_backlight[] = ;
static struct pm860x_led_pdata evb3_led[] = ;
static struct pm860x_platform_data evb3_pm8607_info = ;
static struct i2c_board_info evb3_i2c_info[] = ;
static void __init evb3_init_i2c(void)
static inline void evb3_init_i2c(void)
static void __init evb3_init(void)
MACHINE_START(TAVOREVB3, "PXA950 Evaluation Board (aka TavorEVB3)")
.boot_params	= 0xa0000100,
.map_io         = pxa3xx_map_io,
.nr_irqs	= TAVOREVB3_NR_IRQS,
.init_irq       = pxa3xx_init_irq,
.timer          = &pxa_timer,
.init_machine   = evb3_init,
MACHINE_END
