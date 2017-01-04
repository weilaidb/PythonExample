#define MT9M111_CHIP_VERSION		0x000
#define MT9M111_ROW_START		0x001
#define MT9M111_COLUMN_START		0x002
#define MT9M111_WINDOW_HEIGHT		0x003
#define MT9M111_WINDOW_WIDTH		0x004
#define MT9M111_HORIZONTAL_BLANKING_B	0x005
#define MT9M111_VERTICAL_BLANKING_B	0x006
#define MT9M111_HORIZONTAL_BLANKING_A	0x007
#define MT9M111_VERTICAL_BLANKING_A	0x008
#define MT9M111_SHUTTER_WIDTH		0x009
#define MT9M111_ROW_SPEED		0x00a
#define MT9M111_EXTRA_DELAY		0x00b
#define MT9M111_SHUTTER_DELAY		0x00c
#define MT9M111_RESET			0x00d
#define MT9M111_READ_MODE_B		0x020
#define MT9M111_READ_MODE_A		0x021
#define MT9M111_FLASH_CONTROL		0x023
#define MT9M111_GREEN1_GAIN		0x02b
#define MT9M111_BLUE_GAIN		0x02c
#define MT9M111_RED_GAIN		0x02d
#define MT9M111_GREEN2_GAIN		0x02e
#define MT9M111_GLOBAL_GAIN		0x02f
#define MT9M111_CONTEXT_CONTROL		0x0c8
#define MT9M111_PAGE_MAP		0x0f0
#define MT9M111_BYTE_WISE_ADDR		0x0f1
#define MT9M111_RESET_SYNC_CHANGES	(1 << 15)
#define MT9M111_RESET_RESTART_BAD_FRAME	(1 << 9)
#define MT9M111_RESET_SHOW_BAD_FRAMES	(1 << 8)
#define MT9M111_RESET_RESET_SOC		(1 << 5)
#define MT9M111_RESET_OUTPUT_DISABLE	(1 << 4)
#define MT9M111_RESET_CHIP_ENABLE	(1 << 3)
#define MT9M111_RESET_ANALOG_STANDBY	(1 << 2)
#define MT9M111_RESET_RESTART_FRAME	(1 << 1)
#define MT9M111_RESET_RESET_MODE	(1 << 0)
#define MT9M111_RMB_MIRROR_COLS		(1 << 1)
#define MT9M111_RMB_MIRROR_ROWS		(1 << 0)
#define MT9M111_CTXT_CTRL_RESTART	(1 << 15)
#define MT9M111_CTXT_CTRL_DEFECTCOR_B	(1 << 12)
#define MT9M111_CTXT_CTRL_RESIZE_B	(1 << 10)
#define MT9M111_CTXT_CTRL_CTRL2_B	(1 << 9)
#define MT9M111_CTXT_CTRL_GAMMA_B	(1 << 8)
#define MT9M111_CTXT_CTRL_XENON_EN	(1 << 7)
#define MT9M111_CTXT_CTRL_READ_MODE_B	(1 << 3)
#define MT9M111_CTXT_CTRL_LED_FLASH_EN	(1 << 2)
#define MT9M111_CTXT_CTRL_VBLANK_SEL_B	(1 << 1)
#define MT9M111_CTXT_CTRL_HBLANK_SEL_B	(1 << 0)
#define MT9M111_OPER_MODE_CTRL		0x106
#define MT9M111_OUTPUT_FORMAT_CTRL	0x108
#define MT9M111_REDUCER_XZOOM_B		0x1a0
#define MT9M111_REDUCER_XSIZE_B		0x1a1
#define MT9M111_REDUCER_YZOOM_B		0x1a3
#define MT9M111_REDUCER_YSIZE_B		0x1a4
#define MT9M111_REDUCER_XZOOM_A		0x1a6
#define MT9M111_REDUCER_XSIZE_A		0x1a7
#define MT9M111_REDUCER_YZOOM_A		0x1a9
#define MT9M111_REDUCER_YSIZE_A		0x1aa
#define MT9M111_OUTPUT_FORMAT_CTRL2_A	0x13a
#define MT9M111_OUTPUT_FORMAT_CTRL2_B	0x19b
#define MT9M111_OPMODE_AUTOEXPO_EN	(1 << 14)
#define MT9M111_OPMODE_AUTOWHITEBAL_EN	(1 << 1)
#define MT9M111_OUTFMT_PROCESSED_BAYER	(1 << 14)
#define MT9M111_OUTFMT_BYPASS_IFP	(1 << 10)
#define MT9M111_OUTFMT_INV_PIX_CLOCK	(1 << 9)
#define MT9M111_OUTFMT_RGB		(1 << 8)
#define MT9M111_OUTFMT_RGB565		(0 << 6)
#define MT9M111_OUTFMT_RGB555		(1 << 6)
#define MT9M111_OUTFMT_RGB444x		(2 << 6)
#define MT9M111_OUTFMT_RGBx444		(3 << 6)
#define MT9M111_OUTFMT_TST_RAMP_OFF	(0 << 4)
#define MT9M111_OUTFMT_TST_RAMP_COL	(1 << 4)
#define MT9M111_OUTFMT_TST_RAMP_ROW	(2 << 4)
#define MT9M111_OUTFMT_TST_RAMP_FRAME	(3 << 4)
#define MT9M111_OUTFMT_SHIFT_3_UP	(1 << 3)
#define MT9M111_OUTFMT_AVG_CHROMA	(1 << 2)
#define MT9M111_OUTFMT_SWAP_YCbCr_C_Y	(1 << 1)
#define MT9M111_OUTFMT_SWAP_RGB_EVEN	(1 << 1)
#define MT9M111_OUTFMT_SWAP_YCbCr_Cb_Cr	(1 << 0)
#define reg_read(reg) mt9m111_reg_read(client, MT9M111_##reg)
#define reg_write(reg, val) mt9m111_reg_write(client, MT9M111_##reg, (val))
#define reg_set(reg, val) mt9m111_reg_set(client, MT9M111_##reg, (val))
#define reg_clear(reg, val) mt9m111_reg_clear(client, MT9M111_##reg, (val))
#define MT9M111_MIN_DARK_ROWS	8
#define MT9M111_MIN_DARK_COLS	26
#define MT9M111_MAX_HEIGHT	1024
#define MT9M111_MAX_WIDTH	1280
struct mt9m111_datafmt ;
static const struct mt9m111_datafmt *mt9m111_find_datafmt(
enum v4l2_mbus_pixelcode code, const struct mt9m111_datafmt *fmt,
int n)
static const struct mt9m111_datafmt mt9m111_colour_fmts[] = ;
enum mt9m111_context ;
struct mt9m111 ;
static struct mt9m111 *to_mt9m111(const struct i2c_client *client)
static int reg_page_map_set(struct i2c_client *client, const u16 reg)
static int mt9m111_reg_read(struct i2c_client *client, const u16 reg)
static int mt9m111_reg_write(struct i2c_client *client, const u16 reg,
const u16 data)
static int mt9m111_reg_set(struct i2c_client *client, const u16 reg,
const u16 data)
static int mt9m111_reg_clear(struct i2c_client *client, const u16 reg,
const u16 data)
static int mt9m111_set_context(struct i2c_client *client,
enum mt9m111_context ctxt)
static int mt9m111_setup_rect(struct i2c_client *client,
struct v4l2_rect *rect)
static int mt9m111_setup_pixfmt(struct i2c_client *client, u16 outfmt)
static int mt9m111_setfmt_bayer8(struct i2c_client *client)
static int mt9m111_setfmt_bayer10(struct i2c_client *client)
static int mt9m111_setfmt_rgb565(struct i2c_client *client)
static int mt9m111_setfmt_rgb555(struct i2c_client *client)
static int mt9m111_setfmt_yuv(struct i2c_client *client)
static int mt9m111_enable(struct i2c_client *client)
static int mt9m111_reset(struct i2c_client *client)
static unsigned long mt9m111_query_bus_param(struct soc_camera_device *icd)
static int mt9m111_set_bus_param(struct soc_camera_device *icd, unsigned long f)
static int mt9m111_make_rect(struct i2c_client *client,
struct v4l2_rect *rect)
static int mt9m111_s_crop(struct v4l2_subdev *sd, struct v4l2_crop *a)
static int mt9m111_g_crop(struct v4l2_subdev *sd, struct v4l2_crop *a)
static int mt9m111_cropcap(struct v4l2_subdev *sd, struct v4l2_cropcap *a)
static int mt9m111_g_fmt(struct v4l2_subdev *sd,
struct v4l2_mbus_framefmt *mf)
static int mt9m111_set_pixfmt(struct i2c_client *client,
enum v4l2_mbus_pixelcode code)
static int mt9m111_s_fmt(struct v4l2_subdev *sd,
struct v4l2_mbus_framefmt *mf)
static int mt9m111_try_fmt(struct v4l2_subdev *sd,
struct v4l2_mbus_framefmt *mf)
static int mt9m111_g_chip_ident(struct v4l2_subdev *sd,
struct v4l2_dbg_chip_ident *id)
static int mt9m111_g_register(struct v4l2_subdev *sd,
struct v4l2_dbg_register *reg)
static int mt9m111_s_register(struct v4l2_subdev *sd,
struct v4l2_dbg_register *reg)
static const struct v4l2_queryctrl mt9m111_controls[] = ;
static int mt9m111_resume(struct soc_camera_device *icd);
static int mt9m111_suspend(struct soc_camera_device *icd, pm_message_t state);
static struct soc_camera_ops mt9m111_ops = ;
static int mt9m111_set_flip(struct i2c_client *client, int flip, int mask)
static int mt9m111_get_global_gain(struct i2c_client *client)
static int mt9m111_set_global_gain(struct i2c_client *client, int gain)
static int mt9m111_set_autoexposure(struct i2c_client *client, int on)
static int mt9m111_set_autowhitebalance(struct i2c_client *client, int on)
static int mt9m111_g_ctrl(struct v4l2_subdev *sd, struct v4l2_control *ctrl)
static int mt9m111_s_ctrl(struct v4l2_subdev *sd, struct v4l2_control *ctrl)
static int mt9m111_suspend(struct soc_camera_device *icd, pm_message_t state)
static int mt9m111_restore_state(struct i2c_client *client)
static int mt9m111_resume(struct soc_camera_device *icd)
static int mt9m111_init(struct i2c_client *client)
static int mt9m111_video_probe(struct soc_camera_device *icd,
struct i2c_client *client)
static struct v4l2_subdev_core_ops mt9m111_subdev_core_ops = ;
static int mt9m111_enum_fmt(struct v4l2_subdev *sd, unsigned int index,
enum v4l2_mbus_pixelcode *code)
static struct v4l2_subdev_video_ops mt9m111_subdev_video_ops = ;
static struct v4l2_subdev_ops mt9m111_subdev_ops = ;
static int mt9m111_probe(struct i2c_client *client,
const struct i2c_device_id *did)
static int mt9m111_remove(struct i2c_client *client)
static const struct i2c_device_id mt9m111_id[] = ;
MODULE_DEVICE_TABLE(i2c, mt9m111_id);
static struct i2c_driver mt9m111_i2c_driver = ;
static int __init mt9m111_mod_init(void)
static void __exit mt9m111_mod_exit(void)
module_init(mt9m111_mod_init);
module_exit(mt9m111_mod_exit);
MODULE_DESCRIPTION("Micron/Aptina MT9M111/MT9M112/MT9M131 Camera driver");
MODULE_AUTHOR("Robert Jarzmik");
MODULE_LICENSE("GPL");
