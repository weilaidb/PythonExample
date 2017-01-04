#define _V4L2_IOCTL_H
struct v4l2_fh;
struct v4l2_ioctl_ops ;
#define V4L2_DEBUG_IOCTL     0x01
#define V4L2_DEBUG_IOCTL_ARG 0x02
#define v4l_print_ioctl(name, cmd)  		 \
do  while (0)
#define v4l_i2c_print_ioctl(client, cmd) 		   \
do  while (0)
extern const char *v4l2_norm_to_name(v4l2_std_id id);
extern void v4l2_video_std_frame_period(int id, struct v4l2_fract *frameperiod);
extern int v4l2_video_std_construct(struct v4l2_standard *vs,
int id, const char *name);
extern void v4l_printk_ioctl(unsigned int cmd);
extern const char *v4l2_field_names[];
extern const char *v4l2_type_names[];
extern long v4l2_compat_ioctl32(struct file *file, unsigned int cmd,
unsigned long arg);
typedef long (*v4l2_kioctl)(struct file *file,
unsigned int cmd, void *arg);
extern long video_usercopy(struct file *file, unsigned int cmd,
unsigned long arg, v4l2_kioctl func);
extern long video_ioctl2(struct file *file,
unsigned int cmd, unsigned long arg);
