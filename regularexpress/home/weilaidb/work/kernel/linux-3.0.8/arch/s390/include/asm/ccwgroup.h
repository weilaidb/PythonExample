#define S390_CCWGROUP_H
struct ccw_device;
struct ccw_driver;
struct ccwgroup_device ;
struct ccwgroup_driver ;
extern int  ccwgroup_driver_register   (struct ccwgroup_driver *cdriver);
extern void ccwgroup_driver_unregister (struct ccwgroup_driver *cdriver);
int ccwgroup_create_from_string(struct device *root, unsigned int creator_id,
struct ccw_driver *cdrv, int num_devices,
const char *buf);
extern int ccwgroup_probe_ccwdev(struct ccw_device *cdev);
extern void ccwgroup_remove_ccwdev(struct ccw_device *cdev);
#define to_ccwgroupdev(x) container_of((x), struct ccwgroup_device, dev)
#define to_ccwgroupdrv(x) container_of((x), struct ccwgroup_driver, driver)
