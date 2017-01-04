#define C2PORT_NAME_LEN			32
struct c2port_ops;
struct c2port_device ;
struct c2port_ops ;
extern struct c2port_device *c2port_device_register(char *name,
struct c2port_ops *ops, void *devdata);
extern void c2port_device_unregister(struct c2port_device *dev);
