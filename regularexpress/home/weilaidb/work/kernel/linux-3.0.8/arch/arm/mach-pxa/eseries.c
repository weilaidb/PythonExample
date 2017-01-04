void __init eseries_fixup(struct machine_desc *desc,
struct tag *tags, char **cmdline, struct meminfo *mi)
struct gpio_vbus_mach_info e7xx_udc_info = ;
static struct platform_device e7xx_gpio_vbus = ;
struct pxaficp_platform_data e7xx_ficp_platform_data = ;
int eseries_tmio_enable(struct platform_device *dev)
int eseries_tmio_disable(struct platform_device *dev)
int eseries_tmio_suspend(struct platform_device *dev)
int eseries_tmio_resume(struct platform_device *dev)
void eseries_get_tmio_gpios(void)
struct resource eseries_tmio_resources[] = ;
static void clk_32k_dummy(struct clk *clk)
static const struct clkops clk_32k_dummy_ops = ;
static struct clk tmio_dummy_clk = ;
static struct clk_lookup eseries_clkregs[] = ;
void eseries_register_clks(void)
static struct tc6387xb_platform_data e330_tc6387xb_info = ;
static struct platform_device e330_tc6387xb_device = ;
static struct platform_device *e330_devices[] __initdata = ;
static void __init e330_init(void)
MACHINE_START(E330, "Toshiba e330")
.boot_params	= 0xa0000100,
.map_io		= pxa25x_map_io,
.nr_irqs	= ESERIES_NR_IRQS,
.init_irq	= pxa25x_init_irq,
.fixup		= eseries_fixup,
.init_machine	= e330_init,
.timer		= &pxa_timer,
MACHINE_END
static struct t7l66xb_platform_data e350_t7l66xb_info = ;
static struct platform_device e350_t7l66xb_device = ;
static struct platform_device *e350_devices[] __initdata = ;
static void __init e350_init(void)
MACHINE_START(E350, "Toshiba e350")
.boot_params	= 0xa0000100,
.map_io		= pxa25x_map_io,
.nr_irqs	= ESERIES_NR_IRQS,
.init_irq	= pxa25x_init_irq,
.fixup		= eseries_fixup,
.init_machine	= e350_init,
.timer		= &pxa_timer,
MACHINE_END
static struct pxafb_mode_info e400_pxafb_mode_info = ;
static struct pxafb_mach_info e400_pxafb_mach_info = ;
static unsigned long e400_pin_config[] __initdata = ;
static struct mtd_partition partition_a = ;
static uint8_t scan_ff_pattern[] = ;
static struct nand_bbt_descr e400_t7l66xb_nand_bbt = ;
static struct tmio_nand_data e400_t7l66xb_nand_config = ;
static struct t7l66xb_platform_data e400_t7l66xb_info = ;
static struct platform_device e400_t7l66xb_device = ;
static struct platform_device *e400_devices[] __initdata = ;
static void __init e400_init(void)
MACHINE_START(E400, "Toshiba e400")
.boot_params	= 0xa0000100,
.map_io		= pxa25x_map_io,
.nr_irqs	= ESERIES_NR_IRQS,
.init_irq	= pxa25x_init_irq,
.fixup		= eseries_fixup,
.init_machine	= e400_init,
.timer		= &pxa_timer,
MACHINE_END
static struct w100_gen_regs e740_lcd_regs = ;
static struct w100_mode e740_lcd_mode = ;
static struct w100_gpio_regs e740_w100_gpio_info = ;
static struct w100fb_mach_info e740_fb_info = ;
static struct resource e740_fb_resources[] = ;
static struct platform_device e740_fb_device = ;
static unsigned long e740_pin_config[] __initdata = ;
static struct t7l66xb_platform_data e740_t7l66xb_info = ;
static struct platform_device e740_t7l66xb_device = ;
static struct platform_device *e740_devices[] __initdata = ;
static void __init e740_init(void)
MACHINE_START(E740, "Toshiba e740")
.boot_params	= 0xa0000100,
.map_io		= pxa25x_map_io,
.nr_irqs	= ESERIES_NR_IRQS,
.init_irq	= pxa25x_init_irq,
.fixup		= eseries_fixup,
.init_machine	= e740_init,
.timer		= &pxa_timer,
MACHINE_END
static struct w100_gen_regs e750_lcd_regs = ;
static struct w100_mode e750_lcd_mode = ;
static struct w100_gpio_regs e750_w100_gpio_info = ;
static struct w100fb_mach_info e750_fb_info = ;
static struct resource e750_fb_resources[] = ;
static struct platform_device e750_fb_device = ;
static unsigned long e750_pin_config[] __initdata = ;
static struct tc6393xb_platform_data e750_tc6393xb_info = ;
static struct platform_device e750_tc6393xb_device = ;
static struct platform_device *e750_devices[] __initdata = ;
static void __init e750_init(void)
MACHINE_START(E750, "Toshiba e750")
.boot_params	= 0xa0000100,
.map_io		= pxa25x_map_io,
.nr_irqs	= ESERIES_NR_IRQS,
.init_irq	= pxa25x_init_irq,
.fixup		= eseries_fixup,
.init_machine	= e750_init,
.timer		= &pxa_timer,
MACHINE_END
static unsigned long e800_pin_config[] __initdata = ;
static struct w100_gen_regs e800_lcd_regs = ;
static struct w100_mode e800_lcd_mode[2] = ;
static struct w100_gpio_regs e800_w100_gpio_info = ;
static struct w100_mem_info e800_w100_mem_info = ;
static void e800_tg_change(struct w100fb_par *par)
static struct w100_tg_info e800_tg_info = ;
static struct w100fb_mach_info e800_fb_info = ;
static struct resource e800_fb_resources[] = ;
static struct platform_device e800_fb_device = ;
static struct gpio_vbus_mach_info e800_udc_info = ;
static struct platform_device e800_gpio_vbus = ;
static struct tc6393xb_platform_data e800_tc6393xb_info = ;
static struct platform_device e800_tc6393xb_device = ;
static struct platform_device *e800_devices[] __initdata = ;
static void __init e800_init(void)
MACHINE_START(E800, "Toshiba e800")
.boot_params	= 0xa0000100,
.map_io		= pxa25x_map_io,
.nr_irqs	= ESERIES_NR_IRQS,
.init_irq	= pxa25x_init_irq,
.fixup		= eseries_fixup,
.init_machine	= e800_init,
.timer		= &pxa_timer,
MACHINE_END
