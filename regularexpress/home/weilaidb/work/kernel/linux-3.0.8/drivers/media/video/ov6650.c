#define REG_GAIN		0x00
#define REG_BLUE		0x01
#define REG_RED			0x02
#define REG_SAT			0x03
#define REG_HUE			0x04
#define REG_BRT			0x06
#define REG_PIDH		0x0a
#define REG_PIDL		0x0b
#define REG_AECH		0x10
#define REG_CLKRC		0x11
#define REG_COMA		0x12
#define REG_COMB		0x13
#define REG_COMC		0x14
#define REG_COMD		0x15
#define REG_COML		0x16
#define REG_HSTRT		0x17
#define REG_HSTOP		0x18
#define REG_VSTRT		0x19
#define REG_VSTOP		0x1a
#define REG_PSHFT		0x1b
#define REG_MIDH		0x1c
#define REG_MIDL		0x1d
#define REG_HSYNS		0x1e
#define REG_HSYNE		0x1f
#define REG_COME		0x20
#define REG_YOFF		0x21
#define REG_UOFF		0x22
#define REG_VOFF		0x23
#define REG_AEW			0x24
#define REG_AEB			0x25
#define REG_COMF		0x26
#define REG_COMG		0x27
#define REG_COMH		0x28
#define REG_COMI		0x29
#define REG_FRARL		0x2b
#define REG_COMJ		0x2c
#define REG_COMK		0x2d
#define REG_AVGY		0x2e
#define REG_REF0		0x2f
#define REG_REF1		0x30
#define REG_REF2		0x31
#define REG_FRAJH		0x32
#define REG_FRAJL		0x33
#define REG_FACT		0x34
#define REG_L1AEC		0x35
#define REG_AVGU		0x36
#define REG_AVGV		0x37
#define REG_SPCB		0x60
#define REG_SPCC		0x61
#define REG_GAM1		0x62
#define REG_GAM2		0x63
#define REG_GAM3		0x64
#define REG_SPCD		0x65
#define REG_SPCE		0x68
#define REG_ADCL		0x69
#define REG_RMCO		0x6c
#define REG_GMCO		0x6d
#define REG_BMCO		0x6e
#define OV6650_PIDH		0x66
#define OV6650_PIDL		0x50
#define OV6650_MIDH		0x7F
#define OV6650_MIDL		0xA2
#define DEF_GAIN		0x00
#define DEF_BLUE		0x80
#define DEF_RED			0x80
#define SAT_SHIFT		4
#define SAT_MASK		(0xf << SAT_SHIFT)
#define SET_SAT(x)		(((x) << SAT_SHIFT) & SAT_MASK)
#define HUE_EN			BIT(5)
#define HUE_MASK		0x1f
#define DEF_HUE			0x10
#define SET_HUE(x)		(HUE_EN | ((x) & HUE_MASK))
#define DEF_AECH		0x4D
#define CLKRC_6MHz		0x00
#define CLKRC_12MHz		0x40
#define CLKRC_16MHz		0x80
#define CLKRC_24MHz		0xc0
#define CLKRC_DIV_MASK		0x3f
#define GET_CLKRC_DIV(x)	(((x) & CLKRC_DIV_MASK) + 1)
#define COMA_RESET		BIT(7)
#define COMA_QCIF		BIT(5)
#define COMA_RAW_RGB		BIT(4)
#define COMA_RGB		BIT(3)
#define COMA_BW			BIT(2)
#define COMA_WORD_SWAP		BIT(1)
#define COMA_BYTE_SWAP		BIT(0)
#define DEF_COMA		0x00
#define COMB_FLIP_V		BIT(7)
#define COMB_FLIP_H		BIT(5)
#define COMB_BAND_FILTER	BIT(4)
#define COMB_AWB		BIT(2)
#define COMB_AGC		BIT(1)
#define COMB_AEC		BIT(0)
#define DEF_COMB		0x5f
#define COML_ONE_CHANNEL	BIT(7)
#define DEF_HSTRT		0x24
#define DEF_HSTOP		0xd4
#define DEF_VSTRT		0x04
#define DEF_VSTOP		0x94
#define COMF_HREF_LOW		BIT(4)
#define COMJ_PCLK_RISING	BIT(4)
#define COMJ_VSYNC_HIGH		BIT(0)
#define W_QCIF			(DEF_HSTOP - DEF_HSTRT)
#define W_CIF			(W_QCIF << 1)
#define H_QCIF			(DEF_VSTOP - DEF_VSTRT)
#define H_CIF			(H_QCIF << 1)
#define FRAME_RATE_MAX		30
struct ov6650_reg ;
struct ov6650 ;
static enum v4l2_mbus_pixelcode ov6650_codes[] = ;
static const struct v4l2_queryctrl ov6650_controls[] = ;
static int ov6650_reg_read(struct i2c_client *client, u8 reg, u8 *val)
static int ov6650_reg_write(struct i2c_client *client, u8 reg, u8 val)
static int ov6650_reg_rmw(struct i2c_client *client, u8 reg, u8 set, u8 mask)
static struct ov6650 *to_ov6650(const struct i2c_client *client)
static int ov6650_s_stream(struct v4l2_subdev *sd, int enable)
static int ov6650_set_bus_param(struct soc_camera_device *icd,
unsigned long flags)
static unsigned long ov6650_query_bus_param(struct soc_camera_device *icd)
static int ov6650_g_ctrl(struct v4l2_subdev *sd, struct v4l2_control *ctrl)
static int ov6650_s_ctrl(struct v4l2_subdev *sd, struct v4l2_control *ctrl)
static int ov6650_g_chip_ident(struct v4l2_subdev *sd,
struct v4l2_dbg_chip_ident *id)
static int ov6650_get_register(struct v4l2_subdev *sd,
struct v4l2_dbg_register *reg)
static int ov6650_set_register(struct v4l2_subdev *sd,
struct v4l2_dbg_register *reg)
static int ov6650_g_crop(struct v4l2_subdev *sd, struct v4l2_crop *a)
static int ov6650_s_crop(struct v4l2_subdev *sd, struct v4l2_crop *a)
static int ov6650_cropcap(struct v4l2_subdev *sd, struct v4l2_cropcap *a)
static int ov6650_g_fmt(struct v4l2_subdev *sd,
struct v4l2_mbus_framefmt *mf)
static bool is_unscaled_ok(int width, int height, struct v4l2_rect *rect)
static u8 to_clkrc(struct v4l2_fract *timeperframe,
unsigned long pclk_limit, unsigned long pclk_max)
static int ov6650_s_fmt(struct v4l2_subdev *sd, struct v4l2_mbus_framefmt *mf)
static int ov6650_try_fmt(struct v4l2_subdev *sd,
struct v4l2_mbus_framefmt *mf)
static int ov6650_enum_fmt(struct v4l2_subdev *sd, unsigned int index,
enum v4l2_mbus_pixelcode *code)
static int ov6650_g_parm(struct v4l2_subdev *sd, struct v4l2_streamparm *parms)
static int ov6650_s_parm(struct v4l2_subdev *sd, struct v4l2_streamparm *parms)
static int ov6650_reset(struct i2c_client *client)
static int ov6650_prog_dflt(struct i2c_client *client)
static int ov6650_video_probe(struct soc_camera_device *icd,
struct i2c_client *client)
static struct soc_camera_ops ov6650_ops = ;
static struct v4l2_subdev_core_ops ov6650_core_ops = ;
static struct v4l2_subdev_video_ops ov6650_video_ops = ;
static struct v4l2_subdev_ops ov6650_subdev_ops = ;
static int ov6650_probe(struct i2c_client *client,
const struct i2c_device_id *did)
static int ov6650_remove(struct i2c_client *client)
static const struct i2c_device_id ov6650_id[] = ;
MODULE_DEVICE_TABLE(i2c, ov6650_id);
static struct i2c_driver ov6650_i2c_driver = ;
static int __init ov6650_module_init(void)
static void __exit ov6650_module_exit(void)
module_init(ov6650_module_init);
module_exit(ov6650_module_exit);
MODULE_DESCRIPTION("SoC Camera driver for OmniVision OV6650");
MODULE_AUTHOR("Janusz Krzysztofik <jkrzyszt@tis.icnet.pl>");
MODULE_LICENSE("GPL v2");
