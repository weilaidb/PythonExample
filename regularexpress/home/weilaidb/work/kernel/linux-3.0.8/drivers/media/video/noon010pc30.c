static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Enable module debug trace. Set to 1 to enable.");
#define MODULE_NAME		"NOON010PC30"
#define POWER_CTRL_REG		0x0001
#define PAGEMODE_REG		0x03
#define DEVICE_ID_REG		0x0004
#define NOON010PC30_ID		0x86
#define VDO_CTL_REG(n)		(0x0010 + (n))
#define SYNC_CTL_REG		0x0012
#define WIN_ROWH_REG		0x0013
#define WIN_ROWL_REG		0x0014
#define WIN_COLH_REG		0x0015
#define WIN_COLL_REG		0x0016
#define WIN_HEIGHTH_REG		0x0017
#define WIN_HEIGHTL_REG		0x0018
#define WIN_WIDTHH_REG		0x0019
#define WIN_WIDTHL_REG		0x001A
#define HBLANKH_REG		0x001B
#define HBLANKL_REG		0x001C
#define VSYNCH_REG		0x001D
#define VSYNCL_REG		0x001E
#define VS_CTL_REG(n)		(0x00A1 + (n))
#define ISP_CTL_REG(n)		(0x0110 + (n))
#define YOFS_REG		0x0119
#define DARK_YOFS_REG		0x011A
#define SAT_CTL_REG		0x0120
#define BSAT_REG		0x0121
#define RSAT_REG		0x0122
#define CMC_CTL_REG		0x0130
#define CMC_OFSGH_REG		0x0133
#define CMC_OFSGL_REG		0x0135
#define CMC_SIGN_REG		0x0136
#define CMC_GOFS_REG		0x0137
#define CMC_COEF_REG(n)		(0x0138 + (n))
#define CMC_OFS_REG(n)		(0x0141 + (n))
#define GMA_CTL_REG		0x0160
#define GMA_COEF_REG(n)		(0x0161 + (n))
#define LENS_CTRL_REG		0x01D0
#define LENS_XCEN_REG		0x01D1
#define LENS_YCEN_REG		0x01D2
#define LENS_RC_REG		0x01D3
#define LENS_GC_REG		0x01D4
#define LENS_BC_REG		0x01D5
#define L_AGON_REG		0x01D6
#define L_AGOFF_REG		0x01D7
#define AE_CTL_REG(n)		(0x0310 + (n))
#define AE_CTL9_REG		0x032C
#define AE_CTL10_REG		0x032D
#define AE_YLVL_REG		0x031C
#define AE_YTH_REG(n)		(0x031D + (n))
#define AE_WGT_REG		0x0326
#define EXP_TIMEH_REG		0x0333
#define EXP_TIMEM_REG		0x0334
#define EXP_TIMEL_REG		0x0335
#define EXP_MMINH_REG		0x0336
#define EXP_MMINL_REG		0x0337
#define EXP_MMAXH_REG		0x0338
#define EXP_MMAXM_REG		0x0339
#define EXP_MMAXL_REG		0x033A
#define AWB_CTL_REG(n)		(0x0410 + (n))
#define AWB_ENABE		0x80
#define AWB_WGHT_REG		0x0419
#define BGAIN_PAR_REG(n)	(0x044F + (n))
#define MWB_RGAIN_REG		0x0466
#define MWB_BGAIN_REG		0x0467
#define REG_TERM		0xFFFF
struct noon010_format ;
struct noon010_frmsize ;
static const char * const noon010_supply_name[] = ;
#define NOON010_NUM_SUPPLIES ARRAY_SIZE(noon010_supply_name)
struct noon010_info ;
struct i2c_regval ;
static const struct noon010_frmsize noon010_sizes[] = ;
static const struct noon010_format noon010_formats[] = ;
static const struct i2c_regval noon010_base_regs[] = ;
static inline struct noon010_info *to_noon010(struct v4l2_subdev *sd)
static inline struct v4l2_subdev *to_sd(struct v4l2_ctrl *ctrl)
static inline int set_i2c_page(struct noon010_info *info,
struct i2c_client *client, unsigned int reg)
static int cam_i2c_read(struct v4l2_subdev *sd, u32 reg_addr)
static int cam_i2c_write(struct v4l2_subdev *sd, u32 reg_addr, u32 val)
static inline int noon010_bulk_write_reg(struct v4l2_subdev *sd,
const struct i2c_regval *msg)
static int noon010_power_ctrl(struct v4l2_subdev *sd, bool reset, bool sleep)
static int noon010_enable_autowhitebalance(struct v4l2_subdev *sd, int on)
static int noon010_set_flip(struct v4l2_subdev *sd, int hflip, int vflip)
static int noon010_set_params(struct v4l2_subdev *sd)
static int noon010_try_frame_size(struct v4l2_mbus_framefmt *mf)
static int power_enable(struct noon010_info *info)
static int power_disable(struct noon010_info *info)
static int noon010_s_ctrl(struct v4l2_ctrl *ctrl)
static int noon010_enum_fmt(struct v4l2_subdev *sd, unsigned int index,
enum v4l2_mbus_pixelcode *code)
static int noon010_g_fmt(struct v4l2_subdev *sd, struct v4l2_mbus_framefmt *mf)
static const struct noon010_format *try_fmt(struct v4l2_subdev *sd,
struct v4l2_mbus_framefmt *mf)
static int noon010_try_fmt(struct v4l2_subdev *sd,
struct v4l2_mbus_framefmt *mf)
static int noon010_s_fmt(struct v4l2_subdev *sd,
struct v4l2_mbus_framefmt *mf)
static int noon010_base_config(struct v4l2_subdev *sd)
static int noon010_s_power(struct v4l2_subdev *sd, int on)
static int noon010_g_chip_ident(struct v4l2_subdev *sd,
struct v4l2_dbg_chip_ident *chip)
static int noon010_log_status(struct v4l2_subdev *sd)
static const struct v4l2_ctrl_ops noon010_ctrl_ops = ;
static const struct v4l2_subdev_core_ops noon010_core_ops = ;
static const struct v4l2_subdev_video_ops noon010_video_ops = ;
static const struct v4l2_subdev_ops noon010_ops = ;
static int noon010_detect(struct i2c_client *client, struct noon010_info *info)
static int noon010_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int noon010_remove(struct i2c_client *client)
static const struct i2c_device_id noon010_id[] = ;
MODULE_DEVICE_TABLE(i2c, noon010_id);
static struct i2c_driver noon010_i2c_driver = ;
static int __init noon010_init(void)
static void __exit noon010_exit(void)
module_init(noon010_init);
module_exit(noon010_exit);
MODULE_DESCRIPTION("Siliconfile NOON010PC30 camera driver");
MODULE_AUTHOR("Sylwester Nawrocki <s.nawrocki@samsung.com>");
MODULE_LICENSE("GPL");
