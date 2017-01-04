#define OMAP_I2C_SIZE		0x3f
#define OMAP1_I2C_BASE		0xfffb3800
static const char name[] = "omap_i2c";
#define I2C_RESOURCE_BUILDER(base, irq)			\
,						\
,
static struct resource i2c_resources[][2] = ;
#define I2C_DEV_BUILDER(bus_id, res, data)		\
#define MAX_OMAP_I2C_HWMOD_NAME_LEN	16
#define OMAP_I2C_MAX_CONTROLLERS 4
static struct omap_i2c_bus_platform_data i2c_pdata[OMAP_I2C_MAX_CONTROLLERS];
static struct platform_device omap_i2c_devices[] = ;
#define OMAP_I2C_CMDLINE_SETUP	(BIT(31))
static int __init omap_i2c_nr_ports(void)
static inline int omap1_i2c_add_bus(int bus_id)
static void omap_pm_set_max_mpu_wakeup_lat_compat(struct device *dev, long t)
static struct omap_device_pm_latency omap_i2c_latency[] = ;
static inline int omap2_i2c_add_bus(int bus_id)
static inline int omap2_i2c_add_bus(int bus_id)
static int __init omap_i2c_add_bus(int bus_id)
static int __init omap_i2c_bus_setup(char *str)
__setup("i2c_bus=", omap_i2c_bus_setup);
static int __init omap_register_i2c_bus_cmdline(void)
subsys_initcall(omap_register_i2c_bus_cmdline);
int __init omap_register_i2c_bus(int bus_id, u32 clkrate,
struct i2c_board_info const *info,
unsigned len)
