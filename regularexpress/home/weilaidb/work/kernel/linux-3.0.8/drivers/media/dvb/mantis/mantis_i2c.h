#define __MANTIS_I2C_H
#define I2C_STOP		(1 <<  0)
#define I2C_READ		(1 <<  1)
extern int mantis_i2c_init(struct mantis_pci *mantis);
extern int mantis_i2c_exit(struct mantis_pci *mantis);
