static int debug;
static int test_image;
MODULE_DESCRIPTION("Philips SAA7127/9 video encoder driver");
MODULE_AUTHOR("Kevin Thayer, Chris Kennedy, Hans Verkuil");
MODULE_LICENSE("GPL");
module_param(debug, int, 0644);
module_param(test_image, int, 0644);
MODULE_PARM_DESC(debug, "debug level (0-2)");
MODULE_PARM_DESC(test_image, "test_image (0-1)");
#define SAA7127_REG_STATUS                           0x00
#define SAA7127_REG_WIDESCREEN_CONFIG                0x26
#define SAA7127_REG_WIDESCREEN_ENABLE                0x27
#define SAA7127_REG_BURST_START                      0x28
#define SAA7127_REG_BURST_END                        0x29
#define SAA7127_REG_COPYGEN_0                        0x2a
#define SAA7127_REG_COPYGEN_1                        0x2b
#define SAA7127_REG_COPYGEN_2                        0x2c
#define SAA7127_REG_OUTPUT_PORT_CONTROL              0x2d
#define SAA7127_REG_GAIN_LUMINANCE_RGB               0x38
#define SAA7127_REG_GAIN_COLORDIFF_RGB               0x39
#define SAA7127_REG_INPUT_PORT_CONTROL_1             0x3a
#define SAA7129_REG_FADE_KEY_COL2		     0x4f
#define SAA7127_REG_CHROMA_PHASE                     0x5a
#define SAA7127_REG_GAINU                            0x5b
#define SAA7127_REG_GAINV                            0x5c
#define SAA7127_REG_BLACK_LEVEL                      0x5d
#define SAA7127_REG_BLANKING_LEVEL                   0x5e
#define SAA7127_REG_VBI_BLANKING                     0x5f
#define SAA7127_REG_DAC_CONTROL                      0x61
#define SAA7127_REG_BURST_AMP                        0x62
#define SAA7127_REG_SUBC3                            0x63
#define SAA7127_REG_SUBC2                            0x64
#define SAA7127_REG_SUBC1                            0x65
#define SAA7127_REG_SUBC0                            0x66
#define SAA7127_REG_LINE_21_ODD_0                    0x67
#define SAA7127_REG_LINE_21_ODD_1                    0x68
#define SAA7127_REG_LINE_21_EVEN_0                   0x69
#define SAA7127_REG_LINE_21_EVEN_1                   0x6a
#define SAA7127_REG_RCV_PORT_CONTROL                 0x6b
#define SAA7127_REG_VTRIG                            0x6c
#define SAA7127_REG_HTRIG_HI                         0x6d
#define SAA7127_REG_MULTI                            0x6e
#define SAA7127_REG_CLOSED_CAPTION                   0x6f
#define SAA7127_REG_RCV2_OUTPUT_START                0x70
#define SAA7127_REG_RCV2_OUTPUT_END                  0x71
#define SAA7127_REG_RCV2_OUTPUT_MSBS                 0x72
#define SAA7127_REG_TTX_REQUEST_H_START              0x73
#define SAA7127_REG_TTX_REQUEST_H_DELAY_LENGTH       0x74
#define SAA7127_REG_CSYNC_ADVANCE_VSYNC_SHIFT        0x75
#define SAA7127_REG_TTX_ODD_REQ_VERT_START           0x76
#define SAA7127_REG_TTX_ODD_REQ_VERT_END             0x77
#define SAA7127_REG_TTX_EVEN_REQ_VERT_START          0x78
#define SAA7127_REG_TTX_EVEN_REQ_VERT_END            0x79
#define SAA7127_REG_FIRST_ACTIVE                     0x7a
#define SAA7127_REG_LAST_ACTIVE                      0x7b
#define SAA7127_REG_MSB_VERTICAL                     0x7c
#define SAA7127_REG_DISABLE_TTX_LINE_LO_0            0x7e
#define SAA7127_REG_DISABLE_TTX_LINE_LO_1            0x7f
struct i2c_reg_value ;
static const struct i2c_reg_value saa7129_init_config_extra[] = ;
static const struct i2c_reg_value saa7127_init_config_common[] = ;
#define SAA7127_60HZ_DAC_CONTROL 0x15
static const struct i2c_reg_value saa7127_init_config_60hz[] = ;
#define SAA7127_50HZ_PAL_DAC_CONTROL 0x02
static struct i2c_reg_value saa7127_init_config_50hz_pal[] = ;
#define SAA7127_50HZ_SECAM_DAC_CONTROL 0x08
static struct i2c_reg_value saa7127_init_config_50hz_secam[] = ;
struct saa7127_state ;
static inline struct saa7127_state *to_state(struct v4l2_subdev *sd)
static const char * const output_strs[] =
;
static const char * const wss_strs[] = ;
static int saa7127_read(struct v4l2_subdev *sd, u8 reg)
static int saa7127_write(struct v4l2_subdev *sd, u8 reg, u8 val)
static int saa7127_write_inittab(struct v4l2_subdev *sd,
const struct i2c_reg_value *regs)
static int saa7127_set_vps(struct v4l2_subdev *sd, const struct v4l2_sliced_vbi_data *data)
static int saa7127_set_cc(struct v4l2_subdev *sd, const struct v4l2_sliced_vbi_data *data)
static int saa7127_set_xds(struct v4l2_subdev *sd, const struct v4l2_sliced_vbi_data *data)
static int saa7127_set_wss(struct v4l2_subdev *sd, const struct v4l2_sliced_vbi_data *data)
static int saa7127_set_video_enable(struct v4l2_subdev *sd, int enable)
static int saa7127_set_std(struct v4l2_subdev *sd, v4l2_std_id std)
static int saa7127_set_output_type(struct v4l2_subdev *sd, int output)
static int saa7127_set_input_type(struct v4l2_subdev *sd, int input)
static int saa7127_s_std_output(struct v4l2_subdev *sd, v4l2_std_id std)
static int saa7127_s_routing(struct v4l2_subdev *sd,
u32 input, u32 output, u32 config)
static int saa7127_s_stream(struct v4l2_subdev *sd, int enable)
static int saa7127_g_sliced_fmt(struct v4l2_subdev *sd, struct v4l2_sliced_vbi_format *fmt)
static int saa7127_s_vbi_data(struct v4l2_subdev *sd, const struct v4l2_sliced_vbi_data *data)
static int saa7127_g_register(struct v4l2_subdev *sd, struct v4l2_dbg_register *reg)
static int saa7127_s_register(struct v4l2_subdev *sd, struct v4l2_dbg_register *reg)
static int saa7127_g_chip_ident(struct v4l2_subdev *sd, struct v4l2_dbg_chip_ident *chip)
static int saa7127_log_status(struct v4l2_subdev *sd)
static const struct v4l2_subdev_core_ops saa7127_core_ops = ;
static const struct v4l2_subdev_video_ops saa7127_video_ops = ;
static const struct v4l2_subdev_vbi_ops saa7127_vbi_ops = ;
static const struct v4l2_subdev_ops saa7127_ops = ;
static int saa7127_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int saa7127_remove(struct i2c_client *client)
static struct i2c_device_id saa7127_id[] = ;
MODULE_DEVICE_TABLE(i2c, saa7127_id);
static struct i2c_driver saa7127_driver = ;
static __init int init_saa7127(void)
static __exit void exit_saa7127(void)
module_init(init_saa7127);
module_exit(exit_saa7127);
