#define VAL_SET(x, mask, rshift, lshift)  \
((((x) >> rshift) & mask) << lshift)
#define R_BYPASS    0x05
#define   R_BYPASS_DSP_BYPAS    0x01
#define   R_BYPASS_USE_DSP      0x00
#define QS          0x44
#define CTRLI       0x50
#define   CTRLI_LP_DP           0x80
#define   CTRLI_ROUND           0x40
#define   CTRLI_V_DIV_SET(x)    VAL_SET(x, 0x3, 0, 3)
#define   CTRLI_H_DIV_SET(x)    VAL_SET(x, 0x3, 0, 0)
#define HSIZE       0x51
#define   HSIZE_SET(x)          VAL_SET(x, 0xFF, 2, 0)
#define VSIZE       0x52
#define   VSIZE_SET(x)          VAL_SET(x, 0xFF, 2, 0)
#define XOFFL       0x53
#define   XOFFL_SET(x)          VAL_SET(x, 0xFF, 0, 0)
#define YOFFL       0x54
#define   YOFFL_SET(x)          VAL_SET(x, 0xFF, 0, 0)
#define VHYX        0x55
#define   VHYX_VSIZE_SET(x)     VAL_SET(x, 0x1, (8+2), 7)
#define   VHYX_HSIZE_SET(x)     VAL_SET(x, 0x1, (8+2), 3)
#define   VHYX_YOFF_SET(x)      VAL_SET(x, 0x3, 8, 4)
#define   VHYX_XOFF_SET(x)      VAL_SET(x, 0x3, 8, 0)
#define DPRP        0x56
#define TEST        0x57
#define   TEST_HSIZE_SET(x)     VAL_SET(x, 0x1, (9+2), 7)
#define ZMOW        0x5A
#define   ZMOW_OUTW_SET(x)      VAL_SET(x, 0xFF, 2, 0)
#define ZMOH        0x5B
#define   ZMOH_OUTH_SET(x)      VAL_SET(x, 0xFF, 2, 0)
#define ZMHH        0x5C
#define   ZMHH_ZSPEED_SET(x)    VAL_SET(x, 0x0F, 0, 4)
#define   ZMHH_OUTH_SET(x)      VAL_SET(x, 0x1, (8+2), 2)
#define   ZMHH_OUTW_SET(x)      VAL_SET(x, 0x3, (8+2), 0)
#define BPADDR      0x7C
#define BPDATA      0x7D
#define CTRL2       0x86
#define   CTRL2_DCW_EN          0x20
#define   CTRL2_SDE_EN          0x10
#define   CTRL2_UV_ADJ_EN       0x08
#define   CTRL2_UV_AVG_EN       0x04
#define   CTRL2_CMX_EN          0x01
#define CTRL3       0x87
#define   CTRL3_BPC_EN          0x80
#define   CTRL3_WPC_EN          0x40
#define SIZEL       0x8C
#define   SIZEL_HSIZE8_11_SET(x) VAL_SET(x, 0x1, 11, 6)
#define   SIZEL_HSIZE8_SET(x)    VAL_SET(x, 0x7, 0, 3)
#define   SIZEL_VSIZE8_SET(x)    VAL_SET(x, 0x7, 0, 0)
#define HSIZE8      0xC0
#define   HSIZE8_SET(x)         VAL_SET(x, 0xFF, 3, 0)
#define VSIZE8      0xC1
#define   VSIZE8_SET(x)         VAL_SET(x, 0xFF, 3, 0)
#define CTRL0       0xC2
#define   CTRL0_AEC_EN       0x80
#define   CTRL0_AEC_SEL      0x40
#define   CTRL0_STAT_SEL     0x20
#define   CTRL0_VFIRST       0x10
#define   CTRL0_YUV422       0x08
#define   CTRL0_YUV_EN       0x04
#define   CTRL0_RGB_EN       0x02
#define   CTRL0_RAW_EN       0x01
#define CTRL1       0xC3
#define   CTRL1_CIP          0x80
#define   CTRL1_DMY          0x40
#define   CTRL1_RAW_GMA      0x20
#define   CTRL1_DG           0x10
#define   CTRL1_AWB          0x08
#define   CTRL1_AWB_GAIN     0x04
#define   CTRL1_LENC         0x02
#define   CTRL1_PRE          0x01
#define R_DVP_SP    0xD3
#define   R_DVP_SP_AUTO_MODE 0x80
#define   R_DVP_SP_DVP_MASK  0x3F
#define IMAGE_MODE  0xDA
#define   IMAGE_MODE_Y8_DVP_EN   0x40
#define   IMAGE_MODE_JPEG_EN     0x10
#define   IMAGE_MODE_YUV422      0x00
#define   IMAGE_MODE_RAW10       0x04
#define   IMAGE_MODE_RGB565      0x08
#define   IMAGE_MODE_HREF_VSYNC  0x02
#define   IMAGE_MODE_LBYTE_FIRST 0x01
#define RESET       0xE0
#define   RESET_MICROC       0x40
#define   RESET_SCCB         0x20
#define   RESET_JPEG         0x10
#define   RESET_DVP          0x04
#define   RESET_IPU          0x02
#define   RESET_CIF          0x01
#define REGED       0xED
#define   REGED_CLK_OUT_DIS  0x10
#define MS_SP       0xF0
#define SS_ID       0xF7
#define SS_CTRL     0xF8
#define   SS_CTRL_ADD_AUTO_INC  0x20
#define   SS_CTRL_EN            0x08
#define   SS_CTRL_DELAY_CLK     0x04
#define   SS_CTRL_ACC_EN        0x02
#define   SS_CTRL_SEN_PASS_THR  0x01
#define MC_BIST     0xF9
#define   MC_BIST_RESET           0x80
#define   MC_BIST_BOOT_ROM_SEL    0x40
#define   MC_BIST_12KB_SEL        0x20
#define   MC_BIST_12KB_MASK       0x30
#define   MC_BIST_512KB_SEL       0x08
#define   MC_BIST_512KB_MASK      0x0C
#define   MC_BIST_BUSY_BIT_R      0x02
#define   MC_BIST_MC_RES_ONE_SH_W 0x02
#define   MC_BIST_LAUNCH          0x01
#define BANK_SEL    0xFF
#define   BANK_SEL_DSP     0x00
#define   BANK_SEL_SENS    0x01
#define GAIN        0x00
#define COM1        0x03
#define   COM1_1_DUMMY_FR          0x40
#define   COM1_3_DUMMY_FR          0x80
#define   COM1_7_DUMMY_FR          0xC0
#define   COM1_VWIN_LSB_UXGA       0x0F
#define   COM1_VWIN_LSB_SVGA       0x0A
#define   COM1_VWIN_LSB_CIF        0x06
#define REG04       0x04
#define   REG04_DEF             0x20
#define   REG04_HFLIP_IMG       0x80
#define   REG04_VFLIP_IMG       0x40
#define   REG04_VREF_EN         0x10
#define   REG04_HREF_EN         0x08
#define   REG04_AEC_SET(x)      VAL_SET(x, 0x3, 0, 0)
#define REG08       0x08
#define COM2        0x09
#define   COM2_SOFT_SLEEP_MODE  0x10
#define   COM2_OCAP_Nx_SET(N)   (((N) - 1) & 0x03)
#define PID         0x0A
#define VER         0x0B
#define COM3        0x0C
#define   COM3_BAND_50H        0x04
#define   COM3_BAND_AUTO       0x02
#define   COM3_SING_FR_SNAPSH  0x01
#define AEC         0x10
#define CLKRC       0x11
#define   CLKRC_EN             0x80
#define   CLKRC_DIV_SET(x)     (((x) - 1) & 0x1F)
#define COM7        0x12
#define   COM7_SRST            0x80
#define   COM7_RES_UXGA        0x00
#define   COM7_RES_SVGA        0x40
#define   COM7_RES_CIF         0x20
#define   COM7_ZOOM_EN         0x04
#define   COM7_COLOR_BAR_TEST  0x02
#define COM8        0x13
#define   COM8_DEF             0xC0
#define   COM8_BNDF_EN         0x20
#define   COM8_AGC_EN          0x04
#define   COM8_AEC_EN          0x01
#define COM9        0x14
#define   COM9_AGC_GAIN_2x     0x00
#define   COM9_AGC_GAIN_4x     0x20
#define   COM9_AGC_GAIN_8x     0x40
#define   COM9_AGC_GAIN_16x    0x60
#define   COM9_AGC_GAIN_32x    0x80
#define   COM9_AGC_GAIN_64x    0xA0
#define   COM9_AGC_GAIN_128x   0xC0
#define COM10       0x15
#define   COM10_PCLK_HREF      0x20
#define   COM10_PCLK_RISE      0x10
#define   COM10_HREF_INV       0x08
#define   COM10_VSINC_INV      0x02
#define HSTART      0x17
#define HEND        0x18
#define VSTART      0x19
#define VEND        0x1A
#define MIDH        0x1C
#define MIDL        0x1D
#define AEW         0x24
#define AEB         0x25
#define VV          0x26
#define   VV_HIGH_TH_SET(x)      VAL_SET(x, 0xF, 0, 4)
#define   VV_LOW_TH_SET(x)       VAL_SET(x, 0xF, 0, 0)
#define REG2A       0x2A
#define FRARL       0x2B
#define ADDVFL      0x2D
#define ADDVFH      0x2E
#define YAVG        0x2F
#define REG32       0x32
#define   REG32_PCLK_DIV_2    0x80
#define   REG32_PCLK_DIV_4    0xC0
#define ARCOM2      0x34
#define REG45       0x45
#define FLL         0x46
#define FLH         0x47
#define COM19       0x48
#define ZOOMS       0x49
#define COM22       0x4B
#define COM25       0x4E
#define BD50        0x4F
#define BD60        0x50
#define REG5D       0x5D
#define REG5E       0x5E
#define REG5F       0x5F
#define REG60       0x60
#define HISTO_LOW   0x61
#define HISTO_HIGH  0x62
#define MANUFACTURER_ID	0x7FA2
#define PID_OV2640	0x2642
#define VERSION(pid, ver) ((pid << 8) | (ver & 0xFF))
struct regval_list ;
enum ov2640_width ;
enum ov2640_height ;
struct ov2640_win_size ;
struct ov2640_priv ;
#define ENDMARKER
static const struct regval_list ov2640_init_regs[] = ;
static const struct regval_list ov2640_size_change_preamble_regs[] = ;
#define PER_SIZE_REG_SEQ(x, y, v_div, h_div, pclk_div)	\
,		\
,			\
,			\
,	\
,				\
static const struct regval_list ov2640_qcif_regs[] = ;
static const struct regval_list ov2640_qvga_regs[] = ;
static const struct regval_list ov2640_cif_regs[] = ;
static const struct regval_list ov2640_vga_regs[] = ;
static const struct regval_list ov2640_svga_regs[] = ;
static const struct regval_list ov2640_xga_regs[] = ;
static const struct regval_list ov2640_sxga_regs[] = ;
static const struct regval_list ov2640_uxga_regs[] = ;
#define OV2640_SIZE(n, w, h, r) \
static const struct ov2640_win_size ov2640_supported_win_sizes[] = ;
static const struct regval_list ov2640_format_change_preamble_regs[] = ;
static const struct regval_list ov2640_yuv422_regs[] = ;
static const struct regval_list ov2640_rgb565_regs[] = ;
static enum v4l2_mbus_pixelcode ov2640_codes[] = ;
static const struct v4l2_queryctrl ov2640_controls[] = ;
static struct ov2640_priv *to_ov2640(const struct i2c_client *client)
static int ov2640_write_array(struct i2c_client *client,
const struct regval_list *vals)
static int ov2640_mask_set(struct i2c_client *client,
u8  reg, u8  mask, u8  set)
static int ov2640_reset(struct i2c_client *client)
static int ov2640_s_stream(struct v4l2_subdev *sd, int enable)
static int ov2640_set_bus_param(struct soc_camera_device *icd,
unsigned long flags)
static unsigned long ov2640_query_bus_param(struct soc_camera_device *icd)
static int ov2640_g_ctrl(struct v4l2_subdev *sd, struct v4l2_control *ctrl)
static int ov2640_s_ctrl(struct v4l2_subdev *sd, struct v4l2_control *ctrl)
static int ov2640_g_chip_ident(struct v4l2_subdev *sd,
struct v4l2_dbg_chip_ident *id)
static int ov2640_g_register(struct v4l2_subdev *sd,
struct v4l2_dbg_register *reg)
static int ov2640_s_register(struct v4l2_subdev *sd,
struct v4l2_dbg_register *reg)
static const struct ov2640_win_size *ov2640_select_win(u32 *width, u32 *height)
static int ov2640_set_params(struct i2c_client *client, u32 *width, u32 *height,
enum v4l2_mbus_pixelcode code)
static int ov2640_g_fmt(struct v4l2_subdev *sd,
struct v4l2_mbus_framefmt *mf)
static int ov2640_s_fmt(struct v4l2_subdev *sd,
struct v4l2_mbus_framefmt *mf)
static int ov2640_try_fmt(struct v4l2_subdev *sd,
struct v4l2_mbus_framefmt *mf)
static int ov2640_enum_fmt(struct v4l2_subdev *sd, unsigned int index,
enum v4l2_mbus_pixelcode *code)
static int ov2640_g_crop(struct v4l2_subdev *sd, struct v4l2_crop *a)
static int ov2640_cropcap(struct v4l2_subdev *sd, struct v4l2_cropcap *a)
static int ov2640_video_probe(struct soc_camera_device *icd,
struct i2c_client *client)
static struct soc_camera_ops ov2640_ops = ;
static struct v4l2_subdev_core_ops ov2640_subdev_core_ops = ;
static struct v4l2_subdev_video_ops ov2640_subdev_video_ops = ;
static struct v4l2_subdev_ops ov2640_subdev_ops = ;
static int ov2640_probe(struct i2c_client *client,
const struct i2c_device_id *did)
static int ov2640_remove(struct i2c_client *client)
static const struct i2c_device_id ov2640_id[] = ;
MODULE_DEVICE_TABLE(i2c, ov2640_id);
static struct i2c_driver ov2640_i2c_driver = ;
static int __init ov2640_module_init(void)
static void __exit ov2640_module_exit(void)
module_init(ov2640_module_init);
module_exit(ov2640_module_exit);
MODULE_DESCRIPTION("SoC Camera driver for Omni Vision 2640 sensor");
MODULE_AUTHOR("Alberto Panizzo");
MODULE_LICENSE("GPL v2");
