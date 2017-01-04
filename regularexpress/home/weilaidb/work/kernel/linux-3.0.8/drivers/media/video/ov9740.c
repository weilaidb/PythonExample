#define to_ov9740(sd)		container_of(sd, struct ov9740_priv, subdev)
#define OV9740_MODEL_ID_HI		0x0000
#define OV9740_MODEL_ID_LO		0x0001
#define OV9740_REVISION_NUMBER		0x0002
#define OV9740_MANUFACTURER_ID		0x0003
#define OV9740_SMIA_VERSION		0x0004
#define OV9740_MODE_SELECT		0x0100
#define OV9740_IMAGE_ORT		0x0101
#define OV9740_SOFTWARE_RESET		0x0103
#define OV9740_GRP_PARAM_HOLD		0x0104
#define OV9740_MSK_CORRUP_FM		0x0105
#define OV9740_FRM_LENGTH_LN_HI		0x0340
#define OV9740_FRM_LENGTH_LN_LO		0x0341
#define OV9740_LN_LENGTH_PCK_HI		0x0342
#define OV9740_LN_LENGTH_PCK_LO		0x0343
#define OV9740_X_ADDR_START_HI		0x0344
#define OV9740_X_ADDR_START_LO		0x0345
#define OV9740_Y_ADDR_START_HI		0x0346
#define OV9740_Y_ADDR_START_LO		0x0347
#define OV9740_X_ADDR_END_HI		0x0348
#define OV9740_X_ADDR_END_LO		0x0349
#define OV9740_Y_ADDR_END_HI		0x034A
#define OV9740_Y_ADDR_END_LO		0x034B
#define OV9740_X_OUTPUT_SIZE_HI		0x034C
#define OV9740_X_OUTPUT_SIZE_LO		0x034D
#define OV9740_Y_OUTPUT_SIZE_HI		0x034E
#define OV9740_Y_OUTPUT_SIZE_LO		0x034F
#define OV9740_IO_CREL00		0x3002
#define OV9740_IO_CREL01		0x3004
#define OV9740_IO_CREL02		0x3005
#define OV9740_IO_OUTPUT_SEL01		0x3026
#define OV9740_IO_OUTPUT_SEL02		0x3027
#define OV9740_AWB_MANUAL_CTRL		0x3406
#define OV9740_ANALOG_CTRL01		0x3601
#define OV9740_ANALOG_CTRL02		0x3602
#define OV9740_ANALOG_CTRL03		0x3603
#define OV9740_ANALOG_CTRL04		0x3604
#define OV9740_ANALOG_CTRL10		0x3610
#define OV9740_ANALOG_CTRL12		0x3612
#define OV9740_ANALOG_CTRL20		0x3620
#define OV9740_ANALOG_CTRL21		0x3621
#define OV9740_ANALOG_CTRL22		0x3622
#define OV9740_ANALOG_CTRL30		0x3630
#define OV9740_ANALOG_CTRL31		0x3631
#define OV9740_ANALOG_CTRL32		0x3632
#define OV9740_ANALOG_CTRL33		0x3633
#define OV9740_SENSOR_CTRL03		0x3703
#define OV9740_SENSOR_CTRL04		0x3704
#define OV9740_SENSOR_CTRL05		0x3705
#define OV9740_SENSOR_CTRL07		0x3707
#define OV9740_TIMING_CTRL17		0x3817
#define OV9740_TIMING_CTRL19		0x3819
#define OV9740_TIMING_CTRL33		0x3833
#define OV9740_TIMING_CTRL35		0x3835
#define OV9740_AEC_MAXEXPO_60_H		0x3A02
#define OV9740_AEC_MAXEXPO_60_L		0x3A03
#define OV9740_AEC_B50_STEP_HI		0x3A08
#define OV9740_AEC_B50_STEP_LO		0x3A09
#define OV9740_AEC_B60_STEP_HI		0x3A0A
#define OV9740_AEC_B60_STEP_LO		0x3A0B
#define OV9740_AEC_CTRL0D		0x3A0D
#define OV9740_AEC_CTRL0E		0x3A0E
#define OV9740_AEC_MAXEXPO_50_H		0x3A14
#define OV9740_AEC_MAXEXPO_50_L		0x3A15
#define OV9740_AEC_ENABLE		0x3503
#define OV9740_GAIN_CEILING_01		0x3A18
#define OV9740_GAIN_CEILING_02		0x3A19
#define OV9740_AEC_HI_THRESHOLD		0x3A11
#define OV9740_AEC_3A1A			0x3A1A
#define OV9740_AEC_CTRL1B_WPT2		0x3A1B
#define OV9740_AEC_CTRL0F_WPT		0x3A0F
#define OV9740_AEC_CTRL10_BPT		0x3A10
#define OV9740_AEC_CTRL1E_BPT2		0x3A1E
#define OV9740_AEC_LO_THRESHOLD		0x3A1F
#define OV9740_BLC_AUTO_ENABLE		0x4002
#define OV9740_BLC_MODE			0x4005
#define OV9740_VFIFO_READ_START_HI	0x4608
#define OV9740_VFIFO_READ_START_LO	0x4609
#define OV9740_DVP_VSYNC_CTRL02		0x4702
#define OV9740_DVP_VSYNC_MODE		0x4704
#define OV9740_DVP_VSYNC_CTRL06		0x4706
#define OV9740_PLL_MODE_CTRL01		0x3104
#define OV9740_PRE_PLL_CLK_DIV		0x0305
#define OV9740_PLL_MULTIPLIER		0x0307
#define OV9740_VT_SYS_CLK_DIV		0x0303
#define OV9740_VT_PIX_CLK_DIV		0x0301
#define OV9740_PLL_CTRL3010		0x3010
#define OV9740_VFIFO_CTRL00		0x460E
#define OV9740_ISP_CTRL00		0x5000
#define OV9740_ISP_CTRL01		0x5001
#define OV9740_ISP_CTRL03		0x5003
#define OV9740_ISP_CTRL05		0x5005
#define OV9740_ISP_CTRL12		0x5012
#define OV9740_ISP_CTRL19		0x5019
#define OV9740_ISP_CTRL1A		0x501A
#define OV9740_ISP_CTRL1E		0x501E
#define OV9740_ISP_CTRL1F		0x501F
#define OV9740_ISP_CTRL20		0x5020
#define OV9740_ISP_CTRL21		0x5021
#define OV9740_AWB_CTRL00		0x5180
#define OV9740_AWB_CTRL01		0x5181
#define OV9740_AWB_CTRL02		0x5182
#define OV9740_AWB_CTRL03		0x5183
#define OV9740_AWB_ADV_CTRL01		0x5184
#define OV9740_AWB_ADV_CTRL02		0x5185
#define OV9740_AWB_ADV_CTRL03		0x5186
#define OV9740_AWB_ADV_CTRL04		0x5187
#define OV9740_AWB_ADV_CTRL05		0x5188
#define OV9740_AWB_ADV_CTRL06		0x5189
#define OV9740_AWB_ADV_CTRL07		0x518A
#define OV9740_AWB_ADV_CTRL08		0x518B
#define OV9740_AWB_ADV_CTRL09		0x518C
#define OV9740_AWB_ADV_CTRL10		0x518D
#define OV9740_AWB_ADV_CTRL11		0x518E
#define OV9740_AWB_CTRL0F		0x518F
#define OV9740_AWB_CTRL10		0x5190
#define OV9740_AWB_CTRL11		0x5191
#define OV9740_AWB_CTRL12		0x5192
#define OV9740_AWB_CTRL13		0x5193
#define OV9740_AWB_CTRL14		0x5194
#define OV9740_MIPI_CTRL00		0x4800
#define OV9740_MIPI_3837		0x3837
#define OV9740_MIPI_CTRL01		0x4801
#define OV9740_MIPI_CTRL03		0x4803
#define OV9740_MIPI_CTRL05		0x4805
#define OV9740_VFIFO_RD_CTRL		0x4601
#define OV9740_MIPI_CTRL_3012		0x3012
#define OV9740_SC_CMMM_MIPI_CTR		0x3014
enum ;
struct ov9740_resolution ;
static struct ov9740_resolution ov9740_resolutions[] = ;
struct ov9740_reg ;
struct ov9740_priv ;
static const struct ov9740_reg ov9740_defaults[] = ;
static const struct ov9740_reg ov9740_regs_vga[] = ;
static const struct ov9740_reg ov9740_regs_720p[] = ;
static enum v4l2_mbus_pixelcode ov9740_codes[] = ;
static const struct v4l2_queryctrl ov9740_controls[] = ;
static int ov9740_reg_read(struct i2c_client *client, u16 reg, u8 *val)
static int ov9740_reg_write(struct i2c_client *client, u16 reg, u8 val)
static int ov9740_reg_rmw(struct i2c_client *client, u16 reg, u8 set, u8 unset)
static int ov9740_reg_write_array(struct i2c_client *client,
const struct ov9740_reg *regarray,
int regarraylen)
static int ov9740_s_stream(struct v4l2_subdev *sd, int enable)
static int ov9740_set_bus_param(struct soc_camera_device *icd,
unsigned long flags)
static unsigned long ov9740_query_bus_param(struct soc_camera_device *icd)
static int ov9740_g_ctrl(struct v4l2_subdev *sd, struct v4l2_control *ctrl)
static int ov9740_s_ctrl(struct v4l2_subdev *sd, struct v4l2_control *ctrl)
static int ov9740_g_chip_ident(struct v4l2_subdev *sd,
struct v4l2_dbg_chip_ident *id)
static int ov9740_get_register(struct v4l2_subdev *sd,
struct v4l2_dbg_register *reg)
static int ov9740_set_register(struct v4l2_subdev *sd,
struct v4l2_dbg_register *reg)
static void ov9740_res_roundup(u32 *width, u32 *height)
static int ov9740_set_res(struct i2c_client *client, u32 width)
static int ov9740_s_fmt(struct v4l2_subdev *sd,
struct v4l2_mbus_framefmt *mf)
static int ov9740_try_fmt(struct v4l2_subdev *sd,
struct v4l2_mbus_framefmt *mf)
static int ov9740_enum_fmt(struct v4l2_subdev *sd, unsigned int index,
enum v4l2_mbus_pixelcode *code)
static int ov9740_cropcap(struct v4l2_subdev *sd, struct v4l2_cropcap *a)
static int ov9740_g_crop(struct v4l2_subdev *sd, struct v4l2_crop *a)
static int ov9740_video_probe(struct soc_camera_device *icd,
struct i2c_client *client)
static struct soc_camera_ops ov9740_ops = ;
static struct v4l2_subdev_core_ops ov9740_core_ops = ;
static struct v4l2_subdev_video_ops ov9740_video_ops = ;
static struct v4l2_subdev_ops ov9740_subdev_ops = ;
static int ov9740_probe(struct i2c_client *client,
const struct i2c_device_id *did)
static int ov9740_remove(struct i2c_client *client)
static const struct i2c_device_id ov9740_id[] = ;
MODULE_DEVICE_TABLE(i2c, ov9740_id);
static struct i2c_driver ov9740_i2c_driver = ;
static int __init ov9740_module_init(void)
static void __exit ov9740_module_exit(void)
module_init(ov9740_module_init);
module_exit(ov9740_module_exit);
MODULE_DESCRIPTION("SoC Camera driver for OmniVision OV9740");
MODULE_AUTHOR("Andrew Chew <achew@nvidia.com>");
MODULE_LICENSE("GPL v2");
