#define _ASM_EBUS_H
extern struct bus_type ibmebus_bus_type;
int ibmebus_register_driver(struct of_platform_driver *drv);
void ibmebus_unregister_driver(struct of_platform_driver *drv);
int ibmebus_request_irq(u32 ist, irq_handler_t handler,
unsigned long irq_flags, const char *devname,
void *dev_id);
void ibmebus_free_irq(u32 ist, void *dev_id);
