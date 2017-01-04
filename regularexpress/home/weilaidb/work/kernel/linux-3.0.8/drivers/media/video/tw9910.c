#define GET_ID(val)  ((val & 0xF8) >> 3)
#define GET_REV(val) (val & 0x07)
#define ID		0x00
#define STATUS1		0x01
#define INFORM		0x02
#define OPFORM		0x03
#define DLYCTR		0x04
#define OUTCTR1		0x05
#define ACNTL1		0x06
#define CROP_HI		0x07
#define VDELAY_LO	0x08
#define VACTIVE_LO	0x09
#define HDELAY_LO	0x0A
#define HACTIVE_LO	0x0B
#define CNTRL1		0x0C
#define VSCALE_LO	0x0D
#define SCALE_HI	0x0E
#define HSCALE_LO	0x0F
#define BRIGHT		0x10
#define CONTRAST	0x11
#define SHARPNESS	0x12
#define SAT_U		0x13
#define SAT_V		0x14
#define HUE		0x15
#define CORING1		0x17
#define CORING2		0x18
#define VBICNTL		0x19
#define ACNTL2		0x1A
#define OUTCTR2		0x1B
#define SDT		0x1C
#define SDTR		0x1D
#define TEST		0x1F
#define CLMPG		0x20
#define IAGC		0x21
#define AGCGAIN		0x22
#define PEAKWT		0x23
#define CLMPL		0x24
#define SYNCT		0x25
#define MISSCNT		0x26
#define PCLAMP		0x27
#define VCNTL1		0x28
#define VCNTL2		0x29
#define CKILL		0x2A
#define COMB		0x2B
#define LDLY		0x2C
#define MISC1		0x2D
#define LOOP		0x2E
#define MISC2		0x2F
#define MVSN		0x30
#define STATUS2		0x31
#define HFREF		0x32
#define CLMD		0x33
#define IDCNTL		0x34
#define CLCNTL1		0x35
#define ANAPLLCTL	0x4C
#define VBIMIN		0x4D
#define HSLOWCTL	0x4E
#define WSS3		0x4F
#define FILLDATA	0x50
#define SDID		0x51
#define DID		0x52
#define WSS1		0x53
#define WSS2		0x54
#define VVBI		0x55
#define LCTL6		0x56
#define LCTL7		0x57
#define LCTL8		0x58
#define LCTL9		0x59
#define LCTL10		0x5A
#define LCTL11		0x5B
#define LCTL12		0x5C
#define LCTL13		0x5D
#define LCTL14		0x5E
#define LCTL15		0x5F
#define LCTL16		0x60
#define LCTL17		0x61
#define LCTL18		0x62
#define LCTL19		0x63
#define LCTL20		0x64
#define LCTL21		0x65
#define LCTL22		0x66
#define LCTL23		0x67
#define LCTL24		0x68
#define LCTL25		0x69
#define LCTL26		0x6A
#define HSBEGIN		0x6B
#define HSEND		0x6C
#define OVSDLY		0x6D
#define OVSEND		0x6E
#define VBIDELAY	0x6F
#define FC27_ON     0x40
#define FC27_FF     0x00
#define IFSEL_S     0x10
#define IFSEL_C     0x00
#define YSEL_M0     0x00
#define YSEL_M1     0x04
#define YSEL_M2     0x08
#define YSEL_M3     0x10
#define MODE        0x80
#define LEN         0x40
#define LLCMODE     0x20
#define AINC        0x10
#define VSCTL       0x08
#define OEN_TRI_SEL_MASK	0x07
#define OEN_TRI_SEL_ALL_ON	0x00
#define OEN_TRI_SEL_ALL_OFF_r0	0x06
#define OEN_TRI_SEL_ALL_OFF_r1	0x07
#define VSP_LO      0x00
#define VSP_HI      0x80
#define VSSL_VSYNC  0x00
#define VSSL_VACT   0x10
#define VSSL_FIELD  0x20
#define VSSL_VVALID 0x30
#define VSSL_ZERO   0x70
#define HSP_LOW     0x00
#define HSP_HI      0x08
#define HSSL_HACT   0x00
#define HSSL_HSYNC  0x01
#define HSSL_DVALID 0x02
#define HSSL_HLOCK  0x03
#define HSSL_ASYNCW 0x04
#define HSSL_ZERO   0x07
#define SRESET      0x80
#define ACNTL1_PDN_MASK	0x0e
#define CLK_PDN		0x08
#define Y_PDN		0x04
#define C_PDN		0x02
#define ACNTL2_PDN_MASK	0x40
#define PLL_PDN		0x40
#define RTSEL_MASK  0x07
#define RTSEL_VLOSS 0x00
#define RTSEL_HLOCK 0x01
#define RTSEL_SLOCK 0x02
#define RTSEL_VLOCK 0x03
#define RTSEL_MONO  0x04
#define RTSEL_DET50 0x05
#define RTSEL_FIELD 0x06
#define RTSEL_RTCO  0x07
struct regval_list ;
struct tw9910_scale_ctrl ;
struct tw9910_cropping_ctrl ;
struct tw9910_hsync_ctrl ;
struct tw9910_priv ;
static const struct tw9910_scale_ctrl tw9910_ntsc_scales[] = ;
static const struct tw9910_scale_ctrl tw9910_pal_scales[] = ;
static const struct tw9910_hsync_ctrl tw9910_hsync_ctrl = ;
static struct tw9910_priv *to_tw9910(const struct i2c_client *client)
static int tw9910_mask_set(struct i2c_client *client, u8 command,
u8 mask, u8 set)
static int tw9910_set_scale(struct i2c_client *client,
const struct tw9910_scale_ctrl *scale)
static int tw9910_set_hsync(struct i2c_client *client,
const struct tw9910_hsync_ctrl *hsync)
static void tw9910_reset(struct i2c_client *client)
static int tw9910_power(struct i2c_client *client, int enable)
static const struct tw9910_scale_ctrl*
tw9910_select_norm(struct soc_camera_device *icd, u32 width, u32 height)
static int tw9910_s_stream(struct v4l2_subdev *sd, int enable)
static int tw9910_set_bus_param(struct soc_camera_device *icd,
unsigned long flags)
static unsigned long tw9910_query_bus_param(struct soc_camera_device *icd)
static int tw9910_s_std(struct v4l2_subdev *sd, v4l2_std_id norm)
static int tw9910_enum_input(struct soc_camera_device *icd,
struct v4l2_input *inp)
static int tw9910_g_chip_ident(struct v4l2_subdev *sd,
struct v4l2_dbg_chip_ident *id)
static int tw9910_g_register(struct v4l2_subdev *sd,
struct v4l2_dbg_register *reg)
static int tw9910_s_register(struct v4l2_subdev *sd,
struct v4l2_dbg_register *reg)
static int tw9910_s_crop(struct v4l2_subdev *sd, struct v4l2_crop *a)
static int tw9910_g_crop(struct v4l2_subdev *sd, struct v4l2_crop *a)
static int tw9910_cropcap(struct v4l2_subdev *sd, struct v4l2_cropcap *a)
static int tw9910_g_fmt(struct v4l2_subdev *sd,
struct v4l2_mbus_framefmt *mf)
static int tw9910_s_fmt(struct v4l2_subdev *sd,
struct v4l2_mbus_framefmt *mf)
static int tw9910_try_fmt(struct v4l2_subdev *sd,
struct v4l2_mbus_framefmt *mf)
static int tw9910_video_probe(struct soc_camera_device *icd,
struct i2c_client *client)
static struct soc_camera_ops tw9910_ops = ;
static struct v4l2_subdev_core_ops tw9910_subdev_core_ops = ;
static int tw9910_enum_fmt(struct v4l2_subdev *sd, unsigned int index,
enum v4l2_mbus_pixelcode *code)
static struct v4l2_subdev_video_ops tw9910_subdev_video_ops = ;
static struct v4l2_subdev_ops tw9910_subdev_ops = ;
static int tw9910_probe(struct i2c_client *client,
const struct i2c_device_id *did)
static int tw9910_remove(struct i2c_client *client)
static const struct i2c_device_id tw9910_id[] = ;
MODULE_DEVICE_TABLE(i2c, tw9910_id);
static struct i2c_driver tw9910_i2c_driver = ;
static int __init tw9910_module_init(void)
static void __exit tw9910_module_exit(void)
module_init(tw9910_module_init);
module_exit(tw9910_module_exit);
MODULE_DESCRIPTION("SoC Camera driver for tw9910");
MODULE_AUTHOR("Kuninori Morimoto");
MODULE_LICENSE("GPL v2");
