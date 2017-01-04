#define LINUX_RIO_H
#define RIO_NO_HOPCOUNT		-1
#define RIO_INVALID_DESTID	0xffff
#define RIO_MAX_MPORTS		8
#define RIO_MAX_MPORT_RESOURCES	16
#define RIO_MAX_DEV_RESOURCES	16
#define RIO_GLOBAL_TABLE	0xff
#define RIO_INVALID_ROUTE	0xff
#define RIO_MAX_ROUTE_ENTRIES(size)	(size ? (1 << 16) : (1 << 8))
#define RIO_ANY_DESTID(size)		(size ? 0xffff : 0xff)
#define RIO_MAX_MBOX		4
#define RIO_MAX_MSG_SIZE	0x1000
#define RIO_SUCCESSFUL			0x00
#define RIO_BAD_SIZE			0x81
#define RIO_DOORBELL_RESOURCE	0
#define RIO_INB_MBOX_RESOURCE	1
#define RIO_OUTB_MBOX_RESOURCE	2
#define RIO_PW_MSG_SIZE		64
#define RIO_CTAG_RESRVD	0xfffe0000
#define RIO_CTAG_UDEVID	0x0001ffff
extern struct bus_type rio_bus_type;
extern struct device rio_bus;
extern struct list_head rio_devices;
struct rio_mport;
struct rio_dev;
union rio_pw_msg;
struct rio_switch ;
struct rio_dev ;
#define rio_dev_g(n) list_entry(n, struct rio_dev, global_list)
#define rio_dev_f(n) list_entry(n, struct rio_dev, net_list)
#define	to_rio_dev(n) container_of(n, struct rio_dev, dev)
#define sw_to_rio_dev(n) container_of(n, struct rio_dev, rswitch[0])
struct rio_msg ;
struct rio_dbell ;
enum rio_phy_type ;
struct rio_mport ;
struct rio_net ;
#define RIO_SW_SYSFS_CREATE	1
#define RIO_SW_SYSFS_REMOVE	0
struct rio_ops ;
#define RIO_RESOURCE_MEM	0x00000100
#define RIO_RESOURCE_DOORBELL	0x00000200
#define RIO_RESOURCE_MAILBOX	0x00000400
#define RIO_RESOURCE_CACHEABLE	0x00010000
#define RIO_RESOURCE_PCI	0x00020000
#define RIO_RESOURCE_BUSY	0x80000000
struct rio_driver ;
#define	to_rio_driver(drv) container_of(drv,struct rio_driver, driver)
struct rio_device_id ;
struct rio_switch_ops ;
union rio_pw_msg ;
extern int rio_register_mport(struct rio_mport *);
extern int rio_open_inb_mbox(struct rio_mport *, void *, int, int);
extern void rio_close_inb_mbox(struct rio_mport *, int);
extern int rio_open_outb_mbox(struct rio_mport *, void *, int, int);
extern void rio_close_outb_mbox(struct rio_mport *, int);
