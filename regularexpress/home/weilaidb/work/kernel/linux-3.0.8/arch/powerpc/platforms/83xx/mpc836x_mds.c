#undef DEBUG
#define DBG(fmt...) udbg_printf(fmt)
#define DBG(fmt...)
static void __init mpc836x_mds_setup_arch(void)
static struct of_device_id mpc836x_ids[] = ;
static int __init mpc836x_declare_of_platform_devices(void)
machine_device_initcall(mpc836x_mds, mpc836x_declare_of_platform_devices);
static int __init mpc836x_usb_cfg(void)
machine_arch_initcall(mpc836x_mds, mpc836x_usb_cfg);
static void __init mpc836x_mds_init_IRQ(void)
static int __init mpc836x_mds_probe(void)
define_machine(mpc836x_mds) ;
