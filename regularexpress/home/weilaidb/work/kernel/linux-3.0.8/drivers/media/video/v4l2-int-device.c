static DEFINE_MUTEX(mutex);
static LIST_HEAD(int_list);
void v4l2_int_device_try_attach_all(void)
EXPORT_SYMBOL_GPL(v4l2_int_device_try_attach_all);
static int ioctl_sort_cmp(const void *a, const void *b)
int v4l2_int_device_register(struct v4l2_int_device *d)
EXPORT_SYMBOL_GPL(v4l2_int_device_register);
void v4l2_int_device_unregister(struct v4l2_int_device *d)
EXPORT_SYMBOL_GPL(v4l2_int_device_unregister);
static v4l2_int_ioctl_func *find_ioctl(struct v4l2_int_slave *slave, int cmd,
v4l2_int_ioctl_func *no_such_ioctl)
static int no_such_ioctl_0(struct v4l2_int_device *d)
int v4l2_int_ioctl_0(struct v4l2_int_device *d, int cmd)
EXPORT_SYMBOL_GPL(v4l2_int_ioctl_0);
static int no_such_ioctl_1(struct v4l2_int_device *d, void *arg)
int v4l2_int_ioctl_1(struct v4l2_int_device *d, int cmd, void *arg)
EXPORT_SYMBOL_GPL(v4l2_int_ioctl_1);
MODULE_LICENSE("GPL");
