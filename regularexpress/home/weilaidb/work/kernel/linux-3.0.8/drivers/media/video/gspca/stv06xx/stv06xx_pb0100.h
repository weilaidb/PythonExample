#define STV06XX_PB0100_H_
#define PB0100_CROP_TO_VGA	0x01
#define PB0100_SUBSAMPLE	0x02
#define PB_IDENT		0x00
#define PB_RSTART		0x01
#define PB_CSTART		0x02
#define PB_RWSIZE		0x03
#define PB_CWSIZE		0x04
#define PB_CFILLIN		0x05
#define PB_VBL			0x06
#define PB_CONTROL		0x07
#define PB_FINTTIME		0x08
#define PB_RINTTIME		0x09
#define PB_ROWSPEED		0x0a
#define PB_ABORTFRAME		0x0b
#define PB_R12			0x0c
#define PB_RESET		0x0d
#define PB_EXPGAIN		0x0e
#define PB_R15			0x0f
#define PB_R16			0x10
#define PB_R17			0x11
#define PB_R18			0x12
#define PB_R19			0x13
#define PB_R20			0x14
#define PB_R21			0x15
#define PB_R22			0x16
#define PB_UPDATEINT		0x17
#define PB_R24			0x18
#define PB_R25			0x19
#define PB_R26			0x1a
#define PB_R27			0x1b
#define PB_R28			0x1c
#define PB_R29			0x1d
#define PB_R30			0x1e
#define PB_R31			0x1f
#define PB_PREADCTRL		0x20
#define PB_R33			0x21
#define PB_R34			0x22
#define PB_R35			0x23
#define PB_R36			0x24
#define PB_R37			0x25
#define PB_R38			0x26
#define PB_R39			0x27
#define PB_R40			0x28
#define PB_R41			0x29
#define PB_R42			0x2a
#define PB_G1GAIN		0x2b
#define PB_BGAIN		0x2c
#define PB_RGAIN		0x2d
#define PB_G2GAIN		0x2e
#define PB_R47			0x2f
#define PB_R48			0x30
#define PB_R49			0x31
#define PB_R50			0x32
#define PB_ADCMAXGAIN		0x33
#define PB_ADCMINGAIN		0x34
#define PB_ADCGLOBALGAIN	0x35
#define PB_R54			0x36
#define PB_R55			0x37
#define PB_R56			0x38
#define PB_VOFFSET		0x39
#define PB_R58			0x3a
#define PB_ADCGAINH		0x3b
#define PB_ADCGAINL		0x3c
#define PB_R61			0x3d
#define PB_R62			0x3e
#define PB_R63			0x3f
#define PB_R64			0x40
#define PB_R65			0x41
#define PB_R66			0x42
#define PB_R67			0x43
#define PB_R240			0xf0
#define PB_R241			0xf1
#define PB_R242			0xf2
static int pb0100_probe(struct sd *sd);
static int pb0100_start(struct sd *sd);
static int pb0100_init(struct sd *sd);
static int pb0100_stop(struct sd *sd);
static int pb0100_dump(struct sd *sd);
static void pb0100_disconnect(struct sd *sd);
static int pb0100_get_gain(struct gspca_dev *gspca_dev, __s32 *val);
static int pb0100_set_gain(struct gspca_dev *gspca_dev, __s32 val);
static int pb0100_get_red_balance(struct gspca_dev *gspca_dev, __s32 *val);
static int pb0100_set_red_balance(struct gspca_dev *gspca_dev, __s32 val);
static int pb0100_get_blue_balance(struct gspca_dev *gspca_dev, __s32 *val);
static int pb0100_set_blue_balance(struct gspca_dev *gspca_dev, __s32 val);
static int pb0100_get_exposure(struct gspca_dev *gspca_dev, __s32 *val);
static int pb0100_set_exposure(struct gspca_dev *gspca_dev, __s32 val);
static int pb0100_get_autogain(struct gspca_dev *gspca_dev, __s32 *val);
static int pb0100_set_autogain(struct gspca_dev *gspca_dev, __s32 val);
static int pb0100_get_autogain_target(struct gspca_dev *gspca_dev, __s32 *val);
static int pb0100_set_autogain_target(struct gspca_dev *gspca_dev, __s32 val);
static int pb0100_get_natural(struct gspca_dev *gspca_dev, __s32 *val);
static int pb0100_set_natural(struct gspca_dev *gspca_dev, __s32 val);
const struct stv06xx_sensor stv06xx_sensor_pb0100 = ;
