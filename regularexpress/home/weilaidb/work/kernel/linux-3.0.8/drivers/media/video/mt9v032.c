#define MT9V032_PIXEL_ARRAY_HEIGHT			492
#define MT9V032_PIXEL_ARRAY_WIDTH			782
#define MT9V032_CHIP_VERSION				0x00
#define		MT9V032_CHIP_ID_REV1			0x1311
#define		MT9V032_CHIP_ID_REV3			0x1313
#define MT9V032_ROW_START				0x01
#define		MT9V032_ROW_START_MIN			4
#define		MT9V032_ROW_START_DEF			10
#define		MT9V032_ROW_START_MAX			482
#define MT9V032_COLUMN_START				0x02
#define		MT9V032_COLUMN_START_MIN		1
#define		MT9V032_COLUMN_START_DEF		2
#define		MT9V032_COLUMN_START_MAX		752
#define MT9V032_WINDOW_HEIGHT				0x03
#define		MT9V032_WINDOW_HEIGHT_MIN		1
#define		MT9V032_WINDOW_HEIGHT_DEF		480
#define		MT9V032_WINDOW_HEIGHT_MAX		480
#define MT9V032_WINDOW_WIDTH				0x04
#define		MT9V032_WINDOW_WIDTH_MIN		1
#define		MT9V032_WINDOW_WIDTH_DEF		752
#define		MT9V032_WINDOW_WIDTH_MAX		752
#define MT9V032_HORIZONTAL_BLANKING			0x05
#define		MT9V032_HORIZONTAL_BLANKING_MIN		43
#define		MT9V032_HORIZONTAL_BLANKING_MAX		1023
#define MT9V032_VERTICAL_BLANKING			0x06
#define		MT9V032_VERTICAL_BLANKING_MIN		4
#define		MT9V032_VERTICAL_BLANKING_MAX		3000
#define MT9V032_CHIP_CONTROL				0x07
#define		MT9V032_CHIP_CONTROL_MASTER_MODE	(1 << 3)
#define		MT9V032_CHIP_CONTROL_DOUT_ENABLE	(1 << 7)
#define		MT9V032_CHIP_CONTROL_SEQUENTIAL		(1 << 8)
#define MT9V032_SHUTTER_WIDTH1				0x08
#define MT9V032_SHUTTER_WIDTH2				0x09
#define MT9V032_SHUTTER_WIDTH_CONTROL			0x0a
#define MT9V032_TOTAL_SHUTTER_WIDTH			0x0b
#define		MT9V032_TOTAL_SHUTTER_WIDTH_MIN		1
#define		MT9V032_TOTAL_SHUTTER_WIDTH_DEF		480
#define		MT9V032_TOTAL_SHUTTER_WIDTH_MAX		32767
#define MT9V032_RESET					0x0c
#define MT9V032_READ_MODE				0x0d
#define		MT9V032_READ_MODE_ROW_BIN_MASK		(3 << 0)
#define		MT9V032_READ_MODE_ROW_BIN_SHIFT		0
#define		MT9V032_READ_MODE_COLUMN_BIN_MASK	(3 << 2)
#define		MT9V032_READ_MODE_COLUMN_BIN_SHIFT	2
#define		MT9V032_READ_MODE_ROW_FLIP		(1 << 4)
#define		MT9V032_READ_MODE_COLUMN_FLIP		(1 << 5)
#define		MT9V032_READ_MODE_DARK_COLUMNS		(1 << 6)
#define		MT9V032_READ_MODE_DARK_ROWS		(1 << 7)
#define MT9V032_PIXEL_OPERATION_MODE			0x0f
#define		MT9V032_PIXEL_OPERATION_MODE_COLOR	(1 << 2)
#define		MT9V032_PIXEL_OPERATION_MODE_HDR	(1 << 6)
#define MT9V032_ANALOG_GAIN				0x35
#define		MT9V032_ANALOG_GAIN_MIN			16
#define		MT9V032_ANALOG_GAIN_DEF			16
#define		MT9V032_ANALOG_GAIN_MAX			64
#define MT9V032_MAX_ANALOG_GAIN				0x36
#define		MT9V032_MAX_ANALOG_GAIN_MAX		127
#define MT9V032_FRAME_DARK_AVERAGE			0x42
#define MT9V032_DARK_AVG_THRESH				0x46
#define		MT9V032_DARK_AVG_LOW_THRESH_MASK	(255 << 0)
#define		MT9V032_DARK_AVG_LOW_THRESH_SHIFT	0
#define		MT9V032_DARK_AVG_HIGH_THRESH_MASK	(255 << 8)
#define		MT9V032_DARK_AVG_HIGH_THRESH_SHIFT	8
#define MT9V032_ROW_NOISE_CORR_CONTROL			0x70
#define		MT9V032_ROW_NOISE_CORR_ENABLE		(1 << 5)
#define		MT9V032_ROW_NOISE_CORR_USE_BLK_AVG	(1 << 7)
#define MT9V032_PIXEL_CLOCK				0x74
#define		MT9V032_PIXEL_CLOCK_INV_LINE		(1 << 0)
#define		MT9V032_PIXEL_CLOCK_INV_FRAME		(1 << 1)
#define		MT9V032_PIXEL_CLOCK_XOR_LINE		(1 << 2)
#define		MT9V032_PIXEL_CLOCK_CONT_LINE		(1 << 3)
#define		MT9V032_PIXEL_CLOCK_INV_PXL_CLK		(1 << 4)
#define MT9V032_TEST_PATTERN				0x7f
#define		MT9V032_TEST_PATTERN_DATA_MASK		(1023 << 0)
#define		MT9V032_TEST_PATTERN_DATA_SHIFT		0
#define		MT9V032_TEST_PATTERN_USE_DATA		(1 << 10)
#define		MT9V032_TEST_PATTERN_GRAY_MASK		(3 << 11)
#define		MT9V032_TEST_PATTERN_GRAY_NONE		(0 << 11)
#define		MT9V032_TEST_PATTERN_GRAY_VERTICAL	(1 << 11)
#define		MT9V032_TEST_PATTERN_GRAY_HORIZONTAL	(2 << 11)
#define		MT9V032_TEST_PATTERN_GRAY_DIAGONAL	(3 << 11)
#define		MT9V032_TEST_PATTERN_ENABLE		(1 << 13)
#define		MT9V032_TEST_PATTERN_FLIP		(1 << 14)
#define MT9V032_AEC_AGC_ENABLE				0xaf
#define		MT9V032_AEC_ENABLE			(1 << 0)
#define		MT9V032_AGC_ENABLE			(1 << 1)
#define MT9V032_THERMAL_INFO				0xc1
struct mt9v032 ;
static struct mt9v032 *to_mt9v032(struct v4l2_subdev *sd)
static int mt9v032_read(struct i2c_client *client, const u8 reg)
static int mt9v032_write(struct i2c_client *client, const u8 reg,
const u16 data)
static int mt9v032_set_chip_control(struct mt9v032 *mt9v032, u16 clear, u16 set)
static int
mt9v032_update_aec_agc(struct mt9v032 *mt9v032, u16 which, int enable)
static int mt9v032_power_on(struct mt9v032 *mt9v032)
static void mt9v032_power_off(struct mt9v032 *mt9v032)
static int __mt9v032_set_power(struct mt9v032 *mt9v032, bool on)
static struct v4l2_mbus_framefmt *
__mt9v032_get_pad_format(struct mt9v032 *mt9v032, struct v4l2_subdev_fh *fh,
unsigned int pad, enum v4l2_subdev_format_whence which)
static struct v4l2_rect *
__mt9v032_get_pad_crop(struct mt9v032 *mt9v032, struct v4l2_subdev_fh *fh,
unsigned int pad, enum v4l2_subdev_format_whence which)
static int mt9v032_s_stream(struct v4l2_subdev *subdev, int enable)
static int mt9v032_enum_mbus_code(struct v4l2_subdev *subdev,
struct v4l2_subdev_fh *fh,
struct v4l2_subdev_mbus_code_enum *code)
static int mt9v032_enum_frame_size(struct v4l2_subdev *subdev,
struct v4l2_subdev_fh *fh,
struct v4l2_subdev_frame_size_enum *fse)
static int mt9v032_get_format(struct v4l2_subdev *subdev,
struct v4l2_subdev_fh *fh,
struct v4l2_subdev_format *format)
static int mt9v032_set_format(struct v4l2_subdev *subdev,
struct v4l2_subdev_fh *fh,
struct v4l2_subdev_format *format)
static int mt9v032_get_crop(struct v4l2_subdev *subdev,
struct v4l2_subdev_fh *fh,
struct v4l2_subdev_crop *crop)
static int mt9v032_set_crop(struct v4l2_subdev *subdev,
struct v4l2_subdev_fh *fh,
struct v4l2_subdev_crop *crop)
#define V4L2_CID_TEST_PATTERN		(V4L2_CID_USER_BASE | 0x1001)
static int mt9v032_s_ctrl(struct v4l2_ctrl *ctrl)
static struct v4l2_ctrl_ops mt9v032_ctrl_ops = ;
static const struct v4l2_ctrl_config mt9v032_ctrls[] = ;
static int mt9v032_set_power(struct v4l2_subdev *subdev, int on)
static int mt9v032_registered(struct v4l2_subdev *subdev)
static int mt9v032_open(struct v4l2_subdev *subdev, struct v4l2_subdev_fh *fh)
static int mt9v032_close(struct v4l2_subdev *subdev, struct v4l2_subdev_fh *fh)
static struct v4l2_subdev_core_ops mt9v032_subdev_core_ops = ;
static struct v4l2_subdev_video_ops mt9v032_subdev_video_ops = ;
static struct v4l2_subdev_pad_ops mt9v032_subdev_pad_ops = ;
static struct v4l2_subdev_ops mt9v032_subdev_ops = ;
static const struct v4l2_subdev_internal_ops mt9v032_subdev_internal_ops = ;
static int mt9v032_probe(struct i2c_client *client,
const struct i2c_device_id *did)
static int mt9v032_remove(struct i2c_client *client)
static const struct i2c_device_id mt9v032_id[] = ;
MODULE_DEVICE_TABLE(i2c, mt9v032_id);
static struct i2c_driver mt9v032_driver = ;
static int __init mt9v032_init(void)
static void __exit mt9v032_exit(void)
module_init(mt9v032_init);
module_exit(mt9v032_exit);
MODULE_DESCRIPTION("Aptina MT9V032 Camera driver");
MODULE_AUTHOR("Laurent Pinchart <laurent.pinchart@ideasonboard.com>");
MODULE_LICENSE("GPL");
