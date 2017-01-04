#define _ADT7316_H_
#define ADT7316_REG_MAX_ADDR		0x3F
struct adt7316_bus ;
int adt7316_disable(struct device *dev);
int adt7316_enable(struct device *dev);
int adt7316_probe(struct device *dev, struct adt7316_bus *bus, const char *name);
int adt7316_remove(struct device *dev);
