#define W9968CF_I2C_BUS_DELAY    4
#define Y_QUANTABLE (&sd->jpeg_hdr[JPEG_QT0_OFFSET])
#define UV_QUANTABLE (&sd->jpeg_hdr[JPEG_QT1_OFFSET])
static const struct v4l2_pix_format w9968cf_vga_mode[] = ;
static void reg_w(struct sd *sd, u16 index, u16 value);
static void w9968cf_write_fsb(struct sd *sd, u16* data)
static void w9968cf_write_sb(struct sd *sd, u16 value)
static int w9968cf_read_sb(struct sd *sd)
static void w9968cf_upload_quantizationtables(struct sd *sd)
static void w9968cf_smbus_start(struct sd *sd)
static void w9968cf_smbus_stop(struct sd *sd)
static void w9968cf_smbus_write_byte(struct sd *sd, u8 v)
static void w9968cf_smbus_read_byte(struct sd *sd, u8 *v)
static void w9968cf_smbus_write_nack(struct sd *sd)
static void w9968cf_smbus_read_ack(struct sd *sd)
static void w9968cf_i2c_w(struct sd *sd, u8 reg, u8 value)
static int w9968cf_i2c_r(struct sd *sd, u8 reg)
static void w9968cf_configure(struct sd *sd)
static void w9968cf_init(struct sd *sd)
static void w9968cf_set_crop_window(struct sd *sd)
static void w9968cf_mode_init_regs(struct sd *sd)
static void w9968cf_stop0(struct sd *sd)
static void w9968cf_pkt_scan(struct gspca_dev *gspca_dev,
u8 *data,
int len)
