#define _AD7879_H_
struct ad7879;
struct device;
struct ad7879_bus_ops ;
void ad7879_suspend(struct ad7879 *);
void ad7879_resume(struct ad7879 *);
struct ad7879 *ad7879_probe(struct device *dev, u8 devid, unsigned irq,
const struct ad7879_bus_ops *bops);
void ad7879_remove(struct ad7879 *);
