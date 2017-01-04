#define _I2C_PXA_H_
#define BUS_ERROR               (-EREMOTEIO)
#define XFER_NAKED              (-ECONNREFUSED)
#define I2C_RETRY               (-2000)
#define I2C_ICR_INIT	(ICR_BEIE | ICR_IRFIE | ICR_ITEIE | ICR_GCD | ICR_SCLE)
#define I2C_ISR_INIT	0x7FF
struct i2c_slave_client;
struct i2c_pxa_platform_data ;
extern void pxa_set_i2c_info(struct i2c_pxa_platform_data *info);
extern void pxa27x_set_i2c_power_info(struct i2c_pxa_platform_data *info);
extern void pxa3xx_set_i2c_power_info(struct i2c_pxa_platform_data *info);
