#define _LINUX_DISPLAY_H
struct display_device;
struct display_driver ;
struct display_device ;
extern struct display_device *display_device_register(struct display_driver *driver,
struct device *dev, void *devdata);
extern void display_device_unregister(struct display_device *dev);
extern int probe_edid(struct display_device *dev, void *devdata);
#define to_display_device(obj) container_of(obj, struct display_device, class_dev)
