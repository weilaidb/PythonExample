#define _UIO_DRIVER_H_
struct uio_map;
struct uio_mem ;
#define MAX_UIO_MAPS	5
struct uio_portio;
struct uio_port ;
#define MAX_UIO_PORT_REGIONS	5
struct uio_device;
struct uio_info ;
extern int __must_check
__uio_register_device(struct module *owner,
struct device *parent,
struct uio_info *info);
static inline int __must_check
uio_register_device(struct device *parent, struct uio_info *info)
extern void uio_unregister_device(struct uio_info *info);
extern void uio_event_notify(struct uio_info *info);
#define UIO_IRQ_CUSTOM	-1
#define UIO_IRQ_NONE	0
#define UIO_MEM_NONE	0
#define UIO_MEM_PHYS	1
#define UIO_MEM_LOGICAL	2
#define UIO_MEM_VIRTUAL 3
#define UIO_PORT_NONE	0
#define UIO_PORT_X86	1
#define UIO_PORT_GPIO	2
#define UIO_PORT_OTHER	3
