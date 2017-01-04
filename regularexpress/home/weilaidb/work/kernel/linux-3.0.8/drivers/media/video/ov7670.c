MODULE_AUTHOR("Jonathan Corbet <corbet@lwn.net>");
MODULE_DESCRIPTION("A low-level driver for OmniVision ov7670 sensors");
MODULE_LICENSE("GPL");
static int debug;
module_param(debug, bool, 0644);
MODULE_PARM_DESC(debug, "Debug level (0-1)");
#define VGA_WIDTH	640
#define VGA_HEIGHT	480
#define QVGA_WIDTH	320
#define QVGA_HEIGHT	240
#define CIF_WIDTH	352
#define CIF_HEIGHT	288
#define QCIF_WIDTH	176
#define	QCIF_HEIGHT	144
#define OV7670_I2C_ADDR 0x42
#define REG_GAIN	0x00
#define REG_BLUE	0x01
#define REG_RED		0x02
#define REG_VREF	0x03
#define REG_COM1	0x04
#define  COM1_CCIR656	  0x40
#define REG_BAVE	0x05
#define REG_GbAVE	0x06
#define REG_AECHH	0x07
#define REG_RAVE	0x08
#define REG_COM2	0x09
#define  COM2_SSLEEP	  0x10
#define REG_PID		0x0a
#define REG_VER		0x0b
#define REG_COM3	0x0c
#define  COM3_SWAP	  0x40
#define  COM3_SCALEEN	  0x08
#define  COM3_DCWEN	  0x04
#define REG_COM4	0x0d
#define REG_COM5	0x0e
#define REG_COM6	0x0f
#define REG_AECH	0x10
#define REG_CLKRC	0x11
#define   CLK_EXT	  0x40
#define   CLK_SCALE	  0x3f
#define REG_COM7	0x12
#define   COM7_RESET	  0x80
#define   COM7_FMT_MASK	  0x38
#define   COM7_FMT_VGA	  0x00
#define	  COM7_FMT_CIF	  0x20
#define   COM7_FMT_QVGA	  0x10
#define   COM7_FMT_QCIF	  0x08
#define	  COM7_RGB	  0x04
#define	  COM7_YUV	  0x00
#define	  COM7_BAYER	  0x01
#define	  COM7_PBAYER	  0x05
#define REG_COM8	0x13
#define   COM8_FASTAEC	  0x80
#define   COM8_AECSTEP	  0x40
#define   COM8_BFILT	  0x20
#define   COM8_AGC	  0x04
#define   COM8_AWB	  0x02
#define   COM8_AEC	  0x01
#define REG_COM9	0x14
#define REG_COM10	0x15
#define   COM10_HSYNC	  0x40
#define   COM10_PCLK_HB	  0x20
#define   COM10_HREF_REV  0x08
#define   COM10_VS_LEAD	  0x04
#define   COM10_VS_NEG	  0x02
#define   COM10_HS_NEG	  0x01
#define REG_HSTART	0x17
#define REG_HSTOP	0x18
#define REG_VSTART	0x19
#define REG_VSTOP	0x1a
#define REG_PSHFT	0x1b
#define REG_MIDH	0x1c
#define REG_MIDL	0x1d
#define REG_MVFP	0x1e
#define   MVFP_MIRROR	  0x20
#define   MVFP_FLIP	  0x10
#define REG_AEW		0x24
#define REG_AEB		0x25
#define REG_VPT		0x26
#define REG_HSYST	0x30
#define REG_HSYEN	0x31
#define REG_HREF	0x32
#define REG_TSLB	0x3a
#define   TSLB_YLAST	  0x04
#define REG_COM11	0x3b
#define   COM11_NIGHT	  0x80
#define   COM11_NMFR	  0x60
#define   COM11_HZAUTO	  0x10
#define	  COM11_50HZ	  0x08
#define   COM11_EXP	  0x02
#define REG_COM12	0x3c
#define   COM12_HREF	  0x80
#define REG_COM13	0x3d
#define   COM13_GAMMA	  0x80
#define	  COM13_UVSAT	  0x40
#define   COM13_UVSWAP	  0x01
#define REG_COM14	0x3e
#define   COM14_DCWEN	  0x10
#define REG_EDGE	0x3f
#define REG_COM15	0x40
#define   COM15_R10F0	  0x00
#define	  COM15_R01FE	  0x80
#define   COM15_R00FF	  0xc0
#define   COM15_RGB565	  0x10
#define   COM15_RGB555	  0x30
#define REG_COM16	0x41
#define   COM16_AWBGAIN   0x08
#define REG_COM17	0x42
#define   COM17_AECWIN	  0xc0
#define   COM17_CBAR	  0x08
#define	REG_CMATRIX_BASE 0x4f
#define   CMATRIX_LEN 6
#define REG_CMATRIX_SIGN 0x58
#define REG_BRIGHT	0x55
#define REG_CONTRAS	0x56
#define REG_GFIX	0x69
#define REG_REG76	0x76
#define   R76_BLKPCOR	  0x80
#define   R76_WHTPCOR	  0x40
#define REG_RGB444	0x8c
#define   R444_ENABLE	  0x02
#define   R444_RGBX	  0x01
#define REG_HAECC1	0x9f
#define REG_HAECC2	0xa0
#define REG_BD50MAX	0xa5
#define REG_HAECC3	0xa6
#define REG_HAECC4	0xa7
#define REG_HAECC5	0xa8
#define REG_HAECC6	0xa9
#define REG_HAECC7	0xaa
#define REG_BD60MAX	0xab
struct ov7670_format_struct;
struct ov7670_info ;
static inline struct ov7670_info *to_state(struct v4l2_subdev *sd)
struct regval_list ;
static struct regval_list ov7670_default_regs[] = ;
static struct regval_list ov7670_fmt_yuv422[] = ;
static struct regval_list ov7670_fmt_rgb565[] = ;
static struct regval_list ov7670_fmt_rgb444[] = ;
static struct regval_list ov7670_fmt_raw[] = ;
static int ov7670_read_smbus(struct v4l2_subdev *sd, unsigned char reg,
unsigned char *value)
static int ov7670_write_smbus(struct v4l2_subdev *sd, unsigned char reg,
unsigned char value)
static int ov7670_read_i2c(struct v4l2_subdev *sd, unsigned char reg,
unsigned char *value)
static int ov7670_write_i2c(struct v4l2_subdev *sd, unsigned char reg,
unsigned char value)
static int ov7670_read(struct v4l2_subdev *sd, unsigned char reg,
unsigned char *value)
static int ov7670_write(struct v4l2_subdev *sd, unsigned char reg,
unsigned char value)
static int ov7670_write_array(struct v4l2_subdev *sd, struct regval_list *vals)
static int ov7670_reset(struct v4l2_subdev *sd, u32 val)
static int ov7670_init(struct v4l2_subdev *sd, u32 val)
static int ov7670_detect(struct v4l2_subdev *sd)
static struct ov7670_format_struct  ov7670_formats[] = ;
#define N_OV7670_FMTS ARRAY_SIZE(ov7670_formats)
static struct regval_list ov7670_qcif_regs[] = ;
static struct ov7670_win_size  ov7670_win_sizes[] = ;
#define N_WIN_SIZES (ARRAY_SIZE(ov7670_win_sizes))
static int ov7670_set_hw(struct v4l2_subdev *sd, int hstart, int hstop,
int vstart, int vstop)
static int ov7670_enum_mbus_fmt(struct v4l2_subdev *sd, unsigned index,
enum v4l2_mbus_pixelcode *code)
static int ov7670_try_fmt_internal(struct v4l2_subdev *sd,
struct v4l2_mbus_framefmt *fmt,
struct ov7670_format_struct **ret_fmt,
struct ov7670_win_size **ret_wsize)
static int ov7670_try_mbus_fmt(struct v4l2_subdev *sd,
struct v4l2_mbus_framefmt *fmt)
static int ov7670_s_mbus_fmt(struct v4l2_subdev *sd,
struct v4l2_mbus_framefmt *fmt)
static int ov7670_g_parm(struct v4l2_subdev *sd, struct v4l2_streamparm *parms)
static int ov7670_s_parm(struct v4l2_subdev *sd, struct v4l2_streamparm *parms)
static int ov7670_frame_rates[] = ;
static int ov7670_enum_frameintervals(struct v4l2_subdev *sd,
struct v4l2_frmivalenum *interval)
static int ov7670_enum_framesizes(struct v4l2_subdev *sd,
struct v4l2_frmsizeenum *fsize)
static int ov7670_store_cmatrix(struct v4l2_subdev *sd,
int matrix[CMATRIX_LEN])
#define SIN_STEP 5
static const int ov7670_sin_table[] = ;
static int ov7670_sine(int theta)
static int ov7670_cosine(int theta)
static void ov7670_calc_cmatrix(struct ov7670_info *info,
int matrix[CMATRIX_LEN])
static int ov7670_s_sat(struct v4l2_subdev *sd, int value)
static int ov7670_g_sat(struct v4l2_subdev *sd, __s32 *value)
static int ov7670_s_hue(struct v4l2_subdev *sd, int value)
static int ov7670_g_hue(struct v4l2_subdev *sd, __s32 *value)
static unsigned char ov7670_sm_to_abs(unsigned char v)
static unsigned char ov7670_abs_to_sm(unsigned char v)
static int ov7670_s_brightness(struct v4l2_subdev *sd, int value)
static int ov7670_g_brightness(struct v4l2_subdev *sd, __s32 *value)
static int ov7670_s_contrast(struct v4l2_subdev *sd, int value)
static int ov7670_g_contrast(struct v4l2_subdev *sd, __s32 *value)
static int ov7670_g_hflip(struct v4l2_subdev *sd, __s32 *value)
static int ov7670_s_hflip(struct v4l2_subdev *sd, int value)
static int ov7670_g_vflip(struct v4l2_subdev *sd, __s32 *value)
static int ov7670_s_vflip(struct v4l2_subdev *sd, int value)
static int ov7670_g_gain(struct v4l2_subdev *sd, __s32 *value)
static int ov7670_s_gain(struct v4l2_subdev *sd, int value)
static int ov7670_g_autogain(struct v4l2_subdev *sd, __s32 *value)
static int ov7670_s_autogain(struct v4l2_subdev *sd, int value)
static int ov7670_g_exp(struct v4l2_subdev *sd, __s32 *value)
static int ov7670_s_exp(struct v4l2_subdev *sd, int value)
static int ov7670_g_autoexp(struct v4l2_subdev *sd, __s32 *value)
static int ov7670_s_autoexp(struct v4l2_subdev *sd,
enum v4l2_exposure_auto_type value)
static int ov7670_queryctrl(struct v4l2_subdev *sd,
struct v4l2_queryctrl *qc)
static int ov7670_g_ctrl(struct v4l2_subdev *sd, struct v4l2_control *ctrl)
static int ov7670_s_ctrl(struct v4l2_subdev *sd, struct v4l2_control *ctrl)
static int ov7670_g_chip_ident(struct v4l2_subdev *sd,
struct v4l2_dbg_chip_ident *chip)
static int ov7670_g_register(struct v4l2_subdev *sd, struct v4l2_dbg_register *reg)
static int ov7670_s_register(struct v4l2_subdev *sd, struct v4l2_dbg_register *reg)
static const struct v4l2_subdev_core_ops ov7670_core_ops = ;
static const struct v4l2_subdev_video_ops ov7670_video_ops = ;
static const struct v4l2_subdev_ops ov7670_ops = ;
static int ov7670_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int ov7670_remove(struct i2c_client *client)
static const struct i2c_device_id ov7670_id[] = ;
MODULE_DEVICE_TABLE(i2c, ov7670_id);
static struct i2c_driver ov7670_driver = ;
static __init int init_ov7670(void)
static __exit void exit_ov7670(void)
module_init(init_ov7670);
module_exit(exit_ov7670);
