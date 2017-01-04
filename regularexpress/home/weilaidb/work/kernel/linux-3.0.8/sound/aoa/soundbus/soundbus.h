#define __SOUNDBUS_H
enum clock_switch ;
struct transfer_info ;
struct codec_info_item ;
struct bus_info ;
struct codec_info ;
struct soundbus_dev ;
#define to_soundbus_device(d) container_of(d, struct soundbus_dev, ofdev.dev)
#define of_to_soundbus_device(d) container_of(d, struct soundbus_dev, ofdev)
extern int soundbus_add_one(struct soundbus_dev *dev);
extern void soundbus_remove_one(struct soundbus_dev *dev);
extern struct soundbus_dev *soundbus_dev_get(struct soundbus_dev *dev);
extern void soundbus_dev_put(struct soundbus_dev *dev);
struct soundbus_driver ;
#define to_soundbus_driver(drv) container_of(drv,struct soundbus_driver, driver)
extern int soundbus_register_driver(struct soundbus_driver *drv);
extern void soundbus_unregister_driver(struct soundbus_driver *drv);
extern struct device_attribute soundbus_dev_attrs[];
