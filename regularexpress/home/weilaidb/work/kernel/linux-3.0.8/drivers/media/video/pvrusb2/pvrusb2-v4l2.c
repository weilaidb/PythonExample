struct pvr2_v4l2_dev;
struct pvr2_v4l2_fh;
struct pvr2_v4l2;
struct pvr2_v4l2_dev ;
struct pvr2_v4l2_fh ;
struct pvr2_v4l2 ;
static int video_nr[PVR_NUM] = ;
module_param_array(video_nr, int, NULL, 0444);
MODULE_PARM_DESC(video_nr, "Offset for device's video dev minor");
static int radio_nr[PVR_NUM] = ;
module_param_array(radio_nr, int, NULL, 0444);
MODULE_PARM_DESC(radio_nr, "Offset for device's radio dev minor");
static int vbi_nr[PVR_NUM] = ;
module_param_array(vbi_nr, int, NULL, 0444);
MODULE_PARM_DESC(vbi_nr, "Offset for device's vbi dev minor");
static struct v4l2_capability pvr_capability =;
static struct v4l2_fmtdesc pvr_fmtdesc [] = ;
#define PVR_FORMAT_PIX  0
#define PVR_FORMAT_VBI  1
static struct v4l2_format pvr_format [] = ;
static long pvr2_v4l2_do_ioctl(struct file *file, unsigned int cmd, void *arg)
static void pvr2_v4l2_dev_destroy(struct pvr2_v4l2_dev *dip)
static void pvr2_v4l2_dev_disassociate_parent(struct pvr2_v4l2_dev *dip)
static void pvr2_v4l2_destroy_no_lock(struct pvr2_v4l2 *vp)
static void pvr2_video_device_release(struct video_device *vdev)
static void pvr2_v4l2_internal_check(struct pvr2_channel *chp)
static long pvr2_v4l2_ioctl(struct file *file,
unsigned int cmd, unsigned long arg)
static int pvr2_v4l2_release(struct file *file)
static int pvr2_v4l2_open(struct file *file)
static void pvr2_v4l2_notify(struct pvr2_v4l2_fh *fhp)
static int pvr2_v4l2_iosetup(struct pvr2_v4l2_fh *fh)
static ssize_t pvr2_v4l2_read(struct file *file,
char __user *buff, size_t count, loff_t *ppos)
static unsigned int pvr2_v4l2_poll(struct file *file, poll_table *wait)
static const struct v4l2_file_operations vdev_fops = ;
static struct video_device vdev_template = ;
static void pvr2_v4l2_dev_init(struct pvr2_v4l2_dev *dip,
struct pvr2_v4l2 *vp,
int v4l_type)
struct pvr2_v4l2 *pvr2_v4l2_create(struct pvr2_context *mnp)
