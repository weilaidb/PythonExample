#define _LINUX_TC_H
#define TC_OLDCARD	0x3c0000
#define TC_NEWCARD	0x000000
#define TC_ROM_WIDTH	0x3e0
#define TC_ROM_STRIDE	0x3e4
#define TC_ROM_SIZE	0x3e8
#define TC_SLOT_SIZE	0x3ec
#define TC_PATTERN0	0x3f0
#define TC_PATTERN1	0x3f4
#define TC_PATTERN2	0x3f8
#define TC_PATTERN3	0x3fc
#define TC_FIRM_VER	0x400
#define TC_VENDOR	0x420
#define TC_MODULE	0x440
#define TC_FIRM_TYPE	0x460
#define TC_FLAGS	0x470
#define TC_ROM_OBJECTS	0x480
struct tcinfo ;
struct tc_bus ;
struct tc_dev ;
#define to_tc_dev(n) container_of(n, struct tc_dev, dev)
struct tc_device_id ;
struct tc_driver ;
#define to_tc_driver(drv) container_of(drv, struct tc_driver, driver)
static inline unsigned long tc_get_speed(struct tc_bus *tbus)
extern struct bus_type tc_bus_type;
extern int tc_register_driver(struct tc_driver *tdrv);
extern void tc_unregister_driver(struct tc_driver *tdrv);
static inline int tc_register_driver(struct tc_driver *tdrv)
static inline void tc_unregister_driver(struct tc_driver *tdrv)
extern int tc_preadb(u8 *valp, void __iomem *addr);
extern int tc_bus_get_info(struct tc_bus *tbus);
extern void tc_device_get_irq(struct tc_dev *tdev);
