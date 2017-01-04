static unsigned long teton_bga_pin_config[] __initdata = ;
static unsigned int teton_bga_matrix_key_map[] = ;
static struct pxa27x_keypad_platform_data teton_bga_keypad_info __initdata = ;
static struct i2c_board_info teton_bga_i2c_info[] __initdata = ;
static void __init teton_bga_init(void)
MACHINE_START(TETON_BGA, "PXA168-based Teton BGA Development Platform")
.map_io		= mmp_map_io,
.nr_irqs	= IRQ_BOARD_START,
.init_irq       = pxa168_init_irq,
.timer          = &pxa168_timer,
.init_machine   = teton_bga_init,
MACHINE_END
