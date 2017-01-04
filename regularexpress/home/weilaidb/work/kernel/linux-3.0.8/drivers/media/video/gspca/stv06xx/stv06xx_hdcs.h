#define STV06XX_HDCS_H_
#define HDCS_REG_CONFIG(sd)	(IS_1020(sd) ? HDCS20_CONFIG : HDCS00_CONFIG)
#define HDCS_REG_CONTROL(sd)	(IS_1020(sd) ? HDCS20_CONTROL : HDCS00_CONTROL)
#define HDCS_1X00_DEF_WIDTH	360
#define HDCS_1X00_DEF_HEIGHT	296
#define HDCS_1020_DEF_WIDTH	352
#define HDCS_1020_DEF_HEIGHT	292
#define HDCS_1020_BOTTOM_Y_SKIP	4
#define HDCS_CLK_FREQ_MHZ	25
#define HDCS_ADC_START_SIG_DUR	3
#define HDCS_IDENT		(0x00 << 1)
#define HDCS_STATUS		(0x01 << 1)
#define HDCS_IMASK		(0x02 << 1)
#define HDCS_PCTRL		(0x03 << 1)
#define HDCS_PDRV		(0x04 << 1)
#define HDCS_ICTRL		(0x05 << 1)
#define HDCS_ITMG		(0x06 << 1)
#define HDCS_BFRAC		(0x07 << 1)
#define HDCS_BRATE		(0x08 << 1)
#define HDCS_ADCCTRL		(0x09 << 1)
#define HDCS_FWROW		(0x0a << 1)
#define HDCS_FWCOL		(0x0b << 1)
#define HDCS_LWROW		(0x0c << 1)
#define HDCS_LWCOL		(0x0d << 1)
#define HDCS_TCTRL		(0x0e << 1)
#define HDCS_ERECPGA		(0x0f << 1)
#define HDCS_EROCPGA		(0x10 << 1)
#define HDCS_ORECPGA		(0x11 << 1)
#define HDCS_OROCPGA		(0x12 << 1)
#define HDCS_ROWEXPL		(0x13 << 1)
#define HDCS_ROWEXPH		(0x14 << 1)
#define HDCS00_SROWEXPL		(0x15 << 1)
#define HDCS00_SROWEXPH		(0x16 << 1)
#define HDCS00_CONFIG		(0x17 << 1)
#define HDCS00_CONTROL		(0x18 << 1)
#define HDCS20_SROWEXP		(0x15 << 1)
#define HDCS20_ERROR		(0x16 << 1)
#define HDCS20_ITMG2		(0x17 << 1)
#define HDCS20_ICTRL2		(0x18 << 1)
#define HDCS20_HBLANK		(0x19 << 1)
#define HDCS20_VBLANK		(0x1a << 1)
#define HDCS20_CONFIG		(0x1b << 1)
#define HDCS20_CONTROL		(0x1c << 1)
#define HDCS_RUN_ENABLE		(1 << 2)
#define HDCS_SLEEP_MODE		(1 << 1)
#define HDCS_DEFAULT_EXPOSURE	48
#define HDCS_DEFAULT_GAIN	50
static int hdcs_probe_1x00(struct sd *sd);
static int hdcs_probe_1020(struct sd *sd);
static int hdcs_start(struct sd *sd);
static int hdcs_init(struct sd *sd);
static int hdcs_stop(struct sd *sd);
static int hdcs_dump(struct sd *sd);
static void hdcs_disconnect(struct sd *sd);
static int hdcs_get_exposure(struct gspca_dev *gspca_dev, __s32 *val);
static int hdcs_set_exposure(struct gspca_dev *gspca_dev, __s32 val);
static int hdcs_set_gain(struct gspca_dev *gspca_dev, __s32 val);
static int hdcs_get_gain(struct gspca_dev *gspca_dev, __s32 *val);
const struct stv06xx_sensor stv06xx_sensor_hdcs1x00 = ;
const struct stv06xx_sensor stv06xx_sensor_hdcs1020 = ;
static const u16 stv_bridge_init[][2] = ;
static const u8 stv_sensor_init[][2] = ;
