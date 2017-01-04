#define SAARB_NR_IRQS	(IRQ_BOARD_START + 40)
static struct pm860x_touch_pdata saarb_touch = ;
static struct pm860x_backlight_pdata saarb_backlight[] = ;
static struct pm860x_led_pdata saarb_led[] = ;
static struct pm860x_platform_data saarb_pm8607_info = ;
static struct i2c_board_info saarb_i2c_info[] = ;
static void __init saarb_init(void)
MACHINE_START(SAARB, "PXA955 Handheld Platform (aka SAARB)")
.boot_params    = 0xa0000100,
.map_io         = pxa_map_io,
.nr_irqs	= SAARB_NR_IRQS,
.init_irq       = pxa95x_init_irq,
.timer          = &pxa_timer,
.init_machine   = saarb_init,
MACHINE_END
