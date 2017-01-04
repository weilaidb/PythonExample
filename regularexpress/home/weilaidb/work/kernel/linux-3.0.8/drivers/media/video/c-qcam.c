struct qcam ;
#define MAX_CAMS 4
#define QC_MILLIONS	0x18
#define QC_BILLIONS	0x10
#define QC_THOUSANDS	0x08
#define QC_DECIMATION_1		0
#define QC_DECIMATION_2		2
#define QC_DECIMATION_4		4
#define BANNER "Colour QuickCam for Video4Linux v0.06"
static int parport[MAX_CAMS] = ;
static int probe = 2;
static int force_rgb;
static int video_nr = -1;
MODULE_PARM_DESC(parport, "parport=<auto|n[,n]...> for port detection method\n"
"probe=<0|1|2> for camera detection method\n"
"force_rgb=<0|1> for RGB data format (default BGR)");
module_param_array(parport, int, NULL, 0);
module_param(probe, int, 0);
module_param(force_rgb, bool, 0);
module_param(video_nr, int, 0);
static struct qcam *qcams[MAX_CAMS];
static unsigned int num_cams;
static inline void qcam_set_ack(struct qcam *qcam, unsigned int i)
static inline unsigned int qcam_ready1(struct qcam *qcam)
static inline unsigned int qcam_ready2(struct qcam *qcam)
static unsigned int qcam_await_ready1(struct qcam *qcam, int value)
static unsigned int qcam_await_ready2(struct qcam *qcam, int value)
static int qcam_read_data(struct qcam *qcam)
static int qcam_write_data(struct qcam *qcam, unsigned int data)
static inline int qcam_set(struct qcam *qcam, unsigned int cmd, unsigned int data)
static inline int qcam_get(struct qcam *qcam, unsigned int cmd)
static int qc_detect(struct qcam *qcam)
static void qc_reset(struct qcam *qcam)
static void qc_setup(struct qcam *qcam)
static unsigned int qcam_read_bytes(struct qcam *qcam, unsigned char *buf, unsigned int nbytes)
#define BUFSZ	150
static long qc_capture(struct qcam *qcam, char __user *buf, unsigned long len)
static int qcam_querycap(struct file *file, void  *priv,
struct v4l2_capability *vcap)
static int qcam_enum_input(struct file *file, void *fh, struct v4l2_input *vin)
static int qcam_g_input(struct file *file, void *fh, unsigned int *inp)
static int qcam_s_input(struct file *file, void *fh, unsigned int inp)
static int qcam_queryctrl(struct file *file, void *priv,
struct v4l2_queryctrl *qc)
static int qcam_g_ctrl(struct file *file, void *priv,
struct v4l2_control *ctrl)
static int qcam_s_ctrl(struct file *file, void *priv,
struct v4l2_control *ctrl)
static int qcam_g_fmt_vid_cap(struct file *file, void *fh, struct v4l2_format *fmt)
static int qcam_try_fmt_vid_cap(struct file *file, void *fh, struct v4l2_format *fmt)
static int qcam_s_fmt_vid_cap(struct file *file, void *fh, struct v4l2_format *fmt)
static int qcam_enum_fmt_vid_cap(struct file *file, void *fh, struct v4l2_fmtdesc *fmt)
static ssize_t qcam_read(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static const struct v4l2_file_operations qcam_fops = ;
static const struct v4l2_ioctl_ops qcam_ioctl_ops = ;
static struct qcam *qcam_init(struct parport *port)
static int init_cqcam(struct parport *port)
static void close_cqcam(struct qcam *qcam)
static void cq_attach(struct parport *port)
static void cq_detach(struct parport *port)
static struct parport_driver cqcam_driver = ;
static int __init cqcam_init(void)
static void __exit cqcam_cleanup(void)
MODULE_AUTHOR("Philip Blundell <philb@gnu.org>");
MODULE_DESCRIPTION(BANNER);
MODULE_LICENSE("GPL");
module_init(cqcam_init);
module_exit(cqcam_cleanup);
