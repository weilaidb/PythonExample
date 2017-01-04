#if !defined(_PS3_VUART_H)
#define _PS3_VUART_H
struct ps3_vuart_stats ;
struct ps3_vuart_work ;
struct ps3_vuart_port_driver ;
int ps3_vuart_port_driver_register(struct ps3_vuart_port_driver *drv);
void ps3_vuart_port_driver_unregister(struct ps3_vuart_port_driver *drv);
static inline struct ps3_vuart_port_driver *
ps3_system_bus_dev_to_vuart_drv(struct ps3_system_bus_device *_dev)
static inline struct ps3_system_bus_device *ps3_vuart_work_to_system_bus_dev(
struct work_struct *_work)
int ps3_vuart_write(struct ps3_system_bus_device *dev, const void *buf,
unsigned int bytes);
int ps3_vuart_read(struct ps3_system_bus_device *dev, void *buf,
unsigned int bytes);
int ps3_vuart_read_async(struct ps3_system_bus_device *dev, unsigned int bytes);
void ps3_vuart_cancel_async(struct ps3_system_bus_device *dev);
void ps3_vuart_clear_rx_bytes(struct ps3_system_bus_device *dev,
unsigned int bytes);
