#define _LINUX_HWMON_SYSFS_H
struct sensor_device_attribute;
#define to_sensor_dev_attr(_dev_attr) \
container_of(_dev_attr, struct sensor_device_attribute, dev_attr)
#define SENSOR_ATTR(_name, _mode, _show, _store, _index)	\
#define SENSOR_DEVICE_ATTR(_name, _mode, _show, _store, _index)	\
struct sensor_device_attribute sensor_dev_attr_##_name		\
= SENSOR_ATTR(_name, _mode, _show, _store, _index)
struct sensor_device_attribute_2 ;
#define to_sensor_dev_attr_2(_dev_attr) \
container_of(_dev_attr, struct sensor_device_attribute_2, dev_attr)
#define SENSOR_ATTR_2(_name, _mode, _show, _store, _nr, _index)	\
#define SENSOR_DEVICE_ATTR_2(_name,_mode,_show,_store,_nr,_index)	\
struct sensor_device_attribute_2 sensor_dev_attr_##_name		\
= SENSOR_ATTR_2(_name, _mode, _show, _store, _nr, _index)
