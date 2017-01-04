#define __LINUX_SUPERHYWAY_H
#define SUPERHYWAY_DEVICE_ID_SH5_DMAC	0x0183
struct superhyway_vcr_info ;
struct superhyway_ops ;
struct superhyway_bus ;
extern struct superhyway_bus superhyway_channels[];
struct superhyway_device_id ;
struct superhyway_device;
extern struct bus_type superhyway_bus_type;
struct superhyway_driver ;
#define to_superhyway_driver(d)	container_of((d), struct superhyway_driver, drv)
struct superhyway_device ;
#define to_superhyway_device(d)	container_of((d), struct superhyway_device, dev)
#define superhyway_get_drvdata(d)	dev_get_drvdata(&(d)->dev)
#define superhyway_set_drvdata(d,p)	dev_set_drvdata(&(d)->dev, (p))
static inline int
superhyway_read_vcr(struct superhyway_device *dev, unsigned long base,
struct superhyway_vcr_info *vcr)
static inline int
superhyway_write_vcr(struct superhyway_device *dev, unsigned long base,
struct superhyway_vcr_info vcr)
extern int superhyway_scan_bus(struct superhyway_bus *);
int superhyway_register_driver(struct superhyway_driver *);
void superhyway_unregister_driver(struct superhyway_driver *);
int superhyway_add_device(unsigned long base, struct superhyway_device *, struct superhyway_bus *);
int superhyway_add_devices(struct superhyway_bus *bus, struct superhyway_device **devices, int nr_devices);
extern struct device_attribute superhyway_dev_attrs[];
