#if defined(CONFIG_SPI)
int v4l2_device_register(struct device *dev, struct v4l2_device *v4l2_dev)
EXPORT_SYMBOL_GPL(v4l2_device_register);
static void v4l2_device_release(struct kref *ref)
int v4l2_device_put(struct v4l2_device *v4l2_dev)
EXPORT_SYMBOL_GPL(v4l2_device_put);
int v4l2_device_set_name(struct v4l2_device *v4l2_dev, const char *basename,
atomic_t *instance)
EXPORT_SYMBOL_GPL(v4l2_device_set_name);
void v4l2_device_disconnect(struct v4l2_device *v4l2_dev)
EXPORT_SYMBOL_GPL(v4l2_device_disconnect);
void v4l2_device_unregister(struct v4l2_device *v4l2_dev)
EXPORT_SYMBOL_GPL(v4l2_device_unregister);
int v4l2_device_register_subdev(struct v4l2_device *v4l2_dev,
struct v4l2_subdev *sd)
EXPORT_SYMBOL_GPL(v4l2_device_register_subdev);
int v4l2_device_register_subdev_nodes(struct v4l2_device *v4l2_dev)
EXPORT_SYMBOL_GPL(v4l2_device_register_subdev_nodes);
void v4l2_device_unregister_subdev(struct v4l2_subdev *sd)
EXPORT_SYMBOL_GPL(v4l2_device_unregister_subdev);
