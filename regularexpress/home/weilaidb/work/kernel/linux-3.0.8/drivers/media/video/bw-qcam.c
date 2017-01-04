#define QC_NOTSET 0
#define QC_UNIDIR 1
#define QC_BIDIR  2
#define QC_SERIAL 3
#define QC_ANY          0x00
#define QC_FORCE_UNIDIR 0x10
#define QC_FORCE_BIDIR  0x20
#define QC_FORCE_SERIAL 0x30
#define QC_MODE_MASK    0x07
#define QC_FORCE_MASK   0x70
#define MAX_HEIGHT 243
#define MAX_WIDTH 336
#define QC_PARAM_CHANGE	0x01
struct qcam ;
static unsigned int maxpoll = 250;
static unsigned int yieldlines = 4;
static int video_nr = -1;
static unsigned int force_init;
module_param(maxpoll, int, 0);
module_param(yieldlines, int, 0);
module_param(video_nr, int, 0);
module_param(force_init, int, 0);
#define MAX_CAMS 4
static struct qcam *qcams[MAX_CAMS];
static unsigned int num_cams;
static inline int read_lpstatus(struct qcam *q)
static inline int read_lpdata(struct qcam *q)
static inline void write_lpdata(struct qcam *q, int d)
static void write_lpcontrol(struct qcam *q, int d)
static int qc_waithand(struct qcam *q, int val)
static unsigned int qc_waithand2(struct qcam *q, int val)
static int qc_command(struct qcam *q, int command)
static int qc_readparam(struct qcam *q)
static int qc_detect(struct qcam *q)
static int qc_setscanmode(struct qcam *q)
static void qc_reset(struct qcam *q)
static void qc_set(struct qcam *q)
static inline int qc_readbytes(struct qcam *q, char buffer[])
static long qc_capture(struct qcam *q, char __user *buf, unsigned long len)
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
static int qc_calibrate(struct qcam *q)
static int init_bwqcam(struct parport *port)
static void close_bwqcam(struct qcam *qcam)
static char *parport[MAX_CAMS] = ;
module_param_array(parport, charp, NULL, 0);
static int accept_bwqcam(struct parport *port)
static void bwqcam_attach(struct parport *port)
static void bwqcam_detach(struct parport *port)
static struct parport_driver bwqcam_driver = ;
static void __exit exit_bw_qcams(void)
static int __init init_bw_qcams(void)
module_init(init_bw_qcams);
module_exit(exit_bw_qcams);
MODULE_LICENSE("GPL");
