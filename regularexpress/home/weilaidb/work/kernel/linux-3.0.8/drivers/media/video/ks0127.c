MODULE_DESCRIPTION("KS0127 video decoder driver");
MODULE_AUTHOR("Ryan Drake");
MODULE_LICENSE("GPL");
#define I2C_KS0127_ADDON   0xD8
#define I2C_KS0127_ONBOARD 0xDA
#define KS_STAT     0x00
#define KS_CMDA     0x01
#define KS_CMDB     0x02
#define KS_CMDC     0x03
#define KS_CMDD     0x04
#define KS_HAVB     0x05
#define KS_HAVE     0x06
#define KS_HS1B     0x07
#define KS_HS1E     0x08
#define KS_HS2B     0x09
#define KS_HS2E     0x0a
#define KS_AGC      0x0b
#define KS_HXTRA    0x0c
#define KS_CDEM     0x0d
#define KS_PORTAB   0x0e
#define KS_LUMA     0x0f
#define KS_CON      0x10
#define KS_BRT      0x11
#define KS_CHROMA   0x12
#define KS_CHROMB   0x13
#define KS_DEMOD    0x14
#define KS_SAT      0x15
#define KS_HUE      0x16
#define KS_VERTIA   0x17
#define KS_VERTIB   0x18
#define KS_VERTIC   0x19
#define KS_HSCLL    0x1a
#define KS_HSCLH    0x1b
#define KS_VSCLL    0x1c
#define KS_VSCLH    0x1d
#define KS_OFMTA    0x1e
#define KS_OFMTB    0x1f
#define KS_VBICTL   0x20
#define KS_CCDAT2   0x21
#define KS_CCDAT1   0x22
#define KS_VBIL30   0x23
#define KS_VBIL74   0x24
#define KS_VBIL118  0x25
#define KS_VBIL1512 0x26
#define KS_TTFRAM   0x27
#define KS_TESTA    0x28
#define KS_UVOFFH   0x29
#define KS_UVOFFL   0x2a
#define KS_UGAIN    0x2b
#define KS_VGAIN    0x2c
#define KS_VAVB     0x2d
#define KS_VAVE     0x2e
#define KS_CTRACK   0x2f
#define KS_POLCTL   0x30
#define KS_REFCOD   0x31
#define KS_INVALY   0x32
#define KS_INVALU   0x33
#define KS_INVALV   0x34
#define KS_UNUSEY   0x35
#define KS_UNUSEU   0x36
#define KS_UNUSEV   0x37
#define KS_USRSAV   0x38
#define KS_USREAV   0x39
#define KS_SHS1A    0x3a
#define KS_SHS1B    0x3b
#define KS_SHS1C    0x3c
#define KS_CMDE     0x3d
#define KS_VSDEL    0x3e
#define KS_CMDF     0x3f
#define KS_GAMMA0   0x40
#define KS_GAMMA1   0x41
#define KS_GAMMA2   0x42
#define KS_GAMMA3   0x43
#define KS_GAMMA4   0x44
#define KS_GAMMA5   0x45
#define KS_GAMMA6   0x46
#define KS_GAMMA7   0x47
#define KS_GAMMA8   0x48
#define KS_GAMMA9   0x49
#define KS_GAMMA10  0x4a
#define KS_GAMMA11  0x4b
#define KS_GAMMA12  0x4c
#define KS_GAMMA13  0x4d
#define KS_GAMMA14  0x4e
#define KS_GAMMA15  0x4f
#define KS_GAMMA16  0x50
#define KS_GAMMA17  0x51
#define KS_GAMMA18  0x52
#define KS_GAMMA19  0x53
#define KS_GAMMA20  0x54
#define KS_GAMMA21  0x55
#define KS_GAMMA22  0x56
#define KS_GAMMA23  0x57
#define KS_GAMMA24  0x58
#define KS_GAMMA25  0x59
#define KS_GAMMA26  0x5a
#define KS_GAMMA27  0x5b
#define KS_GAMMA28  0x5c
#define KS_GAMMA29  0x5d
#define KS_GAMMA30  0x5e
#define KS_GAMMA31  0x5f
#define KS_GAMMAD0  0x60
#define KS_GAMMAD1  0x61
#define KS_GAMMAD2  0x62
#define KS_GAMMAD3  0x63
#define KS_GAMMAD4  0x64
#define KS_GAMMAD5  0x65
#define KS_GAMMAD6  0x66
#define KS_GAMMAD7  0x67
#define KS_GAMMAD8  0x68
#define KS_GAMMAD9  0x69
#define KS_GAMMAD10 0x6a
#define KS_GAMMAD11 0x6b
#define KS_GAMMAD12 0x6c
#define KS_GAMMAD13 0x6d
#define KS_GAMMAD14 0x6e
#define KS_GAMMAD15 0x6f
#define KS_GAMMAD16 0x70
#define KS_GAMMAD17 0x71
#define KS_GAMMAD18 0x72
#define KS_GAMMAD19 0x73
#define KS_GAMMAD20 0x74
#define KS_GAMMAD21 0x75
#define KS_GAMMAD22 0x76
#define KS_GAMMAD23 0x77
#define KS_GAMMAD24 0x78
#define KS_GAMMAD25 0x79
#define KS_GAMMAD26 0x7a
#define KS_GAMMAD27 0x7b
#define KS_GAMMAD28 0x7c
#define KS_GAMMAD29 0x7d
#define KS_GAMMAD30 0x7e
#define KS_GAMMAD31 0x7f
struct adjust ;
struct ks0127 ;
static inline struct ks0127 *to_ks0127(struct v4l2_subdev *sd)
static int debug;
module_param(debug, int, 0);
MODULE_PARM_DESC(debug, "Debug output");
static u8 reg_defaults[64];
static void init_reg_defaults(void)
static u8 ks0127_read(struct v4l2_subdev *sd, u8 reg)
static void ks0127_write(struct v4l2_subdev *sd, u8 reg, u8 val)
static void ks0127_and_or(struct v4l2_subdev *sd, u8 reg, u8 and_v, u8 or_v)
static void ks0127_init(struct v4l2_subdev *sd)
static int ks0127_s_routing(struct v4l2_subdev *sd,
u32 input, u32 output, u32 config)
static int ks0127_s_std(struct v4l2_subdev *sd, v4l2_std_id std)
static int ks0127_s_stream(struct v4l2_subdev *sd, int enable)
static int ks0127_status(struct v4l2_subdev *sd, u32 *pstatus, v4l2_std_id *pstd)
static int ks0127_querystd(struct v4l2_subdev *sd, v4l2_std_id *std)
static int ks0127_g_input_status(struct v4l2_subdev *sd, u32 *status)
static int ks0127_g_chip_ident(struct v4l2_subdev *sd, struct v4l2_dbg_chip_ident *chip)
static const struct v4l2_subdev_core_ops ks0127_core_ops = ;
static const struct v4l2_subdev_video_ops ks0127_video_ops = ;
static const struct v4l2_subdev_ops ks0127_ops = ;
static int ks0127_probe(struct i2c_client *client, const struct i2c_device_id *id)
static int ks0127_remove(struct i2c_client *client)
static const struct i2c_device_id ks0127_id[] = ;
MODULE_DEVICE_TABLE(i2c, ks0127_id);
static struct i2c_driver ks0127_driver = ;
static __init int init_ks0127(void)
static __exit void exit_ks0127(void)
module_init(init_ks0127);
module_exit(exit_ks0127);
