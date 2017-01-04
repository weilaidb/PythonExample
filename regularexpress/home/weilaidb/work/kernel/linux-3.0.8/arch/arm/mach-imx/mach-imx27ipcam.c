static const int mx27ipcam_pins[] __initconst = ;
static void __init mx27ipcam_init(void)
static void __init mx27ipcam_timer_init(void)
static struct sys_timer mx27ipcam_timer = ;
MACHINE_START(IMX27IPCAM, "Freescale IMX27IPCAM")
.boot_params = MX27_PHYS_OFFSET + 0x100,
.map_io = mx27_map_io,
.init_early = imx27_init_early,
.init_irq = mx27_init_irq,
.timer = &mx27ipcam_timer,
.init_machine = mx27ipcam_init,
MACHINE_END
