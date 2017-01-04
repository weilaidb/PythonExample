static uint debug_uart;
module_param_named(debug_uart, debug_uart, uint, 0);
static struct platform_device *devices[] __initdata = ;
static void __init mahimahi_init(void)
static void __init mahimahi_fixup(struct machine_desc *desc, struct tag *tags,
char **cmdline, struct meminfo *mi)
static void __init mahimahi_map_io(void)
extern struct sys_timer msm_timer;
MACHINE_START(MAHIMAHI, "mahimahi")
.boot_params	= 0x20000100,
.fixup		= mahimahi_fixup,
.map_io		= mahimahi_map_io,
.init_irq	= msm_init_irq,
.init_machine	= mahimahi_init,
.timer		= &msm_timer,
MACHINE_END
