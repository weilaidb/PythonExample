#define EXPIO_PARENT_INT	(MXC_INTERNAL_IRQS + GPIO_PORTA + 6)
#define MX51_3DS_ECSPI2_CS	(GPIO_PORTC + 28)
static iomux_v3_cfg_t mx51_3ds_pads[] = ;
static const struct imxuart_platform_data uart_pdata __initconst = ;
static int mx51_3ds_board_keymap[] = ;
static const struct matrix_keymap_data mx51_3ds_map_data __initconst = ;
static int mx51_3ds_spi2_cs[] = ;
static const struct spi_imx_master mx51_3ds_ecspi2_pdata __initconst = ;
static struct spi_board_info mx51_3ds_spi_nor_device[] = ;
static void __init mx51_3ds_init(void)
static void __init mx51_3ds_timer_init(void)
static struct sys_timer mx51_3ds_timer = ;
MACHINE_START(MX51_3DS, "Freescale MX51 3-Stack Board")
.boot_params = MX51_PHYS_OFFSET + 0x100,
.map_io = mx51_map_io,
.init_early = imx51_init_early,
.init_irq = mx51_init_irq,
.timer = &mx51_3ds_timer,
.init_machine = mx51_3ds_init,
MACHINE_END
