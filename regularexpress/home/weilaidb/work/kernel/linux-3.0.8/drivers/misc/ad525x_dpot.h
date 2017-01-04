#define _AD_DPOT_H_
#define DPOT_CONF(features, wipers, max_pos, uid) \
(((features) << 18) | (((wipers) & 0xFF) << 10) | \
((max_pos & 0xF) << 6) | (uid & 0x3F))
#define DPOT_UID(conf)		(conf & 0x3F)
#define DPOT_MAX_POS(conf)	((conf >> 6) & 0xF)
#define DPOT_WIPERS(conf)	((conf >> 10) & 0xFF)
#define DPOT_FEAT(conf)		(conf >> 18)
#define BRDAC0			(1 << 0)
#define BRDAC1			(1 << 1)
#define BRDAC2			(1 << 2)
#define BRDAC3			(1 << 3)
#define BRDAC4			(1 << 4)
#define BRDAC5			(1 << 5)
#define MAX_RDACS		6
#define F_CMD_INC		(1 << 0)
#define F_CMD_EEP		(1 << 1)
#define F_CMD_OTP		(1 << 2)
#define F_CMD_TOL		(1 << 3)
#define F_RDACS_RW		(1 << 4)
#define F_RDACS_WONLY		(1 << 5)
#define F_AD_APPDATA		(1 << 6)
#define F_SPI_8BIT		(1 << 7)
#define F_SPI_16BIT		(1 << 8)
#define F_SPI_24BIT		(1 << 9)
#define F_RDACS_RW_TOL	(F_RDACS_RW | F_CMD_EEP | F_CMD_TOL)
#define F_RDACS_RW_EEP	(F_RDACS_RW | F_CMD_EEP)
#define F_SPI		(F_SPI_8BIT | F_SPI_16BIT | F_SPI_24BIT)
enum dpot_devid ;
#define DPOT_RDAC0		0
#define DPOT_RDAC1		1
#define DPOT_RDAC2		2
#define DPOT_RDAC3		3
#define DPOT_RDAC4		4
#define DPOT_RDAC5		5
#define DPOT_RDAC_MASK		0x1F
#define DPOT_REG_TOL		0x18
#define DPOT_TOL_RDAC0		(DPOT_REG_TOL | DPOT_RDAC0)
#define DPOT_TOL_RDAC1		(DPOT_REG_TOL | DPOT_RDAC1)
#define DPOT_TOL_RDAC2		(DPOT_REG_TOL | DPOT_RDAC2)
#define DPOT_TOL_RDAC3		(DPOT_REG_TOL | DPOT_RDAC3)
#define DPOT_TOL_RDAC4		(DPOT_REG_TOL | DPOT_RDAC4)
#define DPOT_TOL_RDAC5		(DPOT_REG_TOL | DPOT_RDAC5)
#define DPOT_ADDR_RDAC		(0x0 << 5)
#define DPOT_ADDR_EEPROM	(0x1 << 5)
#define DPOT_ADDR_OTP		(0x1 << 6)
#define DPOT_ADDR_CMD		(0x1 << 7)
#define DPOT_ADDR_OTP_EN	(0x1 << 9)
#define DPOT_DEC_ALL_6DB	(DPOT_ADDR_CMD | (0x4 << 3))
#define DPOT_INC_ALL_6DB	(DPOT_ADDR_CMD | (0x9 << 3))
#define DPOT_DEC_ALL		(DPOT_ADDR_CMD | (0x6 << 3))
#define DPOT_INC_ALL		(DPOT_ADDR_CMD | (0xB << 3))
#define DPOT_SPI_RDAC		0xB0
#define DPOT_SPI_EEPROM		0x30
#define DPOT_SPI_READ_RDAC	0xA0
#define DPOT_SPI_READ_EEPROM	0x90
#define DPOT_SPI_DEC_ALL_6DB	0x50
#define DPOT_SPI_INC_ALL_6DB	0xD0
#define DPOT_SPI_DEC_ALL	0x70
#define DPOT_SPI_INC_ALL	0xF0
#define DPOT_AD5291_RDAC	0x01
#define DPOT_AD5291_READ_RDAC	0x02
#define DPOT_AD5291_STORE_XTPM	0x03
#define DPOT_AD5291_CTRLREG	0x06
#define DPOT_AD5291_UNLOCK_CMD	0x03
#define DPOT_AD5270_1_2_4_RDAC		0x01
#define DPOT_AD5270_1_2_4_READ_RDAC	0x02
#define DPOT_AD5270_1_2_4_STORE_XTPM	0x03
#define DPOT_AD5270_1_2_4_CTRLREG	0x07
#define DPOT_AD5270_1_2_4_UNLOCK_CMD	0x03
#define DPOT_AD5282_RDAC_AB	0x80
#define DPOT_AD5273_FUSE	0x80
#define DPOT_AD5170_2_3_FUSE	0x20
#define DPOT_AD5170_2_3_OW	0x08
#define DPOT_AD5172_3_A0	0x08
#define DPOT_AD5170_2FUSE	0x80
struct dpot_data;
struct ad_dpot_bus_ops ;
struct ad_dpot_bus_data ;
struct ad_dpot_id ;
int ad_dpot_probe(struct device *dev, struct ad_dpot_bus_data *bdata, const struct ad_dpot_id *id);
int ad_dpot_remove(struct device *dev);
