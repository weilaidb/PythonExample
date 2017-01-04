#define _ISL6421_H
#define ISL6421_OLF1	0x01
#define ISL6421_EN1	0x02
#define ISL6421_VSEL1	0x04
#define ISL6421_LLC1	0x08
#define ISL6421_ENT1	0x10
#define ISL6421_ISEL1	0x20
#define ISL6421_DCL	0x40
#if defined(CONFIG_DVB_ISL6421) || (defined(CONFIG_DVB_ISL6421_MODULE) && defined(MODULE))
extern struct dvb_frontend *isl6421_attach(struct dvb_frontend *fe, struct i2c_adapter *i2c, u8 i2c_addr,
u8 override_set, u8 override_clear);
static inline struct dvb_frontend *isl6421_attach(struct dvb_frontend *fe, struct i2c_adapter *i2c, u8 i2c_addr,
u8 override_set, u8 override_clear)
