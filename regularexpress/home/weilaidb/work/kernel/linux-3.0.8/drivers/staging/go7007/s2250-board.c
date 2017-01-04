MODULE_DESCRIPTION("Sensoray 2250/2251 i2c v4l2 subdev driver");
MODULE_LICENSE("GPL v2");
#define TLV320_ADDRESS      0x34
#define VPX322_ADDR_ANALOGCONTROL1	0x02
#define VPX322_ADDR_BRIGHTNESS0		0x0127
#define VPX322_ADDR_BRIGHTNESS1		0x0131
#define VPX322_ADDR_CONTRAST0		0x0128
#define VPX322_ADDR_CONTRAST1		0x0132
#define VPX322_ADDR_HUE			0x00dc
#define VPX322_ADDR_SAT			0x0030
struct go7007_usb_board ;
struct go7007_usb ;
static unsigned char aud_regs[] = ;
static unsigned char vid_regs[] = ;
static u16 vid_regs_fp[] = ;
static u16 vid_regs_fp_pal[] =
;
struct s2250 ;
static inline struct s2250 *to_state(struct v4l2_subdev *sd)
static int go7007_usb_vendor_request(struct go7007 *go, u16 request,
u16 value, u16 index, void *transfer_buffer, int length, int in)
static int write_reg(struct i2c_client *client, u8 reg, u8 value)
static int write_reg_fp(struct i2c_client *client, u16 addr, u16 val)
static int read_reg_fp(struct i2c_client *client, u16 addr, u16 *val)
static int write_regs(struct i2c_client *client, u8 *regs)
static int write_regs_fp(struct i2c_client *client, u16 *regs)
static int s2250_s_video_routing(struct v4l2_subdev *sd, u32 input, u32 output,
u32 config)
static int s2250_s_std(struct v4l2_subdev *sd, v4l2_std_id norm)
static int s2250_queryctrl(struct v4l2_subdev *sd, struct v4l2_queryctrl *query)
static int s2250_s_ctrl(struct v4l2_subdev *sd, struct v4l2_control *ctrl)
static int s2250_g_ctrl(struct v4l2_subdev *sd, struct v4l2_control *ctrl)
static int s2250_s_mbus_fmt(struct v4l2_subdev *sd,
struct v4l2_mbus_framefmt *fmt)
static int s2250_s_audio_routing(struct v4l2_subdev *sd, u32 input, u32 output,
u32 config)
static int s2250_log_status(struct v4l2_subdev *sd)
static const struct v4l2_subdev_core_ops s2250_core_ops = ;
static const struct v4l2_subdev_audio_ops s2250_audio_ops = ;
static const struct v4l2_subdev_video_ops s2250_video_ops = ;
static const struct v4l2_subdev_ops s2250_ops = ;
static int s2250_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int s2250_remove(struct i2c_client *client)
static const struct i2c_device_id s2250_id[] = ;
MODULE_DEVICE_TABLE(i2c, s2250_id);
static struct i2c_driver s2250_driver = ;
static __init int init_s2250(void)
static __exit void exit_s2250(void)
module_init(init_s2250);
module_exit(exit_s2250);
