static struct r8a66597_platdata r8a66597_data = ;
static struct resource r8a66597_usb_host_resources[] = ;
static struct platform_device r8a66597_usb_host_device = ;
static struct m66592_platdata usbf_platdata = ;
static struct resource m66592_usb_peripheral_resources[] = ;
static struct platform_device m66592_usb_peripheral_device = ;
static struct resource cf_ide_resources[] = ;
static struct pata_platform_info pata_info = ;
static struct platform_device cf_ide_device  = ;
static struct resource heartbeat_resources[] = ;
static unsigned char heartbeat_bit_pos[] = ;
static struct heartbeat_data heartbeat_data = ;
static struct platform_device heartbeat_device = ;
static struct ax_plat_data ax88796_platdata = ;
static struct resource ax88796_resources[] = ;
static struct platform_device ax88796_device = ;
static struct mtd_partition nor_flash_partitions[] = ;
static struct physmap_flash_data nor_flash_data = ;
static struct resource nor_flash_resources[] = ;
static struct platform_device nor_flash_device = ;
static struct resource smbus_resources[] = ;
static struct platform_device smbus_device = ;
static struct i2c_board_info __initdata highlander_i2c_devices[] = ;
static struct platform_device *r7780rp_devices[] __initdata = ;
static struct trapped_io cf_trapped_io = ;
static int __init r7780rp_devices_setup(void)
device_initcall(r7780rp_devices_setup);
static int ivdr_clk_enable(struct clk *clk)
static void ivdr_clk_disable(struct clk *clk)
static struct clk_ops ivdr_clk_ops = ;
static struct clk ivdr_clk = ;
static struct clk *r7780rp_clocks[] = ;
#define CLKDEV_CON_ID(_id, _clk)
static struct clk_lookup lookups[] = ;
static void r7780rp_power_off(void)
static void __init highlander_setup(char **cmdline_p)
static unsigned char irl2irq[HL_NR_IRL];
static int highlander_irq_demux(int irq)
static void __init highlander_init_irq(void)
static struct sh_machine_vector mv_highlander __initmv = ;
