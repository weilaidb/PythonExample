#undef DEBUG
static struct of_device_id mpc5200_cdm_ids[] __initdata = ;
static struct of_device_id mpc5200_gpio_ids[] __initdata = ;
static void __init
lite5200_fix_clock_config(void)
static void __init
lite5200_fix_port_config(void)
static void lite5200_suspend_prepare(void __iomem *mbar)
static void lite5200_resume_finish(void __iomem *mbar)
static void __init lite5200_setup_arch(void)
static const char *board[] __initdata = ;
static int __init lite5200_probe(void)
define_machine(lite5200) ;
