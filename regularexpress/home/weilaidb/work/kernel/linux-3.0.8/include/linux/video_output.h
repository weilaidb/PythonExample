#define _LINUX_VIDEO_OUTPUT_H
struct output_device;
struct output_properties ;
struct output_device ;
#define to_output_device(obj) container_of(obj, struct output_device, dev)
#if	defined(CONFIG_VIDEO_OUTPUT_CONTROL) || defined(CONFIG_VIDEO_OUTPUT_CONTROL_MODULE)
struct output_device *video_output_register(const char *name,
struct device *dev,
void *devdata,
struct output_properties *op);
void video_output_unregister(struct output_device *dev);
static struct output_device *video_output_register(const char *name,
struct device *dev,
void *devdata,
struct output_properties *op)
static void video_output_unregister(struct output_device *dev)
