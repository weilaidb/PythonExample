#define _LINUX_BACKLIGHT_H
enum backlight_update_reason ;
enum backlight_type ;
struct backlight_device;
struct fb_info;
struct backlight_ops ;
struct backlight_properties ;
struct backlight_device ;
static inline void backlight_update_status(struct backlight_device *bd)
extern struct backlight_device *backlight_device_register(const char *name,
struct device *dev, void *devdata, const struct backlight_ops *ops,
const struct backlight_properties *props);
extern void backlight_device_unregister(struct backlight_device *bd);
extern void backlight_force_update(struct backlight_device *bd,
enum backlight_update_reason reason);
#define to_backlight_device(obj) container_of(obj, struct backlight_device, dev)
static inline void * bl_get_data(struct backlight_device *bl_dev)
struct generic_bl_info ;
