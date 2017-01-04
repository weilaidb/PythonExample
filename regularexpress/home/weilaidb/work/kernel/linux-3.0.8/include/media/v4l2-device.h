#define _V4L2_DEVICE_H
#define V4L2_DEVICE_NAME_SIZE (20 + 16)
struct v4l2_ctrl_handler;
struct v4l2_device ;
static inline void v4l2_device_get(struct v4l2_device *v4l2_dev)
int v4l2_device_put(struct v4l2_device *v4l2_dev);
int __must_check v4l2_device_register(struct device *dev, struct v4l2_device *v4l2_dev);
int v4l2_device_set_name(struct v4l2_device *v4l2_dev, const char *basename,
atomic_t *instance);
void v4l2_device_disconnect(struct v4l2_device *v4l2_dev);
void v4l2_device_unregister(struct v4l2_device *v4l2_dev);
int __must_check v4l2_device_register_subdev(struct v4l2_device *v4l2_dev,
struct v4l2_subdev *sd);
void v4l2_device_unregister_subdev(struct v4l2_subdev *sd);
int __must_check
v4l2_device_register_subdev_nodes(struct v4l2_device *v4l2_dev);
#define v4l2_device_for_each_subdev(sd, v4l2_dev)			\
list_for_each_entry(sd, &(v4l2_dev)->subdevs, list)
#define __v4l2_device_call_subdevs_p(v4l2_dev, sd, cond, o, f, args...)	\
do  while (0)
#define __v4l2_device_call_subdevs(v4l2_dev, cond, o, f, args...)	\
do  while (0)
#define __v4l2_device_call_subdevs_until_err_p(v4l2_dev, sd, cond, o, f, args...) \
()
#define __v4l2_device_call_subdevs_until_err(v4l2_dev, cond, o, f, args...) \
()
#define v4l2_device_call_all(v4l2_dev, grpid, o, f, args...)		\
do  while (0)
#define v4l2_device_call_until_err(v4l2_dev, grpid, o, f, args...) 	\
()
