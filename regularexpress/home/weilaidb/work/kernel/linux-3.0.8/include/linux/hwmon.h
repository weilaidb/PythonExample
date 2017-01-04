#define _HWMON_H_
struct device *hwmon_device_register(struct device *dev);
void hwmon_device_unregister(struct device *dev);
static inline int SENSORS_LIMIT(long value, long low, long high)
