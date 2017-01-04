#define V4L2_FH_H
struct video_device;
struct v4l2_events;
struct v4l2_fh ;
int v4l2_fh_init(struct v4l2_fh *fh, struct video_device *vdev);
void v4l2_fh_add(struct v4l2_fh *fh);
int v4l2_fh_open(struct file *filp);
void v4l2_fh_del(struct v4l2_fh *fh);
void v4l2_fh_exit(struct v4l2_fh *fh);
int v4l2_fh_release(struct file *filp);
int v4l2_fh_is_singular(struct v4l2_fh *fh);
static inline int v4l2_fh_is_singular_file(struct file *filp)
