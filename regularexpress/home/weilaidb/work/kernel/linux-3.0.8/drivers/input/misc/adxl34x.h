#define _ADXL34X_H_
struct device;
struct adxl34x;
struct adxl34x_bus_ops ;
void adxl34x_suspend(struct adxl34x *ac);
void adxl34x_resume(struct adxl34x *ac);
struct adxl34x *adxl34x_probe(struct device *dev, int irq,
bool fifo_delay_default,
const struct adxl34x_bus_ops *bops);
int adxl34x_remove(struct adxl34x *ac);
