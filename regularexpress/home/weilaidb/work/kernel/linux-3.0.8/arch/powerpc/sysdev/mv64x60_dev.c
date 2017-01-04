static struct of_device_id __initdata of_mv64x60_devices[] = ;
static int __init mv64x60_mpsc_register_shared_pdev(struct device_node *np)
static int __init mv64x60_mpsc_device_setup(struct device_node *np, int id)
static struct platform_device * __init mv64x60_eth_register_shared_pdev(
struct device_node *np, int id)
static int __init mv64x60_eth_device_setup(struct device_node *np, int id,
struct platform_device *shared_pdev)
static int __init mv64x60_i2c_device_setup(struct device_node *np, int id)
static int __init mv64x60_wdt_device_setup(struct device_node *np, int id)
static int __init mv64x60_device_setup(void)
arch_initcall(mv64x60_device_setup);
static int __init mv64x60_add_mpsc_console(void)
console_initcall(mv64x60_add_mpsc_console);
