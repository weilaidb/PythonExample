#define __ASM__ARCH_OMAP_I2C_H
#if defined(CONFIG_I2C_OMAP) || defined(CONFIG_I2C_OMAP_MODULE)
extern int omap_register_i2c_bus(int bus_id, u32 clkrate,
struct i2c_board_info const *info,
unsigned len);
static inline int omap_register_i2c_bus(int bus_id, u32 clkrate,
struct i2c_board_info const *info,
unsigned len)
struct omap_i2c_dev_attr ;
void __init omap1_i2c_mux_pins(int bus_id);
void __init omap2_i2c_mux_pins(int bus_id);
