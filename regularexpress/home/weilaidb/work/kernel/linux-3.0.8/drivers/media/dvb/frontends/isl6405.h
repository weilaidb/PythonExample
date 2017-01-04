#define _ISL6405_H
#define ISL6405_SR	0x80
#define ISL6405_OLF1	0x01
#define ISL6405_EN1	0x02
#define ISL6405_VSEL1	0x04
#define ISL6405_LLC1	0x08
#define ISL6405_ENT1	0x10
#define ISL6405_ISEL1	0x20
#define ISL6405_DCL	0x40
#define ISL6405_OLF2	0x01
#define ISL6405_OTF	0x02
#define ISL6405_EN2	0x04
#define ISL6405_VSEL2	0x08
#define ISL6405_LLC2	0x10
#define ISL6405_ENT2	0x20
#define ISL6405_ISEL2	0x40
#if defined(CONFIG_DVB_ISL6405) || (defined(CONFIG_DVB_ISL6405_MODULE) && defined(MODULE))
extern struct dvb_frontend *isl6405_attach(struct dvb_frontend *fe, struct i2c_adapter *i2c,
u8 i2c_addr, u8 override_set, u8 override_clear);
static inline struct dvb_frontend *isl6405_attach(struct dvb_frontend *fe,
struct i2c_adapter *i2c, u8 i2c_addr,
u8 override_set, u8 override_clear)
