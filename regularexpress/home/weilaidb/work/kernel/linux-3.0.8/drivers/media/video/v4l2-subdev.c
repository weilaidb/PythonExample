static int subdev_fh_init(struct v4l2_subdev_fh *fh, struct v4l2_subdev *sd)
static void subdev_fh_free(struct v4l2_subdev_fh *fh)
static int subdev_open(struct file *file)
static int subdev_close(struct file *file)
static long subdev_do_ioctl(struct file *file, unsigned int cmd, void *arg)
static long subdev_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static unsigned int subdev_poll(struct file *file, poll_table *wait)
const struct v4l2_file_operations v4l2_subdev_fops = ;
void v4l2_subdev_init(struct v4l2_subdev *sd, const struct v4l2_subdev_ops *ops)
EXPORT_SYMBOL(v4l2_subdev_init);
