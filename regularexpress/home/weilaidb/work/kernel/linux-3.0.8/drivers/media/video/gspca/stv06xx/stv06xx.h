#define STV06XX_H_
#define MODULE_NAME "STV06xx"
#define STV_ISOC_ENDPOINT_ADDR		0x81
#define STV_REG23			0x0423
#define STV_I2C_PARTNER			0x1420
#define STV_I2C_VAL_REG_VAL_PAIRS_MIN1	0x1421
#define STV_I2C_READ_WRITE_TOGGLE	0x1422
#define STV_I2C_FLUSH			0x1423
#define STV_I2C_SUCC_READ_REG_VALS	0x1424
#define STV_ISO_ENABLE			0x1440
#define STV_SCAN_RATE			0x1443
#define STV_LED_CTRL			0x1445
#define STV_STV0600_EMULATION		0x1446
#define STV_REG00			0x1500
#define STV_REG01			0x1501
#define STV_REG02			0x1502
#define STV_REG03			0x1503
#define STV_REG04			0x1504
#define STV_ISO_SIZE_L			0x15c1
#define STV_ISO_SIZE_H			0x15c2
#define STV_Y_CTRL			0x15c3
#define STV_X_CTRL			0x1680
#define STV06XX_URB_MSG_TIMEOUT		5000
#define I2C_MAX_BYTES			16
#define I2C_MAX_WORDS			8
#define I2C_BUFFER_LENGTH		0x23
#define I2C_READ_CMD			3
#define I2C_WRITE_CMD			1
#define LED_ON				1
#define LED_OFF				0
struct sd ;
int stv06xx_write_bridge(struct sd *sd, u16 address, u16 i2c_data);
int stv06xx_read_bridge(struct sd *sd, u16 address, u8 *i2c_data);
int stv06xx_write_sensor_bytes(struct sd *sd, const u8 *data, u8 len);
int stv06xx_write_sensor_words(struct sd *sd, const u16 *data, u8 len);
int stv06xx_read_sensor(struct sd *sd, const u8 address, u16 *value);
int stv06xx_write_sensor(struct sd *sd, u8 address, u16 value);
