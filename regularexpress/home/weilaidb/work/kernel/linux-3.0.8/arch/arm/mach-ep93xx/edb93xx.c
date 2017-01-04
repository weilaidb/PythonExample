static void __init edb93xx_register_flash(void)
static struct ep93xx_eth_data __initdata edb93xx_eth_data = ;
static struct i2c_gpio_platform_data __initdata edb93xx_i2c_gpio_data = ;
static struct i2c_board_info __initdata edb93xxa_i2c_board_info[] = ;
static struct i2c_board_info __initdata edb93xx_i2c_board_info[] = ;
static void __init edb93xx_register_i2c(void)
static struct cs4271_platform_data edb93xx_cs4271_data = ;
static int edb93xx_cs4271_hw_setup(struct spi_device *spi)
static void edb93xx_cs4271_hw_cleanup(struct spi_device *spi)
static void edb93xx_cs4271_hw_cs_control(struct spi_device *spi, int value)
static struct ep93xx_spi_chip_ops edb93xx_cs4271_hw = ;
static struct spi_board_info edb93xx_spi_board_info[] __initdata = ;
static struct ep93xx_spi_info edb93xx_spi_info __initdata = ;
static void __init edb93xx_register_spi(void)
static int __init edb93xx_has_audio(void)
static void __init edb93xx_register_i2s(void)
static void __init edb93xx_register_pwm(void)
static struct ep93xxfb_mach_info __initdata edb93xxfb_info = ;
static int __init edb93xx_has_fb(void)
static void __init edb93xx_register_fb(void)
static void __init edb93xx_init_machine(void)
MACHINE_START(EDB9301, "Cirrus Logic EDB9301 Evaluation Board")
.boot_params	= EP93XX_SDCE3_PHYS_BASE_SYNC + 0x100,
.map_io		= ep93xx_map_io,
.init_irq	= ep93xx_init_irq,
.timer		= &ep93xx_timer,
.init_machine	= edb93xx_init_machine,
MACHINE_END
MACHINE_START(EDB9302, "Cirrus Logic EDB9302 Evaluation Board")
.boot_params	= EP93XX_SDCE3_PHYS_BASE_SYNC + 0x100,
.map_io		= ep93xx_map_io,
.init_irq	= ep93xx_init_irq,
.timer		= &ep93xx_timer,
.init_machine	= edb93xx_init_machine,
MACHINE_END
MACHINE_START(EDB9302A, "Cirrus Logic EDB9302A Evaluation Board")
.boot_params	= EP93XX_SDCE0_PHYS_BASE + 0x100,
.map_io		= ep93xx_map_io,
.init_irq	= ep93xx_init_irq,
.timer		= &ep93xx_timer,
.init_machine	= edb93xx_init_machine,
MACHINE_END
MACHINE_START(EDB9307, "Cirrus Logic EDB9307 Evaluation Board")
.boot_params	= EP93XX_SDCE3_PHYS_BASE_SYNC + 0x100,
.map_io		= ep93xx_map_io,
.init_irq	= ep93xx_init_irq,
.timer		= &ep93xx_timer,
.init_machine	= edb93xx_init_machine,
MACHINE_END
MACHINE_START(EDB9307A, "Cirrus Logic EDB9307A Evaluation Board")
.boot_params	= EP93XX_SDCE0_PHYS_BASE + 0x100,
.map_io		= ep93xx_map_io,
.init_irq	= ep93xx_init_irq,
.timer		= &ep93xx_timer,
.init_machine	= edb93xx_init_machine,
MACHINE_END
MACHINE_START(EDB9312, "Cirrus Logic EDB9312 Evaluation Board")
.boot_params	= EP93XX_SDCE3_PHYS_BASE_SYNC + 0x100,
.map_io		= ep93xx_map_io,
.init_irq	= ep93xx_init_irq,
.timer		= &ep93xx_timer,
.init_machine	= edb93xx_init_machine,
MACHINE_END
MACHINE_START(EDB9315, "Cirrus Logic EDB9315 Evaluation Board")
.boot_params	= EP93XX_SDCE3_PHYS_BASE_SYNC + 0x100,
.map_io		= ep93xx_map_io,
.init_irq	= ep93xx_init_irq,
.timer		= &ep93xx_timer,
.init_machine	= edb93xx_init_machine,
MACHINE_END
MACHINE_START(EDB9315A, "Cirrus Logic EDB9315A Evaluation Board")
.boot_params	= EP93XX_SDCE0_PHYS_BASE + 0x100,
.map_io		= ep93xx_map_io,
.init_irq	= ep93xx_init_irq,
.timer		= &ep93xx_timer,
.init_machine	= edb93xx_init_machine,
MACHINE_END
