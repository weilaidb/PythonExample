#define _INPUT_CMA3000_H
struct device;
struct cma3000_accl_data;
struct cma3000_bus_ops ;
struct cma3000_accl_data *cma3000_init(struct device *dev, int irq,
const struct cma3000_bus_ops *bops);
void cma3000_exit(struct cma3000_accl_data *);
void cma3000_suspend(struct cma3000_accl_data *);
void cma3000_resume(struct cma3000_accl_data *);
