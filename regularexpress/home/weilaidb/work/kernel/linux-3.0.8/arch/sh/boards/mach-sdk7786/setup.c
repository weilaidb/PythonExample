static struct resource heartbeat_resource = ;
static struct platform_device heartbeat_device = ;
static struct resource smsc911x_resources[] = ;
static struct smsc911x_platform_config smsc911x_config = ;
static struct platform_device smsc911x_device = ;
static struct resource smbus_fpga_resource = ;
static struct platform_device smbus_fpga_device = ;
static struct resource smbus_pcie_resource = ;
static struct platform_device smbus_pcie_device = ;
static struct i2c_board_info __initdata sdk7786_i2c_devices[] = ;
static struct platform_device *sh7786_devices[] __initdata = ;
static int sdk7786_i2c_setup(void)
static int __init sdk7786_devices_setup(void)
device_initcall(sdk7786_devices_setup);
static int sdk7786_mode_pins(void)
static int sdk7786_pcie_clk_enable(struct clk *clk)
static void sdk7786_pcie_clk_disable(struct clk *clk)
static struct clk_ops sdk7786_pcie_clk_ops = ;
static struct clk sdk7786_pcie_clk = ;
static struct clk_lookup sdk7786_pcie_cl = ;
static int sdk7786_clk_init(void)
static void sdk7786_restart(char *cmd)
static void sdk7786_power_off(void)
static void __init sdk7786_setup(char **cmdline_p)
static struct sh_machine_vector mv_sdk7786 __initmv = ;
