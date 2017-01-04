#define __LINUX_MAPLE_H
extern struct bus_type maple_bus_type;
enum maple_code ;
enum maple_file_errors ;
struct maple_buffer ;
struct mapleq ;
struct maple_devinfo ;
struct maple_device ;
struct maple_driver ;
void maple_getcond_callback(struct maple_device *dev,
void (*callback) (struct mapleq * mq),
unsigned long interval,
unsigned long function);
int maple_driver_register(struct maple_driver *);
void maple_driver_unregister(struct maple_driver *);
int maple_add_packet(struct maple_device *mdev, u32 function,
u32 command, u32 length, void *data);
void maple_clear_dev(struct maple_device *mdev);
#define to_maple_dev(n) container_of(n, struct maple_device, dev)
#define to_maple_driver(n) container_of(n, struct maple_driver, drv)
#define maple_get_drvdata(d)		dev_get_drvdata(&(d)->dev)
#define maple_set_drvdata(d,p)		dev_set_drvdata(&(d)->dev, (p))
