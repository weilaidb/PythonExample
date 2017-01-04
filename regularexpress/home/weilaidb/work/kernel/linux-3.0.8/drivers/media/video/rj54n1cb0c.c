#define RJ54N1_DEV_CODE			0x0400
#define RJ54N1_DEV_CODE2		0x0401
#define RJ54N1_OUT_SEL			0x0403
#define RJ54N1_XY_OUTPUT_SIZE_S_H	0x0404
#define RJ54N1_X_OUTPUT_SIZE_S_L	0x0405
#define RJ54N1_Y_OUTPUT_SIZE_S_L	0x0406
#define RJ54N1_XY_OUTPUT_SIZE_P_H	0x0407
#define RJ54N1_X_OUTPUT_SIZE_P_L	0x0408
#define RJ54N1_Y_OUTPUT_SIZE_P_L	0x0409
#define RJ54N1_LINE_LENGTH_PCK_S_H	0x040a
#define RJ54N1_LINE_LENGTH_PCK_S_L	0x040b
#define RJ54N1_LINE_LENGTH_PCK_P_H	0x040c
#define RJ54N1_LINE_LENGTH_PCK_P_L	0x040d
#define RJ54N1_RESIZE_N			0x040e
#define RJ54N1_RESIZE_N_STEP		0x040f
#define RJ54N1_RESIZE_STEP		0x0410
#define RJ54N1_RESIZE_HOLD_H		0x0411
#define RJ54N1_RESIZE_HOLD_L		0x0412
#define RJ54N1_H_OBEN_OFS		0x0413
#define RJ54N1_V_OBEN_OFS		0x0414
#define RJ54N1_RESIZE_CONTROL		0x0415
#define RJ54N1_STILL_CONTROL		0x0417
#define RJ54N1_INC_USE_SEL_H		0x0425
#define RJ54N1_INC_USE_SEL_L		0x0426
#define RJ54N1_MIRROR_STILL_MODE	0x0427
#define RJ54N1_INIT_START		0x0428
#define RJ54N1_SCALE_1_2_LEV		0x0429
#define RJ54N1_SCALE_4_LEV		0x042a
#define RJ54N1_Y_GAIN			0x04d8
#define RJ54N1_APT_GAIN_UP		0x04fa
#define RJ54N1_RA_SEL_UL		0x0530
#define RJ54N1_BYTE_SWAP		0x0531
#define RJ54N1_OUT_SIGPO		0x053b
#define RJ54N1_WB_SEL_WEIGHT_I		0x054e
#define RJ54N1_BIT8_WB			0x0569
#define RJ54N1_HCAPS_WB			0x056a
#define RJ54N1_VCAPS_WB			0x056b
#define RJ54N1_HCAPE_WB			0x056c
#define RJ54N1_VCAPE_WB			0x056d
#define RJ54N1_EXPOSURE_CONTROL		0x058c
#define RJ54N1_FRAME_LENGTH_S_H		0x0595
#define RJ54N1_FRAME_LENGTH_S_L		0x0596
#define RJ54N1_FRAME_LENGTH_P_H		0x0597
#define RJ54N1_FRAME_LENGTH_P_L		0x0598
#define RJ54N1_PEAK_H			0x05b7
#define RJ54N1_PEAK_50			0x05b8
#define RJ54N1_PEAK_60			0x05b9
#define RJ54N1_PEAK_DIFF		0x05ba
#define RJ54N1_IOC			0x05ef
#define RJ54N1_TG_BYPASS		0x0700
#define RJ54N1_PLL_L			0x0701
#define RJ54N1_PLL_N			0x0702
#define RJ54N1_PLL_EN			0x0704
#define RJ54N1_RATIO_TG			0x0706
#define RJ54N1_RATIO_T			0x0707
#define RJ54N1_RATIO_R			0x0708
#define RJ54N1_RAMP_TGCLK_EN		0x0709
#define RJ54N1_OCLK_DSP			0x0710
#define RJ54N1_RATIO_OP			0x0711
#define RJ54N1_RATIO_O			0x0712
#define RJ54N1_OCLK_SEL_EN		0x0713
#define RJ54N1_CLK_RST			0x0717
#define RJ54N1_RESET_STANDBY		0x0718
#define RJ54N1_FWFLG			0x07fe
#define E_EXCLK				(1 << 7)
#define SOFT_STDBY			(1 << 4)
#define SEN_RSTX			(1 << 2)
#define TG_RSTX				(1 << 1)
#define DSP_RSTX			(1 << 0)
#define RESIZE_HOLD_SEL			(1 << 2)
#define RESIZE_GO			(1 << 1)
#define RJ54N1_COLUMN_SKIP		0
#define RJ54N1_ROW_SKIP			0
#define RJ54N1_MAX_WIDTH		1600
#define RJ54N1_MAX_HEIGHT		1200
#define PLL_L				2
#define PLL_N				0x31
struct rj54n1_datafmt ;
static const struct rj54n1_datafmt *rj54n1_find_datafmt(
enum v4l2_mbus_pixelcode code, const struct rj54n1_datafmt *fmt,
int n)
static const struct rj54n1_datafmt rj54n1_colour_fmts[] = ;
struct rj54n1_clock_div ;
struct rj54n1 ;
struct rj54n1_reg_val ;
static const struct rj54n1_reg_val bank_4[] = ;
static const struct rj54n1_reg_val bank_5[] = ;
static const struct rj54n1_reg_val bank_7[] = ;
static const struct rj54n1_reg_val bank_8[] = ;
static const struct rj54n1_reg_val bank_10[] = ;
static const struct rj54n1_clock_div clk_div = ;
static struct rj54n1 *to_rj54n1(const struct i2c_client *client)
static int reg_read(struct i2c_client *client, const u16 reg)
static int reg_write(struct i2c_client *client, const u16 reg,
const u8 data)
static int reg_set(struct i2c_client *client, const u16 reg,
const u8 data, const u8 mask)
static int reg_write_multiple(struct i2c_client *client,
const struct rj54n1_reg_val *rv, const int n)
static int rj54n1_enum_fmt(struct v4l2_subdev *sd, unsigned int index,
enum v4l2_mbus_pixelcode *code)
static int rj54n1_s_stream(struct v4l2_subdev *sd, int enable)
static int rj54n1_set_bus_param(struct soc_camera_device *icd,
unsigned long flags)
static unsigned long rj54n1_query_bus_param(struct soc_camera_device *icd)
static int rj54n1_set_rect(struct i2c_client *client,
u16 reg_x, u16 reg_y, u16 reg_xy,
u32 width, u32 height)
static int rj54n1_commit(struct i2c_client *client)
static int rj54n1_sensor_scale(struct v4l2_subdev *sd, s32 *in_w, s32 *in_h,
s32 *out_w, s32 *out_h);
static int rj54n1_s_crop(struct v4l2_subdev *sd, struct v4l2_crop *a)
static int rj54n1_g_crop(struct v4l2_subdev *sd, struct v4l2_crop *a)
static int rj54n1_cropcap(struct v4l2_subdev *sd, struct v4l2_cropcap *a)
static int rj54n1_g_fmt(struct v4l2_subdev *sd,
struct v4l2_mbus_framefmt *mf)
static int rj54n1_sensor_scale(struct v4l2_subdev *sd, s32 *in_w, s32 *in_h,
s32 *out_w, s32 *out_h)
static int rj54n1_set_clock(struct i2c_client *client)
static int rj54n1_reg_init(struct i2c_client *client)
static int rj54n1_try_fmt(struct v4l2_subdev *sd,
struct v4l2_mbus_framefmt *mf)
static int rj54n1_s_fmt(struct v4l2_subdev *sd,
struct v4l2_mbus_framefmt *mf)
static int rj54n1_g_chip_ident(struct v4l2_subdev *sd,
struct v4l2_dbg_chip_ident *id)
static int rj54n1_g_register(struct v4l2_subdev *sd,
struct v4l2_dbg_register *reg)
static int rj54n1_s_register(struct v4l2_subdev *sd,
struct v4l2_dbg_register *reg)
static const struct v4l2_queryctrl rj54n1_controls[] = ;
static struct soc_camera_ops rj54n1_ops = ;
static int rj54n1_g_ctrl(struct v4l2_subdev *sd, struct v4l2_control *ctrl)
static int rj54n1_s_ctrl(struct v4l2_subdev *sd, struct v4l2_control *ctrl)
static struct v4l2_subdev_core_ops rj54n1_subdev_core_ops = ;
static struct v4l2_subdev_video_ops rj54n1_subdev_video_ops = ;
static struct v4l2_subdev_ops rj54n1_subdev_ops = ;
static int rj54n1_video_probe(struct soc_camera_device *icd,
struct i2c_client *client,
struct rj54n1_pdata *priv)
static int rj54n1_probe(struct i2c_client *client,
const struct i2c_device_id *did)
static int rj54n1_remove(struct i2c_client *client)
static const struct i2c_device_id rj54n1_id[] = ;
MODULE_DEVICE_TABLE(i2c, rj54n1_id);
static struct i2c_driver rj54n1_i2c_driver = ;
static int __init rj54n1_mod_init(void)
static void __exit rj54n1_mod_exit(void)
module_init(rj54n1_mod_init);
module_exit(rj54n1_mod_exit);
MODULE_DESCRIPTION("Sharp RJ54N1CB0C Camera driver");
MODULE_AUTHOR("Guennadi Liakhovetski <g.liakhovetski@gmx.de>");
MODULE_LICENSE("GPL v2");
