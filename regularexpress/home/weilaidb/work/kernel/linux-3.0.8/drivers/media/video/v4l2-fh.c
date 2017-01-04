int v4l2_fh_init(struct v4l2_fh *fh, struct video_device *vdev)
EXPORT_SYMBOL_GPL(v4l2_fh_init);
void v4l2_fh_add(struct v4l2_fh *fh)
EXPORT_SYMBOL_GPL(v4l2_fh_add);
int v4l2_fh_open(struct file *filp)
EXPORT_SYMBOL_GPL(v4l2_fh_open);
void v4l2_fh_del(struct v4l2_fh *fh)
EXPORT_SYMBOL_GPL(v4l2_fh_del);
void v4l2_fh_exit(struct v4l2_fh *fh)
EXPORT_SYMBOL_GPL(v4l2_fh_exit);
int v4l2_fh_release(struct file *filp)
EXPORT_SYMBOL_GPL(v4l2_fh_release);
int v4l2_fh_is_singular(struct v4l2_fh *fh)
EXPORT_SYMBOL_GPL(v4l2_fh_is_singular);
