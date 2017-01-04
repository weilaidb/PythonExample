#define DPRINTF(x, a...) printk(KERN_DEBUG "W9966: %s(): "x, __func__ , ##a)
#define DPRINTF(x...)
#define W9966_DRIVERNAME	"W9966CF Webcam"
#define W9966_MAXCAMS		4
#define W9966_RBUFFER		2048
#define W9966_SRAMSIZE		131072
#define W9966_SRAMID		0x02
#define W9966_WND_MIN_X		16
#define W9966_WND_MIN_Y		14
#define W9966_WND_MAX_X		705
#define W9966_WND_MAX_Y		253
#define W9966_WND_MAX_W		(W9966_WND_MAX_X - W9966_WND_MIN_X)
#define W9966_WND_MAX_H		(W9966_WND_MAX_Y - W9966_WND_MIN_Y)
#define W9966_STATE_PDEV	0x01
#define W9966_STATE_CLAIMED	0x02
#define W9966_STATE_VDEV	0x04
#define W9966_I2C_W_ID		0x48
#define W9966_I2C_R_ID		0x49
#define W9966_I2C_R_DATA	0x08
#define W9966_I2C_R_CLOCK	0x04
#define W9966_I2C_W_DATA	0x02
#define W9966_I2C_W_CLOCK	0x01
struct w9966 ;
MODULE_AUTHOR("Jakob Kemi <jakob.kemi@post.utfors.se>");
MODULE_DESCRIPTION("Winbond w9966cf WebCam driver (0.32)");
MODULE_LICENSE("GPL");
static const char *pardev[] = ;
static const char *pardev[] = ;
module_param_array(pardev, charp, NULL, 0);
MODULE_PARM_DESC(pardev, "pardev: where to search for\n"
"\teach camera. 'aggressive' means brute-force search.\n"
"\tEg: >pardev=parport3,aggressive,parport2,parport1< would assign\n"
"\tcam 1 to parport3 and search every parport for cam 2 etc...");
static int parmode;
module_param(parmode, int, 0);
MODULE_PARM_DESC(parmode, "parmode: transfer mode (0=auto, 1=ecp, 2=epp");
static int video_nr = -1;
module_param(video_nr, int, 0);
static struct w9966 w9966_cams[W9966_MAXCAMS];
static inline void w9966_set_state(struct w9966 *cam, int mask, int val)
static inline int w9966_get_state(struct w9966 *cam, int mask, int val)
static void w9966_pdev_claim(struct w9966 *cam)
static void w9966_pdev_release(struct w9966 *cam)
static int w9966_read_reg(struct w9966 *cam, int reg)
static int w9966_write_reg(struct w9966 *cam, int reg, int data)
static void w9966_i2c_setsda(struct w9966 *cam, int state)
static int w9966_i2c_getscl(struct w9966 *cam)
static int w9966_i2c_setscl(struct w9966 *cam, int state)
static int w9966_i2c_wbyte(struct w9966 *cam, int data)
static int w9966_write_reg_i2c(struct w9966 *cam, int reg, int data)
static int w9966_findlen(int near, int size, int maxlen)
static int w9966_calcscale(int size, int min, int max, int *beg, int *end, unsigned char *factor)
static int w9966_setup(struct w9966 *cam, int x1, int y1, int x2, int y2, int w, int h)
static int cam_querycap(struct file *file, void  *priv,
struct v4l2_capability *vcap)
static int cam_enum_input(struct file *file, void *fh, struct v4l2_input *vin)
static int cam_g_input(struct file *file, void *fh, unsigned int *inp)
static int cam_s_input(struct file *file, void *fh, unsigned int inp)
static int cam_queryctrl(struct file *file, void *priv,
struct v4l2_queryctrl *qc)
static int cam_g_ctrl(struct file *file, void *priv,
struct v4l2_control *ctrl)
static int cam_s_ctrl(struct file *file, void *priv,
struct v4l2_control *ctrl)
static int cam_g_fmt_vid_cap(struct file *file, void *fh, struct v4l2_format *fmt)
static int cam_try_fmt_vid_cap(struct file *file, void *fh, struct v4l2_format *fmt)
static int cam_s_fmt_vid_cap(struct file *file, void *fh, struct v4l2_format *fmt)
static int cam_enum_fmt_vid_cap(struct file *file, void *fh, struct v4l2_fmtdesc *fmt)
static ssize_t w9966_v4l_read(struct file *file, char  __user *buf,
size_t count, loff_t *ppos)
static const struct v4l2_file_operations w9966_fops = ;
static const struct v4l2_ioctl_ops w9966_ioctl_ops = ;
static int w9966_init(struct w9966 *cam, struct parport *port)
static void w9966_term(struct w9966 *cam)
static void w9966_attach(struct parport *port)
static void w9966_detach(struct parport *port)
static struct parport_driver w9966_ppd = ;
static int __init w9966_mod_init(void)
static void __exit w9966_mod_term(void)
module_init(w9966_mod_init);
module_exit(w9966_mod_term);
