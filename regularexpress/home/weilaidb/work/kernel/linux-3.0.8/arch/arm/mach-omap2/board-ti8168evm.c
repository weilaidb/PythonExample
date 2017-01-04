static struct omap_board_config_kernel ti8168_evm_config[] __initdata = ;
static void __init ti8168_init_early(void)
static void __init ti8168_evm_init_irq(void)
static void __init ti8168_evm_init(void)
static void __init ti8168_evm_map_io(void)
MACHINE_START(TI8168EVM, "ti8168evm")
.boot_params	= 0x80000100,
.map_io		= ti8168_evm_map_io,
.init_early	= ti8168_init_early,
.init_irq	= ti8168_evm_init_irq,
.timer		= &omap_timer,
.init_machine	= ti8168_evm_init,
MACHINE_END
