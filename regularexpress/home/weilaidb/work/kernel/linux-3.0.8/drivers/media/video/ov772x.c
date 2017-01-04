#define GAIN        0x00
#define BLUE        0x01
#define RED         0x02
#define GREEN       0x03
#define COM1        0x04
#define BAVG        0x05
#define GAVG        0x06
#define RAVG        0x07
#define AECH        0x08
#define COM2        0x09
#define PID         0x0A
#define VER         0x0B
#define COM3        0x0C
#define COM4        0x0D
#define COM5        0x0E
#define COM6        0x0F
#define AEC         0x10
#define CLKRC       0x11
#define COM7        0x12
#define COM8        0x13
#define COM9        0x14
#define COM10       0x15
#define REG16       0x16
#define HSTART      0x17
#define HSIZE       0x18
#define VSTART      0x19
#define VSIZE       0x1A
#define PSHFT       0x1B
#define MIDH        0x1C
#define MIDL        0x1D
#define LAEC        0x1F
#define COM11       0x20
#define BDBASE      0x22
#define DBSTEP      0x23
#define AEW         0x24
#define AEB         0x25
#define VPT         0x26
#define REG28       0x28
#define HOUTSIZE    0x29
#define EXHCH       0x2A
#define EXHCL       0x2B
#define VOUTSIZE    0x2C
#define ADVFL       0x2D
#define ADVFH       0x2E
#define YAVE        0x2F
#define LUMHTH      0x30
#define LUMLTH      0x31
#define HREF        0x32
#define DM_LNL      0x33
#define DM_LNH      0x34
#define ADOFF_B     0x35
#define ADOFF_R     0x36
#define ADOFF_GB    0x37
#define ADOFF_GR    0x38
#define OFF_B       0x39
#define OFF_R       0x3A
#define OFF_GB      0x3B
#define OFF_GR      0x3C
#define COM12       0x3D
#define COM13       0x3E
#define COM14       0x3F
#define COM15       0x40
#define COM16       0x41
#define TGT_B       0x42
#define TGT_R       0x43
#define TGT_GB      0x44
#define TGT_GR      0x45
#define LCC0        0x46
#define LCC1        0x47
#define LCC2        0x48
#define LCC3        0x49
#define LCC4        0x4A
#define LCC5        0x4B
#define LCC6        0x4C
#define LC_CTR      0x46
#define LC_XC       0x47
#define LC_YC       0x48
#define LC_COEF     0x49
#define LC_RADI     0x4A
#define LC_COEFB    0x4B
#define LC_COEFR    0x4C
#define FIXGAIN     0x4D
#define AREF0       0x4E
#define AREF1       0x4F
#define AREF2       0x50
#define AREF3       0x51
#define AREF4       0x52
#define AREF5       0x53
#define AREF6       0x54
#define AREF7       0x55
#define UFIX        0x60
#define VFIX        0x61
#define AWBB_BLK    0x62
#define AWB_CTRL0   0x63
#define DSP_CTRL1   0x64
#define DSP_CTRL2   0x65
#define DSP_CTRL3   0x66
#define DSP_CTRL4   0x67
#define AWB_BIAS    0x68
#define AWB_CTRL1   0x69
#define AWB_CTRL2   0x6A
#define AWB_CTRL3   0x6B
#define AWB_CTRL4   0x6C
#define AWB_CTRL5   0x6D
#define AWB_CTRL6   0x6E
#define AWB_CTRL7   0x6F
#define AWB_CTRL8   0x70
#define AWB_CTRL9   0x71
#define AWB_CTRL10  0x72
#define AWB_CTRL11  0x73
#define AWB_CTRL12  0x74
#define AWB_CTRL13  0x75
#define AWB_CTRL14  0x76
#define AWB_CTRL15  0x77
#define AWB_CTRL16  0x78
#define AWB_CTRL17  0x79
#define AWB_CTRL18  0x7A
#define AWB_CTRL19  0x7B
#define AWB_CTRL20  0x7C
#define AWB_CTRL21  0x7D
#define GAM1        0x7E
#define GAM2        0x7F
#define GAM3        0x80
#define GAM4        0x81
#define GAM5        0x82
#define GAM6        0x83
#define GAM7        0x84
#define GAM8        0x85
#define GAM9        0x86
#define GAM10       0x87
#define GAM11       0x88
#define GAM12       0x89
#define GAM13       0x8A
#define GAM14       0x8B
#define GAM15       0x8C
#define SLOP        0x8D
#define DNSTH       0x8E
#define EDGE_STRNGT 0x8F
#define EDGE_TRSHLD 0x90
#define DNSOFF      0x91
#define EDGE_UPPER  0x92
#define EDGE_LOWER  0x93
#define MTX1        0x94
#define MTX2        0x95
#define MTX3        0x96
#define MTX4        0x97
#define MTX5        0x98
#define MTX6        0x99
#define MTX_CTRL    0x9A
#define BRIGHT      0x9B
#define CNTRST      0x9C
#define CNTRST_CTRL 0x9D
#define UVAD_J0     0x9E
#define UVAD_J1     0x9F
#define SCAL0       0xA0
#define SCAL1       0xA1
#define SCAL2       0xA2
#define FIFODLYM    0xA3
#define FIFODLYA    0xA4
#define SDE         0xA6
#define USAT        0xA7
#define VSAT        0xA8
#define HUE0        0xA9
#define HUE1        0xAA
#define HUECOS      0xA9
#define HUESIN      0xAA
#define SIGN        0xAB
#define DSPAUTO     0xAC
#define SOFT_SLEEP_MODE 0x10
#define OCAP_1x         0x00
#define OCAP_2x         0x01
#define OCAP_3x         0x02
#define OCAP_4x         0x03
#define SWAP_MASK       (SWAP_RGB | SWAP_YUV | SWAP_ML)
#define IMG_MASK        (VFLIP_IMG | HFLIP_IMG)
#define VFLIP_IMG       0x80
#define HFLIP_IMG       0x40
#define SWAP_RGB        0x20
#define SWAP_YUV        0x10
#define SWAP_ML         0x08
#define NOTRI_CLOCK     0x04
#define NOTRI_DATA      0x02
#define SCOLOR_TEST     0x01
#define PLL_BYPASS      0x00
#define PLL_4x          0x40
#define PLL_6x          0x80
#define PLL_8x          0xc0
#define AEC_FULL        0x00
#define AEC_1p2         0x10
#define AEC_1p4         0x20
#define AEC_2p3         0x30
#define AFR_ON_OFF      0x80
#define AFR_SPPED       0x40
#define AFR_NO_RATE     0x00
#define AFR_1p2         0x10
#define AFR_1p4         0x20
#define AFR_1p8         0x30
#define AF_2x           0x00
#define AF_4x           0x04
#define AF_8x           0x08
#define AF_16x          0x0c
#define AEC_NO_LIMIT    0x01
#define SCCB_RESET      0x80
#define SLCT_MASK       0x40
#define SLCT_VGA        0x00
#define SLCT_QVGA       0x40
#define ITU656_ON_OFF   0x20
#define FMT_MASK        0x0c
#define FMT_GBR422      0x00
#define FMT_RGB565      0x04
#define FMT_RGB555      0x08
#define FMT_RGB444      0x0c
#define OFMT_MASK       0x03
#define OFMT_YUV        0x00
#define OFMT_P_BRAW     0x01
#define OFMT_RGB        0x02
#define OFMT_BRAW       0x03
#define FAST_ALGO       0x80
#define UNLMT_STEP      0x40
#define BNDF_ON_OFF     0x20
#define AEC_BND         0x10
#define AEC_ON_OFF      0x08
#define AGC_ON          0x04
#define AWB_ON          0x02
#define AEC_ON          0x01
#define BASE_AECAGC     0x80
#define GAIN_2x         0x00
#define GAIN_4x         0x10
#define GAIN_8x         0x20
#define GAIN_16x        0x30
#define GAIN_32x        0x40
#define GAIN_64x        0x50
#define GAIN_128x       0x60
#define DROP_VSYNC      0x04
#define DROP_HREF       0x02
#define SGLF_ON_OFF     0x02
#define SGLF_TRIG       0x01
#define VSIZE_LSB       0x04
#define FIFO_ON         0x80
#define UV_ON_OFF       0x40
#define YUV444_2_422    0x20
#define CLR_MTRX_ON_OFF 0x10
#define INTPLT_ON_OFF   0x08
#define GMM_ON_OFF      0x04
#define AUTO_BLK_ON_OFF 0x02
#define AUTO_WHT_ON_OFF 0x01
#define UV_MASK         0x80
#define UV_ON           0x80
#define UV_OFF          0x00
#define CBAR_MASK       0x20
#define CBAR_ON         0x20
#define CBAR_OFF        0x00
#define HST_VGA         0x23
#define HST_QVGA        0x3F
#define HSZ_VGA         0xA0
#define HSZ_QVGA        0x50
#define VST_VGA         0x07
#define VST_QVGA        0x03
#define VSZ_VGA         0xF0
#define VSZ_QVGA        0x78
#define HOSZ_VGA        0xA0
#define HOSZ_QVGA       0x50
#define VOSZ_VGA        0xF0
#define VOSZ_QVGA       0x78
#define AWB_ACTRL       0x80
#define DENOISE_ACTRL   0x40
#define EDGE_ACTRL      0x20
#define UV_ACTRL        0x10
#define SCAL0_ACTRL     0x08
#define SCAL1_2_ACTRL   0x04
#define OV7720  0x7720
#define OV7725  0x7721
#define VERSION(pid, ver) ((pid<<8)|(ver&0xFF))
struct regval_list ;
struct ov772x_color_format ;
struct ov772x_win_size ;
struct ov772x_priv ;
#define ENDMARKER
static const struct regval_list ov772x_qvga_regs[] = ;
static const struct regval_list ov772x_vga_regs[] = ;
static const struct ov772x_color_format ov772x_cfmts[] = ;
#define VGA_WIDTH   640
#define VGA_HEIGHT  480
#define QVGA_WIDTH  320
#define QVGA_HEIGHT 240
#define MAX_WIDTH   VGA_WIDTH
#define MAX_HEIGHT  VGA_HEIGHT
static const struct ov772x_win_size ov772x_win_vga = ;
static const struct ov772x_win_size ov772x_win_qvga = ;
static const struct v4l2_queryctrl ov772x_controls[] = ;
static struct ov772x_priv *to_ov772x(const struct i2c_client *client)
static int ov772x_write_array(struct i2c_client        *client,
const struct regval_list *vals)
static int ov772x_mask_set(struct i2c_client *client,
u8  command,
u8  mask,
u8  set)
static int ov772x_reset(struct i2c_client *client)
static int ov772x_s_stream(struct v4l2_subdev *sd, int enable)
static int ov772x_set_bus_param(struct soc_camera_device *icd,
unsigned long		  flags)
static unsigned long ov772x_query_bus_param(struct soc_camera_device *icd)
static int ov772x_g_ctrl(struct v4l2_subdev *sd, struct v4l2_control *ctrl)
static int ov772x_s_ctrl(struct v4l2_subdev *sd, struct v4l2_control *ctrl)
static int ov772x_g_chip_ident(struct v4l2_subdev *sd,
struct v4l2_dbg_chip_ident *id)
static int ov772x_g_register(struct v4l2_subdev *sd,
struct v4l2_dbg_register *reg)
static int ov772x_s_register(struct v4l2_subdev *sd,
struct v4l2_dbg_register *reg)
static const struct ov772x_win_size *ov772x_select_win(u32 width, u32 height)
static int ov772x_set_params(struct i2c_client *client, u32 *width, u32 *height,
enum v4l2_mbus_pixelcode code)
static int ov772x_g_crop(struct v4l2_subdev *sd, struct v4l2_crop *a)
static int ov772x_cropcap(struct v4l2_subdev *sd, struct v4l2_cropcap *a)
static int ov772x_g_fmt(struct v4l2_subdev *sd,
struct v4l2_mbus_framefmt *mf)
static int ov772x_s_fmt(struct v4l2_subdev *sd,
struct v4l2_mbus_framefmt *mf)
static int ov772x_try_fmt(struct v4l2_subdev *sd,
struct v4l2_mbus_framefmt *mf)
static int ov772x_video_probe(struct soc_camera_device *icd,
struct i2c_client *client)
static struct soc_camera_ops ov772x_ops = ;
static struct v4l2_subdev_core_ops ov772x_subdev_core_ops = ;
static int ov772x_enum_fmt(struct v4l2_subdev *sd, unsigned int index,
enum v4l2_mbus_pixelcode *code)
static struct v4l2_subdev_video_ops ov772x_subdev_video_ops = ;
static struct v4l2_subdev_ops ov772x_subdev_ops = ;
static int ov772x_probe(struct i2c_client *client,
const struct i2c_device_id *did)
static int ov772x_remove(struct i2c_client *client)
static const struct i2c_device_id ov772x_id[] = ;
MODULE_DEVICE_TABLE(i2c, ov772x_id);
static struct i2c_driver ov772x_i2c_driver = ;
static int __init ov772x_module_init(void)
static void __exit ov772x_module_exit(void)
module_init(ov772x_module_init);
module_exit(ov772x_module_exit);
MODULE_DESCRIPTION("SoC Camera driver for ov772x");
MODULE_AUTHOR("Kuninori Morimoto");
MODULE_LICENSE("GPL v2");
